/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/Logging.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class AWS_IMAGEBUILDER_API UpdateInfrastructureConfigurationRequest : public ImagebuilderRequest
  {
  public:
    UpdateInfrastructureConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInfrastructureConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that you
     * want to update. </p>
     */
    inline const Aws::String& GetInfrastructureConfigurationArn() const{ return m_infrastructureConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that you
     * want to update. </p>
     */
    inline bool InfrastructureConfigurationArnHasBeenSet() const { return m_infrastructureConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that you
     * want to update. </p>
     */
    inline void SetInfrastructureConfigurationArn(const Aws::String& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that you
     * want to update. </p>
     */
    inline void SetInfrastructureConfigurationArn(Aws::String&& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that you
     * want to update. </p>
     */
    inline void SetInfrastructureConfigurationArn(const char* value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that you
     * want to update. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithInfrastructureConfigurationArn(const Aws::String& value) { SetInfrastructureConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that you
     * want to update. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithInfrastructureConfigurationArn(Aws::String&& value) { SetInfrastructureConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that you
     * want to update. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithInfrastructureConfigurationArn(const char* value) { SetInfrastructureConfigurationArn(value); return *this;}


    /**
     * <p>The description of the infrastructure configuration. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the infrastructure configuration. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the infrastructure configuration. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the infrastructure configuration. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the infrastructure configuration. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the infrastructure configuration. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the infrastructure configuration. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the infrastructure configuration. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability. </p>
     */
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability. </p>
     */
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability. </p>
     */
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }


    /**
     * <p>The instance profile to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline const Aws::String& GetInstanceProfileName() const{ return m_instanceProfileName; }

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline void SetInstanceProfileName(const Aws::String& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = value; }

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline void SetInstanceProfileName(Aws::String&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::move(value); }

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline void SetInstanceProfileName(const char* value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName.assign(value); }

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithInstanceProfileName(const Aws::String& value) { SetInstanceProfileName(value); return *this;}

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithInstanceProfileName(Aws::String&& value) { SetInstanceProfileName(std::move(value)); return *this;}

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithInstanceProfileName(const char* value) { SetInstanceProfileName(value); return *this;}


    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * EC2 AMI. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The subnet ID to place the instance used to customize your EC2 AMI in. </p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet ID to place the instance used to customize your EC2 AMI in. </p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The subnet ID to place the instance used to customize your EC2 AMI in. </p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet ID to place the instance used to customize your EC2 AMI in. </p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The subnet ID to place the instance used to customize your EC2 AMI in. </p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet ID to place the instance used to customize your EC2 AMI in. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet ID to place the instance used to customize your EC2 AMI in. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet ID to place the instance used to customize your EC2 AMI in. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The logging configuration of the infrastructure configuration. </p>
     */
    inline const Logging& GetLogging() const{ return m_logging; }

    /**
     * <p>The logging configuration of the infrastructure configuration. </p>
     */
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }

    /**
     * <p>The logging configuration of the infrastructure configuration. </p>
     */
    inline void SetLogging(const Logging& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * <p>The logging configuration of the infrastructure configuration. </p>
     */
    inline void SetLogging(Logging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }

    /**
     * <p>The logging configuration of the infrastructure configuration. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithLogging(const Logging& value) { SetLogging(value); return *this;}

    /**
     * <p>The logging configuration of the infrastructure configuration. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}


    /**
     * <p>The key pair of the infrastructure configuration. This can be used to log on
     * to and debug the instance used to create your image. </p>
     */
    inline const Aws::String& GetKeyPair() const{ return m_keyPair; }

    /**
     * <p>The key pair of the infrastructure configuration. This can be used to log on
     * to and debug the instance used to create your image. </p>
     */
    inline bool KeyPairHasBeenSet() const { return m_keyPairHasBeenSet; }

    /**
     * <p>The key pair of the infrastructure configuration. This can be used to log on
     * to and debug the instance used to create your image. </p>
     */
    inline void SetKeyPair(const Aws::String& value) { m_keyPairHasBeenSet = true; m_keyPair = value; }

    /**
     * <p>The key pair of the infrastructure configuration. This can be used to log on
     * to and debug the instance used to create your image. </p>
     */
    inline void SetKeyPair(Aws::String&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::move(value); }

    /**
     * <p>The key pair of the infrastructure configuration. This can be used to log on
     * to and debug the instance used to create your image. </p>
     */
    inline void SetKeyPair(const char* value) { m_keyPairHasBeenSet = true; m_keyPair.assign(value); }

    /**
     * <p>The key pair of the infrastructure configuration. This can be used to log on
     * to and debug the instance used to create your image. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithKeyPair(const Aws::String& value) { SetKeyPair(value); return *this;}

    /**
     * <p>The key pair of the infrastructure configuration. This can be used to log on
     * to and debug the instance used to create your image. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithKeyPair(Aws::String&& value) { SetKeyPair(std::move(value)); return *this;}

    /**
     * <p>The key pair of the infrastructure configuration. This can be used to log on
     * to and debug the instance used to create your image. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithKeyPair(const char* value) { SetKeyPair(value); return *this;}


    /**
     * <p>The terminate instance on failure setting of the infrastructure
     * configuration. Set to false if you want Image Builder to retain the instance
     * used to configure your AMI if the build or test phase of your workflow fails.
     * </p>
     */
    inline bool GetTerminateInstanceOnFailure() const{ return m_terminateInstanceOnFailure; }

    /**
     * <p>The terminate instance on failure setting of the infrastructure
     * configuration. Set to false if you want Image Builder to retain the instance
     * used to configure your AMI if the build or test phase of your workflow fails.
     * </p>
     */
    inline bool TerminateInstanceOnFailureHasBeenSet() const { return m_terminateInstanceOnFailureHasBeenSet; }

    /**
     * <p>The terminate instance on failure setting of the infrastructure
     * configuration. Set to false if you want Image Builder to retain the instance
     * used to configure your AMI if the build or test phase of your workflow fails.
     * </p>
     */
    inline void SetTerminateInstanceOnFailure(bool value) { m_terminateInstanceOnFailureHasBeenSet = true; m_terminateInstanceOnFailure = value; }

    /**
     * <p>The terminate instance on failure setting of the infrastructure
     * configuration. Set to false if you want Image Builder to retain the instance
     * used to configure your AMI if the build or test phase of your workflow fails.
     * </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithTerminateInstanceOnFailure(bool value) { SetTerminateInstanceOnFailure(value); return *this;}


    /**
     * <p>The SNS topic on which to send image build events. </p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The SNS topic on which to send image build events. </p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The SNS topic on which to send image build events. </p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The SNS topic on which to send image build events. </p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The SNS topic on which to send image build events. </p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The SNS topic on which to send image build events. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The SNS topic on which to send image build events. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The SNS topic on which to send image build events. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>The idempotency token used to make this request idempotent. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token used to make this request idempotent. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token used to make this request idempotent. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token used to make this request idempotent. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token used to make this request idempotent. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token used to make this request idempotent. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent. </p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline void SetResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline void SetResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline UpdateInfrastructureConfigurationRequest& WithResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline UpdateInfrastructureConfigurationRequest& AddResourceTags(const Aws::String& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline UpdateInfrastructureConfigurationRequest& AddResourceTags(Aws::String&& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline UpdateInfrastructureConfigurationRequest& AddResourceTags(const Aws::String& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline UpdateInfrastructureConfigurationRequest& AddResourceTags(Aws::String&& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline UpdateInfrastructureConfigurationRequest& AddResourceTags(const char* key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline UpdateInfrastructureConfigurationRequest& AddResourceTags(Aws::String&& key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline UpdateInfrastructureConfigurationRequest& AddResourceTags(const char* key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }

  private:

    Aws::String m_infrastructureConfigurationArn;
    bool m_infrastructureConfigurationArnHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet;

    Aws::String m_instanceProfileName;
    bool m_instanceProfileNameHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Logging m_logging;
    bool m_loggingHasBeenSet;

    Aws::String m_keyPair;
    bool m_keyPairHasBeenSet;

    bool m_terminateInstanceOnFailure;
    bool m_terminateInstanceOnFailureHasBeenSet;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_resourceTags;
    bool m_resourceTagsHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
