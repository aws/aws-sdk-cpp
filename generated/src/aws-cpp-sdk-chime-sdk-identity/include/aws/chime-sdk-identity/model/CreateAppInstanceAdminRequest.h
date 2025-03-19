/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   */
  class CreateAppInstanceAdminRequest : public ChimeSDKIdentityRequest
  {
  public:
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceAdminRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAppInstanceAdmin"; }

    AWS_CHIMESDKIDENTITY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the administrator of the current <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceAdminArn() const { return m_appInstanceAdminArn; }
    inline bool AppInstanceAdminArnHasBeenSet() const { return m_appInstanceAdminArnHasBeenSet; }
    template<typename AppInstanceAdminArnT = Aws::String>
    void SetAppInstanceAdminArn(AppInstanceAdminArnT&& value) { m_appInstanceAdminArnHasBeenSet = true; m_appInstanceAdminArn = std::forward<AppInstanceAdminArnT>(value); }
    template<typename AppInstanceAdminArnT = Aws::String>
    CreateAppInstanceAdminRequest& WithAppInstanceAdminArn(AppInstanceAdminArnT&& value) { SetAppInstanceAdminArn(std::forward<AppInstanceAdminArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const { return m_appInstanceArn; }
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }
    template<typename AppInstanceArnT = Aws::String>
    void SetAppInstanceArn(AppInstanceArnT&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::forward<AppInstanceArnT>(value); }
    template<typename AppInstanceArnT = Aws::String>
    CreateAppInstanceAdminRequest& WithAppInstanceArn(AppInstanceArnT&& value) { SetAppInstanceArn(std::forward<AppInstanceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceAdminArn;
    bool m_appInstanceAdminArnHasBeenSet = false;

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
