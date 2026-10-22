/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/IssueArtifactBody.h>
#include <aws/continuum/model/IssueArtifactProducerSummary.h>
#include <aws/continuum/model/IssueArtifactType.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {
/**
 * <p>Contains the requested artifact and its content.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetCodeIssueArtifactOutput">AWS
 * API Reference</a></p>
 */
class GetCodeIssueArtifactResult {
 public:
  AWS_CONTINUUM_API GetCodeIssueArtifactResult() = default;
  AWS_CONTINUUM_API GetCodeIssueArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONTINUUM_API GetCodeIssueArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the artifact.</p>
   */
  inline const Aws::String& GetArtifactId() const { return m_artifactId; }
  template <typename ArtifactIdT = Aws::String>
  void SetArtifactId(ArtifactIdT&& value) {
    m_artifactIdHasBeenSet = true;
    m_artifactId = std::forward<ArtifactIdT>(value);
  }
  template <typename ArtifactIdT = Aws::String>
  GetCodeIssueArtifactResult& WithArtifactId(ArtifactIdT&& value) {
    SetArtifactId(std::forward<ArtifactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Semantic category of the artifact.</p>
   */
  inline IssueArtifactType GetArtifactType() const { return m_artifactType; }
  inline void SetArtifactType(IssueArtifactType value) {
    m_artifactTypeHasBeenSet = true;
    m_artifactType = value;
  }
  inline GetCodeIssueArtifactResult& WithArtifactType(IssueArtifactType value) {
    SetArtifactType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MIME type the producer declared for its content.</p>
   */
  inline const Aws::String& GetMediaType() const { return m_mediaType; }
  template <typename MediaTypeT = Aws::String>
  void SetMediaType(MediaTypeT&& value) {
    m_mediaTypeHasBeenSet = true;
    m_mediaType = std::forward<MediaTypeT>(value);
  }
  template <typename MediaTypeT = Aws::String>
  GetCodeIssueArtifactResult& WithMediaType(MediaTypeT&& value) {
    SetMediaType(std::forward<MediaTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The artifact body, projected against the shape defined for its artifactType.
   * A type with a defined shape is returned as that structure, and anything else
   * through <code>IssueArtifactBody.raw</code>.</p>
   */
  inline const IssueArtifactBody& GetBody() const { return m_body; }
  template <typename BodyT = IssueArtifactBody>
  void SetBody(BodyT&& value) {
    m_bodyHasBeenSet = true;
    m_body = std::forward<BodyT>(value);
  }
  template <typename BodyT = IssueArtifactBody>
  GetCodeIssueArtifactResult& WithBody(BodyT&& value) {
    SetBody(std::forward<BodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Producer-defined structured metadata, when the producer supplied any.</p>
   * <p>Returned only for an artifactType whose content has no defined shape, so that
   * the artifact stays inspectable. For an artifactType with a defined shape,
   * <code>body</code> carries the content and this member is omitted.</p>
   */
  inline Aws::Utils::DocumentView GetMetadata() const { return m_metadata; }
  template <typename MetadataT = Aws::Utils::Document>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Utils::Document>
  GetCodeIssueArtifactResult& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The agent that produced the artifact.</p>
   */
  inline const IssueArtifactProducerSummary& GetProducer() const { return m_producer; }
  template <typename ProducerT = IssueArtifactProducerSummary>
  void SetProducer(ProducerT&& value) {
    m_producerHasBeenSet = true;
    m_producer = std::forward<ProducerT>(value);
  }
  template <typename ProducerT = IssueArtifactProducerSummary>
  GetCodeIssueArtifactResult& WithProducer(ProducerT&& value) {
    SetProducer(std::forward<ProducerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the artifact was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetCodeIssueArtifactResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetCodeIssueArtifactResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_artifactId;

  IssueArtifactType m_artifactType{IssueArtifactType::NOT_SET};

  Aws::String m_mediaType;

  IssueArtifactBody m_body;

  Aws::Utils::Document m_metadata;

  IssueArtifactProducerSummary m_producer;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_artifactIdHasBeenSet = false;
  bool m_artifactTypeHasBeenSet = false;
  bool m_mediaTypeHasBeenSet = false;
  bool m_bodyHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_producerHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
