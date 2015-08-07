
/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  *
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  *
  *  http://aws.amazon.com/apache2.0
  *
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#pragma once

#include <aws/transfer/Transfer_EXPORTS.h>

#include <aws/transfer/resource/ResourceManagerInterface.h>

namespace Aws
{
namespace Transfer
{

template< typename T >
class ScopedResourceSet
{
    public:

        ScopedResourceSet(uint32_t resourceCount, const std::shared_ptr< ResourceManagerInterface< T > >& resourceManager);
        ~ScopedResourceSet();

        void TryReacquire();

        const typename ResourceManagerInterface< T >::ResourceListType& GetResources() const { return m_resources; }
        
    private:

        uint32_t m_desiredResourceCount;

        typename ResourceManagerInterface< T >::ResourceListType m_resources;

        std::shared_ptr< ResourceManagerInterface< T > > m_resourceOwner;
};

template< typename T >
ScopedResourceSet< T >::ScopedResourceSet(uint32_t resourceCount, const std::shared_ptr< ResourceManagerInterface< T > >& resourceManager) :
    m_desiredResourceCount(resourceCount),
    m_resources(),
    m_resourceOwner(resourceManager) 
{
    m_resourceOwner->AcquireResources(m_desiredResourceCount, m_resources);
}

template< typename T >
ScopedResourceSet< T >::~ScopedResourceSet()
{
    m_resourceOwner->ReleaseResources(m_resources);
}

template< typename T >
void ScopedResourceSet< T >::TryReacquire()
{
    if(m_desiredResourceCount > m_resources.size())
    {
        m_resourceOwner->TryAcquireResources(m_desiredResourceCount, m_resources);
    }
}

} // namespace Transfer
} // namespace Aws
