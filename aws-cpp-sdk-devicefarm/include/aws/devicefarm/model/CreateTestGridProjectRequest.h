/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestGridVpcConfig.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class CreateTestGridProjectRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API CreateTestGridProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTestGridProject"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Human-readable name of the Selenium testing project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Human-readable name of the Selenium testing project.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Human-readable name of the Selenium testing project.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Human-readable name of the Selenium testing project.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Human-readable name of the Selenium testing project.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Human-readable name of the Selenium testing project.</p>
     */
    inline CreateTestGridProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Human-readable name of the Selenium testing project.</p>
     */
    inline CreateTestGridProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Human-readable name of the Selenium testing project.</p>
     */
    inline CreateTestGridProjectRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Human-readable description of the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Human-readable description of the project.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Human-readable description of the project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-readable description of the project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Human-readable description of the project.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Human-readable description of the project.</p>
     */
    inline CreateTestGridProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of the project.</p>
     */
    inline CreateTestGridProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Human-readable description of the project.</p>
     */
    inline CreateTestGridProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline const TestGridVpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline void SetVpcConfig(const TestGridVpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline void SetVpcConfig(TestGridVpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline CreateTestGridProjectRequest& WithVpcConfig(const TestGridVpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline CreateTestGridProjectRequest& WithVpcConfig(TestGridVpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TestGridVpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
