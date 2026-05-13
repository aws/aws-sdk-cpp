/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/model/StatusReason.h>
#include <aws/dsql/model/StreamFormat.h>
#include <aws/dsql/model/StreamOrdering.h>
#include <aws/dsql/model/StreamStatus.h>
#include <aws/dsql/model/TargetDefinition.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DSQL {
namespace Model {
/**
 * <p>The output of a retrieved stream.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/GetStreamOutput">AWS
 * API Reference</a></p>
 */
class GetStreamResult {
 public:
  AWS_DSQL_API GetStreamResult() = default;
  AWS_DSQL_API GetStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DSQL_API GetStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the cluster for the retrieved stream.</p>
   */
  inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
  template <typename ClusterIdentifierT = Aws::String>
  void SetClusterIdentifier(ClusterIdentifierT&& value) {
    m_clusterIdentifierHasBeenSet = true;
    m_clusterIdentifier = std::forward<ClusterIdentifierT>(value);
  }
  template <typename ClusterIdentifierT = Aws::String>
  GetStreamResult& WithClusterIdentifier(ClusterIdentifierT&& value) {
    SetClusterIdentifier(std::forward<ClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the retrieved stream.</p>
   */
  inline const Aws::String& GetStreamIdentifier() const { return m_streamIdentifier; }
  template <typename StreamIdentifierT = Aws::String>
  void SetStreamIdentifier(StreamIdentifierT&& value) {
    m_streamIdentifierHasBeenSet = true;
    m_streamIdentifier = std::forward<StreamIdentifierT>(value);
  }
  template <typename StreamIdentifierT = Aws::String>
  GetStreamResult& WithStreamIdentifier(StreamIdentifierT&& value) {
    SetStreamIdentifier(std::forward<StreamIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the retrieved stream.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetStreamResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the retrieved stream.</p>
   */
  inline StreamStatus GetStatus() const { return m_status; }
  inline void SetStatus(StreamStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetStreamResult& WithStatus(StreamStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the stream was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  GetStreamResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ordering mode of the stream.</p>
   */
  inline StreamOrdering GetOrdering() const { return m_ordering; }
  inline void SetOrdering(StreamOrdering value) {
    m_orderingHasBeenSet = true;
    m_ordering = value;
  }
  inline GetStreamResult& WithOrdering(StreamOrdering value) {
    SetOrdering(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the stream records.</p>
   */
  inline StreamFormat GetFormat() const { return m_format; }
  inline void SetFormat(StreamFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline GetStreamResult& WithFormat(StreamFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target definition for the stream destination.</p>
   */
  inline const TargetDefinition& GetTargetDefinition() const { return m_targetDefinition; }
  template <typename TargetDefinitionT = TargetDefinition>
  void SetTargetDefinition(TargetDefinitionT&& value) {
    m_targetDefinitionHasBeenSet = true;
    m_targetDefinition = std::forward<TargetDefinitionT>(value);
  }
  template <typename TargetDefinitionT = TargetDefinition>
  GetStreamResult& WithTargetDefinition(TargetDefinitionT&& value) {
    SetTargetDefinition(std::forward<TargetDefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Stream status reason with error code and timestamp (if applicable).</p>
   */
  inline const StatusReason& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = StatusReason>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = StatusReason>
  GetStreamResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tags associated with the stream.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetStreamResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetStreamResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  GetStreamResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_clusterIdentifier;

  Aws::String m_streamIdentifier;

  Aws::String m_arn;

  StreamStatus m_status{StreamStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  StreamOrdering m_ordering{StreamOrdering::NOT_SET};

  StreamFormat m_format{StreamFormat::NOT_SET};

  TargetDefinition m_targetDefinition;

  StatusReason m_statusReason;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_clusterIdentifierHasBeenSet = false;
  bool m_streamIdentifierHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_orderingHasBeenSet = false;
  bool m_formatHasBeenSet = false;
  bool m_targetDefinitionHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
