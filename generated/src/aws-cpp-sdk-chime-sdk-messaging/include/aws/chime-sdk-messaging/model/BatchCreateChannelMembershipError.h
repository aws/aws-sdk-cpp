/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ErrorCode.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>A list of failed member ARNs, error codes, and error messages.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/BatchCreateChannelMembershipError">AWS
   * API Reference</a></p>
   */
  class BatchCreateChannelMembershipError
  {
  public:
    AWS_CHIMESDKMESSAGING_API BatchCreateChannelMembershipError();
    AWS_CHIMESDKMESSAGING_API BatchCreateChannelMembershipError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API BatchCreateChannelMembershipError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>AppInstanceUserArn</code> of the member that the service couldn't
     * add.</p>
     */
    inline const Aws::String& GetMemberArn() const{ return m_memberArn; }
    inline bool MemberArnHasBeenSet() const { return m_memberArnHasBeenSet; }
    inline void SetMemberArn(const Aws::String& value) { m_memberArnHasBeenSet = true; m_memberArn = value; }
    inline void SetMemberArn(Aws::String&& value) { m_memberArnHasBeenSet = true; m_memberArn = std::move(value); }
    inline void SetMemberArn(const char* value) { m_memberArnHasBeenSet = true; m_memberArn.assign(value); }
    inline BatchCreateChannelMembershipError& WithMemberArn(const Aws::String& value) { SetMemberArn(value); return *this;}
    inline BatchCreateChannelMembershipError& WithMemberArn(Aws::String&& value) { SetMemberArn(std::move(value)); return *this;}
    inline BatchCreateChannelMembershipError& WithMemberArn(const char* value) { SetMemberArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline BatchCreateChannelMembershipError& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}
    inline BatchCreateChannelMembershipError& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline BatchCreateChannelMembershipError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline BatchCreateChannelMembershipError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline BatchCreateChannelMembershipError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_memberArn;
    bool m_memberArnHasBeenSet = false;

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
