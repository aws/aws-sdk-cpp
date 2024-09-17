/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class DeleteAddonSubscriptionRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API DeleteAddonSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAddonSubscription"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Add On subscription ID to delete.</p>
     */
    inline const Aws::String& GetAddonSubscriptionId() const{ return m_addonSubscriptionId; }
    inline bool AddonSubscriptionIdHasBeenSet() const { return m_addonSubscriptionIdHasBeenSet; }
    inline void SetAddonSubscriptionId(const Aws::String& value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId = value; }
    inline void SetAddonSubscriptionId(Aws::String&& value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId = std::move(value); }
    inline void SetAddonSubscriptionId(const char* value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId.assign(value); }
    inline DeleteAddonSubscriptionRequest& WithAddonSubscriptionId(const Aws::String& value) { SetAddonSubscriptionId(value); return *this;}
    inline DeleteAddonSubscriptionRequest& WithAddonSubscriptionId(Aws::String&& value) { SetAddonSubscriptionId(std::move(value)); return *this;}
    inline DeleteAddonSubscriptionRequest& WithAddonSubscriptionId(const char* value) { SetAddonSubscriptionId(value); return *this;}
    ///@}
  private:

    Aws::String m_addonSubscriptionId;
    bool m_addonSubscriptionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
