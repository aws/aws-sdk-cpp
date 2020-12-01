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
  class AWS_DEVOPSGURU_API AddNotificationChannelRequest : public DevOpsGuruRequest
  {
  public:
    AddNotificationChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddNotificationChannel"; }

    Aws::String SerializePayload() const override;


    
    inline const NotificationChannelConfig& GetConfig() const{ return m_config; }

    
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }

    
    inline void SetConfig(const NotificationChannelConfig& value) { m_configHasBeenSet = true; m_config = value; }

    
    inline void SetConfig(NotificationChannelConfig&& value) { m_configHasBeenSet = true; m_config = std::move(value); }

    
    inline AddNotificationChannelRequest& WithConfig(const NotificationChannelConfig& value) { SetConfig(value); return *this;}

    
    inline AddNotificationChannelRequest& WithConfig(NotificationChannelConfig&& value) { SetConfig(std::move(value)); return *this;}

  private:

    NotificationChannelConfig m_config;
    bool m_configHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
