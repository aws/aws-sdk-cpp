/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/AppValidationConfiguration.h>
#include <aws/sms/model/ServerGroupValidationConfiguration.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class PutAppValidationConfigurationRequest : public SMSRequest
  {
  public:
    AWS_SMS_API PutAppValidationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAppValidationConfiguration"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The ID of the application.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline PutAppValidationConfigurationRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline PutAppValidationConfigurationRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline PutAppValidationConfigurationRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The configuration for application validation.</p>
     */
    inline const Aws::Vector<AppValidationConfiguration>& GetAppValidationConfigurations() const{ return m_appValidationConfigurations; }

    /**
     * <p>The configuration for application validation.</p>
     */
    inline bool AppValidationConfigurationsHasBeenSet() const { return m_appValidationConfigurationsHasBeenSet; }

    /**
     * <p>The configuration for application validation.</p>
     */
    inline void SetAppValidationConfigurations(const Aws::Vector<AppValidationConfiguration>& value) { m_appValidationConfigurationsHasBeenSet = true; m_appValidationConfigurations = value; }

    /**
     * <p>The configuration for application validation.</p>
     */
    inline void SetAppValidationConfigurations(Aws::Vector<AppValidationConfiguration>&& value) { m_appValidationConfigurationsHasBeenSet = true; m_appValidationConfigurations = std::move(value); }

    /**
     * <p>The configuration for application validation.</p>
     */
    inline PutAppValidationConfigurationRequest& WithAppValidationConfigurations(const Aws::Vector<AppValidationConfiguration>& value) { SetAppValidationConfigurations(value); return *this;}

    /**
     * <p>The configuration for application validation.</p>
     */
    inline PutAppValidationConfigurationRequest& WithAppValidationConfigurations(Aws::Vector<AppValidationConfiguration>&& value) { SetAppValidationConfigurations(std::move(value)); return *this;}

    /**
     * <p>The configuration for application validation.</p>
     */
    inline PutAppValidationConfigurationRequest& AddAppValidationConfigurations(const AppValidationConfiguration& value) { m_appValidationConfigurationsHasBeenSet = true; m_appValidationConfigurations.push_back(value); return *this; }

    /**
     * <p>The configuration for application validation.</p>
     */
    inline PutAppValidationConfigurationRequest& AddAppValidationConfigurations(AppValidationConfiguration&& value) { m_appValidationConfigurationsHasBeenSet = true; m_appValidationConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration for instance validation.</p>
     */
    inline const Aws::Vector<ServerGroupValidationConfiguration>& GetServerGroupValidationConfigurations() const{ return m_serverGroupValidationConfigurations; }

    /**
     * <p>The configuration for instance validation.</p>
     */
    inline bool ServerGroupValidationConfigurationsHasBeenSet() const { return m_serverGroupValidationConfigurationsHasBeenSet; }

    /**
     * <p>The configuration for instance validation.</p>
     */
    inline void SetServerGroupValidationConfigurations(const Aws::Vector<ServerGroupValidationConfiguration>& value) { m_serverGroupValidationConfigurationsHasBeenSet = true; m_serverGroupValidationConfigurations = value; }

    /**
     * <p>The configuration for instance validation.</p>
     */
    inline void SetServerGroupValidationConfigurations(Aws::Vector<ServerGroupValidationConfiguration>&& value) { m_serverGroupValidationConfigurationsHasBeenSet = true; m_serverGroupValidationConfigurations = std::move(value); }

    /**
     * <p>The configuration for instance validation.</p>
     */
    inline PutAppValidationConfigurationRequest& WithServerGroupValidationConfigurations(const Aws::Vector<ServerGroupValidationConfiguration>& value) { SetServerGroupValidationConfigurations(value); return *this;}

    /**
     * <p>The configuration for instance validation.</p>
     */
    inline PutAppValidationConfigurationRequest& WithServerGroupValidationConfigurations(Aws::Vector<ServerGroupValidationConfiguration>&& value) { SetServerGroupValidationConfigurations(std::move(value)); return *this;}

    /**
     * <p>The configuration for instance validation.</p>
     */
    inline PutAppValidationConfigurationRequest& AddServerGroupValidationConfigurations(const ServerGroupValidationConfiguration& value) { m_serverGroupValidationConfigurationsHasBeenSet = true; m_serverGroupValidationConfigurations.push_back(value); return *this; }

    /**
     * <p>The configuration for instance validation.</p>
     */
    inline PutAppValidationConfigurationRequest& AddServerGroupValidationConfigurations(ServerGroupValidationConfiguration&& value) { m_serverGroupValidationConfigurationsHasBeenSet = true; m_serverGroupValidationConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::Vector<AppValidationConfiguration> m_appValidationConfigurations;
    bool m_appValidationConfigurationsHasBeenSet = false;

    Aws::Vector<ServerGroupValidationConfiguration> m_serverGroupValidationConfigurations;
    bool m_serverGroupValidationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
