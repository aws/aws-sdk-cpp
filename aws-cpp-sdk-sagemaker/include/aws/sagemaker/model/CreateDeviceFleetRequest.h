/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EdgeOutputConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateDeviceFleetRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateDeviceFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeviceFleet"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = value; }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::move(value); }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName.assign(value); }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline CreateDeviceFleetRequest& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline CreateDeviceFleetRequest& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline CreateDeviceFleetRequest& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that has access to Amazon Web Services
     * Internet of Things (IoT).</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to Amazon Web Services
     * Internet of Things (IoT).</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to Amazon Web Services
     * Internet of Things (IoT).</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to Amazon Web Services
     * Internet of Things (IoT).</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to Amazon Web Services
     * Internet of Things (IoT).</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that has access to Amazon Web Services
     * Internet of Things (IoT).</p>
     */
    inline CreateDeviceFleetRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that has access to Amazon Web Services
     * Internet of Things (IoT).</p>
     */
    inline CreateDeviceFleetRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that has access to Amazon Web Services
     * Internet of Things (IoT).</p>
     */
    inline CreateDeviceFleetRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the fleet.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the fleet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the fleet.</p>
     */
    inline CreateDeviceFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the fleet.</p>
     */
    inline CreateDeviceFleetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the fleet.</p>
     */
    inline CreateDeviceFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The output configuration for storing sample data collected by the fleet.</p>
     */
    inline const EdgeOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The output configuration for storing sample data collected by the fleet.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>The output configuration for storing sample data collected by the fleet.</p>
     */
    inline void SetOutputConfig(const EdgeOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>The output configuration for storing sample data collected by the fleet.</p>
     */
    inline void SetOutputConfig(EdgeOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>The output configuration for storing sample data collected by the fleet.</p>
     */
    inline CreateDeviceFleetRequest& WithOutputConfig(const EdgeOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The output configuration for storing sample data collected by the fleet.</p>
     */
    inline CreateDeviceFleetRequest& WithOutputConfig(EdgeOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>Creates tags for the specified fleet.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Creates tags for the specified fleet.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Creates tags for the specified fleet.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Creates tags for the specified fleet.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Creates tags for the specified fleet.</p>
     */
    inline CreateDeviceFleetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Creates tags for the specified fleet.</p>
     */
    inline CreateDeviceFleetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Creates tags for the specified fleet.</p>
     */
    inline CreateDeviceFleetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Creates tags for the specified fleet.</p>
     */
    inline CreateDeviceFleetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether to create an Amazon Web Services IoT Role Alias during device fleet
     * creation. The name of the role alias generated will match this pattern:
     * "SageMakerEdge-{DeviceFleetName}".</p> <p>For example, if your device fleet is
     * called "demo-fleet", the name of the role alias will be
     * "SageMakerEdge-demo-fleet".</p>
     */
    inline bool GetEnableIotRoleAlias() const{ return m_enableIotRoleAlias; }

    /**
     * <p>Whether to create an Amazon Web Services IoT Role Alias during device fleet
     * creation. The name of the role alias generated will match this pattern:
     * "SageMakerEdge-{DeviceFleetName}".</p> <p>For example, if your device fleet is
     * called "demo-fleet", the name of the role alias will be
     * "SageMakerEdge-demo-fleet".</p>
     */
    inline bool EnableIotRoleAliasHasBeenSet() const { return m_enableIotRoleAliasHasBeenSet; }

    /**
     * <p>Whether to create an Amazon Web Services IoT Role Alias during device fleet
     * creation. The name of the role alias generated will match this pattern:
     * "SageMakerEdge-{DeviceFleetName}".</p> <p>For example, if your device fleet is
     * called "demo-fleet", the name of the role alias will be
     * "SageMakerEdge-demo-fleet".</p>
     */
    inline void SetEnableIotRoleAlias(bool value) { m_enableIotRoleAliasHasBeenSet = true; m_enableIotRoleAlias = value; }

    /**
     * <p>Whether to create an Amazon Web Services IoT Role Alias during device fleet
     * creation. The name of the role alias generated will match this pattern:
     * "SageMakerEdge-{DeviceFleetName}".</p> <p>For example, if your device fleet is
     * called "demo-fleet", the name of the role alias will be
     * "SageMakerEdge-demo-fleet".</p>
     */
    inline CreateDeviceFleetRequest& WithEnableIotRoleAlias(bool value) { SetEnableIotRoleAlias(value); return *this;}

  private:

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EdgeOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_enableIotRoleAlias;
    bool m_enableIotRoleAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
