/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/model/StreamFormat.h>
#include <aws/dsql/model/StreamOrdering.h>
#include <aws/dsql/model/StreamStatus.h>

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
 * <p>The output of a created stream.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/CreateStreamOutput">AWS
 * API Reference</a></p>
 */
class CreateStreamResult {
 public:
  AWS_DSQL_API CreateStreamResult() = default;
  AWS_DSQL_API CreateStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DSQL_API CreateStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the cluster for the created stream.</p>
   */
  inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
  template <typename ClusterIdentifierT = Aws::String>
  void SetClusterIdentifier(ClusterIdentifierT&& value) {
    m_clusterIdentifierHasBeenSet = true;
    m_clusterIdentifier = std::forward<ClusterIdentifierT>(value);
  }
  template <typename ClusterIdentifierT = Aws::String>
  CreateStreamResult& WithClusterIdentifier(ClusterIdentifierT&& value) {
    SetClusterIdentifier(std::forward<ClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the created stream.</p>
   */
  inline const Aws::String& GetStreamIdentifier() const { return m_streamIdentifier; }
  template <typename StreamIdentifierT = Aws::String>
  void SetStreamIdentifier(StreamIdentifierT&& value) {
    m_streamIdentifierHasBeenSet = true;
    m_streamIdentifier = std::forward<StreamIdentifierT>(value);
  }
  template <typename StreamIdentifierT = Aws::String>
  CreateStreamResult& WithStreamIdentifier(StreamIdentifierT&& value) {
    SetStreamIdentifier(std::forward<StreamIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the created stream.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateStreamResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the created stream.</p>
   */
  inline StreamStatus GetStatus() const { return m_status; }
  inline void SetStatus(StreamStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateStreamResult& WithStatus(StreamStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when created the stream.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  CreateStreamResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ordering mode of the created stream.</p>
   */
  inline StreamOrdering GetOrdering() const { return m_ordering; }
  inline void SetOrdering(StreamOrdering value) {
    m_orderingHasBeenSet = true;
    m_ordering = value;
  }
  inline CreateStreamResult& WithOrdering(StreamOrdering value) {
    SetOrdering(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the created stream records.</p>
   */
  inline StreamFormat GetFormat() const { return m_format; }
  inline void SetFormat(StreamFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline CreateStreamResult& WithFormat(StreamFormat value) {
    SetFormat(value);
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
  CreateStreamResult& WithRequestId(RequestIdT&& value) {
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

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_clusterIdentifierHasBeenSet = false;
  bool m_streamIdentifierHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_orderingHasBeenSet = false;
  bool m_formatHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
