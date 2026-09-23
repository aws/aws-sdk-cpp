/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/InstanceMetadataOptions.h>
#include <aws/imagebuilder/model/Logging.h>
#include <aws/imagebuilder/model/Placement.h>

#include <utility>

namespace Aws {
namespace imagebuilder {
namespace Model {

/**
 */
class CreateInfrastructureConfigurationRequest : public ImagebuilderRequest {
 public:
  AWS_IMAGEBUILDER_API CreateInfrastructureConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateInfrastructureConfiguration"; }

  AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the infrastructure configuration. Infrastructure configuration
   * names must be unique to your account in each Amazon Web Services Region. Image
   * Builder generates the infrastructure configuration ARN from a normalized form of
   * the name, so names that differ only in case, spaces, or underscores count as the
   * same name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateInfrastructureConfigurationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the infrastructure configuration.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateInfrastructureConfigurationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance types of the infrastructure configuration. You can specify one
   * or more instance types to use for this build. Image Builder picks one of these
   * instance types based on availability. If you don't specify instance types, Image
   * Builder selects compatible instance types automatically. If you specify a
   * Dedicated Host, Image Builder uses only instance types that the host
   * supports.</p>
   */
  inline const Aws::Vector<Aws::String>& GetInstanceTypes() const { return m_instanceTypes; }
  inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
  template <typename InstanceTypesT = Aws::Vector<Aws::String>>
  void SetInstanceTypes(InstanceTypesT&& value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes = std::forward<InstanceTypesT>(value);
  }
  template <typename InstanceTypesT = Aws::Vector<Aws::String>>
  CreateInfrastructureConfigurationRequest& WithInstanceTypes(InstanceTypesT&& value) {
    SetInstanceTypes(std::forward<InstanceTypesT>(value));
    return *this;
  }
  template <typename InstanceTypesT = Aws::String>
  CreateInfrastructureConfigurationRequest& AddInstanceTypes(InstanceTypesT&& value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes.emplace_back(std::forward<InstanceTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance profile to associate with the instance used to customize your
   * Amazon EC2 AMI. The instance profile must exist in your account.</p>
   */
  inline const Aws::String& GetInstanceProfileName() const { return m_instanceProfileName; }
  inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }
  template <typename InstanceProfileNameT = Aws::String>
  void SetInstanceProfileName(InstanceProfileNameT&& value) {
    m_instanceProfileNameHasBeenSet = true;
    m_instanceProfileName = std::forward<InstanceProfileNameT>(value);
  }
  template <typename InstanceProfileNameT = Aws::String>
  CreateInfrastructureConfigurationRequest& WithInstanceProfileName(InstanceProfileNameT&& value) {
    SetInstanceProfileName(std::forward<InstanceProfileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security group IDs to associate with the instance used to customize your
   * Amazon EC2 AMI.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  CreateInfrastructureConfigurationRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  CreateInfrastructureConfigurationRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subnet ID in which to place the instance used to customize your Amazon
   * EC2 AMI. If you specify <code>subnetId</code>, you must also specify one or more
   * security group IDs in <code>securityGroupIds</code>. Otherwise, the request
   * fails.</p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  CreateInfrastructureConfigurationRequest& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logging configuration of the infrastructure configuration. When you
   * configure S3 logs, Image Builder writes logs from the build and test process to
   * the specified bucket under the key prefix.</p>
   */
  inline const Logging& GetLogging() const { return m_logging; }
  inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
  template <typename LoggingT = Logging>
  void SetLogging(LoggingT&& value) {
    m_loggingHasBeenSet = true;
    m_logging = std::forward<LoggingT>(value);
  }
  template <typename LoggingT = Logging>
  CreateInfrastructureConfigurationRequest& WithLogging(LoggingT&& value) {
    SetLogging(std::forward<LoggingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key pair of the infrastructure configuration. You can use this to log on
   * to and debug the instance used to create your image.</p>
   */
  inline const Aws::String& GetKeyPair() const { return m_keyPair; }
  inline bool KeyPairHasBeenSet() const { return m_keyPairHasBeenSet; }
  template <typename KeyPairT = Aws::String>
  void SetKeyPair(KeyPairT&& value) {
    m_keyPairHasBeenSet = true;
    m_keyPair = std::forward<KeyPairT>(value);
  }
  template <typename KeyPairT = Aws::String>
  CreateInfrastructureConfigurationRequest& WithKeyPair(KeyPairT&& value) {
    SetKeyPair(std::forward<KeyPairT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to terminate the instance on failure. Set to false if you
   * want Image Builder to retain the instance used to configure your AMI if the
   * build or test phase of your workflow fails. Defaults to <code>true</code>.</p>
   */
  inline bool GetTerminateInstanceOnFailure() const { return m_terminateInstanceOnFailure; }
  inline bool TerminateInstanceOnFailureHasBeenSet() const { return m_terminateInstanceOnFailureHasBeenSet; }
  inline void SetTerminateInstanceOnFailure(bool value) {
    m_terminateInstanceOnFailureHasBeenSet = true;
    m_terminateInstanceOnFailure = value;
  }
  inline CreateInfrastructureConfigurationRequest& WithTerminateInstanceOnFailure(bool value) {
    SetTerminateInstanceOnFailure(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the SNS topic to which Image Builder sends
   * image build event notifications. Specify a standard topic. Image Builder doesn't
   * support FIFO topics. Image Builder validates the topic when you create or update
   * the configuration. You must have permission to publish to the topic.</p>
   * <p>EC2 Image Builder can't send notifications to SNS topics that are encrypted
   * using keys from other accounts. If your SNS topic is encrypted, the key must be
   * owned by the same account that owns your Image Builder resources.</p>
   */
  inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
  inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
  template <typename SnsTopicArnT = Aws::String>
  void SetSnsTopicArn(SnsTopicArnT&& value) {
    m_snsTopicArnHasBeenSet = true;
    m_snsTopicArn = std::forward<SnsTopicArnT>(value);
  }
  template <typename SnsTopicArnT = Aws::String>
  CreateInfrastructureConfigurationRequest& WithSnsTopicArn(SnsTopicArnT&& value) {
    SetSnsTopicArn(std::forward<SnsTopicArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata tags to assign to the Amazon EC2 instance that Image Builder
   * launches during the build process. Tags are formatted as key value pairs. Tag
   * keys can't begin with <code>aws:</code> or match one of the following reserved
   * keys: <code>CreatedBy</code>, <code>Ec2ImageBuilderArn</code>,
   * <code>Name</code>, or <code>Tags</code>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetResourceTags() const { return m_resourceTags; }
  inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
  template <typename ResourceTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags = std::forward<ResourceTagsT>(value);
  }
  template <typename ResourceTagsT = Aws::Map<Aws::String, Aws::String>>
  CreateInfrastructureConfigurationRequest& WithResourceTags(ResourceTagsT&& value) {
    SetResourceTags(std::forward<ResourceTagsT>(value));
    return *this;
  }
  template <typename ResourceTagsKeyT = Aws::String, typename ResourceTagsValueT = Aws::String>
  CreateInfrastructureConfigurationRequest& AddResourceTags(ResourceTagsKeyT&& key, ResourceTagsValueT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags.emplace(std::forward<ResourceTagsKeyT>(key), std::forward<ResourceTagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance metadata service (IMDS) settings that Image Builder applies to
   * the EC2 build and test instances it launches during image creation. If you don't
   * set these options, the EC2 launch defaults for the instance apply. For more
   * information about instance metadata options, see one of the following links:</p>
   * <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-instance-metadata-options.html">Configure
   * the instance metadata options</a> in the <i> <i>Amazon EC2 User Guide</i> </i>
   * for Linux instances.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/configuring-instance-metadata-options.html">Configure
   * the instance metadata options</a> in the <i> <i>Amazon EC2 Windows Guide</i>
   * </i> for Windows instances.</p> </li> </ul>
   */
  inline const InstanceMetadataOptions& GetInstanceMetadataOptions() const { return m_instanceMetadataOptions; }
  inline bool InstanceMetadataOptionsHasBeenSet() const { return m_instanceMetadataOptionsHasBeenSet; }
  template <typename InstanceMetadataOptionsT = InstanceMetadataOptions>
  void SetInstanceMetadataOptions(InstanceMetadataOptionsT&& value) {
    m_instanceMetadataOptionsHasBeenSet = true;
    m_instanceMetadataOptions = std::forward<InstanceMetadataOptionsT>(value);
  }
  template <typename InstanceMetadataOptionsT = InstanceMetadataOptions>
  CreateInfrastructureConfigurationRequest& WithInstanceMetadataOptions(InstanceMetadataOptionsT&& value) {
    SetInstanceMetadataOptions(std::forward<InstanceMetadataOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata tags to assign to the infrastructure configuration resource that
   * Image Builder creates as output. Tags are formatted as key value pairs.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateInfrastructureConfigurationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateInfrastructureConfigurationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance placement settings that define where the build and test
   * instances that Image Builder launches during image creation run. These settings
   * don't affect instances that you launch from the output image.</p>
   */
  inline const Placement& GetPlacement() const { return m_placement; }
  inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
  template <typename PlacementT = Placement>
  void SetPlacement(PlacementT&& value) {
    m_placementHasBeenSet = true;
    m_placement = std::forward<PlacementT>(value);
  }
  template <typename PlacementT = Placement>
  CreateInfrastructureConfigurationRequest& WithPlacement(PlacementT&& value) {
    SetPlacement(std::forward<PlacementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier you provide to ensure that the operation
   * runs no more than one time. If you retry a request with the same client token,
   * Image Builder returns the original response without running the operation again.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
   * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateInfrastructureConfigurationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Validates the required permissions and request parameters without performing
   * the operation. If validation succeeds, the operation returns a
   * <code>DryRunOperationException</code> error response.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline CreateInfrastructureConfigurationRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_instanceTypes;

  Aws::String m_instanceProfileName;

  Aws::Vector<Aws::String> m_securityGroupIds;

  Aws::String m_subnetId;

  Logging m_logging;

  Aws::String m_keyPair;

  bool m_terminateInstanceOnFailure{false};

  Aws::String m_snsTopicArn;

  Aws::Map<Aws::String, Aws::String> m_resourceTags;

  InstanceMetadataOptions m_instanceMetadataOptions;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Placement m_placement;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  bool m_dryRun{false};
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_instanceTypesHasBeenSet = false;
  bool m_instanceProfileNameHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_subnetIdHasBeenSet = false;
  bool m_loggingHasBeenSet = false;
  bool m_keyPairHasBeenSet = false;
  bool m_terminateInstanceOnFailureHasBeenSet = false;
  bool m_snsTopicArnHasBeenSet = false;
  bool m_resourceTagsHasBeenSet = false;
  bool m_instanceMetadataOptionsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_placementHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
