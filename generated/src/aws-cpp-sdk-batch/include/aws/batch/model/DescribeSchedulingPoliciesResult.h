/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/SchedulingPolicyDetail.h>
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
namespace Batch
{
namespace Model
{
  class DescribeSchedulingPoliciesResult
  {
  public:
    AWS_BATCH_API DescribeSchedulingPoliciesResult() = default;
    AWS_BATCH_API DescribeSchedulingPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API DescribeSchedulingPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of scheduling policies.</p>
     */
    inline const Aws::Vector<SchedulingPolicyDetail>& GetSchedulingPolicies() const { return m_schedulingPolicies; }
    template<typename SchedulingPoliciesT = Aws::Vector<SchedulingPolicyDetail>>
    void SetSchedulingPolicies(SchedulingPoliciesT&& value) { m_schedulingPoliciesHasBeenSet = true; m_schedulingPolicies = std::forward<SchedulingPoliciesT>(value); }
    template<typename SchedulingPoliciesT = Aws::Vector<SchedulingPolicyDetail>>
    DescribeSchedulingPoliciesResult& WithSchedulingPolicies(SchedulingPoliciesT&& value) { SetSchedulingPolicies(std::forward<SchedulingPoliciesT>(value)); return *this;}
    template<typename SchedulingPoliciesT = SchedulingPolicyDetail>
    DescribeSchedulingPoliciesResult& AddSchedulingPolicies(SchedulingPoliciesT&& value) { m_schedulingPoliciesHasBeenSet = true; m_schedulingPolicies.emplace_back(std::forward<SchedulingPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSchedulingPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SchedulingPolicyDetail> m_schedulingPolicies;
    bool m_schedulingPoliciesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
