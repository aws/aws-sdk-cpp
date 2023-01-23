/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/devops-guru/model/NotificationChannelConfig.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class AddNotificationChannelRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API AddNotificationChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddNotificationChannel"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    /**
     * <p> A <code>NotificationChannelConfig</code> object that specifies what type of
     * notification channel to add. The one supported notification channel is Amazon
     * Simple Notification Service (Amazon SNS). </p>
     */
    inline const NotificationChannelConfig& GetConfig() const{ return m_config; }

    /**
     * <p> A <code>NotificationChannelConfig</code> object that specifies what type of
     * notification channel to add. The one supported notification channel is Amazon
     * Simple Notification Service (Amazon SNS). </p>
     */
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }

    /**
     * <p> A <code>NotificationChannelConfig</code> object that specifies what type of
     * notification channel to add. The one supported notification channel is Amazon
     * Simple Notification Service (Amazon SNS). </p>
     */
    inline void SetConfig(const NotificationChannelConfig& value) { m_configHasBeenSet = true; m_config = value; }

    /**
     * <p> A <code>NotificationChannelConfig</code> object that specifies what type of
     * notification channel to add. The one supported notification channel is Amazon
     * Simple Notification Service (Amazon SNS). </p>
     */
    inline void SetConfig(NotificationChannelConfig&& value) { m_configHasBeenSet = true; m_config = std::move(value); }

    /**
     * <p> A <code>NotificationChannelConfig</code> object that specifies what type of
     * notification channel to add. The one supported notification channel is Amazon
     * Simple Notification Service (Amazon SNS). </p>
     */
    inline AddNotificationChannelRequest& WithConfig(const NotificationChannelConfig& value) { SetConfig(value); return *this;}

    /**
     * <p> A <code>NotificationChannelConfig</code> object that specifies what type of
     * notification channel to add. The one supported notification channel is Amazon
     * Simple Notification Service (Amazon SNS). </p>
     */
    inline AddNotificationChannelRequest& WithConfig(NotificationChannelConfig&& value) { SetConfig(std::move(value)); return *this;}

  private:

    NotificationChannelConfig m_config;
    bool m_configHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
