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
#include <aws/imagebuilder/model/InstanceMetadataOptions.h>
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
  class CreateInfrastructureConfigurationRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API CreateInfrastructureConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInfrastructureConfiguration"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability.</p>
     */
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability.</p>
     */
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability.</p>
     */
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance types of the infrastructure configuration. You can specify one
     * or more instance types to use for this build. The service will pick one of these
     * instance types based on availability.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }


    /**
     * <p>The instance profile to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline const Aws::String& GetInstanceProfileName() const{ return m_instanceProfileName; }

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline void SetInstanceProfileName(const Aws::String& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = value; }

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline void SetInstanceProfileName(Aws::String&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::move(value); }

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline void SetInstanceProfileName(const char* value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName.assign(value); }

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithInstanceProfileName(const Aws::String& value) { SetInstanceProfileName(value); return *this;}

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithInstanceProfileName(Aws::String&& value) { SetInstanceProfileName(std::move(value)); return *this;}

    /**
     * <p>The instance profile to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithInstanceProfileName(const char* value) { SetInstanceProfileName(value); return *this;}


    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The security group IDs to associate with the instance used to customize your
     * Amazon EC2 AMI.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The subnet ID in which to place the instance used to customize your Amazon
     * EC2 AMI.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet ID in which to place the instance used to customize your Amazon
     * EC2 AMI.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The subnet ID in which to place the instance used to customize your Amazon
     * EC2 AMI.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet ID in which to place the instance used to customize your Amazon
     * EC2 AMI.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The subnet ID in which to place the instance used to customize your Amazon
     * EC2 AMI.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet ID in which to place the instance used to customize your Amazon
     * EC2 AMI.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet ID in which to place the instance used to customize your Amazon
     * EC2 AMI.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet ID in which to place the instance used to customize your Amazon
     * EC2 AMI.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The logging configuration of the infrastructure configuration.</p>
     */
    inline const Logging& GetLogging() const{ return m_logging; }

    /**
     * <p>The logging configuration of the infrastructure configuration.</p>
     */
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }

    /**
     * <p>The logging configuration of the infrastructure configuration.</p>
     */
    inline void SetLogging(const Logging& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * <p>The logging configuration of the infrastructure configuration.</p>
     */
    inline void SetLogging(Logging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }

    /**
     * <p>The logging configuration of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithLogging(const Logging& value) { SetLogging(value); return *this;}

    /**
     * <p>The logging configuration of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}


    /**
     * <p>The key pair of the infrastructure configuration. You can use this to log on
     * to and debug the instance used to create your image.</p>
     */
    inline const Aws::String& GetKeyPair() const{ return m_keyPair; }

    /**
     * <p>The key pair of the infrastructure configuration. You can use this to log on
     * to and debug the instance used to create your image.</p>
     */
    inline bool KeyPairHasBeenSet() const { return m_keyPairHasBeenSet; }

    /**
     * <p>The key pair of the infrastructure configuration. You can use this to log on
     * to and debug the instance used to create your image.</p>
     */
    inline void SetKeyPair(const Aws::String& value) { m_keyPairHasBeenSet = true; m_keyPair = value; }

    /**
     * <p>The key pair of the infrastructure configuration. You can use this to log on
     * to and debug the instance used to create your image.</p>
     */
    inline void SetKeyPair(Aws::String&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::move(value); }

    /**
     * <p>The key pair of the infrastructure configuration. You can use this to log on
     * to and debug the instance used to create your image.</p>
     */
    inline void SetKeyPair(const char* value) { m_keyPairHasBeenSet = true; m_keyPair.assign(value); }

    /**
     * <p>The key pair of the infrastructure configuration. You can use this to log on
     * to and debug the instance used to create your image.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithKeyPair(const Aws::String& value) { SetKeyPair(value); return *this;}

    /**
     * <p>The key pair of the infrastructure configuration. You can use this to log on
     * to and debug the instance used to create your image.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithKeyPair(Aws::String&& value) { SetKeyPair(std::move(value)); return *this;}

    /**
     * <p>The key pair of the infrastructure configuration. You can use this to log on
     * to and debug the instance used to create your image.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithKeyPair(const char* value) { SetKeyPair(value); return *this;}


    /**
     * <p>The terminate instance on failure setting of the infrastructure
     * configuration. Set to false if you want Image Builder to retain the instance
     * used to configure your AMI if the build or test phase of your workflow
     * fails.</p>
     */
    inline bool GetTerminateInstanceOnFailure() const{ return m_terminateInstanceOnFailure; }

    /**
     * <p>The terminate instance on failure setting of the infrastructure
     * configuration. Set to false if you want Image Builder to retain the instance
     * used to configure your AMI if the build or test phase of your workflow
     * fails.</p>
     */
    inline bool TerminateInstanceOnFailureHasBeenSet() const { return m_terminateInstanceOnFailureHasBeenSet; }

    /**
     * <p>The terminate instance on failure setting of the infrastructure
     * configuration. Set to false if you want Image Builder to retain the instance
     * used to configure your AMI if the build or test phase of your workflow
     * fails.</p>
     */
    inline void SetTerminateInstanceOnFailure(bool value) { m_terminateInstanceOnFailureHasBeenSet = true; m_terminateInstanceOnFailure = value; }

    /**
     * <p>The terminate instance on failure setting of the infrastructure
     * configuration. Set to false if you want Image Builder to retain the instance
     * used to configure your AMI if the build or test phase of your workflow
     * fails.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithTerminateInstanceOnFailure(bool value) { SetTerminateInstanceOnFailure(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the SNS topic to which we send image build
     * event notifications.</p>  <p>EC2 Image Builder is unable to send
     * notifications to SNS topics that are encrypted using keys from other accounts.
     * The key that is used to encrypt the SNS topic must reside in the account that
     * the Image Builder service runs under.</p> 
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the SNS topic to which we send image build
     * event notifications.</p>  <p>EC2 Image Builder is unable to send
     * notifications to SNS topics that are encrypted using keys from other accounts.
     * The key that is used to encrypt the SNS topic must reside in the account that
     * the Image Builder service runs under.</p> 
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the SNS topic to which we send image build
     * event notifications.</p>  <p>EC2 Image Builder is unable to send
     * notifications to SNS topics that are encrypted using keys from other accounts.
     * The key that is used to encrypt the SNS topic must reside in the account that
     * the Image Builder service runs under.</p> 
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the SNS topic to which we send image build
     * event notifications.</p>  <p>EC2 Image Builder is unable to send
     * notifications to SNS topics that are encrypted using keys from other accounts.
     * The key that is used to encrypt the SNS topic must reside in the account that
     * the Image Builder service runs under.</p> 
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the SNS topic to which we send image build
     * event notifications.</p>  <p>EC2 Image Builder is unable to send
     * notifications to SNS topics that are encrypted using keys from other accounts.
     * The key that is used to encrypt the SNS topic must reside in the account that
     * the Image Builder service runs under.</p> 
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the SNS topic to which we send image build
     * event notifications.</p>  <p>EC2 Image Builder is unable to send
     * notifications to SNS topics that are encrypted using keys from other accounts.
     * The key that is used to encrypt the SNS topic must reside in the account that
     * the Image Builder service runs under.</p> 
     */
    inline CreateInfrastructureConfigurationRequest& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the SNS topic to which we send image build
     * event notifications.</p>  <p>EC2 Image Builder is unable to send
     * notifications to SNS topics that are encrypted using keys from other accounts.
     * The key that is used to encrypt the SNS topic must reside in the account that
     * the Image Builder service runs under.</p> 
     */
    inline CreateInfrastructureConfigurationRequest& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the SNS topic to which we send image build
     * event notifications.</p>  <p>EC2 Image Builder is unable to send
     * notifications to SNS topics that are encrypted using keys from other accounts.
     * The key that is used to encrypt the SNS topic must reside in the account that
     * the Image Builder service runs under.</p> 
     */
    inline CreateInfrastructureConfigurationRequest& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


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
    inline CreateInfrastructureConfigurationRequest& WithResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddResourceTags(const Aws::String& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddResourceTags(Aws::String&& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddResourceTags(const Aws::String& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddResourceTags(Aws::String&& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddResourceTags(const char* key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddResourceTags(Aws::String&& key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddResourceTags(const char* key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }


    /**
     * <p>The instance metadata options that you can set for the HTTP requests that
     * pipeline builds use to launch EC2 build and test instances.</p>
     */
    inline const InstanceMetadataOptions& GetInstanceMetadataOptions() const{ return m_instanceMetadataOptions; }

    /**
     * <p>The instance metadata options that you can set for the HTTP requests that
     * pipeline builds use to launch EC2 build and test instances.</p>
     */
    inline bool InstanceMetadataOptionsHasBeenSet() const { return m_instanceMetadataOptionsHasBeenSet; }

    /**
     * <p>The instance metadata options that you can set for the HTTP requests that
     * pipeline builds use to launch EC2 build and test instances.</p>
     */
    inline void SetInstanceMetadataOptions(const InstanceMetadataOptions& value) { m_instanceMetadataOptionsHasBeenSet = true; m_instanceMetadataOptions = value; }

    /**
     * <p>The instance metadata options that you can set for the HTTP requests that
     * pipeline builds use to launch EC2 build and test instances.</p>
     */
    inline void SetInstanceMetadataOptions(InstanceMetadataOptions&& value) { m_instanceMetadataOptionsHasBeenSet = true; m_instanceMetadataOptions = std::move(value); }

    /**
     * <p>The instance metadata options that you can set for the HTTP requests that
     * pipeline builds use to launch EC2 build and test instances.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithInstanceMetadataOptions(const InstanceMetadataOptions& value) { SetInstanceMetadataOptions(value); return *this;}

    /**
     * <p>The instance metadata options that you can set for the HTTP requests that
     * pipeline builds use to launch EC2 build and test instances.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithInstanceMetadataOptions(InstanceMetadataOptions&& value) { SetInstanceMetadataOptions(std::move(value)); return *this;}


    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline CreateInfrastructureConfigurationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline CreateInfrastructureConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    Aws::String m_instanceProfileName;
    bool m_instanceProfileNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Logging m_logging;
    bool m_loggingHasBeenSet = false;

    Aws::String m_keyPair;
    bool m_keyPairHasBeenSet = false;

    bool m_terminateInstanceOnFailure;
    bool m_terminateInstanceOnFailureHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    InstanceMetadataOptions m_instanceMetadataOptions;
    bool m_instanceMetadataOptionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
