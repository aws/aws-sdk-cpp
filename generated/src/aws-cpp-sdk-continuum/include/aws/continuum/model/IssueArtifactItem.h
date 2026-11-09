/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/IssueArtifactProducerSummary.h>
#include <aws/continuum/model/IssueArtifactType.h>
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
namespace Continuum {
namespace Model {

/**
 * <p>A summary of an artifact returned in list responses.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/IssueArtifactItem">AWS
 * API Reference</a></p>
 */
class IssueArtifactItem {
 public:
  AWS_CONTINUUM_API IssueArtifactItem() = default;
  AWS_CONTINUUM_API IssueArtifactItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API IssueArtifactItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the artifact.</p>
   */
  inline const Aws::String& GetArtifactId() const { return m_artifactId; }
  inline bool ArtifactIdHasBeenSet() const { return m_artifactIdHasBeenSet; }
  template <typename ArtifactIdT = Aws::String>
  void SetArtifactId(ArtifactIdT&& value) {
    m_artifactIdHasBeenSet = true;
    m_artifactId = std::forward<ArtifactIdT>(value);
  }
  template <typename ArtifactIdT = Aws::String>
  IssueArtifactItem& WithArtifactId(ArtifactIdT&& value) {
    SetArtifactId(std::forward<ArtifactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Semantic category of the artifact.</p>
   */
  inline IssueArtifactType GetArtifactType() const { return m_artifactType; }
  inline bool ArtifactTypeHasBeenSet() const { return m_artifactTypeHasBeenSet; }
  inline void SetArtifactType(IssueArtifactType value) {
    m_artifactTypeHasBeenSet = true;
    m_artifactType = value;
  }
  inline IssueArtifactItem& WithArtifactType(IssueArtifactType value) {
    SetArtifactType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MIME type of the artifact content.</p>
   */
  inline const Aws::String& GetMediaType() const { return m_mediaType; }
  inline bool MediaTypeHasBeenSet() const { return m_mediaTypeHasBeenSet; }
  template <typename MediaTypeT = Aws::String>
  void SetMediaType(MediaTypeT&& value) {
    m_mediaTypeHasBeenSet = true;
    m_mediaType = std::forward<MediaTypeT>(value);
  }
  template <typename MediaTypeT = Aws::String>
  IssueArtifactItem& WithMediaType(MediaTypeT&& value) {
    SetMediaType(std::forward<MediaTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The agent that produced the artifact.</p>
   */
  inline const IssueArtifactProducerSummary& GetProducer() const { return m_producer; }
  inline bool ProducerHasBeenSet() const { return m_producerHasBeenSet; }
  template <typename ProducerT = IssueArtifactProducerSummary>
  void SetProducer(ProducerT&& value) {
    m_producerHasBeenSet = true;
    m_producer = std::forward<ProducerT>(value);
  }
  template <typename ProducerT = IssueArtifactProducerSummary>
  IssueArtifactItem& WithProducer(ProducerT&& value) {
    SetProducer(std::forward<ProducerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Size of the artifact content in bytes. The content itself is returned by
   * GetCodeIssueArtifact.</p>
   */
  inline long long GetContentSizeBytes() const { return m_contentSizeBytes; }
  inline bool ContentSizeBytesHasBeenSet() const { return m_contentSizeBytesHasBeenSet; }
  inline void SetContentSizeBytes(long long value) {
    m_contentSizeBytesHasBeenSet = true;
    m_contentSizeBytes = value;
  }
  inline IssueArtifactItem& WithContentSizeBytes(long long value) {
    SetContentSizeBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the artifact was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  IssueArtifactItem& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_artifactId;

  IssueArtifactType m_artifactType{IssueArtifactType::NOT_SET};

  Aws::String m_mediaType;

  IssueArtifactProducerSummary m_producer;

  long long m_contentSizeBytes{0};

  Aws::Utils::DateTime m_createdAt{};
  bool m_artifactIdHasBeenSet = false;
  bool m_artifactTypeHasBeenSet = false;
  bool m_mediaTypeHasBeenSet = false;
  bool m_producerHasBeenSet = false;
  bool m_contentSizeBytesHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
