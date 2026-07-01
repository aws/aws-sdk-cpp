/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/Citation.h>
#include <aws/artifact/model/QueryStatus.h>
#include <aws/artifact/model/QueryStatusMessage.h>
#include <aws/artifact/model/ResponseVersion.h>
#include <aws/artifact/model/ReviewType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Artifact {
namespace Model {

/**
 * <p>Summary information about a single query within a compliance
 * inquiry.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/QuerySummary">AWS
 * API Reference</a></p>
 */
class QuerySummary {
 public:
  AWS_ARTIFACT_API QuerySummary() = default;
  AWS_ARTIFACT_API QuerySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARTIFACT_API QuerySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Sequential identifier of the query within the inquiry.</p>
   */
  inline int GetQueryIdentifier() const { return m_queryIdentifier; }
  inline bool QueryIdentifierHasBeenSet() const { return m_queryIdentifierHasBeenSet; }
  inline void SetQueryIdentifier(int value) {
    m_queryIdentifierHasBeenSet = true;
    m_queryIdentifier = value;
  }
  inline QuerySummary& WithQueryIdentifier(int value) {
    SetQueryIdentifier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actual query text.</p>
   */
  inline const Aws::String& GetQuery() const { return m_query; }
  inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
  template <typename QueryT = Aws::String>
  void SetQuery(QueryT&& value) {
    m_queryHasBeenSet = true;
    m_query = std::forward<QueryT>(value);
  }
  template <typename QueryT = Aws::String>
  QuerySummary& WithQuery(QueryT&& value) {
    SetQuery(std::forward<QueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Generated response to the query.</p>
   */
  inline const Aws::String& GetResponse() const { return m_response; }
  inline bool ResponseHasBeenSet() const { return m_responseHasBeenSet; }
  template <typename ResponseT = Aws::String>
  void SetResponse(ResponseT&& value) {
    m_responseHasBeenSet = true;
    m_response = std::forward<ResponseT>(value);
  }
  template <typename ResponseT = Aws::String>
  QuerySummary& WithResponse(ResponseT&& value) {
    SetResponse(std::forward<ResponseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of review for the response.</p>
   */
  inline ReviewType GetReviewType() const { return m_reviewType; }
  inline bool ReviewTypeHasBeenSet() const { return m_reviewTypeHasBeenSet; }
  inline void SetReviewType(ReviewType value) {
    m_reviewTypeHasBeenSet = true;
    m_reviewType = value;
  }
  inline QuerySummary& WithReviewType(ReviewType value) {
    SetReviewType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Supporting citations for the response.</p>
   */
  inline const Aws::Vector<Citation>& GetCitations() const { return m_citations; }
  inline bool CitationsHasBeenSet() const { return m_citationsHasBeenSet; }
  template <typename CitationsT = Aws::Vector<Citation>>
  void SetCitations(CitationsT&& value) {
    m_citationsHasBeenSet = true;
    m_citations = std::forward<CitationsT>(value);
  }
  template <typename CitationsT = Aws::Vector<Citation>>
  QuerySummary& WithCitations(CitationsT&& value) {
    SetCitations(std::forward<CitationsT>(value));
    return *this;
  }
  template <typename CitationsT = Citation>
  QuerySummary& AddCitations(CitationsT&& value) {
    m_citationsHasBeenSet = true;
    m_citations.emplace_back(std::forward<CitationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current processing status of the query.</p>
   */
  inline QueryStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(QueryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline QuerySummary& WithStatus(QueryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Descriptive status message.</p>
   */
  inline QueryStatusMessage GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  inline void SetStatusMessage(QueryStatusMessage value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = value;
  }
  inline QuerySummary& WithStatusMessage(QueryStatusMessage value) {
    SetStatusMessage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the query was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  QuerySummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Ordered list of response version history entries, oldest first.</p>
   */
  inline const Aws::Vector<ResponseVersion>& GetUpdatedResponseVersions() const { return m_updatedResponseVersions; }
  inline bool UpdatedResponseVersionsHasBeenSet() const { return m_updatedResponseVersionsHasBeenSet; }
  template <typename UpdatedResponseVersionsT = Aws::Vector<ResponseVersion>>
  void SetUpdatedResponseVersions(UpdatedResponseVersionsT&& value) {
    m_updatedResponseVersionsHasBeenSet = true;
    m_updatedResponseVersions = std::forward<UpdatedResponseVersionsT>(value);
  }
  template <typename UpdatedResponseVersionsT = Aws::Vector<ResponseVersion>>
  QuerySummary& WithUpdatedResponseVersions(UpdatedResponseVersionsT&& value) {
    SetUpdatedResponseVersions(std::forward<UpdatedResponseVersionsT>(value));
    return *this;
  }
  template <typename UpdatedResponseVersionsT = ResponseVersion>
  QuerySummary& AddUpdatedResponseVersions(UpdatedResponseVersionsT&& value) {
    m_updatedResponseVersionsHasBeenSet = true;
    m_updatedResponseVersions.emplace_back(std::forward<UpdatedResponseVersionsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_queryIdentifier{0};

  Aws::String m_query;

  Aws::String m_response;

  ReviewType m_reviewType{ReviewType::NOT_SET};

  Aws::Vector<Citation> m_citations;

  QueryStatus m_status{QueryStatus::NOT_SET};

  QueryStatusMessage m_statusMessage{QueryStatusMessage::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Vector<ResponseVersion> m_updatedResponseVersions;
  bool m_queryIdentifierHasBeenSet = false;
  bool m_queryHasBeenSet = false;
  bool m_responseHasBeenSet = false;
  bool m_reviewTypeHasBeenSet = false;
  bool m_citationsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedResponseVersionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
