/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>The list of errors returned when errors are encountered during the
   * BatchCreateAttendee and CreateAttendee actions. This includes external user IDs,
   * error codes, and error messages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/CreateAttendeeError">AWS
   * API Reference</a></p>
   */
  class CreateAttendeeError
  {
  public:
    AWS_CHIMESDKMEETINGS_API CreateAttendeeError() = default;
    AWS_CHIMESDKMEETINGS_API CreateAttendeeError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API CreateAttendeeError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p> <p>Pattern:
     * <code>[-_&amp;@+=,(){}\[\]\/«».:|'"#a-zA-Z0-9À-ÿ\s]*</code> </p> <p>Values that
     * begin with <code>aws:</code> are reserved. You can't configure a value that uses
     * this prefix. Case insensitive.</p>
     */
    inline const Aws::String& GetExternalUserId() const { return m_externalUserId; }
    inline bool ExternalUserIdHasBeenSet() const { return m_externalUserIdHasBeenSet; }
    template<typename ExternalUserIdT = Aws::String>
    void SetExternalUserId(ExternalUserIdT&& value) { m_externalUserIdHasBeenSet = true; m_externalUserId = std::forward<ExternalUserIdT>(value); }
    template<typename ExternalUserIdT = Aws::String>
    CreateAttendeeError& WithExternalUserId(ExternalUserIdT&& value) { SetExternalUserId(std::forward<ExternalUserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    CreateAttendeeError& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    CreateAttendeeError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_externalUserId;
    bool m_externalUserIdHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
