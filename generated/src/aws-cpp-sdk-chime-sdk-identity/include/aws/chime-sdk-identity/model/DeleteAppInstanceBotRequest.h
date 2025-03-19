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
  class DeleteAppInstanceBotRequest : public ChimeSDKIdentityRequest
  {
  public:
    AWS_CHIMESDKIDENTITY_API DeleteAppInstanceBotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAppInstanceBot"; }

    AWS_CHIMESDKIDENTITY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceBot</code> being deleted.</p>
     */
    inline const Aws::String& GetAppInstanceBotArn() const { return m_appInstanceBotArn; }
    inline bool AppInstanceBotArnHasBeenSet() const { return m_appInstanceBotArnHasBeenSet; }
    template<typename AppInstanceBotArnT = Aws::String>
    void SetAppInstanceBotArn(AppInstanceBotArnT&& value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn = std::forward<AppInstanceBotArnT>(value); }
    template<typename AppInstanceBotArnT = Aws::String>
    DeleteAppInstanceBotRequest& WithAppInstanceBotArn(AppInstanceBotArnT&& value) { SetAppInstanceBotArn(std::forward<AppInstanceBotArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceBotArn;
    bool m_appInstanceBotArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
