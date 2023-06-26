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
    AWS_INSPECTOR2_API FailedMemberAccountEc2DeepInspectionStatusState();
    AWS_INSPECTOR2_API FailedMemberAccountEc2DeepInspectionStatusState(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FailedMemberAccountEc2DeepInspectionStatusState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the Amazon Web Services account of the organization
     * member that failed to activate Amazon Inspector deep inspection.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique identifier for the Amazon Web Services account of the organization
     * member that failed to activate Amazon Inspector deep inspection.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Amazon Web Services account of the organization
     * member that failed to activate Amazon Inspector deep inspection.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique identifier for the Amazon Web Services account of the organization
     * member that failed to activate Amazon Inspector deep inspection.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account of the organization
     * member that failed to activate Amazon Inspector deep inspection.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account of the organization
     * member that failed to activate Amazon Inspector deep inspection.</p>
     */
    inline FailedMemberAccountEc2DeepInspectionStatusState& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account of the organization
     * member that failed to activate Amazon Inspector deep inspection.</p>
     */
    inline FailedMemberAccountEc2DeepInspectionStatusState& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account of the organization
     * member that failed to activate Amazon Inspector deep inspection.</p>
     */
    inline FailedMemberAccountEc2DeepInspectionStatusState& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The status of EC2 scanning in the account that failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline const Status& GetEc2ScanStatus() const{ return m_ec2ScanStatus; }

    /**
     * <p>The status of EC2 scanning in the account that failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline bool Ec2ScanStatusHasBeenSet() const { return m_ec2ScanStatusHasBeenSet; }

    /**
     * <p>The status of EC2 scanning in the account that failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline void SetEc2ScanStatus(const Status& value) { m_ec2ScanStatusHasBeenSet = true; m_ec2ScanStatus = value; }

    /**
     * <p>The status of EC2 scanning in the account that failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline void SetEc2ScanStatus(Status&& value) { m_ec2ScanStatusHasBeenSet = true; m_ec2ScanStatus = std::move(value); }

    /**
     * <p>The status of EC2 scanning in the account that failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline FailedMemberAccountEc2DeepInspectionStatusState& WithEc2ScanStatus(const Status& value) { SetEc2ScanStatus(value); return *this;}

    /**
     * <p>The status of EC2 scanning in the account that failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline FailedMemberAccountEc2DeepInspectionStatusState& WithEc2ScanStatus(Status&& value) { SetEc2ScanStatus(std::move(value)); return *this;}


    /**
     * <p>The error message explaining why the account failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message explaining why the account failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message explaining why the account failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message explaining why the account failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message explaining why the account failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message explaining why the account failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline FailedMemberAccountEc2DeepInspectionStatusState& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message explaining why the account failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline FailedMemberAccountEc2DeepInspectionStatusState& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message explaining why the account failed to activate Amazon
     * Inspector deep inspection.</p>
     */
    inline FailedMemberAccountEc2DeepInspectionStatusState& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Status m_ec2ScanStatus;
    bool m_ec2ScanStatusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
