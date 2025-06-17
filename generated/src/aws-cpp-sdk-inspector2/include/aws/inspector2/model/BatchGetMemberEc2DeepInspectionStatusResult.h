/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/MemberAccountEc2DeepInspectionStatusState.h>
#include <aws/inspector2/model/FailedMemberAccountEc2DeepInspectionStatusState.h>
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
namespace Inspector2
{
namespace Model
{
  class BatchGetMemberEc2DeepInspectionStatusResult
  {
  public:
    AWS_INSPECTOR2_API BatchGetMemberEc2DeepInspectionStatusResult() = default;
    AWS_INSPECTOR2_API BatchGetMemberEc2DeepInspectionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API BatchGetMemberEc2DeepInspectionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that provide details on the activation status of Amazon
     * Inspector deep inspection for each of the requested accounts. </p>
     */
    inline const Aws::Vector<MemberAccountEc2DeepInspectionStatusState>& GetAccountIds() const { return m_accountIds; }
    template<typename AccountIdsT = Aws::Vector<MemberAccountEc2DeepInspectionStatusState>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<MemberAccountEc2DeepInspectionStatusState>>
    BatchGetMemberEc2DeepInspectionStatusResult& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = MemberAccountEc2DeepInspectionStatusState>
    BatchGetMemberEc2DeepInspectionStatusResult& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that provide details on any accounts that failed to
     * activate Amazon Inspector deep inspection and why. </p>
     */
    inline const Aws::Vector<FailedMemberAccountEc2DeepInspectionStatusState>& GetFailedAccountIds() const { return m_failedAccountIds; }
    template<typename FailedAccountIdsT = Aws::Vector<FailedMemberAccountEc2DeepInspectionStatusState>>
    void SetFailedAccountIds(FailedAccountIdsT&& value) { m_failedAccountIdsHasBeenSet = true; m_failedAccountIds = std::forward<FailedAccountIdsT>(value); }
    template<typename FailedAccountIdsT = Aws::Vector<FailedMemberAccountEc2DeepInspectionStatusState>>
    BatchGetMemberEc2DeepInspectionStatusResult& WithFailedAccountIds(FailedAccountIdsT&& value) { SetFailedAccountIds(std::forward<FailedAccountIdsT>(value)); return *this;}
    template<typename FailedAccountIdsT = FailedMemberAccountEc2DeepInspectionStatusState>
    BatchGetMemberEc2DeepInspectionStatusResult& AddFailedAccountIds(FailedAccountIdsT&& value) { m_failedAccountIdsHasBeenSet = true; m_failedAccountIds.emplace_back(std::forward<FailedAccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetMemberEc2DeepInspectionStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MemberAccountEc2DeepInspectionStatusState> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<FailedMemberAccountEc2DeepInspectionStatusState> m_failedAccountIds;
    bool m_failedAccountIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
