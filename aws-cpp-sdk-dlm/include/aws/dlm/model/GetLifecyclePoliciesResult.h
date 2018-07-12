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
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/model/LifecyclePolicySummary.h>
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
namespace DLM
{
namespace Model
{
  class AWS_DLM_API GetLifecyclePoliciesResult
  {
  public:
    GetLifecyclePoliciesResult();
    GetLifecyclePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetLifecyclePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about the lifecycle policies.</p>
     */
    inline const Aws::Vector<LifecyclePolicySummary>& GetPolicies() const{ return m_policies; }

    /**
     * <p>Summary information about the lifecycle policies.</p>
     */
    inline void SetPolicies(const Aws::Vector<LifecyclePolicySummary>& value) { m_policies = value; }

    /**
     * <p>Summary information about the lifecycle policies.</p>
     */
    inline void SetPolicies(Aws::Vector<LifecyclePolicySummary>&& value) { m_policies = std::move(value); }

    /**
     * <p>Summary information about the lifecycle policies.</p>
     */
    inline GetLifecyclePoliciesResult& WithPolicies(const Aws::Vector<LifecyclePolicySummary>& value) { SetPolicies(value); return *this;}

    /**
     * <p>Summary information about the lifecycle policies.</p>
     */
    inline GetLifecyclePoliciesResult& WithPolicies(Aws::Vector<LifecyclePolicySummary>&& value) { SetPolicies(std::move(value)); return *this;}

    /**
     * <p>Summary information about the lifecycle policies.</p>
     */
    inline GetLifecyclePoliciesResult& AddPolicies(const LifecyclePolicySummary& value) { m_policies.push_back(value); return *this; }

    /**
     * <p>Summary information about the lifecycle policies.</p>
     */
    inline GetLifecyclePoliciesResult& AddPolicies(LifecyclePolicySummary&& value) { m_policies.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LifecyclePolicySummary> m_policies;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
