/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EfsConfiguration.h>
#include <aws/bedrock-agentcore-control/model/S3FilesConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Specifies a file system to mount into the session by providing exactly one of
 * the following:</p> <ul> <li> <p> <code>s3FilesConfiguration</code> - Mounts an
 * Amazon Simple Storage Service (Amazon S3) Files access point.</p> </li> <li> <p>
 * <code>efsConfiguration</code> - Mounts an Amazon Elastic File System (Amazon
 * EFS) access point.</p> </li> </ul><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ToolsFileSystemConfiguration">AWS
 * API Reference</a></p>
 */
class ToolsFileSystemConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ToolsFileSystemConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ToolsFileSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ToolsFileSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for mounting your own Amazon Simple Storage Service (Amazon
   * S3) Files access point into the session.</p>
   */
  inline const S3FilesConfiguration& GetS3FilesConfiguration() const { return m_s3FilesConfiguration; }
  inline bool S3FilesConfigurationHasBeenSet() const { return m_s3FilesConfigurationHasBeenSet; }
  template <typename S3FilesConfigurationT = S3FilesConfiguration>
  void SetS3FilesConfiguration(S3FilesConfigurationT&& value) {
    m_s3FilesConfigurationHasBeenSet = true;
    m_s3FilesConfiguration = std::forward<S3FilesConfigurationT>(value);
  }
  template <typename S3FilesConfigurationT = S3FilesConfiguration>
  ToolsFileSystemConfiguration& WithS3FilesConfiguration(S3FilesConfigurationT&& value) {
    SetS3FilesConfiguration(std::forward<S3FilesConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for mounting your own Amazon Elastic File System (Amazon
   * EFS) access point into the session.</p>
   */
  inline const EfsConfiguration& GetEfsConfiguration() const { return m_efsConfiguration; }
  inline bool EfsConfigurationHasBeenSet() const { return m_efsConfigurationHasBeenSet; }
  template <typename EfsConfigurationT = EfsConfiguration>
  void SetEfsConfiguration(EfsConfigurationT&& value) {
    m_efsConfigurationHasBeenSet = true;
    m_efsConfiguration = std::forward<EfsConfigurationT>(value);
  }
  template <typename EfsConfigurationT = EfsConfiguration>
  ToolsFileSystemConfiguration& WithEfsConfiguration(EfsConfigurationT&& value) {
    SetEfsConfiguration(std::forward<EfsConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  S3FilesConfiguration m_s3FilesConfiguration;

  EfsConfiguration m_efsConfiguration;
  bool m_s3FilesConfigurationHasBeenSet = false;
  bool m_efsConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
