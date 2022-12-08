/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetAppLaunchConfigurationResult
  {
  public:
    AWS_SMS_API GetAppLaunchConfigurationResult();
    AWS_SMS_API GetAppLaunchConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetAppLaunchConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appId = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appId = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetAppId(const char* value) { m_appId.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline GetAppLaunchConfigurationResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline GetAppLaunchConfigurationResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline GetAppLaunchConfigurationResult& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The name of the service role in the customer's account that CloudFormation
     * uses to launch the application.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the service role in the customer's account that CloudFormation
     * uses to launch the application.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleName = value; }

    /**
     * <p>The name of the service role in the customer's account that CloudFormation
     * uses to launch the application.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleName = std::move(value); }

    /**
     * <p>The name of the service role in the customer's account that CloudFormation
     * uses to launch the application.</p>
     */
    inline void SetRoleName(const char* value) { m_roleName.assign(value); }

    /**
     * <p>The name of the service role in the customer's account that CloudFormation
     * uses to launch the application.</p>
     */
    inline GetAppLaunchConfigurationResult& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the service role in the customer's account that CloudFormation
     * uses to launch the application.</p>
     */
    inline GetAppLaunchConfigurationResult& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the service role in the customer's account that CloudFormation
     * uses to launch the application.</p>
     */
    inline GetAppLaunchConfigurationResult& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>Indicates whether the application is configured to launch automatically after
     * replication is complete.</p>
     */
    inline bool GetAutoLaunch() const{ return m_autoLaunch; }

    /**
     * <p>Indicates whether the application is configured to launch automatically after
     * replication is complete.</p>
     */
    inline void SetAutoLaunch(bool value) { m_autoLaunch = value; }

    /**
     * <p>Indicates whether the application is configured to launch automatically after
     * replication is complete.</p>
     */
    inline GetAppLaunchConfigurationResult& WithAutoLaunch(bool value) { SetAutoLaunch(value); return *this;}


    /**
     * <p>The launch configurations for server groups in this application.</p>
     */
    inline const Aws::Vector<ServerGroupLaunchConfiguration>& GetServerGroupLaunchConfigurations() const{ return m_serverGroupLaunchConfigurations; }

    /**
     * <p>The launch configurations for server groups in this application.</p>
     */
    inline void SetServerGroupLaunchConfigurations(const Aws::Vector<ServerGroupLaunchConfiguration>& value) { m_serverGroupLaunchConfigurations = value; }

    /**
     * <p>The launch configurations for server groups in this application.</p>
     */
    inline void SetServerGroupLaunchConfigurations(Aws::Vector<ServerGroupLaunchConfiguration>&& value) { m_serverGroupLaunchConfigurations = std::move(value); }

    /**
     * <p>The launch configurations for server groups in this application.</p>
     */
    inline GetAppLaunchConfigurationResult& WithServerGroupLaunchConfigurations(const Aws::Vector<ServerGroupLaunchConfiguration>& value) { SetServerGroupLaunchConfigurations(value); return *this;}

    /**
     * <p>The launch configurations for server groups in this application.</p>
     */
    inline GetAppLaunchConfigurationResult& WithServerGroupLaunchConfigurations(Aws::Vector<ServerGroupLaunchConfiguration>&& value) { SetServerGroupLaunchConfigurations(std::move(value)); return *this;}

    /**
     * <p>The launch configurations for server groups in this application.</p>
     */
    inline GetAppLaunchConfigurationResult& AddServerGroupLaunchConfigurations(const ServerGroupLaunchConfiguration& value) { m_serverGroupLaunchConfigurations.push_back(value); return *this; }

    /**
     * <p>The launch configurations for server groups in this application.</p>
     */
    inline GetAppLaunchConfigurationResult& AddServerGroupLaunchConfigurations(ServerGroupLaunchConfiguration&& value) { m_serverGroupLaunchConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appId;

    Aws::String m_roleName;

    bool m_autoLaunch;

    Aws::Vector<ServerGroupLaunchConfiguration> m_serverGroupLaunchConfigurations;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
