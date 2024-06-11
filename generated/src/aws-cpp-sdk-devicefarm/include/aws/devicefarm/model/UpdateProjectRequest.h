/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/VpcConfig.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a request to the update project operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateProjectRequest">AWS
   * API Reference</a></p>
   */
  class UpdateProjectRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API UpdateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project whose name to update.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateProjectRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateProjectRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that represents the new name of the project that you are
     * updating.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes a test run in the project executes before it times
     * out.</p>
     */
    inline int GetDefaultJobTimeoutMinutes() const{ return m_defaultJobTimeoutMinutes; }
    inline bool DefaultJobTimeoutMinutesHasBeenSet() const { return m_defaultJobTimeoutMinutesHasBeenSet; }
    inline void SetDefaultJobTimeoutMinutes(int value) { m_defaultJobTimeoutMinutesHasBeenSet = true; m_defaultJobTimeoutMinutes = value; }
    inline UpdateProjectRequest& WithDefaultJobTimeoutMinutes(int value) { SetDefaultJobTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline UpdateProjectRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline UpdateProjectRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_defaultJobTimeoutMinutes;
    bool m_defaultJobTimeoutMinutesHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
