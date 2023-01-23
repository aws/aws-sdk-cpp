/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/Logging.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/InstanceMetadataOptions.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Details of the infrastructure configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/InfrastructureConfiguration">AWS
   * API Reference</a></p>
   */
  class InfrastructureConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API InfrastructureConfiguration();
    AWS_IMAGEBUILDER_API InfrastructureConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API InfrastructureConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline InfrastructureConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithName(const char* value) { SetName(value); return *this;}


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
    inline InfrastructureConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The instance types of the infrastructure configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>The instance types of the infrastructure configuration.</p>
     */
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }

    /**
     * <p>The instance types of the infrastructure configuration.</p>
     */
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>The instance types of the infrastructure configuration.</p>
     */
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }

    /**
     * <p>The instance types of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>The instance types of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The instance types of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>The instance types of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance types of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }


    /**
     * <p>The instance profile of the infrastructure configuration.</p>
     */
    inline const Aws::String& GetInstanceProfileName() const{ return m_instanceProfileName; }

    /**
     * <p>The instance profile of the infrastructure configuration.</p>
     */
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }

    /**
     * <p>The instance profile of the infrastructure configuration.</p>
     */
    inline void SetInstanceProfileName(const Aws::String& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = value; }

    /**
     * <p>The instance profile of the infrastructure configuration.</p>
     */
    inline void SetInstanceProfileName(Aws::String&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::move(value); }

    /**
     * <p>The instance profile of the infrastructure configuration.</p>
     */
    inline void SetInstanceProfileName(const char* value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName.assign(value); }

    /**
     * <p>The instance profile of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithInstanceProfileName(const Aws::String& value) { SetInstanceProfileName(value); return *this;}

    /**
     * <p>The instance profile of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithInstanceProfileName(Aws::String&& value) { SetInstanceProfileName(std::move(value)); return *this;}

    /**
     * <p>The instance profile of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithInstanceProfileName(const char* value) { SetInstanceProfileName(value); return *this;}


    /**
     * <p>The security group IDs of the infrastructure configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The security group IDs of the infrastructure configuration.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The security group IDs of the infrastructure configuration.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The security group IDs of the infrastructure configuration.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The security group IDs of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The security group IDs of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The security group IDs of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The security group IDs of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The security group IDs of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The subnet ID of the infrastructure configuration.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet ID of the infrastructure configuration.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The subnet ID of the infrastructure configuration.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet ID of the infrastructure configuration.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The subnet ID of the infrastructure configuration.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet ID of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet ID of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet ID of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


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
    inline InfrastructureConfiguration& WithLogging(const Logging& value) { SetLogging(value); return *this;}

    /**
     * <p>The logging configuration of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}


    /**
     * <p>The Amazon EC2 key pair of the infrastructure configuration.</p>
     */
    inline const Aws::String& GetKeyPair() const{ return m_keyPair; }

    /**
     * <p>The Amazon EC2 key pair of the infrastructure configuration.</p>
     */
    inline bool KeyPairHasBeenSet() const { return m_keyPairHasBeenSet; }

    /**
     * <p>The Amazon EC2 key pair of the infrastructure configuration.</p>
     */
    inline void SetKeyPair(const Aws::String& value) { m_keyPairHasBeenSet = true; m_keyPair = value; }

    /**
     * <p>The Amazon EC2 key pair of the infrastructure configuration.</p>
     */
    inline void SetKeyPair(Aws::String&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::move(value); }

    /**
     * <p>The Amazon EC2 key pair of the infrastructure configuration.</p>
     */
    inline void SetKeyPair(const char* value) { m_keyPairHasBeenSet = true; m_keyPair.assign(value); }

    /**
     * <p>The Amazon EC2 key pair of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithKeyPair(const Aws::String& value) { SetKeyPair(value); return *this;}

    /**
     * <p>The Amazon EC2 key pair of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithKeyPair(Aws::String&& value) { SetKeyPair(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 key pair of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithKeyPair(const char* value) { SetKeyPair(value); return *this;}


    /**
     * <p>The terminate instance on failure configuration of the infrastructure
     * configuration.</p>
     */
    inline bool GetTerminateInstanceOnFailure() const{ return m_terminateInstanceOnFailure; }

    /**
     * <p>The terminate instance on failure configuration of the infrastructure
     * configuration.</p>
     */
    inline bool TerminateInstanceOnFailureHasBeenSet() const { return m_terminateInstanceOnFailureHasBeenSet; }

    /**
     * <p>The terminate instance on failure configuration of the infrastructure
     * configuration.</p>
     */
    inline void SetTerminateInstanceOnFailure(bool value) { m_terminateInstanceOnFailureHasBeenSet = true; m_terminateInstanceOnFailure = value; }

    /**
     * <p>The terminate instance on failure configuration of the infrastructure
     * configuration.</p>
     */
    inline InfrastructureConfiguration& WithTerminateInstanceOnFailure(bool value) { SetTerminateInstanceOnFailure(value); return *this;}


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
    inline InfrastructureConfiguration& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the SNS topic to which we send image build
     * event notifications.</p>  <p>EC2 Image Builder is unable to send
     * notifications to SNS topics that are encrypted using keys from other accounts.
     * The key that is used to encrypt the SNS topic must reside in the account that
     * the Image Builder service runs under.</p> 
     */
    inline InfrastructureConfiguration& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the SNS topic to which we send image build
     * event notifications.</p>  <p>EC2 Image Builder is unable to send
     * notifications to SNS topics that are encrypted using keys from other accounts.
     * The key that is used to encrypt the SNS topic must reside in the account that
     * the Image Builder service runs under.</p> 
     */
    inline InfrastructureConfiguration& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline InfrastructureConfiguration& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline InfrastructureConfiguration& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The date on which the infrastructure configuration was created.</p>
     */
    inline InfrastructureConfiguration& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline const Aws::String& GetDateUpdated() const{ return m_dateUpdated; }

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline void SetDateUpdated(const Aws::String& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline void SetDateUpdated(Aws::String&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline void SetDateUpdated(const char* value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated.assign(value); }

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline InfrastructureConfiguration& WithDateUpdated(const Aws::String& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline InfrastructureConfiguration& WithDateUpdated(Aws::String&& value) { SetDateUpdated(std::move(value)); return *this;}

    /**
     * <p>The date on which the infrastructure configuration was last updated.</p>
     */
    inline InfrastructureConfiguration& WithDateUpdated(const char* value) { SetDateUpdated(value); return *this;}


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
    inline InfrastructureConfiguration& WithResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline InfrastructureConfiguration& WithResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline InfrastructureConfiguration& AddResourceTags(const Aws::String& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline InfrastructureConfiguration& AddResourceTags(Aws::String&& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline InfrastructureConfiguration& AddResourceTags(const Aws::String& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline InfrastructureConfiguration& AddResourceTags(Aws::String&& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline InfrastructureConfiguration& AddResourceTags(const char* key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline InfrastructureConfiguration& AddResourceTags(Aws::String&& key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the resource created by Image Builder.</p>
     */
    inline InfrastructureConfiguration& AddResourceTags(const char* key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }


    /**
     * <p>The instance metadata option settings for the infrastructure
     * configuration.</p>
     */
    inline const InstanceMetadataOptions& GetInstanceMetadataOptions() const{ return m_instanceMetadataOptions; }

    /**
     * <p>The instance metadata option settings for the infrastructure
     * configuration.</p>
     */
    inline bool InstanceMetadataOptionsHasBeenSet() const { return m_instanceMetadataOptionsHasBeenSet; }

    /**
     * <p>The instance metadata option settings for the infrastructure
     * configuration.</p>
     */
    inline void SetInstanceMetadataOptions(const InstanceMetadataOptions& value) { m_instanceMetadataOptionsHasBeenSet = true; m_instanceMetadataOptions = value; }

    /**
     * <p>The instance metadata option settings for the infrastructure
     * configuration.</p>
     */
    inline void SetInstanceMetadataOptions(InstanceMetadataOptions&& value) { m_instanceMetadataOptionsHasBeenSet = true; m_instanceMetadataOptions = std::move(value); }

    /**
     * <p>The instance metadata option settings for the infrastructure
     * configuration.</p>
     */
    inline InfrastructureConfiguration& WithInstanceMetadataOptions(const InstanceMetadataOptions& value) { SetInstanceMetadataOptions(value); return *this;}

    /**
     * <p>The instance metadata option settings for the infrastructure
     * configuration.</p>
     */
    inline InfrastructureConfiguration& WithInstanceMetadataOptions(InstanceMetadataOptions&& value) { SetInstanceMetadataOptions(std::move(value)); return *this;}


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
    inline InfrastructureConfiguration& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the infrastructure configuration.</p>
     */
    inline InfrastructureConfiguration& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

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

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::String m_dateUpdated;
    bool m_dateUpdatedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    InstanceMetadataOptions m_instanceMetadataOptions;
    bool m_instanceMetadataOptionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
