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
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/MaintenanceStatus.h>
#include <aws/opsworkscm/model/ServerStatus.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpsWorksCM
{
namespace Model
{

  /**
   * <p>Describes a configuration management server. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/Server">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKSCM_API Server
  {
  public:
    Server();
    Server(Aws::Utils::Json::JsonView jsonValue);
    Server& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Associate a public IP address with a server that you are launching. </p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }

    /**
     * <p>Associate a public IP address with a server that you are launching. </p>
     */
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }

    /**
     * <p>Associate a public IP address with a server that you are launching. </p>
     */
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }

    /**
     * <p>Associate a public IP address with a server that you are launching. </p>
     */
    inline Server& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}


    /**
     * <p>The number of automated backups to keep. </p>
     */
    inline int GetBackupRetentionCount() const{ return m_backupRetentionCount; }

    /**
     * <p>The number of automated backups to keep. </p>
     */
    inline bool BackupRetentionCountHasBeenSet() const { return m_backupRetentionCountHasBeenSet; }

    /**
     * <p>The number of automated backups to keep. </p>
     */
    inline void SetBackupRetentionCount(int value) { m_backupRetentionCountHasBeenSet = true; m_backupRetentionCount = value; }

    /**
     * <p>The number of automated backups to keep. </p>
     */
    inline Server& WithBackupRetentionCount(int value) { SetBackupRetentionCount(value); return *this;}


    /**
     * <p>The name of the server. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the server. </p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name of the server. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the server. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the server. </p>
     */
    inline Server& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server. </p>
     */
    inline Server& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the server. </p>
     */
    inline Server& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>Time stamp of server creation. Example <code>2016-07-29T13:38:47.520Z</code>
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Time stamp of server creation. Example <code>2016-07-29T13:38:47.520Z</code>
     * </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Time stamp of server creation. Example <code>2016-07-29T13:38:47.520Z</code>
     * </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Time stamp of server creation. Example <code>2016-07-29T13:38:47.520Z</code>
     * </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Time stamp of server creation. Example <code>2016-07-29T13:38:47.520Z</code>
     * </p>
     */
    inline Server& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Time stamp of server creation. Example <code>2016-07-29T13:38:47.520Z</code>
     * </p>
     */
    inline Server& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The ARN of the CloudFormation stack that was used to create the server. </p>
     */
    inline const Aws::String& GetCloudFormationStackArn() const{ return m_cloudFormationStackArn; }

    /**
     * <p>The ARN of the CloudFormation stack that was used to create the server. </p>
     */
    inline bool CloudFormationStackArnHasBeenSet() const { return m_cloudFormationStackArnHasBeenSet; }

    /**
     * <p>The ARN of the CloudFormation stack that was used to create the server. </p>
     */
    inline void SetCloudFormationStackArn(const Aws::String& value) { m_cloudFormationStackArnHasBeenSet = true; m_cloudFormationStackArn = value; }

    /**
     * <p>The ARN of the CloudFormation stack that was used to create the server. </p>
     */
    inline void SetCloudFormationStackArn(Aws::String&& value) { m_cloudFormationStackArnHasBeenSet = true; m_cloudFormationStackArn = std::move(value); }

    /**
     * <p>The ARN of the CloudFormation stack that was used to create the server. </p>
     */
    inline void SetCloudFormationStackArn(const char* value) { m_cloudFormationStackArnHasBeenSet = true; m_cloudFormationStackArn.assign(value); }

    /**
     * <p>The ARN of the CloudFormation stack that was used to create the server. </p>
     */
    inline Server& WithCloudFormationStackArn(const Aws::String& value) { SetCloudFormationStackArn(value); return *this;}

    /**
     * <p>The ARN of the CloudFormation stack that was used to create the server. </p>
     */
    inline Server& WithCloudFormationStackArn(Aws::String&& value) { SetCloudFormationStackArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the CloudFormation stack that was used to create the server. </p>
     */
    inline Server& WithCloudFormationStackArn(const char* value) { SetCloudFormationStackArn(value); return *this;}


    /**
     * <p>Disables automated backups. The number of stored backups is dependent on the
     * value of PreferredBackupCount. </p>
     */
    inline bool GetDisableAutomatedBackup() const{ return m_disableAutomatedBackup; }

    /**
     * <p>Disables automated backups. The number of stored backups is dependent on the
     * value of PreferredBackupCount. </p>
     */
    inline bool DisableAutomatedBackupHasBeenSet() const { return m_disableAutomatedBackupHasBeenSet; }

    /**
     * <p>Disables automated backups. The number of stored backups is dependent on the
     * value of PreferredBackupCount. </p>
     */
    inline void SetDisableAutomatedBackup(bool value) { m_disableAutomatedBackupHasBeenSet = true; m_disableAutomatedBackup = value; }

    /**
     * <p>Disables automated backups. The number of stored backups is dependent on the
     * value of PreferredBackupCount. </p>
     */
    inline Server& WithDisableAutomatedBackup(bool value) { SetDisableAutomatedBackup(value); return *this;}


    /**
     * <p> A DNS name that can be used to access the engine. Example:
     * <code>myserver-asdfghjkl.us-east-1.opsworks.io</code> </p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p> A DNS name that can be used to access the engine. Example:
     * <code>myserver-asdfghjkl.us-east-1.opsworks.io</code> </p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p> A DNS name that can be used to access the engine. Example:
     * <code>myserver-asdfghjkl.us-east-1.opsworks.io</code> </p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p> A DNS name that can be used to access the engine. Example:
     * <code>myserver-asdfghjkl.us-east-1.opsworks.io</code> </p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p> A DNS name that can be used to access the engine. Example:
     * <code>myserver-asdfghjkl.us-east-1.opsworks.io</code> </p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p> A DNS name that can be used to access the engine. Example:
     * <code>myserver-asdfghjkl.us-east-1.opsworks.io</code> </p>
     */
    inline Server& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p> A DNS name that can be used to access the engine. Example:
     * <code>myserver-asdfghjkl.us-east-1.opsworks.io</code> </p>
     */
    inline Server& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p> A DNS name that can be used to access the engine. Example:
     * <code>myserver-asdfghjkl.us-east-1.opsworks.io</code> </p>
     */
    inline Server& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The engine type of the server. Valid values in this release include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The engine type of the server. Valid values in this release include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The engine type of the server. Valid values in this release include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The engine type of the server. Valid values in this release include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The engine type of the server. Valid values in this release include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The engine type of the server. Valid values in this release include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline Server& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The engine type of the server. Valid values in this release include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline Server& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The engine type of the server. Valid values in this release include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline Server& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline const Aws::String& GetEngineModel() const{ return m_engineModel; }

    /**
     * <p>The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline bool EngineModelHasBeenSet() const { return m_engineModelHasBeenSet; }

    /**
     * <p>The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline void SetEngineModel(const Aws::String& value) { m_engineModelHasBeenSet = true; m_engineModel = value; }

    /**
     * <p>The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline void SetEngineModel(Aws::String&& value) { m_engineModelHasBeenSet = true; m_engineModel = std::move(value); }

    /**
     * <p>The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline void SetEngineModel(const char* value) { m_engineModelHasBeenSet = true; m_engineModel.assign(value); }

    /**
     * <p>The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline Server& WithEngineModel(const Aws::String& value) { SetEngineModel(value); return *this;}

    /**
     * <p>The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline Server& WithEngineModel(Aws::String&& value) { SetEngineModel(std::move(value)); return *this;}

    /**
     * <p>The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline Server& WithEngineModel(const char* value) { SetEngineModel(value); return *this;}


    /**
     * <p>The response of a createServer() request returns the master credential to
     * access the server in EngineAttributes. These credentials are not stored by AWS
     * OpsWorks CM; they are returned only as part of the result of createServer().
     * </p> <p class="title"> <b>Attributes returned in a createServer response for
     * Chef</b> </p> <ul> <li> <p> <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A
     * base64-encoded RSA private key that is generated by AWS OpsWorks for Chef
     * Automate. This private key is required to access the Chef API.</p> </li> <li>
     * <p> <code>CHEF_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Chef starter kit, which includes a README, a configuration file, and
     * the required RSA private key. Save this file, unzip it, and then change to the
     * directory where you've unzipped the file contents. From this directory, you can
     * run Knife commands.</p> </li> </ul> <p class="title"> <b>Attributes returned in
     * a createServer response for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Puppet starter kit, including a README and a required private key.
     * Save this file, unzip it, and then change to the directory where you've unzipped
     * the file contents.</p> </li> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: An
     * administrator password that you can use to sign in to the Puppet Enterprise
     * console after the server is online.</p> </li> </ul>
     */
    inline const Aws::Vector<EngineAttribute>& GetEngineAttributes() const{ return m_engineAttributes; }

    /**
     * <p>The response of a createServer() request returns the master credential to
     * access the server in EngineAttributes. These credentials are not stored by AWS
     * OpsWorks CM; they are returned only as part of the result of createServer().
     * </p> <p class="title"> <b>Attributes returned in a createServer response for
     * Chef</b> </p> <ul> <li> <p> <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A
     * base64-encoded RSA private key that is generated by AWS OpsWorks for Chef
     * Automate. This private key is required to access the Chef API.</p> </li> <li>
     * <p> <code>CHEF_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Chef starter kit, which includes a README, a configuration file, and
     * the required RSA private key. Save this file, unzip it, and then change to the
     * directory where you've unzipped the file contents. From this directory, you can
     * run Knife commands.</p> </li> </ul> <p class="title"> <b>Attributes returned in
     * a createServer response for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Puppet starter kit, including a README and a required private key.
     * Save this file, unzip it, and then change to the directory where you've unzipped
     * the file contents.</p> </li> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: An
     * administrator password that you can use to sign in to the Puppet Enterprise
     * console after the server is online.</p> </li> </ul>
     */
    inline bool EngineAttributesHasBeenSet() const { return m_engineAttributesHasBeenSet; }

    /**
     * <p>The response of a createServer() request returns the master credential to
     * access the server in EngineAttributes. These credentials are not stored by AWS
     * OpsWorks CM; they are returned only as part of the result of createServer().
     * </p> <p class="title"> <b>Attributes returned in a createServer response for
     * Chef</b> </p> <ul> <li> <p> <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A
     * base64-encoded RSA private key that is generated by AWS OpsWorks for Chef
     * Automate. This private key is required to access the Chef API.</p> </li> <li>
     * <p> <code>CHEF_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Chef starter kit, which includes a README, a configuration file, and
     * the required RSA private key. Save this file, unzip it, and then change to the
     * directory where you've unzipped the file contents. From this directory, you can
     * run Knife commands.</p> </li> </ul> <p class="title"> <b>Attributes returned in
     * a createServer response for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Puppet starter kit, including a README and a required private key.
     * Save this file, unzip it, and then change to the directory where you've unzipped
     * the file contents.</p> </li> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: An
     * administrator password that you can use to sign in to the Puppet Enterprise
     * console after the server is online.</p> </li> </ul>
     */
    inline void SetEngineAttributes(const Aws::Vector<EngineAttribute>& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = value; }

    /**
     * <p>The response of a createServer() request returns the master credential to
     * access the server in EngineAttributes. These credentials are not stored by AWS
     * OpsWorks CM; they are returned only as part of the result of createServer().
     * </p> <p class="title"> <b>Attributes returned in a createServer response for
     * Chef</b> </p> <ul> <li> <p> <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A
     * base64-encoded RSA private key that is generated by AWS OpsWorks for Chef
     * Automate. This private key is required to access the Chef API.</p> </li> <li>
     * <p> <code>CHEF_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Chef starter kit, which includes a README, a configuration file, and
     * the required RSA private key. Save this file, unzip it, and then change to the
     * directory where you've unzipped the file contents. From this directory, you can
     * run Knife commands.</p> </li> </ul> <p class="title"> <b>Attributes returned in
     * a createServer response for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Puppet starter kit, including a README and a required private key.
     * Save this file, unzip it, and then change to the directory where you've unzipped
     * the file contents.</p> </li> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: An
     * administrator password that you can use to sign in to the Puppet Enterprise
     * console after the server is online.</p> </li> </ul>
     */
    inline void SetEngineAttributes(Aws::Vector<EngineAttribute>&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = std::move(value); }

    /**
     * <p>The response of a createServer() request returns the master credential to
     * access the server in EngineAttributes. These credentials are not stored by AWS
     * OpsWorks CM; they are returned only as part of the result of createServer().
     * </p> <p class="title"> <b>Attributes returned in a createServer response for
     * Chef</b> </p> <ul> <li> <p> <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A
     * base64-encoded RSA private key that is generated by AWS OpsWorks for Chef
     * Automate. This private key is required to access the Chef API.</p> </li> <li>
     * <p> <code>CHEF_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Chef starter kit, which includes a README, a configuration file, and
     * the required RSA private key. Save this file, unzip it, and then change to the
     * directory where you've unzipped the file contents. From this directory, you can
     * run Knife commands.</p> </li> </ul> <p class="title"> <b>Attributes returned in
     * a createServer response for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Puppet starter kit, including a README and a required private key.
     * Save this file, unzip it, and then change to the directory where you've unzipped
     * the file contents.</p> </li> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: An
     * administrator password that you can use to sign in to the Puppet Enterprise
     * console after the server is online.</p> </li> </ul>
     */
    inline Server& WithEngineAttributes(const Aws::Vector<EngineAttribute>& value) { SetEngineAttributes(value); return *this;}

    /**
     * <p>The response of a createServer() request returns the master credential to
     * access the server in EngineAttributes. These credentials are not stored by AWS
     * OpsWorks CM; they are returned only as part of the result of createServer().
     * </p> <p class="title"> <b>Attributes returned in a createServer response for
     * Chef</b> </p> <ul> <li> <p> <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A
     * base64-encoded RSA private key that is generated by AWS OpsWorks for Chef
     * Automate. This private key is required to access the Chef API.</p> </li> <li>
     * <p> <code>CHEF_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Chef starter kit, which includes a README, a configuration file, and
     * the required RSA private key. Save this file, unzip it, and then change to the
     * directory where you've unzipped the file contents. From this directory, you can
     * run Knife commands.</p> </li> </ul> <p class="title"> <b>Attributes returned in
     * a createServer response for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Puppet starter kit, including a README and a required private key.
     * Save this file, unzip it, and then change to the directory where you've unzipped
     * the file contents.</p> </li> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: An
     * administrator password that you can use to sign in to the Puppet Enterprise
     * console after the server is online.</p> </li> </ul>
     */
    inline Server& WithEngineAttributes(Aws::Vector<EngineAttribute>&& value) { SetEngineAttributes(std::move(value)); return *this;}

    /**
     * <p>The response of a createServer() request returns the master credential to
     * access the server in EngineAttributes. These credentials are not stored by AWS
     * OpsWorks CM; they are returned only as part of the result of createServer().
     * </p> <p class="title"> <b>Attributes returned in a createServer response for
     * Chef</b> </p> <ul> <li> <p> <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A
     * base64-encoded RSA private key that is generated by AWS OpsWorks for Chef
     * Automate. This private key is required to access the Chef API.</p> </li> <li>
     * <p> <code>CHEF_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Chef starter kit, which includes a README, a configuration file, and
     * the required RSA private key. Save this file, unzip it, and then change to the
     * directory where you've unzipped the file contents. From this directory, you can
     * run Knife commands.</p> </li> </ul> <p class="title"> <b>Attributes returned in
     * a createServer response for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Puppet starter kit, including a README and a required private key.
     * Save this file, unzip it, and then change to the directory where you've unzipped
     * the file contents.</p> </li> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: An
     * administrator password that you can use to sign in to the Puppet Enterprise
     * console after the server is online.</p> </li> </ul>
     */
    inline Server& AddEngineAttributes(const EngineAttribute& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(value); return *this; }

    /**
     * <p>The response of a createServer() request returns the master credential to
     * access the server in EngineAttributes. These credentials are not stored by AWS
     * OpsWorks CM; they are returned only as part of the result of createServer().
     * </p> <p class="title"> <b>Attributes returned in a createServer response for
     * Chef</b> </p> <ul> <li> <p> <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A
     * base64-encoded RSA private key that is generated by AWS OpsWorks for Chef
     * Automate. This private key is required to access the Chef API.</p> </li> <li>
     * <p> <code>CHEF_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Chef starter kit, which includes a README, a configuration file, and
     * the required RSA private key. Save this file, unzip it, and then change to the
     * directory where you've unzipped the file contents. From this directory, you can
     * run Knife commands.</p> </li> </ul> <p class="title"> <b>Attributes returned in
     * a createServer response for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Puppet starter kit, including a README and a required private key.
     * Save this file, unzip it, and then change to the directory where you've unzipped
     * the file contents.</p> </li> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: An
     * administrator password that you can use to sign in to the Puppet Enterprise
     * console after the server is online.</p> </li> </ul>
     */
    inline Server& AddEngineAttributes(EngineAttribute&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The engine version of the server. For a Chef server, the valid value for
     * EngineVersion is currently <code>12</code>. For a Puppet server, the valid value
     * is <code>2017</code>. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version of the server. For a Chef server, the valid value for
     * EngineVersion is currently <code>12</code>. For a Puppet server, the valid value
     * is <code>2017</code>. </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version of the server. For a Chef server, the valid value for
     * EngineVersion is currently <code>12</code>. For a Puppet server, the valid value
     * is <code>2017</code>. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version of the server. For a Chef server, the valid value for
     * EngineVersion is currently <code>12</code>. For a Puppet server, the valid value
     * is <code>2017</code>. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version of the server. For a Chef server, the valid value for
     * EngineVersion is currently <code>12</code>. For a Puppet server, the valid value
     * is <code>2017</code>. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version of the server. For a Chef server, the valid value for
     * EngineVersion is currently <code>12</code>. For a Puppet server, the valid value
     * is <code>2017</code>. </p>
     */
    inline Server& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version of the server. For a Chef server, the valid value for
     * EngineVersion is currently <code>12</code>. For a Puppet server, the valid value
     * is <code>2017</code>. </p>
     */
    inline Server& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version of the server. For a Chef server, the valid value for
     * EngineVersion is currently <code>12</code>. For a Puppet server, the valid value
     * is <code>2017</code>. </p>
     */
    inline Server& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The instance profile ARN of the server. </p>
     */
    inline const Aws::String& GetInstanceProfileArn() const{ return m_instanceProfileArn; }

    /**
     * <p>The instance profile ARN of the server. </p>
     */
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }

    /**
     * <p>The instance profile ARN of the server. </p>
     */
    inline void SetInstanceProfileArn(const Aws::String& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = value; }

    /**
     * <p>The instance profile ARN of the server. </p>
     */
    inline void SetInstanceProfileArn(Aws::String&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::move(value); }

    /**
     * <p>The instance profile ARN of the server. </p>
     */
    inline void SetInstanceProfileArn(const char* value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn.assign(value); }

    /**
     * <p>The instance profile ARN of the server. </p>
     */
    inline Server& WithInstanceProfileArn(const Aws::String& value) { SetInstanceProfileArn(value); return *this;}

    /**
     * <p>The instance profile ARN of the server. </p>
     */
    inline Server& WithInstanceProfileArn(Aws::String&& value) { SetInstanceProfileArn(std::move(value)); return *this;}

    /**
     * <p>The instance profile ARN of the server. </p>
     */
    inline Server& WithInstanceProfileArn(const char* value) { SetInstanceProfileArn(value); return *this;}


    /**
     * <p> The instance type for the server, as specified in the CloudFormation stack.
     * This might not be the same instance type that is shown in the EC2 console. </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p> The instance type for the server, as specified in the CloudFormation stack.
     * This might not be the same instance type that is shown in the EC2 console. </p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p> The instance type for the server, as specified in the CloudFormation stack.
     * This might not be the same instance type that is shown in the EC2 console. </p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p> The instance type for the server, as specified in the CloudFormation stack.
     * This might not be the same instance type that is shown in the EC2 console. </p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p> The instance type for the server, as specified in the CloudFormation stack.
     * This might not be the same instance type that is shown in the EC2 console. </p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p> The instance type for the server, as specified in the CloudFormation stack.
     * This might not be the same instance type that is shown in the EC2 console. </p>
     */
    inline Server& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p> The instance type for the server, as specified in the CloudFormation stack.
     * This might not be the same instance type that is shown in the EC2 console. </p>
     */
    inline Server& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p> The instance type for the server, as specified in the CloudFormation stack.
     * This might not be the same instance type that is shown in the EC2 console. </p>
     */
    inline Server& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The key pair associated with the server. </p>
     */
    inline const Aws::String& GetKeyPair() const{ return m_keyPair; }

    /**
     * <p>The key pair associated with the server. </p>
     */
    inline bool KeyPairHasBeenSet() const { return m_keyPairHasBeenSet; }

    /**
     * <p>The key pair associated with the server. </p>
     */
    inline void SetKeyPair(const Aws::String& value) { m_keyPairHasBeenSet = true; m_keyPair = value; }

    /**
     * <p>The key pair associated with the server. </p>
     */
    inline void SetKeyPair(Aws::String&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::move(value); }

    /**
     * <p>The key pair associated with the server. </p>
     */
    inline void SetKeyPair(const char* value) { m_keyPairHasBeenSet = true; m_keyPair.assign(value); }

    /**
     * <p>The key pair associated with the server. </p>
     */
    inline Server& WithKeyPair(const Aws::String& value) { SetKeyPair(value); return *this;}

    /**
     * <p>The key pair associated with the server. </p>
     */
    inline Server& WithKeyPair(Aws::String&& value) { SetKeyPair(std::move(value)); return *this;}

    /**
     * <p>The key pair associated with the server. </p>
     */
    inline Server& WithKeyPair(const char* value) { SetKeyPair(value); return *this;}


    /**
     * <p>The status of the most recent server maintenance run. Shows
     * <code>SUCCESS</code> or <code>FAILED</code>. </p>
     */
    inline const MaintenanceStatus& GetMaintenanceStatus() const{ return m_maintenanceStatus; }

    /**
     * <p>The status of the most recent server maintenance run. Shows
     * <code>SUCCESS</code> or <code>FAILED</code>. </p>
     */
    inline bool MaintenanceStatusHasBeenSet() const { return m_maintenanceStatusHasBeenSet; }

    /**
     * <p>The status of the most recent server maintenance run. Shows
     * <code>SUCCESS</code> or <code>FAILED</code>. </p>
     */
    inline void SetMaintenanceStatus(const MaintenanceStatus& value) { m_maintenanceStatusHasBeenSet = true; m_maintenanceStatus = value; }

    /**
     * <p>The status of the most recent server maintenance run. Shows
     * <code>SUCCESS</code> or <code>FAILED</code>. </p>
     */
    inline void SetMaintenanceStatus(MaintenanceStatus&& value) { m_maintenanceStatusHasBeenSet = true; m_maintenanceStatus = std::move(value); }

    /**
     * <p>The status of the most recent server maintenance run. Shows
     * <code>SUCCESS</code> or <code>FAILED</code>. </p>
     */
    inline Server& WithMaintenanceStatus(const MaintenanceStatus& value) { SetMaintenanceStatus(value); return *this;}

    /**
     * <p>The status of the most recent server maintenance run. Shows
     * <code>SUCCESS</code> or <code>FAILED</code>. </p>
     */
    inline Server& WithMaintenanceStatus(MaintenanceStatus&& value) { SetMaintenanceStatus(std::move(value)); return *this;}


    /**
     * <p>The preferred maintenance period specified for the server. </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The preferred maintenance period specified for the server. </p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The preferred maintenance period specified for the server. </p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The preferred maintenance period specified for the server. </p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The preferred maintenance period specified for the server. </p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The preferred maintenance period specified for the server. </p>
     */
    inline Server& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The preferred maintenance period specified for the server. </p>
     */
    inline Server& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The preferred maintenance period specified for the server. </p>
     */
    inline Server& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The preferred backup period specified for the server. </p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The preferred backup period specified for the server. </p>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The preferred backup period specified for the server. </p>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The preferred backup period specified for the server. </p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The preferred backup period specified for the server. </p>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The preferred backup period specified for the server. </p>
     */
    inline Server& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The preferred backup period specified for the server. </p>
     */
    inline Server& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The preferred backup period specified for the server. </p>
     */
    inline Server& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p> The security group IDs for the server, as specified in the CloudFormation
     * stack. These might not be the same security groups that are shown in the EC2
     * console. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p> The security group IDs for the server, as specified in the CloudFormation
     * stack. These might not be the same security groups that are shown in the EC2
     * console. </p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p> The security group IDs for the server, as specified in the CloudFormation
     * stack. These might not be the same security groups that are shown in the EC2
     * console. </p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p> The security group IDs for the server, as specified in the CloudFormation
     * stack. These might not be the same security groups that are shown in the EC2
     * console. </p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p> The security group IDs for the server, as specified in the CloudFormation
     * stack. These might not be the same security groups that are shown in the EC2
     * console. </p>
     */
    inline Server& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p> The security group IDs for the server, as specified in the CloudFormation
     * stack. These might not be the same security groups that are shown in the EC2
     * console. </p>
     */
    inline Server& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p> The security group IDs for the server, as specified in the CloudFormation
     * stack. These might not be the same security groups that are shown in the EC2
     * console. </p>
     */
    inline Server& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p> The security group IDs for the server, as specified in the CloudFormation
     * stack. These might not be the same security groups that are shown in the EC2
     * console. </p>
     */
    inline Server& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The security group IDs for the server, as specified in the CloudFormation
     * stack. These might not be the same security groups that are shown in the EC2
     * console. </p>
     */
    inline Server& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The service role ARN used to create the server. </p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The service role ARN used to create the server. </p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p>The service role ARN used to create the server. </p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The service role ARN used to create the server. </p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p>The service role ARN used to create the server. </p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The service role ARN used to create the server. </p>
     */
    inline Server& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The service role ARN used to create the server. </p>
     */
    inline Server& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The service role ARN used to create the server. </p>
     */
    inline Server& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p> The server's status. This field displays the states of actions in progress,
     * such as creating, running, or backing up the server, as well as the server's
     * health state. </p>
     */
    inline const ServerStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The server's status. This field displays the states of actions in progress,
     * such as creating, running, or backing up the server, as well as the server's
     * health state. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The server's status. This field displays the states of actions in progress,
     * such as creating, running, or backing up the server, as well as the server's
     * health state. </p>
     */
    inline void SetStatus(const ServerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The server's status. This field displays the states of actions in progress,
     * such as creating, running, or backing up the server, as well as the server's
     * health state. </p>
     */
    inline void SetStatus(ServerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The server's status. This field displays the states of actions in progress,
     * such as creating, running, or backing up the server, as well as the server's
     * health state. </p>
     */
    inline Server& WithStatus(const ServerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The server's status. This field displays the states of actions in progress,
     * such as creating, running, or backing up the server, as well as the server's
     * health state. </p>
     */
    inline Server& WithStatus(ServerStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Depending on the server status, this field has either a human-readable
     * message (such as a create or backup error), or an escaped block of JSON (used
     * for health check results). </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p> Depending on the server status, this field has either a human-readable
     * message (such as a create or backup error), or an escaped block of JSON (used
     * for health check results). </p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p> Depending on the server status, this field has either a human-readable
     * message (such as a create or backup error), or an escaped block of JSON (used
     * for health check results). </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p> Depending on the server status, this field has either a human-readable
     * message (such as a create or backup error), or an escaped block of JSON (used
     * for health check results). </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p> Depending on the server status, this field has either a human-readable
     * message (such as a create or backup error), or an escaped block of JSON (used
     * for health check results). </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p> Depending on the server status, this field has either a human-readable
     * message (such as a create or backup error), or an escaped block of JSON (used
     * for health check results). </p>
     */
    inline Server& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p> Depending on the server status, this field has either a human-readable
     * message (such as a create or backup error), or an escaped block of JSON (used
     * for health check results). </p>
     */
    inline Server& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p> Depending on the server status, this field has either a human-readable
     * message (such as a create or backup error), or an escaped block of JSON (used
     * for health check results). </p>
     */
    inline Server& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p> The subnet IDs specified in a CreateServer request. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p> The subnet IDs specified in a CreateServer request. </p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p> The subnet IDs specified in a CreateServer request. </p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p> The subnet IDs specified in a CreateServer request. </p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p> The subnet IDs specified in a CreateServer request. </p>
     */
    inline Server& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p> The subnet IDs specified in a CreateServer request. </p>
     */
    inline Server& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p> The subnet IDs specified in a CreateServer request. </p>
     */
    inline Server& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p> The subnet IDs specified in a CreateServer request. </p>
     */
    inline Server& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The subnet IDs specified in a CreateServer request. </p>
     */
    inline Server& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The ARN of the server. </p>
     */
    inline const Aws::String& GetServerArn() const{ return m_serverArn; }

    /**
     * <p>The ARN of the server. </p>
     */
    inline bool ServerArnHasBeenSet() const { return m_serverArnHasBeenSet; }

    /**
     * <p>The ARN of the server. </p>
     */
    inline void SetServerArn(const Aws::String& value) { m_serverArnHasBeenSet = true; m_serverArn = value; }

    /**
     * <p>The ARN of the server. </p>
     */
    inline void SetServerArn(Aws::String&& value) { m_serverArnHasBeenSet = true; m_serverArn = std::move(value); }

    /**
     * <p>The ARN of the server. </p>
     */
    inline void SetServerArn(const char* value) { m_serverArnHasBeenSet = true; m_serverArn.assign(value); }

    /**
     * <p>The ARN of the server. </p>
     */
    inline Server& WithServerArn(const Aws::String& value) { SetServerArn(value); return *this;}

    /**
     * <p>The ARN of the server. </p>
     */
    inline Server& WithServerArn(Aws::String&& value) { SetServerArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the server. </p>
     */
    inline Server& WithServerArn(const char* value) { SetServerArn(value); return *this;}

  private:

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet;

    int m_backupRetentionCount;
    bool m_backupRetentionCountHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_cloudFormationStackArn;
    bool m_cloudFormationStackArnHasBeenSet;

    bool m_disableAutomatedBackup;
    bool m_disableAutomatedBackupHasBeenSet;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineModel;
    bool m_engineModelHasBeenSet;

    Aws::Vector<EngineAttribute> m_engineAttributes;
    bool m_engineAttributesHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_keyPair;
    bool m_keyPairHasBeenSet;

    MaintenanceStatus m_maintenanceStatus;
    bool m_maintenanceStatusHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;

    ServerStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::String m_serverArn;
    bool m_serverArnHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
