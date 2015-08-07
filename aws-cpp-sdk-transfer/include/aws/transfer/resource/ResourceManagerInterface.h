
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

#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Transfer
{

template< typename T >
class ResourceManagerInterface
{
  public:

    using ResourceListType = Aws::Vector< T >;

    virtual ~ResourceManagerInterface() {}

    // Waits for at least one buffer, possibly all depending on acquisition policy
    virtual void AcquireResources(uint32_t resourceCount, ResourceListType& acquiredResources) = 0;

    // Blocks on overall mutex only; if after lock, no available buffers, it just returns
    virtual void TryAcquireResources(uint32_t resourceCount, ResourceListType& acquiredResources) = 0;

    virtual void ReleaseResources(ResourceListType& acquiredResources) = 0;

    virtual void AdjustResourceCount(uint32_t m_resourceCount) = 0;

};

} // namespace Transfer
} // namespace Aws
