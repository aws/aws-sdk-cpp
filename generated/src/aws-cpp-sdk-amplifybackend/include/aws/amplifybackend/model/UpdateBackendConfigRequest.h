/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/AmplifyBackendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifybackend/model/LoginAuthConfigReqObj.h>
#include <utility>

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>The request body for UpdateBackendConfig.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendConfigRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBackendConfigRequest : public AmplifyBackendRequest
  {
  public:
    AWS_AMPLIFYBACKEND_API UpdateBackendConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBackendConfig"; }

    AWS_AMPLIFYBACKEND_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline UpdateBackendConfigRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline UpdateBackendConfigRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline UpdateBackendConfigRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Amazon Cognito configuration for Admin UI access.</p>
     */
    inline const LoginAuthConfigReqObj& GetLoginAuthConfig() const{ return m_loginAuthConfig; }
    inline bool LoginAuthConfigHasBeenSet() const { return m_loginAuthConfigHasBeenSet; }
    inline void SetLoginAuthConfig(const LoginAuthConfigReqObj& value) { m_loginAuthConfigHasBeenSet = true; m_loginAuthConfig = value; }
    inline void SetLoginAuthConfig(LoginAuthConfigReqObj&& value) { m_loginAuthConfigHasBeenSet = true; m_loginAuthConfig = std::move(value); }
    inline UpdateBackendConfigRequest& WithLoginAuthConfig(const LoginAuthConfigReqObj& value) { SetLoginAuthConfig(value); return *this;}
    inline UpdateBackendConfigRequest& WithLoginAuthConfig(LoginAuthConfigReqObj&& value) { SetLoginAuthConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    LoginAuthConfigReqObj m_loginAuthConfig;
    bool m_loginAuthConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
