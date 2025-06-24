/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AIOps
{
namespace Model
{
  class GetInvestigationGroupPolicyResult
  {
  public:
    AWS_AIOPS_API GetInvestigationGroupPolicyResult() = default;
    AWS_AIOPS_API GetInvestigationGroupPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AIOPS_API GetInvestigationGroupPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the investigation group that you want to
     * view the policy of.</p>
     */
    inline const Aws::String& GetInvestigationGroupArn() const { return m_investigationGroupArn; }
    template<typename InvestigationGroupArnT = Aws::String>
    void SetInvestigationGroupArn(InvestigationGroupArnT&& value) { m_investigationGroupArnHasBeenSet = true; m_investigationGroupArn = std::forward<InvestigationGroupArnT>(value); }
    template<typename InvestigationGroupArnT = Aws::String>
    GetInvestigationGroupPolicyResult& WithInvestigationGroupArn(InvestigationGroupArnT&& value) { SetInvestigationGroupArn(std::forward<InvestigationGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy, in JSON format.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    GetInvestigationGroupPolicyResult& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInvestigationGroupPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_investigationGroupArn;
    bool m_investigationGroupArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AIOps
} // namespace Aws
