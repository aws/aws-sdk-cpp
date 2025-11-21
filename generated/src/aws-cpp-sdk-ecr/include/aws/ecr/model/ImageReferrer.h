/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ArtifactStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {

/**
 * <p>An object representing an artifact associated with a subject
 * image.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ImageReferrer">AWS
 * API Reference</a></p>
 */
class ImageReferrer {
 public:
  AWS_ECR_API ImageReferrer() = default;
  AWS_ECR_API ImageReferrer(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API ImageReferrer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The digest of the artifact manifest.</p>
   */
  inline const Aws::String& GetDigest() const { return m_digest; }
  inline bool DigestHasBeenSet() const { return m_digestHasBeenSet; }
  template <typename DigestT = Aws::String>
  void SetDigest(DigestT&& value) {
    m_digestHasBeenSet = true;
    m_digest = std::forward<DigestT>(value);
  }
  template <typename DigestT = Aws::String>
  ImageReferrer& WithDigest(DigestT&& value) {
    SetDigest(std::forward<DigestT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The media type of the artifact manifest.</p>
   */
  inline const Aws::String& GetMediaType() const { return m_mediaType; }
  inline bool MediaTypeHasBeenSet() const { return m_mediaTypeHasBeenSet; }
  template <typename MediaTypeT = Aws::String>
  void SetMediaType(MediaTypeT&& value) {
    m_mediaTypeHasBeenSet = true;
    m_mediaType = std::forward<MediaTypeT>(value);
  }
  template <typename MediaTypeT = Aws::String>
  ImageReferrer& WithMediaType(MediaTypeT&& value) {
    SetMediaType(std::forward<MediaTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string identifying the type of artifact.</p>
   */
  inline const Aws::String& GetArtifactType() const { return m_artifactType; }
  inline bool ArtifactTypeHasBeenSet() const { return m_artifactTypeHasBeenSet; }
  template <typename ArtifactTypeT = Aws::String>
  void SetArtifactType(ArtifactTypeT&& value) {
    m_artifactTypeHasBeenSet = true;
    m_artifactType = std::forward<ArtifactTypeT>(value);
  }
  template <typename ArtifactTypeT = Aws::String>
  ImageReferrer& WithArtifactType(ArtifactTypeT&& value) {
    SetArtifactType(std::forward<ArtifactTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size, in bytes, of the artifact.</p>
   */
  inline long long GetSize() const { return m_size; }
  inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
  inline void SetSize(long long value) {
    m_sizeHasBeenSet = true;
    m_size = value;
  }
  inline ImageReferrer& WithSize(long long value) {
    SetSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of annotations associated with the artifact.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAnnotations() const { return m_annotations; }
  inline bool AnnotationsHasBeenSet() const { return m_annotationsHasBeenSet; }
  template <typename AnnotationsT = Aws::Map<Aws::String, Aws::String>>
  void SetAnnotations(AnnotationsT&& value) {
    m_annotationsHasBeenSet = true;
    m_annotations = std::forward<AnnotationsT>(value);
  }
  template <typename AnnotationsT = Aws::Map<Aws::String, Aws::String>>
  ImageReferrer& WithAnnotations(AnnotationsT&& value) {
    SetAnnotations(std::forward<AnnotationsT>(value));
    return *this;
  }
  template <typename AnnotationsKeyT = Aws::String, typename AnnotationsValueT = Aws::String>
  ImageReferrer& AddAnnotations(AnnotationsKeyT&& key, AnnotationsValueT&& value) {
    m_annotationsHasBeenSet = true;
    m_annotations.emplace(std::forward<AnnotationsKeyT>(key), std::forward<AnnotationsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the artifact. Valid values are <code>ACTIVE</code>,
   * <code>ARCHIVED</code>, or <code>ACTIVATING</code>.</p>
   */
  inline ArtifactStatus GetArtifactStatus() const { return m_artifactStatus; }
  inline bool ArtifactStatusHasBeenSet() const { return m_artifactStatusHasBeenSet; }
  inline void SetArtifactStatus(ArtifactStatus value) {
    m_artifactStatusHasBeenSet = true;
    m_artifactStatus = value;
  }
  inline ImageReferrer& WithArtifactStatus(ArtifactStatus value) {
    SetArtifactStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_digest;
  bool m_digestHasBeenSet = false;

  Aws::String m_mediaType;
  bool m_mediaTypeHasBeenSet = false;

  Aws::String m_artifactType;
  bool m_artifactTypeHasBeenSet = false;

  long long m_size{0};
  bool m_sizeHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_annotations;
  bool m_annotationsHasBeenSet = false;

  ArtifactStatus m_artifactStatus{ArtifactStatus::NOT_SET};
  bool m_artifactStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
