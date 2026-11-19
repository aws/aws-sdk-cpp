/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>An Amazon S3 source that a skill record's content was synchronized from, and
 * the object version that the registry read. At most one of <code>versionId</code>
 * and <code>eTag</code> is set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/S3SynchronizedSource">AWS
 * API Reference</a></p>
 */
class S3SynchronizedSource {
 public:
  AWS_AGENTREGISTRYCONTROL_API S3SynchronizedSource() = default;
  AWS_AGENTREGISTRYCONTROL_API S3SynchronizedSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API S3SynchronizedSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source URL that the registry read.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  S3SynchronizedSource& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the registry read the source.</p>
   */
  inline const Aws::Utils::DateTime& GetSynchronizedAt() const { return m_synchronizedAt; }
  inline bool SynchronizedAtHasBeenSet() const { return m_synchronizedAtHasBeenSet; }
  template <typename SynchronizedAtT = Aws::Utils::DateTime>
  void SetSynchronizedAt(SynchronizedAtT&& value) {
    m_synchronizedAtHasBeenSet = true;
    m_synchronizedAt = std::forward<SynchronizedAtT>(value);
  }
  template <typename SynchronizedAtT = Aws::Utils::DateTime>
  S3SynchronizedSource& WithSynchronizedAt(SynchronizedAtT&& value) {
    SetSynchronizedAt(std::forward<SynchronizedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version ID of the object that the registry read. Absent when the bucket
   * isn't versioned.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  S3SynchronizedSource& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity tag (ETag) of the object that the registry read, without quotes,
   * when the object has no version ID. Not recorded for a SKILL.md source on a
   * registry that is encrypted with a customer managed key.</p>
   */
  inline const Aws::String& GetETag() const { return m_eTag; }
  inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
  template <typename ETagT = Aws::String>
  void SetETag(ETagT&& value) {
    m_eTagHasBeenSet = true;
    m_eTag = std::forward<ETagT>(value);
  }
  template <typename ETagT = Aws::String>
  S3SynchronizedSource& WithETag(ETagT&& value) {
    SetETag(std::forward<ETagT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_url;

  Aws::Utils::DateTime m_synchronizedAt{};

  Aws::String m_versionId;

  Aws::String m_eTag;
  bool m_urlHasBeenSet = false;
  bool m_synchronizedAtHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
  bool m_eTagHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
