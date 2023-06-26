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
    AWS_CHIMESDKIDENTITY_API DeleteAppInstanceBotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAppInstanceBot"; }

    AWS_CHIMESDKIDENTITY_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the <code>AppInstanceBot</code> being deleted.</p>
     */
    inline const Aws::String& GetAppInstanceBotArn() const{ return m_appInstanceBotArn; }

    /**
     * <p>The ARN of the <code>AppInstanceBot</code> being deleted.</p>
     */
    inline bool AppInstanceBotArnHasBeenSet() const { return m_appInstanceBotArnHasBeenSet; }

    /**
     * <p>The ARN of the <code>AppInstanceBot</code> being deleted.</p>
     */
    inline void SetAppInstanceBotArn(const Aws::String& value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn = value; }

    /**
     * <p>The ARN of the <code>AppInstanceBot</code> being deleted.</p>
     */
    inline void SetAppInstanceBotArn(Aws::String&& value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn = std::move(value); }

    /**
     * <p>The ARN of the <code>AppInstanceBot</code> being deleted.</p>
     */
    inline void SetAppInstanceBotArn(const char* value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn.assign(value); }

    /**
     * <p>The ARN of the <code>AppInstanceBot</code> being deleted.</p>
     */
    inline DeleteAppInstanceBotRequest& WithAppInstanceBotArn(const Aws::String& value) { SetAppInstanceBotArn(value); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceBot</code> being deleted.</p>
     */
    inline DeleteAppInstanceBotRequest& WithAppInstanceBotArn(Aws::String&& value) { SetAppInstanceBotArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceBot</code> being deleted.</p>
     */
    inline DeleteAppInstanceBotRequest& WithAppInstanceBotArn(const char* value) { SetAppInstanceBotArn(value); return *this;}

  private:

    Aws::String m_appInstanceBotArn;
    bool m_appInstanceBotArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
