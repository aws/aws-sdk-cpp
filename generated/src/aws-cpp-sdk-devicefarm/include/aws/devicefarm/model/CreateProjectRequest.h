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
   * <p>Represents a request to the create project operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateProjectRequest">AWS
   * API Reference</a></p>
   */
  class CreateProjectRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API CreateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The project's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The project's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The project's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The project's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The project's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The project's name.</p>
     */
    inline CreateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The project's name.</p>
     */
    inline CreateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The project's name.</p>
     */
    inline CreateProjectRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Sets the execution timeout value (in minutes) for a project. All test runs in
     * this project use the specified execution timeout value unless overridden when
     * scheduling a run.</p>
     */
    inline int GetDefaultJobTimeoutMinutes() const{ return m_defaultJobTimeoutMinutes; }

    /**
     * <p>Sets the execution timeout value (in minutes) for a project. All test runs in
     * this project use the specified execution timeout value unless overridden when
     * scheduling a run.</p>
     */
    inline bool DefaultJobTimeoutMinutesHasBeenSet() const { return m_defaultJobTimeoutMinutesHasBeenSet; }

    /**
     * <p>Sets the execution timeout value (in minutes) for a project. All test runs in
     * this project use the specified execution timeout value unless overridden when
     * scheduling a run.</p>
     */
    inline void SetDefaultJobTimeoutMinutes(int value) { m_defaultJobTimeoutMinutesHasBeenSet = true; m_defaultJobTimeoutMinutes = value; }

    /**
     * <p>Sets the execution timeout value (in minutes) for a project. All test runs in
     * this project use the specified execution timeout value unless overridden when
     * scheduling a run.</p>
     */
    inline CreateProjectRequest& WithDefaultJobTimeoutMinutes(int value) { SetDefaultJobTimeoutMinutes(value); return *this;}


    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline CreateProjectRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline CreateProjectRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}

  private:

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
