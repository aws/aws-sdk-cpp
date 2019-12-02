/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/schemas/model/DiscovererSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Schemas
{
namespace Model
{
  class AWS_SCHEMAS_API LockServiceLinkedRoleResult
  {
  public:
    LockServiceLinkedRoleResult();
    LockServiceLinkedRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    LockServiceLinkedRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline bool GetCanBeDeleted() const{ return m_canBeDeleted; }

    
    inline void SetCanBeDeleted(bool value) { m_canBeDeleted = value; }

    
    inline LockServiceLinkedRoleResult& WithCanBeDeleted(bool value) { SetCanBeDeleted(value); return *this;}


    
    inline const Aws::String& GetReasonOfFailure() const{ return m_reasonOfFailure; }

    
    inline void SetReasonOfFailure(const Aws::String& value) { m_reasonOfFailure = value; }

    
    inline void SetReasonOfFailure(Aws::String&& value) { m_reasonOfFailure = std::move(value); }

    
    inline void SetReasonOfFailure(const char* value) { m_reasonOfFailure.assign(value); }

    
    inline LockServiceLinkedRoleResult& WithReasonOfFailure(const Aws::String& value) { SetReasonOfFailure(value); return *this;}

    
    inline LockServiceLinkedRoleResult& WithReasonOfFailure(Aws::String&& value) { SetReasonOfFailure(std::move(value)); return *this;}

    
    inline LockServiceLinkedRoleResult& WithReasonOfFailure(const char* value) { SetReasonOfFailure(value); return *this;}


    
    inline const Aws::Vector<DiscovererSummary>& GetRelatedResources() const{ return m_relatedResources; }

    
    inline void SetRelatedResources(const Aws::Vector<DiscovererSummary>& value) { m_relatedResources = value; }

    
    inline void SetRelatedResources(Aws::Vector<DiscovererSummary>&& value) { m_relatedResources = std::move(value); }

    
    inline LockServiceLinkedRoleResult& WithRelatedResources(const Aws::Vector<DiscovererSummary>& value) { SetRelatedResources(value); return *this;}

    
    inline LockServiceLinkedRoleResult& WithRelatedResources(Aws::Vector<DiscovererSummary>&& value) { SetRelatedResources(std::move(value)); return *this;}

    
    inline LockServiceLinkedRoleResult& AddRelatedResources(const DiscovererSummary& value) { m_relatedResources.push_back(value); return *this; }

    
    inline LockServiceLinkedRoleResult& AddRelatedResources(DiscovererSummary&& value) { m_relatedResources.push_back(std::move(value)); return *this; }

  private:

    bool m_canBeDeleted;

    Aws::String m_reasonOfFailure;

    Aws::Vector<DiscovererSummary> m_relatedResources;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
