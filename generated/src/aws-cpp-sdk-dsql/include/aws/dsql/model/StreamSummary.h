/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/model/StreamStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DSQL {
namespace Model {

/**
 * <p>Summary information about a stream.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/StreamSummary">AWS
 * API Reference</a></p>
 */
class StreamSummary {
 public:
  AWS_DSQL_API StreamSummary() = default;
  AWS_DSQL_API StreamSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_DSQL_API StreamSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DSQL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the cluster.</p>
   */
  inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
  inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
  template <typename ClusterIdentifierT = Aws::String>
  void SetClusterIdentifier(ClusterIdentifierT&& value) {
    m_clusterIdentifierHasBeenSet = true;
    m_clusterIdentifier = std::forward<ClusterIdentifierT>(value);
  }
  template <typename ClusterIdentifierT = Aws::String>
  StreamSummary& WithClusterIdentifier(ClusterIdentifierT&& value) {
    SetClusterIdentifier(std::forward<ClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the stream.</p>
   */
  inline const Aws::String& GetStreamIdentifier() const { return m_streamIdentifier; }
  inline bool StreamIdentifierHasBeenSet() const { return m_streamIdentifierHasBeenSet; }
  template <typename StreamIdentifierT = Aws::String>
  void SetStreamIdentifier(StreamIdentifierT&& value) {
    m_streamIdentifierHasBeenSet = true;
    m_streamIdentifier = std::forward<StreamIdentifierT>(value);
  }
  template <typename StreamIdentifierT = Aws::String>
  StreamSummary& WithStreamIdentifier(StreamIdentifierT&& value) {
    SetStreamIdentifier(std::forward<StreamIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the stream.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  StreamSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the stream was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  StreamSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the stream.</p>
   */
  inline StreamStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(StreamStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StreamSummary& WithStatus(StreamStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterIdentifier;

  Aws::String m_streamIdentifier;

  Aws::String m_arn;

  Aws::Utils::DateTime m_creationTime{};

  StreamStatus m_status{StreamStatus::NOT_SET};
  bool m_clusterIdentifierHasBeenSet = false;
  bool m_streamIdentifierHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
