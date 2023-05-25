/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/ErrorCode.h>
#include <aws/inspector2/model/ResourceStatus.h>
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
   * <p>An object with details on why an account failed to enable Amazon
   * Inspector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FailedAccount">AWS
   * API Reference</a></p>
   */
  class FailedAccount
  {
  public:
    AWS_INSPECTOR2_API FailedAccount();
    AWS_INSPECTOR2_API FailedAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FailedAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline FailedAccount& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline FailedAccount& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline FailedAccount& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The error code explaining why the account failed to enable Amazon
     * Inspector.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code explaining why the account failed to enable Amazon
     * Inspector.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code explaining why the account failed to enable Amazon
     * Inspector.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code explaining why the account failed to enable Amazon
     * Inspector.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code explaining why the account failed to enable Amazon
     * Inspector.</p>
     */
    inline FailedAccount& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code explaining why the account failed to enable Amazon
     * Inspector.</p>
     */
    inline FailedAccount& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The error message received when the account failed to enable Amazon
     * Inspector.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message received when the account failed to enable Amazon
     * Inspector.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message received when the account failed to enable Amazon
     * Inspector.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message received when the account failed to enable Amazon
     * Inspector.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message received when the account failed to enable Amazon
     * Inspector.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message received when the account failed to enable Amazon
     * Inspector.</p>
     */
    inline FailedAccount& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message received when the account failed to enable Amazon
     * Inspector.</p>
     */
    inline FailedAccount& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message received when the account failed to enable Amazon
     * Inspector.</p>
     */
    inline FailedAccount& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>An object detailing which resources Amazon Inspector is enabled to scan for
     * the account.</p>
     */
    inline const ResourceStatus& GetResourceStatus() const{ return m_resourceStatus; }

    /**
     * <p>An object detailing which resources Amazon Inspector is enabled to scan for
     * the account.</p>
     */
    inline bool ResourceStatusHasBeenSet() const { return m_resourceStatusHasBeenSet; }

    /**
     * <p>An object detailing which resources Amazon Inspector is enabled to scan for
     * the account.</p>
     */
    inline void SetResourceStatus(const ResourceStatus& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = value; }

    /**
     * <p>An object detailing which resources Amazon Inspector is enabled to scan for
     * the account.</p>
     */
    inline void SetResourceStatus(ResourceStatus&& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = std::move(value); }

    /**
     * <p>An object detailing which resources Amazon Inspector is enabled to scan for
     * the account.</p>
     */
    inline FailedAccount& WithResourceStatus(const ResourceStatus& value) { SetResourceStatus(value); return *this;}

    /**
     * <p>An object detailing which resources Amazon Inspector is enabled to scan for
     * the account.</p>
     */
    inline FailedAccount& WithResourceStatus(ResourceStatus&& value) { SetResourceStatus(std::move(value)); return *this;}


    /**
     * <p>The status of Amazon Inspector for the account.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of Amazon Inspector for the account.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of Amazon Inspector for the account.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of Amazon Inspector for the account.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of Amazon Inspector for the account.</p>
     */
    inline FailedAccount& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of Amazon Inspector for the account.</p>
     */
    inline FailedAccount& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    ResourceStatus m_resourceStatus;
    bool m_resourceStatusHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
