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
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKSCM_API CreateServerRequest : public OpsWorksCMRequest
  {
  public:
    CreateServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> Associate a public IP address with a server that you are launching. Valid
     * values are <code>true</code> or <code>false</code>. The default value is
     * <code>true</code>. </p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }

    /**
     * <p> Associate a public IP address with a server that you are launching. Valid
     * values are <code>true</code> or <code>false</code>. The default value is
     * <code>true</code>. </p>
     */
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }

    /**
     * <p> Associate a public IP address with a server that you are launching. Valid
     * values are <code>true</code> or <code>false</code>. The default value is
     * <code>true</code>. </p>
     */
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }

    /**
     * <p> Associate a public IP address with a server that you are launching. Valid
     * values are <code>true</code> or <code>false</code>. The default value is
     * <code>true</code>. </p>
     */
    inline CreateServerRequest& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}


    /**
     * <p> Enable or disable scheduled backups. Valid values are <code>true</code> or
     * <code>false</code>. The default value is <code>true</code>. </p>
     */
    inline bool GetDisableAutomatedBackup() const{ return m_disableAutomatedBackup; }

    /**
     * <p> Enable or disable scheduled backups. Valid values are <code>true</code> or
     * <code>false</code>. The default value is <code>true</code>. </p>
     */
    inline bool DisableAutomatedBackupHasBeenSet() const { return m_disableAutomatedBackupHasBeenSet; }

    /**
     * <p> Enable or disable scheduled backups. Valid values are <code>true</code> or
     * <code>false</code>. The default value is <code>true</code>. </p>
     */
    inline void SetDisableAutomatedBackup(bool value) { m_disableAutomatedBackupHasBeenSet = true; m_disableAutomatedBackup = value; }

    /**
     * <p> Enable or disable scheduled backups. Valid values are <code>true</code> or
     * <code>false</code>. The default value is <code>true</code>. </p>
     */
    inline CreateServerRequest& WithDisableAutomatedBackup(bool value) { SetDisableAutomatedBackup(value); return *this;}


    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline CreateServerRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline CreateServerRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline CreateServerRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline const Aws::String& GetEngineModel() const{ return m_engineModel; }

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline bool EngineModelHasBeenSet() const { return m_engineModelHasBeenSet; }

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline void SetEngineModel(const Aws::String& value) { m_engineModelHasBeenSet = true; m_engineModel = value; }

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline void SetEngineModel(Aws::String&& value) { m_engineModelHasBeenSet = true; m_engineModel = std::move(value); }

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline void SetEngineModel(const char* value) { m_engineModelHasBeenSet = true; m_engineModel.assign(value); }

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline CreateServerRequest& WithEngineModel(const Aws::String& value) { SetEngineModel(value); return *this;}

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline CreateServerRequest& WithEngineModel(Aws::String&& value) { SetEngineModel(std::move(value)); return *this;}

    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline CreateServerRequest& WithEngineModel(const char* value) { SetEngineModel(value); return *this;}


    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>12</code>. For a
     * Puppet server, the valid value is <code>2017</code>. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>12</code>. For a
     * Puppet server, the valid value is <code>2017</code>. </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>12</code>. For a
     * Puppet server, the valid value is <code>2017</code>. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>12</code>. For a
     * Puppet server, the valid value is <code>2017</code>. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>12</code>. For a
     * Puppet server, the valid value is <code>2017</code>. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>12</code>. For a
     * Puppet server, the valid value is <code>2017</code>. </p>
     */
    inline CreateServerRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>12</code>. For a
     * Puppet server, the valid value is <code>2017</code>. </p>
     */
    inline CreateServerRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>12</code>. For a
     * Puppet server, the valid value is <code>2017</code>. </p>
     */
    inline CreateServerRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<EngineAttribute>& GetEngineAttributes() const{ return m_engineAttributes; }

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline bool EngineAttributesHasBeenSet() const { return m_engineAttributesHasBeenSet; }

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline void SetEngineAttributes(const Aws::Vector<EngineAttribute>& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = value; }

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline void SetEngineAttributes(Aws::Vector<EngineAttribute>&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = std::move(value); }

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline CreateServerRequest& WithEngineAttributes(const Aws::Vector<EngineAttribute>& value) { SetEngineAttributes(value); return *this;}

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline CreateServerRequest& WithEngineAttributes(Aws::Vector<EngineAttribute>&& value) { SetEngineAttributes(std::move(value)); return *this;}

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline CreateServerRequest& AddEngineAttributes(const EngineAttribute& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(value); return *this; }

    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline CreateServerRequest& AddEngineAttributes(EngineAttribute&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p> The number of automated backups that you want to keep. Whenever a new backup
     * is created, AWS OpsWorks CM deletes the oldest backups if this number is
     * exceeded. The default value is <code>1</code>. </p>
     */
    inline int GetBackupRetentionCount() const{ return m_backupRetentionCount; }

    /**
     * <p> The number of automated backups that you want to keep. Whenever a new backup
     * is created, AWS OpsWorks CM deletes the oldest backups if this number is
     * exceeded. The default value is <code>1</code>. </p>
     */
    inline bool BackupRetentionCountHasBeenSet() const { return m_backupRetentionCountHasBeenSet; }

    /**
     * <p> The number of automated backups that you want to keep. Whenever a new backup
     * is created, AWS OpsWorks CM deletes the oldest backups if this number is
     * exceeded. The default value is <code>1</code>. </p>
     */
    inline void SetBackupRetentionCount(int value) { m_backupRetentionCountHasBeenSet = true; m_backupRetentionCount = value; }

    /**
     * <p> The number of automated backups that you want to keep. Whenever a new backup
     * is created, AWS OpsWorks CM deletes the oldest backups if this number is
     * exceeded. The default value is <code>1</code>. </p>
     */
    inline CreateServerRequest& WithBackupRetentionCount(int value) { SetBackupRetentionCount(value); return *this;}


    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline CreateServerRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline CreateServerRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline CreateServerRequest& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline const Aws::String& GetInstanceProfileArn() const{ return m_instanceProfileArn; }

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline void SetInstanceProfileArn(const Aws::String& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = value; }

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline void SetInstanceProfileArn(Aws::String&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::move(value); }

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline void SetInstanceProfileArn(const char* value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn.assign(value); }

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline CreateServerRequest& WithInstanceProfileArn(const Aws::String& value) { SetInstanceProfileArn(value); return *this;}

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline CreateServerRequest& WithInstanceProfileArn(Aws::String&& value) { SetInstanceProfileArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline CreateServerRequest& WithInstanceProfileArn(const char* value) { SetInstanceProfileArn(value); return *this;}


    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline CreateServerRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline CreateServerRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline CreateServerRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline const Aws::String& GetKeyPair() const{ return m_keyPair; }

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline bool KeyPairHasBeenSet() const { return m_keyPairHasBeenSet; }

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline void SetKeyPair(const Aws::String& value) { m_keyPairHasBeenSet = true; m_keyPair = value; }

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline void SetKeyPair(Aws::String&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::move(value); }

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline void SetKeyPair(const char* value) { m_keyPairHasBeenSet = true; m_keyPair.assign(value); }

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline CreateServerRequest& WithKeyPair(const Aws::String& value) { SetKeyPair(value); return *this;}

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline CreateServerRequest& WithKeyPair(Aws::String&& value) { SetKeyPair(std::move(value)); return *this;}

    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline CreateServerRequest& WithKeyPair(const char* value) { SetKeyPair(value); return *this;}


    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. The specified time is in coordinated
     * universal time (UTC). The default value is a random one-hour period on Tuesday,
     * Wednesday, or Friday. See <code>TimeWindowDefinition</code> for more
     * information. </p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a
     * start time of every Monday at 08:00 UTC. (8:00 a.m.) </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. The specified time is in coordinated
     * universal time (UTC). The default value is a random one-hour period on Tuesday,
     * Wednesday, or Friday. See <code>TimeWindowDefinition</code> for more
     * information. </p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a
     * start time of every Monday at 08:00 UTC. (8:00 a.m.) </p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. The specified time is in coordinated
     * universal time (UTC). The default value is a random one-hour period on Tuesday,
     * Wednesday, or Friday. See <code>TimeWindowDefinition</code> for more
     * information. </p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a
     * start time of every Monday at 08:00 UTC. (8:00 a.m.) </p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. The specified time is in coordinated
     * universal time (UTC). The default value is a random one-hour period on Tuesday,
     * Wednesday, or Friday. See <code>TimeWindowDefinition</code> for more
     * information. </p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a
     * start time of every Monday at 08:00 UTC. (8:00 a.m.) </p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. The specified time is in coordinated
     * universal time (UTC). The default value is a random one-hour period on Tuesday,
     * Wednesday, or Friday. See <code>TimeWindowDefinition</code> for more
     * information. </p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a
     * start time of every Monday at 08:00 UTC. (8:00 a.m.) </p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. The specified time is in coordinated
     * universal time (UTC). The default value is a random one-hour period on Tuesday,
     * Wednesday, or Friday. See <code>TimeWindowDefinition</code> for more
     * information. </p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a
     * start time of every Monday at 08:00 UTC. (8:00 a.m.) </p>
     */
    inline CreateServerRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. The specified time is in coordinated
     * universal time (UTC). The default value is a random one-hour period on Tuesday,
     * Wednesday, or Friday. See <code>TimeWindowDefinition</code> for more
     * information. </p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a
     * start time of every Monday at 08:00 UTC. (8:00 a.m.) </p>
     */
    inline CreateServerRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. The specified time is in coordinated
     * universal time (UTC). The default value is a random one-hour period on Tuesday,
     * Wednesday, or Friday. See <code>TimeWindowDefinition</code> for more
     * information. </p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a
     * start time of every Monday at 08:00 UTC. (8:00 a.m.) </p>
     */
    inline CreateServerRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p>The specified time is in coordinated
     * universal time (UTC). The default value is a random, daily start time.</p> <p>
     * <b>Example:</b> <code>08:00</code>, which represents a daily start time of 08:00
     * UTC.</p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a start
     * time of every Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p>The specified time is in coordinated
     * universal time (UTC). The default value is a random, daily start time.</p> <p>
     * <b>Example:</b> <code>08:00</code>, which represents a daily start time of 08:00
     * UTC.</p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a start
     * time of every Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p>The specified time is in coordinated
     * universal time (UTC). The default value is a random, daily start time.</p> <p>
     * <b>Example:</b> <code>08:00</code>, which represents a daily start time of 08:00
     * UTC.</p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a start
     * time of every Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p>The specified time is in coordinated
     * universal time (UTC). The default value is a random, daily start time.</p> <p>
     * <b>Example:</b> <code>08:00</code>, which represents a daily start time of 08:00
     * UTC.</p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a start
     * time of every Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p>The specified time is in coordinated
     * universal time (UTC). The default value is a random, daily start time.</p> <p>
     * <b>Example:</b> <code>08:00</code>, which represents a daily start time of 08:00
     * UTC.</p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a start
     * time of every Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p>The specified time is in coordinated
     * universal time (UTC). The default value is a random, daily start time.</p> <p>
     * <b>Example:</b> <code>08:00</code>, which represents a daily start time of 08:00
     * UTC.</p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a start
     * time of every Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline CreateServerRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p>The specified time is in coordinated
     * universal time (UTC). The default value is a random, daily start time.</p> <p>
     * <b>Example:</b> <code>08:00</code>, which represents a daily start time of 08:00
     * UTC.</p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a start
     * time of every Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline CreateServerRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p>The specified time is in coordinated
     * universal time (UTC). The default value is a random, daily start time.</p> <p>
     * <b>Example:</b> <code>08:00</code>, which represents a daily start time of 08:00
     * UTC.</p> <p> <b>Example:</b> <code>Mon:08:00</code>, which represents a start
     * time of every Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline CreateServerRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline CreateServerRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline CreateServerRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline CreateServerRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline CreateServerRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline CreateServerRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline CreateServerRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline CreateServerRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline CreateServerRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline CreateServerRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline CreateServerRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline CreateServerRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline CreateServerRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline CreateServerRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline CreateServerRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline CreateServerRequest& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline CreateServerRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}

  private:

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet;

    bool m_disableAutomatedBackup;
    bool m_disableAutomatedBackupHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineModel;
    bool m_engineModelHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::Vector<EngineAttribute> m_engineAttributes;
    bool m_engineAttributesHasBeenSet;

    int m_backupRetentionCount;
    bool m_backupRetentionCountHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_keyPair;
    bool m_keyPairHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
