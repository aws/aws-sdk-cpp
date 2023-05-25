/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/BackupGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup-gateway/model/Tag.h>
#include <utility>

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

  /**
   */
  class ImportHypervisorConfigurationRequest : public BackupGatewayRequest
  {
  public:
    AWS_BACKUPGATEWAY_API ImportHypervisorConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportHypervisorConfiguration"; }

    AWS_BACKUPGATEWAY_API Aws::String SerializePayload() const override;

    AWS_BACKUPGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline ImportHypervisorConfigurationRequest& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline ImportHypervisorConfigurationRequest& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline ImportHypervisorConfigurationRequest& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>The Key Management Service for the hypervisor.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Key Management Service for the hypervisor.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Key Management Service for the hypervisor.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Key Management Service for the hypervisor.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Key Management Service for the hypervisor.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Key Management Service for the hypervisor.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Key Management Service for the hypervisor.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Key Management Service for the hypervisor.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The name of the hypervisor.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the hypervisor.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The password for the hypervisor.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password for the hypervisor.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password for the hypervisor.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the hypervisor.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password for the hypervisor.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password for the hypervisor.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the hypervisor.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the hypervisor.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>The tags of the hypervisor configuration to import.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the hypervisor configuration to import.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the hypervisor configuration to import.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the hypervisor configuration to import.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the hypervisor configuration to import.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the hypervisor configuration to import.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the hypervisor configuration to import.</p>
     */
    inline ImportHypervisorConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags of the hypervisor configuration to import.</p>
     */
    inline ImportHypervisorConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The username for the hypervisor.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The username for the hypervisor.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The username for the hypervisor.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The username for the hypervisor.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The username for the hypervisor.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The username for the hypervisor.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The username for the hypervisor.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The username for the hypervisor.</p>
     */
    inline ImportHypervisorConfigurationRequest& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
