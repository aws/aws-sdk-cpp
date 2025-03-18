/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/PolicyComplianceDetail.h>
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
namespace FMS
{
namespace Model
{
  class GetComplianceDetailResult
  {
  public:
    AWS_FMS_API GetComplianceDetailResult() = default;
    AWS_FMS_API GetComplianceDetailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetComplianceDetailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the resources and the policy that you specified in the
     * <code>GetComplianceDetail</code> request.</p>
     */
    inline const PolicyComplianceDetail& GetPolicyComplianceDetail() const { return m_policyComplianceDetail; }
    template<typename PolicyComplianceDetailT = PolicyComplianceDetail>
    void SetPolicyComplianceDetail(PolicyComplianceDetailT&& value) { m_policyComplianceDetailHasBeenSet = true; m_policyComplianceDetail = std::forward<PolicyComplianceDetailT>(value); }
    template<typename PolicyComplianceDetailT = PolicyComplianceDetail>
    GetComplianceDetailResult& WithPolicyComplianceDetail(PolicyComplianceDetailT&& value) { SetPolicyComplianceDetail(std::forward<PolicyComplianceDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetComplianceDetailResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PolicyComplianceDetail m_policyComplianceDetail;
    bool m_policyComplianceDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
