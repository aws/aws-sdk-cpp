/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>A skill package to upload with a registry record: a ZIP archive of a skill
 * that follows the Agent Skills specification. The registry validates the package
 * asynchronously, stores it, and sets <code>skillMd.data</code> from the package's
 * SKILL.md.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/RegistryRecordArtifactUpload">AWS
 * API Reference</a></p>
 */
class RegistryRecordArtifactUpload {
 public:
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordArtifactUpload() = default;
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordArtifactUpload(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordArtifactUpload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ZIP archive of the skill package, up to 5 MiB (5,242,880 bytes). In a
   * JSON request, the content is base64-encoded. The Amazon Web Services SDKs encode
   * it for you.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Utils::CryptoBuffer>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Utils::CryptoBuffer>
  RegistryRecordArtifactUpload& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The optional SHA-256 checksum of the ZIP archive, as 64 lowercase hexadecimal
   * characters, computed over the archive's bytes rather than its base64 text. If it
   * doesn't match the content, the request fails with a
   * <code>ValidationException</code>.</p>
   */
  inline const Aws::String& GetSha256() const { return m_sha256; }
  inline bool Sha256HasBeenSet() const { return m_sha256HasBeenSet; }
  template <typename Sha256T = Aws::String>
  void SetSha256(Sha256T&& value) {
    m_sha256HasBeenSet = true;
    m_sha256 = std::forward<Sha256T>(value);
  }
  template <typename Sha256T = Aws::String>
  RegistryRecordArtifactUpload& WithSha256(Sha256T&& value) {
    SetSha256(std::forward<Sha256T>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::CryptoBuffer m_content{};

  Aws::String m_sha256;
  bool m_contentHasBeenSet = false;
  bool m_sha256HasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
