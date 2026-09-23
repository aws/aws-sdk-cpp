/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/ImageLoggingConfiguration.h>

#include <utility>

namespace Aws {
namespace imagebuilder {
namespace Model {

/**
 */
class DistributeImageRequest : public ImagebuilderRequest {
 public:
  AWS_IMAGEBUILDER_API DistributeImageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DistributeImage"; }

  AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The source image to distribute. You can specify the source in any of the
   * following formats:</p> <ul> <li> <p>An AMI ID.</p> </li> <li> <p>An Amazon Web
   * Services Systems Manager Parameter Store reference, prefixed by
   * <code>ssm:</code>, followed by the parameter name or ARN.</p> </li> <li> <p>An
   * Image Builder image Amazon Resource Name (ARN). An image version ARN resolves to
   * the latest available build version.</p> </li> </ul> <p>Whichever format you use,
   * the source must resolve to an AMI in the current Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetSourceImage() const { return m_sourceImage; }
  inline bool SourceImageHasBeenSet() const { return m_sourceImageHasBeenSet; }
  template <typename SourceImageT = Aws::String>
  void SetSourceImage(SourceImageT&& value) {
    m_sourceImageHasBeenSet = true;
    m_sourceImage = std::forward<SourceImageT>(value);
  }
  template <typename SourceImageT = Aws::String>
  DistributeImageRequest& WithSourceImage(SourceImageT&& value) {
    SetSourceImage(std::forward<SourceImageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the distribution configuration. The
   * configuration defines target Regions, accounts, and AMI settings. The
   * distribution configuration must be in the same Region as this operation.</p>
   */
  inline const Aws::String& GetDistributionConfigurationArn() const { return m_distributionConfigurationArn; }
  inline bool DistributionConfigurationArnHasBeenSet() const { return m_distributionConfigurationArnHasBeenSet; }
  template <typename DistributionConfigurationArnT = Aws::String>
  void SetDistributionConfigurationArn(DistributionConfigurationArnT&& value) {
    m_distributionConfigurationArnHasBeenSet = true;
    m_distributionConfigurationArn = std::forward<DistributionConfigurationArnT>(value);
  }
  template <typename DistributionConfigurationArnT = Aws::String>
  DistributeImageRequest& WithDistributionConfigurationArn(DistributionConfigurationArnT&& value) {
    SetDistributionConfigurationArn(std::forward<DistributionConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
   * assumes to distribute the image.</p>
   */
  inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
  inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
  template <typename ExecutionRoleT = Aws::String>
  void SetExecutionRole(ExecutionRoleT&& value) {
    m_executionRoleHasBeenSet = true;
    m_executionRole = std::forward<ExecutionRoleT>(value);
  }
  template <typename ExecutionRoleT = Aws::String>
  DistributeImageRequest& WithExecutionRole(ExecutionRoleT&& value) {
    SetExecutionRole(std::forward<ExecutionRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the new Image Builder image resource that this operation
   * creates. To tag the output AMIs, use <code>amiTags</code> in the distribution
   * configuration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  DistributeImageRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  DistributeImageRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  DistributeImageRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logging configuration for the distribution.</p>
   */
  inline const ImageLoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
  inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
  template <typename LoggingConfigurationT = ImageLoggingConfiguration>
  void SetLoggingConfiguration(LoggingConfigurationT&& value) {
    m_loggingConfigurationHasBeenSet = true;
    m_loggingConfiguration = std::forward<LoggingConfigurationT>(value);
  }
  template <typename LoggingConfigurationT = ImageLoggingConfiguration>
  DistributeImageRequest& WithLoggingConfiguration(LoggingConfigurationT&& value) {
    SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceImage;

  Aws::String m_distributionConfigurationArn;

  Aws::String m_executionRole;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  ImageLoggingConfiguration m_loggingConfiguration;
  bool m_sourceImageHasBeenSet = false;
  bool m_distributionConfigurationArnHasBeenSet = false;
  bool m_executionRoleHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_loggingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
