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
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/Ec2Config.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>CreateLocationEfsRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationEfsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API CreateLocationEfsRequest : public DataSyncRequest
  {
  public:
    CreateLocationEfsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationEfs"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the EFS file
     * system is used to read data from the EFS source location or write data to the
     * EFS destination. By default, AWS DataSync uses the root directory.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the EFS file
     * system is used to read data from the EFS source location or write data to the
     * EFS destination. By default, AWS DataSync uses the root directory.</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the EFS file
     * system is used to read data from the EFS source location or write data to the
     * EFS destination. By default, AWS DataSync uses the root directory.</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the EFS file
     * system is used to read data from the EFS source location or write data to the
     * EFS destination. By default, AWS DataSync uses the root directory.</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the EFS file
     * system is used to read data from the EFS source location or write data to the
     * EFS destination. By default, AWS DataSync uses the root directory.</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the EFS file
     * system is used to read data from the EFS source location or write data to the
     * EFS destination. By default, AWS DataSync uses the root directory.</p>
     */
    inline CreateLocationEfsRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the EFS file
     * system is used to read data from the EFS source location or write data to the
     * EFS destination. By default, AWS DataSync uses the root directory.</p>
     */
    inline CreateLocationEfsRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the EFS file
     * system is used to read data from the EFS source location or write data to the
     * EFS destination. By default, AWS DataSync uses the root directory.</p>
     */
    inline CreateLocationEfsRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon EFS file system.</p>
     */
    inline const Aws::String& GetEfsFilesystemArn() const{ return m_efsFilesystemArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon EFS file system.</p>
     */
    inline bool EfsFilesystemArnHasBeenSet() const { return m_efsFilesystemArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon EFS file system.</p>
     */
    inline void SetEfsFilesystemArn(const Aws::String& value) { m_efsFilesystemArnHasBeenSet = true; m_efsFilesystemArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon EFS file system.</p>
     */
    inline void SetEfsFilesystemArn(Aws::String&& value) { m_efsFilesystemArnHasBeenSet = true; m_efsFilesystemArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon EFS file system.</p>
     */
    inline void SetEfsFilesystemArn(const char* value) { m_efsFilesystemArnHasBeenSet = true; m_efsFilesystemArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithEfsFilesystemArn(const Aws::String& value) { SetEfsFilesystemArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithEfsFilesystemArn(Aws::String&& value) { SetEfsFilesystemArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Amazon EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithEfsFilesystemArn(const char* value) { SetEfsFilesystemArn(value); return *this;}


    /**
     * <p>The subnet and security group that the Amazon EFS file system uses. The
     * security group that you provide needs to be able to communicate with the
     * security group on the mount target in the subnet specified.</p> <p>The exact
     * relationship between security group M (of the mount target) and security group S
     * (which you provide for DataSync to use at this stage) is as follows: </p> <ul>
     * <li> <p> Security group M (which you associate with the mount target) must allow
     * inbound access for the Transmission Control Protocol (TCP) on the NFS port
     * (2049) from security group S. You can enable inbound connections either by IP
     * address (CIDR range) or security group. </p> </li> <li> <p>Security group S
     * (provided to DataSync to access EFS) should have a rule that enables outbound
     * connections to the NFS port on one of the file system’s mount targets. You can
     * enable outbound connections either by IP address (CIDR range) or security
     * group.</p> <p>For information about security groups and mount targets, see
     * "https://docs.aws.amazon.com/efs/latest/ug/security-considerations.html#network-access"
     * (Security Groups for Amazon EC2 Instances and Mount Targets) in the <i>Amazon
     * EFS User Guide</i>.</p> </li> </ul>
     */
    inline const Ec2Config& GetEc2Config() const{ return m_ec2Config; }

    /**
     * <p>The subnet and security group that the Amazon EFS file system uses. The
     * security group that you provide needs to be able to communicate with the
     * security group on the mount target in the subnet specified.</p> <p>The exact
     * relationship between security group M (of the mount target) and security group S
     * (which you provide for DataSync to use at this stage) is as follows: </p> <ul>
     * <li> <p> Security group M (which you associate with the mount target) must allow
     * inbound access for the Transmission Control Protocol (TCP) on the NFS port
     * (2049) from security group S. You can enable inbound connections either by IP
     * address (CIDR range) or security group. </p> </li> <li> <p>Security group S
     * (provided to DataSync to access EFS) should have a rule that enables outbound
     * connections to the NFS port on one of the file system’s mount targets. You can
     * enable outbound connections either by IP address (CIDR range) or security
     * group.</p> <p>For information about security groups and mount targets, see
     * "https://docs.aws.amazon.com/efs/latest/ug/security-considerations.html#network-access"
     * (Security Groups for Amazon EC2 Instances and Mount Targets) in the <i>Amazon
     * EFS User Guide</i>.</p> </li> </ul>
     */
    inline bool Ec2ConfigHasBeenSet() const { return m_ec2ConfigHasBeenSet; }

    /**
     * <p>The subnet and security group that the Amazon EFS file system uses. The
     * security group that you provide needs to be able to communicate with the
     * security group on the mount target in the subnet specified.</p> <p>The exact
     * relationship between security group M (of the mount target) and security group S
     * (which you provide for DataSync to use at this stage) is as follows: </p> <ul>
     * <li> <p> Security group M (which you associate with the mount target) must allow
     * inbound access for the Transmission Control Protocol (TCP) on the NFS port
     * (2049) from security group S. You can enable inbound connections either by IP
     * address (CIDR range) or security group. </p> </li> <li> <p>Security group S
     * (provided to DataSync to access EFS) should have a rule that enables outbound
     * connections to the NFS port on one of the file system’s mount targets. You can
     * enable outbound connections either by IP address (CIDR range) or security
     * group.</p> <p>For information about security groups and mount targets, see
     * "https://docs.aws.amazon.com/efs/latest/ug/security-considerations.html#network-access"
     * (Security Groups for Amazon EC2 Instances and Mount Targets) in the <i>Amazon
     * EFS User Guide</i>.</p> </li> </ul>
     */
    inline void SetEc2Config(const Ec2Config& value) { m_ec2ConfigHasBeenSet = true; m_ec2Config = value; }

    /**
     * <p>The subnet and security group that the Amazon EFS file system uses. The
     * security group that you provide needs to be able to communicate with the
     * security group on the mount target in the subnet specified.</p> <p>The exact
     * relationship between security group M (of the mount target) and security group S
     * (which you provide for DataSync to use at this stage) is as follows: </p> <ul>
     * <li> <p> Security group M (which you associate with the mount target) must allow
     * inbound access for the Transmission Control Protocol (TCP) on the NFS port
     * (2049) from security group S. You can enable inbound connections either by IP
     * address (CIDR range) or security group. </p> </li> <li> <p>Security group S
     * (provided to DataSync to access EFS) should have a rule that enables outbound
     * connections to the NFS port on one of the file system’s mount targets. You can
     * enable outbound connections either by IP address (CIDR range) or security
     * group.</p> <p>For information about security groups and mount targets, see
     * "https://docs.aws.amazon.com/efs/latest/ug/security-considerations.html#network-access"
     * (Security Groups for Amazon EC2 Instances and Mount Targets) in the <i>Amazon
     * EFS User Guide</i>.</p> </li> </ul>
     */
    inline void SetEc2Config(Ec2Config&& value) { m_ec2ConfigHasBeenSet = true; m_ec2Config = std::move(value); }

    /**
     * <p>The subnet and security group that the Amazon EFS file system uses. The
     * security group that you provide needs to be able to communicate with the
     * security group on the mount target in the subnet specified.</p> <p>The exact
     * relationship between security group M (of the mount target) and security group S
     * (which you provide for DataSync to use at this stage) is as follows: </p> <ul>
     * <li> <p> Security group M (which you associate with the mount target) must allow
     * inbound access for the Transmission Control Protocol (TCP) on the NFS port
     * (2049) from security group S. You can enable inbound connections either by IP
     * address (CIDR range) or security group. </p> </li> <li> <p>Security group S
     * (provided to DataSync to access EFS) should have a rule that enables outbound
     * connections to the NFS port on one of the file system’s mount targets. You can
     * enable outbound connections either by IP address (CIDR range) or security
     * group.</p> <p>For information about security groups and mount targets, see
     * "https://docs.aws.amazon.com/efs/latest/ug/security-considerations.html#network-access"
     * (Security Groups for Amazon EC2 Instances and Mount Targets) in the <i>Amazon
     * EFS User Guide</i>.</p> </li> </ul>
     */
    inline CreateLocationEfsRequest& WithEc2Config(const Ec2Config& value) { SetEc2Config(value); return *this;}

    /**
     * <p>The subnet and security group that the Amazon EFS file system uses. The
     * security group that you provide needs to be able to communicate with the
     * security group on the mount target in the subnet specified.</p> <p>The exact
     * relationship between security group M (of the mount target) and security group S
     * (which you provide for DataSync to use at this stage) is as follows: </p> <ul>
     * <li> <p> Security group M (which you associate with the mount target) must allow
     * inbound access for the Transmission Control Protocol (TCP) on the NFS port
     * (2049) from security group S. You can enable inbound connections either by IP
     * address (CIDR range) or security group. </p> </li> <li> <p>Security group S
     * (provided to DataSync to access EFS) should have a rule that enables outbound
     * connections to the NFS port on one of the file system’s mount targets. You can
     * enable outbound connections either by IP address (CIDR range) or security
     * group.</p> <p>For information about security groups and mount targets, see
     * "https://docs.aws.amazon.com/efs/latest/ug/security-considerations.html#network-access"
     * (Security Groups for Amazon EC2 Instances and Mount Targets) in the <i>Amazon
     * EFS User Guide</i>.</p> </li> </ul>
     */
    inline CreateLocationEfsRequest& WithEc2Config(Ec2Config&& value) { SetEc2Config(std::move(value)); return *this;}


    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline CreateLocationEfsRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline CreateLocationEfsRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline CreateLocationEfsRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline CreateLocationEfsRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet;

    Aws::String m_efsFilesystemArn;
    bool m_efsFilesystemArnHasBeenSet;

    Ec2Config m_ec2Config;
    bool m_ec2ConfigHasBeenSet;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
