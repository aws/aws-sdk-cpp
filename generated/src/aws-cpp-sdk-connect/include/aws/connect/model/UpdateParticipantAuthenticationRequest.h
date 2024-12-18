/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateParticipantAuthenticationRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateParticipantAuthenticationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateParticipantAuthentication"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>state</code> query parameter that was provided by Cognito in the
     * <code>redirectUri</code>. This will also match the <code>state</code> parameter
     * provided in the <code>AuthenticationUrl</code> from the <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_GetAuthenticationUrl.html">GetAuthenticationUrl</a>
     * response.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline UpdateParticipantAuthenticationRequest& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline UpdateParticipantAuthenticationRequest& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline UpdateParticipantAuthenticationRequest& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateParticipantAuthenticationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateParticipantAuthenticationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateParticipantAuthenticationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>code</code> query parameter provided by Cognito in the
     * <code>redirectUri</code>.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline UpdateParticipantAuthenticationRequest& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline UpdateParticipantAuthenticationRequest& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline UpdateParticipantAuthenticationRequest& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>error</code> query parameter provided by Cognito in the
     * <code>redirectUri</code>.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline UpdateParticipantAuthenticationRequest& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline UpdateParticipantAuthenticationRequest& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline UpdateParticipantAuthenticationRequest& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>error_description</code> parameter provided by Cognito in the
     * <code>redirectUri</code>.</p>
     */
    inline const Aws::String& GetErrorDescription() const{ return m_errorDescription; }
    inline bool ErrorDescriptionHasBeenSet() const { return m_errorDescriptionHasBeenSet; }
    inline void SetErrorDescription(const Aws::String& value) { m_errorDescriptionHasBeenSet = true; m_errorDescription = value; }
    inline void SetErrorDescription(Aws::String&& value) { m_errorDescriptionHasBeenSet = true; m_errorDescription = std::move(value); }
    inline void SetErrorDescription(const char* value) { m_errorDescriptionHasBeenSet = true; m_errorDescription.assign(value); }
    inline UpdateParticipantAuthenticationRequest& WithErrorDescription(const Aws::String& value) { SetErrorDescription(value); return *this;}
    inline UpdateParticipantAuthenticationRequest& WithErrorDescription(Aws::String&& value) { SetErrorDescription(std::move(value)); return *this;}
    inline UpdateParticipantAuthenticationRequest& WithErrorDescription(const char* value) { SetErrorDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_errorDescription;
    bool m_errorDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
