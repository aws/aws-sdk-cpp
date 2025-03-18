/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/Status.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{

  /**
   * <p>An object that contains details about a member account in your organization
   * that failed to activate Amazon Inspector deep inspection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FailedMemberAccountEc2DeepInspectionStatusState">AWS
   * API Reference</a></p>
   */
  class FailedMemberAccountEc2DeepInspectionStatusState
  {
  public:
    AWS_INSPECTOR2_API FailedMemberAccountEc2DeepInspectionStatusState() = default;
    AWS_INSPECTOR2_API FailedMemberAccountEc2DeepInspectionStatusState(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FailedMemberAccountEc2DeepInspectionStatusState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Amazon Web Services account of the organization
     * member that failed to activate Amazon Inspector deep inspection.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    FailedMemberAccountEc2DeepInspectionStatusState& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of EC2 scanning in the account that failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline Status GetEc2ScanStatus() const { return m_ec2ScanStatus; }
    inline bool Ec2ScanStatusHasBeenSet() const { return m_ec2ScanStatusHasBeenSet; }
    inline void SetEc2ScanStatus(Status value) { m_ec2ScanStatusHasBeenSet = true; m_ec2ScanStatus = value; }
    inline FailedMemberAccountEc2DeepInspectionStatusState& WithEc2ScanStatus(Status value) { SetEc2ScanStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message explaining why the account failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    FailedMemberAccountEc2DeepInspectionStatusState& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Status m_ec2ScanStatus{Status::NOT_SET};
    bool m_ec2ScanStatusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
