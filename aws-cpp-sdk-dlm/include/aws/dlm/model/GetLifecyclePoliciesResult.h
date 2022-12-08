/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetLifecyclePoliciesResult
  {
  public:
    AWS_DLM_API GetLifecyclePoliciesResult();
    AWS_DLM_API GetLifecyclePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DLM_API GetLifecyclePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
