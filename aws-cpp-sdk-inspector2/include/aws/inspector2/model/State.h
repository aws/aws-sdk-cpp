/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ErrorCode.h>
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
   * <p>An object that described the state of Amazon Inspector scans for an
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/State">AWS
   * API Reference</a></p>
   */
  class State
  {
  public:
    AWS_INSPECTOR2_API State();
    AWS_INSPECTOR2_API State(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API State& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline State& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code explaining why the account failed to enable Amazon
     * Inspector.</p>
     */
    inline State& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


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
    inline State& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message received when the account failed to enable Amazon
     * Inspector.</p>
     */
    inline State& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message received when the account failed to enable Amazon
     * Inspector.</p>
     */
    inline State& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


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
    inline State& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of Amazon Inspector for the account.</p>
     */
    inline State& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
