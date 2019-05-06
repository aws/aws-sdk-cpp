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
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/CreateFileSystemWindowsConfiguration.h>
#include <aws/fsx/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   * <p>The request object for the <code>CreateFileSystemFromBackup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemFromBackupRequest">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API CreateFileSystemFromBackupRequest : public FSxRequest
  {
  public:
    CreateFileSystemFromBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFileSystemFromBackup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }

    
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    
    inline CreateFileSystemFromBackupRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    
    inline CreateFileSystemFromBackupRequest& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    
    inline CreateFileSystemFromBackupRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}


    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) A string of up to 64 ASCII characters that Amazon FSx uses to
     * ensure idempotent creation. This string is automatically filled on your behalf
     * when you use the AWS Command Line Interface (AWS CLI) or an AWS SDK.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>A list of IDs for the subnets that the file system will be accessible from.
     * Currently, you can specify only one subnet. The file server is also launched in
     * that subnet's Availability Zone.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of IDs for the subnets that the file system will be accessible from.
     * Currently, you can specify only one subnet. The file server is also launched in
     * that subnet's Availability Zone.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of IDs for the subnets that the file system will be accessible from.
     * Currently, you can specify only one subnet. The file server is also launched in
     * that subnet's Availability Zone.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of IDs for the subnets that the file system will be accessible from.
     * Currently, you can specify only one subnet. The file server is also launched in
     * that subnet's Availability Zone.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of IDs for the subnets that the file system will be accessible from.
     * Currently, you can specify only one subnet. The file server is also launched in
     * that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of IDs for the subnets that the file system will be accessible from.
     * Currently, you can specify only one subnet. The file server is also launched in
     * that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of IDs for the subnets that the file system will be accessible from.
     * Currently, you can specify only one subnet. The file server is also launched in
     * that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of IDs for the subnets that the file system will be accessible from.
     * Currently, you can specify only one subnet. The file server is also launched in
     * that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IDs for the subnets that the file system will be accessible from.
     * Currently, you can specify only one subnet. The file server is also launched in
     * that subnet's Availability Zone.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later describe requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later describe requests.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later describe requests.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later describe requests.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later describe requests.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later describe requests.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later describe requests.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later describe requests.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IDs for the security groups that apply to the specified network
     * interfaces created for file system access. These security groups apply to all
     * network interfaces. This value isn't returned in later describe requests.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be applied to the file system at file system creation. The key
     * value of the <code>Name</code> tag appears in the console as the file system
     * name.</p>
     */
    inline CreateFileSystemFromBackupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline const CreateFileSystemWindowsConfiguration& GetWindowsConfiguration() const{ return m_windowsConfiguration; }

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline bool WindowsConfigurationHasBeenSet() const { return m_windowsConfigurationHasBeenSet; }

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline void SetWindowsConfiguration(const CreateFileSystemWindowsConfiguration& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = value; }

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline void SetWindowsConfiguration(CreateFileSystemWindowsConfiguration&& value) { m_windowsConfigurationHasBeenSet = true; m_windowsConfiguration = std::move(value); }

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithWindowsConfiguration(const CreateFileSystemWindowsConfiguration& value) { SetWindowsConfiguration(value); return *this;}

    /**
     * <p>The configuration for this Microsoft Windows file system.</p>
     */
    inline CreateFileSystemFromBackupRequest& WithWindowsConfiguration(CreateFileSystemWindowsConfiguration&& value) { SetWindowsConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    CreateFileSystemWindowsConfiguration m_windowsConfiguration;
    bool m_windowsConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
