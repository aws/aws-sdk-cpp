/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
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
 * <p>The skill package of a registry record, as a short-lived download URL and the
 * package's SHA-256 checksum. Responses never include the package
 * bytes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/RegistryRecordArtifactDownload">AWS
 * API Reference</a></p>
 */
class RegistryRecordArtifactDownload {
 public:
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordArtifactDownload() = default;
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordArtifactDownload(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordArtifactDownload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The SHA-256 checksum of the package, as 64 lowercase hexadecimal characters.
   * The download response carries no signature that you can check, so compare the
   * checksum of the file that you download with this value before you use the
   * package.</p>
   */
  inline const Aws::String& GetSha256() const { return m_sha256; }
  inline bool Sha256HasBeenSet() const { return m_sha256HasBeenSet; }
  template <typename Sha256T = Aws::String>
  void SetSha256(Sha256T&& value) {
    m_sha256HasBeenSet = true;
    m_sha256 = std::forward<Sha256T>(value);
  }
  template <typename Sha256T = Aws::String>
  RegistryRecordArtifactDownload& WithSha256(Sha256T&& value) {
    SetSha256(std::forward<Sha256T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A presigned Amazon S3 URL that downloads the package. The URL is valid for up
   * to 5 minutes, and the response doesn't include its expiry time. To get a new
   * URL, call the operation again. Anyone who has the URL can download the package
   * until it expires, so don't log, store, or share it.</p>
   */
  inline const Aws::String& GetDownloadUrl() const { return m_downloadUrl; }
  inline bool DownloadUrlHasBeenSet() const { return m_downloadUrlHasBeenSet; }
  template <typename DownloadUrlT = Aws::String>
  void SetDownloadUrl(DownloadUrlT&& value) {
    m_downloadUrlHasBeenSet = true;
    m_downloadUrl = std::forward<DownloadUrlT>(value);
  }
  template <typename DownloadUrlT = Aws::String>
  RegistryRecordArtifactDownload& WithDownloadUrl(DownloadUrlT&& value) {
    SetDownloadUrl(std::forward<DownloadUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sha256;

  Aws::String m_downloadUrl;
  bool m_sha256HasBeenSet = false;
  bool m_downloadUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
