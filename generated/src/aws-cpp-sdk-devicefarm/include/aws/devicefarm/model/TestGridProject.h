/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestGridVpcConfig.h>
#include <aws/core/utils/DateTime.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>A Selenium testing project. Projects are used to collect and collate
   * sessions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/TestGridProject">AWS
   * API Reference</a></p>
   */
  class TestGridProject
  {
  public:
    AWS_DEVICEFARM_API TestGridProject();
    AWS_DEVICEFARM_API TestGridProject(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API TestGridProject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN for the project.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the project.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN for the project.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN for the project.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN for the project.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN for the project.</p>
     */
    inline TestGridProject& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the project.</p>
     */
    inline TestGridProject& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the project.</p>
     */
    inline TestGridProject& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A human-readable name for the project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A human-readable name for the project.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A human-readable name for the project.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A human-readable name for the project.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A human-readable name for the project.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A human-readable name for the project.</p>
     */
    inline TestGridProject& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A human-readable name for the project.</p>
     */
    inline TestGridProject& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A human-readable name for the project.</p>
     */
    inline TestGridProject& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A human-readable description for the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A human-readable description for the project.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A human-readable description for the project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A human-readable description for the project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A human-readable description for the project.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A human-readable description for the project.</p>
     */
    inline TestGridProject& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A human-readable description for the project.</p>
     */
    inline TestGridProject& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A human-readable description for the project.</p>
     */
    inline TestGridProject& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline TestGridProject& WithVpcConfig(const TestGridVpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline TestGridProject& WithVpcConfig(TestGridVpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>When the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>When the project was created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>When the project was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>When the project was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>When the project was created.</p>
     */
    inline TestGridProject& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>When the project was created.</p>
     */
    inline TestGridProject& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TestGridVpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
