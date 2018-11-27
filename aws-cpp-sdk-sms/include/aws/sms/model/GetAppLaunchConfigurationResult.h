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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ServerGroupLaunchConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SMS
{
namespace Model
{
  class AWS_SMS_API GetAppLaunchConfigurationResult
  {
  public:
    GetAppLaunchConfigurationResult();
    GetAppLaunchConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAppLaunchConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appId = value; }

    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appId = std::move(value); }

    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline void SetAppId(const char* value) { m_appId.assign(value); }

    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline GetAppLaunchConfigurationResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline GetAppLaunchConfigurationResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>ID of the application associated with the launch configuration.</p>
     */
    inline GetAppLaunchConfigurationResult& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>Name of the service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>Name of the service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleName = value; }

    /**
     * <p>Name of the service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleName = std::move(value); }

    /**
     * <p>Name of the service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline void SetRoleName(const char* value) { m_roleName.assign(value); }

    /**
     * <p>Name of the service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline GetAppLaunchConfigurationResult& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>Name of the service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline GetAppLaunchConfigurationResult& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>Name of the service role in the customer's account that Amazon CloudFormation
     * uses to launch the application.</p>
     */
    inline GetAppLaunchConfigurationResult& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>List of launch configurations for server groups in this application.</p>
     */
    inline const Aws::Vector<ServerGroupLaunchConfiguration>& GetServerGroupLaunchConfigurations() const{ return m_serverGroupLaunchConfigurations; }

    /**
     * <p>List of launch configurations for server groups in this application.</p>
     */
    inline void SetServerGroupLaunchConfigurations(const Aws::Vector<ServerGroupLaunchConfiguration>& value) { m_serverGroupLaunchConfigurations = value; }

    /**
     * <p>List of launch configurations for server groups in this application.</p>
     */
    inline void SetServerGroupLaunchConfigurations(Aws::Vector<ServerGroupLaunchConfiguration>&& value) { m_serverGroupLaunchConfigurations = std::move(value); }

    /**
     * <p>List of launch configurations for server groups in this application.</p>
     */
    inline GetAppLaunchConfigurationResult& WithServerGroupLaunchConfigurations(const Aws::Vector<ServerGroupLaunchConfiguration>& value) { SetServerGroupLaunchConfigurations(value); return *this;}

    /**
     * <p>List of launch configurations for server groups in this application.</p>
     */
    inline GetAppLaunchConfigurationResult& WithServerGroupLaunchConfigurations(Aws::Vector<ServerGroupLaunchConfiguration>&& value) { SetServerGroupLaunchConfigurations(std::move(value)); return *this;}

    /**
     * <p>List of launch configurations for server groups in this application.</p>
     */
    inline GetAppLaunchConfigurationResult& AddServerGroupLaunchConfigurations(const ServerGroupLaunchConfiguration& value) { m_serverGroupLaunchConfigurations.push_back(value); return *this; }

    /**
     * <p>List of launch configurations for server groups in this application.</p>
     */
    inline GetAppLaunchConfigurationResult& AddServerGroupLaunchConfigurations(ServerGroupLaunchConfiguration&& value) { m_serverGroupLaunchConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appId;

    Aws::String m_roleName;

    Aws::Vector<ServerGroupLaunchConfiguration> m_serverGroupLaunchConfigurations;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
