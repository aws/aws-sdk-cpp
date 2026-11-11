/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotInitiator.h>
#include <aws/kinesisanalyticsv2/model/SnapshotInitiatorOperation.h>
#include <aws/kinesisanalyticsv2/model/SnapshotStatus.h>

#include <utility>

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

/**
 */
class ListSnapshotsRequest : public KinesisAnalyticsV2Request {
 public:
  AWS_KINESISANALYTICSV2_API ListSnapshotsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListSnapshots"; }

  AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

  AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetSourceApplicationName() const { return m_sourceApplicationName; }
  inline bool SourceApplicationNameHasBeenSet() const { return m_sourceApplicationNameHasBeenSet; }
  template <typename SourceApplicationNameT = Aws::String>
  void SetSourceApplicationName(SourceApplicationNameT&& value) {
    m_sourceApplicationNameHasBeenSet = true;
    m_sourceApplicationName = std::forward<SourceApplicationNameT>(value);
  }
  template <typename SourceApplicationNameT = Aws::String>
  ListSnapshotsRequest& WithSourceApplicationName(SourceApplicationNameT&& value) {
    SetSourceApplicationName(std::forward<SourceApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use this parameter to list only the snapshots with the specified
   * initiator.</p>
   */
  inline SnapshotInitiator GetSnapshotInitiator() const { return m_snapshotInitiator; }
  inline bool SnapshotInitiatorHasBeenSet() const { return m_snapshotInitiatorHasBeenSet; }
  inline void SetSnapshotInitiator(SnapshotInitiator value) {
    m_snapshotInitiatorHasBeenSet = true;
    m_snapshotInitiator = value;
  }
  inline ListSnapshotsRequest& WithSnapshotInitiator(SnapshotInitiator value) {
    SetSnapshotInitiator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use this parameter to list only the snapshots that were created by the
   * specified operation.</p>
   */
  inline SnapshotInitiatorOperation GetSnapshotInitiatorOperation() const { return m_snapshotInitiatorOperation; }
  inline bool SnapshotInitiatorOperationHasBeenSet() const { return m_snapshotInitiatorOperationHasBeenSet; }
  inline void SetSnapshotInitiatorOperation(SnapshotInitiatorOperation value) {
    m_snapshotInitiatorOperationHasBeenSet = true;
    m_snapshotInitiatorOperation = value;
  }
  inline ListSnapshotsRequest& WithSnapshotInitiatorOperation(SnapshotInitiatorOperation value) {
    SetSnapshotInitiatorOperation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use this parameter to list only the snapshots with the specified status.</p>
   */
  inline SnapshotStatus GetSnapshotStatus() const { return m_snapshotStatus; }
  inline bool SnapshotStatusHasBeenSet() const { return m_snapshotStatusHasBeenSet; }
  inline void SetSnapshotStatus(SnapshotStatus value) {
    m_snapshotStatusHasBeenSet = true;
    m_snapshotStatus = value;
  }
  inline ListSnapshotsRequest& WithSnapshotStatus(SnapshotStatus value) {
    SetSnapshotStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of snapshots to list.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline ListSnapshotsRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSnapshotsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceApplicationName;

  SnapshotInitiator m_snapshotInitiator{SnapshotInitiator::NOT_SET};

  SnapshotInitiatorOperation m_snapshotInitiatorOperation{SnapshotInitiatorOperation::NOT_SET};

  SnapshotStatus m_snapshotStatus{SnapshotStatus::NOT_SET};

  int m_limit{0};

  Aws::String m_nextToken;
  bool m_sourceApplicationNameHasBeenSet = false;
  bool m_snapshotInitiatorHasBeenSet = false;
  bool m_snapshotInitiatorOperationHasBeenSet = false;
  bool m_snapshotStatusHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
