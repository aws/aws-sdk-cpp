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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateImage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateImageRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateImageRequest : public EC2Request
  {
  public:
    CreateImageRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImage"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Information about one or more block device mappings.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>Information about one or more block device mappings.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>Information about one or more block device mappings.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>Information about one or more block device mappings.</p>
     */
    inline CreateImageRequest& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>Information about one or more block device mappings.</p>
     */
    inline CreateImageRequest& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>Information about one or more block device mappings.</p>
     */
    inline CreateImageRequest& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>Information about one or more block device mappings.</p>
     */
    inline CreateImageRequest& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A description for the new image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the new image.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the new image.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the new image.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the new image.</p>
     */
    inline CreateImageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the new image.</p>
     */
    inline CreateImageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the new image.</p>
     */
    inline CreateImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline CreateImageRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline CreateImageRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline CreateImageRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline CreateImageRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline CreateImageRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline CreateImageRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>By default, Amazon EC2 attempts to shut down and reboot the instance before
     * creating the image. If the 'No Reboot' option is set, Amazon EC2 doesn't shut
     * down the instance before creating the image. When this option is used, file
     * system integrity on the created image can't be guaranteed.</p>
     */
    inline bool GetNoReboot() const{ return m_noReboot; }

    /**
     * <p>By default, Amazon EC2 attempts to shut down and reboot the instance before
     * creating the image. If the 'No Reboot' option is set, Amazon EC2 doesn't shut
     * down the instance before creating the image. When this option is used, file
     * system integrity on the created image can't be guaranteed.</p>
     */
    inline void SetNoReboot(bool value) { m_noRebootHasBeenSet = true; m_noReboot = value; }

    /**
     * <p>By default, Amazon EC2 attempts to shut down and reboot the instance before
     * creating the image. If the 'No Reboot' option is set, Amazon EC2 doesn't shut
     * down the instance before creating the image. When this option is used, file
     * system integrity on the created image can't be guaranteed.</p>
     */
    inline CreateImageRequest& WithNoReboot(bool value) { SetNoReboot(value); return *this;}

  private:

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_noReboot;
    bool m_noRebootHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
