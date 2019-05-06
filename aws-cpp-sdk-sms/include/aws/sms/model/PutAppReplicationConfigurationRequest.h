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
#include <aws/sms/model/ServerGroupReplicationConfiguration.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class AWS_SMS_API PutAppReplicationConfigurationRequest : public SMSRequest
  {
  public:
    PutAppReplicationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAppReplicationConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ID of the application tassociated with the replication configuration.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>ID of the application tassociated with the replication configuration.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>ID of the application tassociated with the replication configuration.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>ID of the application tassociated with the replication configuration.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>ID of the application tassociated with the replication configuration.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>ID of the application tassociated with the replication configuration.</p>
     */
    inline PutAppReplicationConfigurationRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>ID of the application tassociated with the replication configuration.</p>
     */
    inline PutAppReplicationConfigurationRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>ID of the application tassociated with the replication configuration.</p>
     */
    inline PutAppReplicationConfigurationRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>Replication configurations for server groups in the application.</p>
     */
    inline const Aws::Vector<ServerGroupReplicationConfiguration>& GetServerGroupReplicationConfigurations() const{ return m_serverGroupReplicationConfigurations; }

    /**
     * <p>Replication configurations for server groups in the application.</p>
     */
    inline bool ServerGroupReplicationConfigurationsHasBeenSet() const { return m_serverGroupReplicationConfigurationsHasBeenSet; }

    /**
     * <p>Replication configurations for server groups in the application.</p>
     */
    inline void SetServerGroupReplicationConfigurations(const Aws::Vector<ServerGroupReplicationConfiguration>& value) { m_serverGroupReplicationConfigurationsHasBeenSet = true; m_serverGroupReplicationConfigurations = value; }

    /**
     * <p>Replication configurations for server groups in the application.</p>
     */
    inline void SetServerGroupReplicationConfigurations(Aws::Vector<ServerGroupReplicationConfiguration>&& value) { m_serverGroupReplicationConfigurationsHasBeenSet = true; m_serverGroupReplicationConfigurations = std::move(value); }

    /**
     * <p>Replication configurations for server groups in the application.</p>
     */
    inline PutAppReplicationConfigurationRequest& WithServerGroupReplicationConfigurations(const Aws::Vector<ServerGroupReplicationConfiguration>& value) { SetServerGroupReplicationConfigurations(value); return *this;}

    /**
     * <p>Replication configurations for server groups in the application.</p>
     */
    inline PutAppReplicationConfigurationRequest& WithServerGroupReplicationConfigurations(Aws::Vector<ServerGroupReplicationConfiguration>&& value) { SetServerGroupReplicationConfigurations(std::move(value)); return *this;}

    /**
     * <p>Replication configurations for server groups in the application.</p>
     */
    inline PutAppReplicationConfigurationRequest& AddServerGroupReplicationConfigurations(const ServerGroupReplicationConfiguration& value) { m_serverGroupReplicationConfigurationsHasBeenSet = true; m_serverGroupReplicationConfigurations.push_back(value); return *this; }

    /**
     * <p>Replication configurations for server groups in the application.</p>
     */
    inline PutAppReplicationConfigurationRequest& AddServerGroupReplicationConfigurations(ServerGroupReplicationConfiguration&& value) { m_serverGroupReplicationConfigurationsHasBeenSet = true; m_serverGroupReplicationConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    Aws::Vector<ServerGroupReplicationConfiguration> m_serverGroupReplicationConfigurations;
    bool m_serverGroupReplicationConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
