/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ServerGroupLaunchConfiguration.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class AWS_SMS_API PutAppLaunchConfigurationRequest : public SMSRequest
  {
  public:
    PutAppLaunchConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAppLaunchConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>Name of service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>Name of service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>Name of service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>Name of service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>Name of service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>Name of service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>Name of service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>Name of service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>Launch configurations for server groups in the application.</p>
     */
    inline const Aws::Vector<ServerGroupLaunchConfiguration>& GetServerGroupLaunchConfigurations() const{ return m_serverGroupLaunchConfigurations; }

    /**
     * <p>Launch configurations for server groups in the application.</p>
     */
    inline bool ServerGroupLaunchConfigurationsHasBeenSet() const { return m_serverGroupLaunchConfigurationsHasBeenSet; }

    /**
     * <p>Launch configurations for server groups in the application.</p>
     */
    inline void SetServerGroupLaunchConfigurations(const Aws::Vector<ServerGroupLaunchConfiguration>& value) { m_serverGroupLaunchConfigurationsHasBeenSet = true; m_serverGroupLaunchConfigurations = value; }

    /**
     * <p>Launch configurations for server groups in the application.</p>
     */
    inline void SetServerGroupLaunchConfigurations(Aws::Vector<ServerGroupLaunchConfiguration>&& value) { m_serverGroupLaunchConfigurationsHasBeenSet = true; m_serverGroupLaunchConfigurations = std::move(value); }

    /**
     * <p>Launch configurations for server groups in the application.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithServerGroupLaunchConfigurations(const Aws::Vector<ServerGroupLaunchConfiguration>& value) { SetServerGroupLaunchConfigurations(value); return *this;}

    /**
     * <p>Launch configurations for server groups in the application.</p>
     */
    inline PutAppLaunchConfigurationRequest& WithServerGroupLaunchConfigurations(Aws::Vector<ServerGroupLaunchConfiguration>&& value) { SetServerGroupLaunchConfigurations(std::move(value)); return *this;}

    /**
     * <p>Launch configurations for server groups in the application.</p>
     */
    inline PutAppLaunchConfigurationRequest& AddServerGroupLaunchConfigurations(const ServerGroupLaunchConfiguration& value) { m_serverGroupLaunchConfigurationsHasBeenSet = true; m_serverGroupLaunchConfigurations.push_back(value); return *this; }

    /**
     * <p>Launch configurations for server groups in the application.</p>
     */
    inline PutAppLaunchConfigurationRequest& AddServerGroupLaunchConfigurations(ServerGroupLaunchConfiguration&& value) { m_serverGroupLaunchConfigurationsHasBeenSet = true; m_serverGroupLaunchConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;

    Aws::Vector<ServerGroupLaunchConfiguration> m_serverGroupLaunchConfigurations;
    bool m_serverGroupLaunchConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
