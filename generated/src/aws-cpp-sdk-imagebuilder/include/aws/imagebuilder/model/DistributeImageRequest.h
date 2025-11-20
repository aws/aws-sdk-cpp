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
   * <p>The source image Amazon Resource Name (ARN) to distribute.</p>
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
   * <p>The Amazon Resource Name (ARN) of the distribution configuration to use.</p>
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
   * <p>The IAM role to use for the distribution.</p>
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
   * <p>The tags to apply to the distributed image.</p>
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
   * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
   * request. For more information, see <a
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
  bool m_sourceImageHasBeenSet = false;

  Aws::String m_distributionConfigurationArn;
  bool m_distributionConfigurationArnHasBeenSet = false;

  Aws::String m_executionRole;
  bool m_executionRoleHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  ImageLoggingConfiguration m_loggingConfiguration;
  bool m_loggingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
