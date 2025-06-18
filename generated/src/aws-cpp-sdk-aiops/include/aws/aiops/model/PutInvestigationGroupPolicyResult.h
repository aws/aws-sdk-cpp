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
  class PutInvestigationGroupPolicyResult
  {
  public:
    AWS_AIOPS_API PutInvestigationGroupPolicyResult() = default;
    AWS_AIOPS_API PutInvestigationGroupPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AIOPS_API PutInvestigationGroupPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the investigation group that will use this policy.</p>
     */
    inline const Aws::String& GetInvestigationGroupArn() const { return m_investigationGroupArn; }
    template<typename InvestigationGroupArnT = Aws::String>
    void SetInvestigationGroupArn(InvestigationGroupArnT&& value) { m_investigationGroupArnHasBeenSet = true; m_investigationGroupArn = std::forward<InvestigationGroupArnT>(value); }
    template<typename InvestigationGroupArnT = Aws::String>
    PutInvestigationGroupPolicyResult& WithInvestigationGroupArn(InvestigationGroupArnT&& value) { SetInvestigationGroupArn(std::forward<InvestigationGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutInvestigationGroupPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_investigationGroupArn;
    bool m_investigationGroupArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AIOps
} // namespace Aws
