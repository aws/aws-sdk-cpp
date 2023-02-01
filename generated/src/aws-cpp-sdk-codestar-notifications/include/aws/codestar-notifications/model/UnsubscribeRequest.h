/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/codestar-notifications/CodeStarNotificationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStarNotifications
{
namespace Model
{

  /**
   */
  class UnsubscribeRequest : public CodeStarNotificationsRequest
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API UnsubscribeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Unsubscribe"; }

    AWS_CODESTARNOTIFICATIONS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline UnsubscribeRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline UnsubscribeRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline UnsubscribeRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ARN of the Chatbot topic to unsubscribe from the notification rule.</p>
     */
    inline const Aws::String& GetTargetAddress() const{ return m_targetAddress; }

    /**
     * <p>The ARN of the Chatbot topic to unsubscribe from the notification rule.</p>
     */
    inline bool TargetAddressHasBeenSet() const { return m_targetAddressHasBeenSet; }

    /**
     * <p>The ARN of the Chatbot topic to unsubscribe from the notification rule.</p>
     */
    inline void SetTargetAddress(const Aws::String& value) { m_targetAddressHasBeenSet = true; m_targetAddress = value; }

    /**
     * <p>The ARN of the Chatbot topic to unsubscribe from the notification rule.</p>
     */
    inline void SetTargetAddress(Aws::String&& value) { m_targetAddressHasBeenSet = true; m_targetAddress = std::move(value); }

    /**
     * <p>The ARN of the Chatbot topic to unsubscribe from the notification rule.</p>
     */
    inline void SetTargetAddress(const char* value) { m_targetAddressHasBeenSet = true; m_targetAddress.assign(value); }

    /**
     * <p>The ARN of the Chatbot topic to unsubscribe from the notification rule.</p>
     */
    inline UnsubscribeRequest& WithTargetAddress(const Aws::String& value) { SetTargetAddress(value); return *this;}

    /**
     * <p>The ARN of the Chatbot topic to unsubscribe from the notification rule.</p>
     */
    inline UnsubscribeRequest& WithTargetAddress(Aws::String&& value) { SetTargetAddress(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Chatbot topic to unsubscribe from the notification rule.</p>
     */
    inline UnsubscribeRequest& WithTargetAddress(const char* value) { SetTargetAddress(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_targetAddress;
    bool m_targetAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
