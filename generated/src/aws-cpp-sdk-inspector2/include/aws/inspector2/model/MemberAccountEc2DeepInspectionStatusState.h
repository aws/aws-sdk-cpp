/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/Ec2DeepInspectionStatus.h>
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
   * <p>An object that contains details about the state of Amazon Inspector deep
   * inspection for a member account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/MemberAccountEc2DeepInspectionStatusState">AWS
   * API Reference</a></p>
   */
  class MemberAccountEc2DeepInspectionStatusState
  {
  public:
    AWS_INSPECTOR2_API MemberAccountEc2DeepInspectionStatusState();
    AWS_INSPECTOR2_API MemberAccountEc2DeepInspectionStatusState(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API MemberAccountEc2DeepInspectionStatusState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Amazon Web Services account of the organization
     * member</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline MemberAccountEc2DeepInspectionStatusState& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline MemberAccountEc2DeepInspectionStatusState& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline MemberAccountEc2DeepInspectionStatusState& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message explaining why the account failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline MemberAccountEc2DeepInspectionStatusState& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline MemberAccountEc2DeepInspectionStatusState& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline MemberAccountEc2DeepInspectionStatusState& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of Amazon Inspector deep inspection in the member account.</p>
     */
    inline const Ec2DeepInspectionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Ec2DeepInspectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Ec2DeepInspectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline MemberAccountEc2DeepInspectionStatusState& WithStatus(const Ec2DeepInspectionStatus& value) { SetStatus(value); return *this;}
    inline MemberAccountEc2DeepInspectionStatusState& WithStatus(Ec2DeepInspectionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Ec2DeepInspectionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
