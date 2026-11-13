/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperation.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationStatus.h>

#include <utility>

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

/**
 */
class ListSnapshotOperationsRequest : public KinesisAnalyticsV2Request {
 public:
  AWS_KINESISANALYTICSV2_API ListSnapshotOperationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListSnapshotOperations"; }

  AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

  AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the enhanced snapshot.</p>
   */
  inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
  inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
  template <typename SnapshotNameT = Aws::String>
  void SetSnapshotName(SnapshotNameT&& value) {
    m_snapshotNameHasBeenSet = true;
    m_snapshotName = std::forward<SnapshotNameT>(value);
  }
  template <typename SnapshotNameT = Aws::String>
  ListSnapshotOperationsRequest& WithSnapshotName(SnapshotNameT&& value) {
    SetSnapshotName(std::forward<SnapshotNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use this parameter to list only the operations of the specified type.</p>
   */
  inline SnapshotOperation GetSnapshotOperation() const { return m_snapshotOperation; }
  inline bool SnapshotOperationHasBeenSet() const { return m_snapshotOperationHasBeenSet; }
  inline void SetSnapshotOperation(SnapshotOperation value) {
    m_snapshotOperationHasBeenSet = true;
    m_snapshotOperation = value;
  }
  inline ListSnapshotOperationsRequest& WithSnapshotOperation(SnapshotOperation value) {
    SetSnapshotOperation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use this parameter to list only the operations with the specified status.</p>
   */
  inline SnapshotOperationStatus GetSnapshotOperationStatus() const { return m_snapshotOperationStatus; }
  inline bool SnapshotOperationStatusHasBeenSet() const { return m_snapshotOperationStatusHasBeenSet; }
  inline void SetSnapshotOperationStatus(SnapshotOperationStatus value) {
    m_snapshotOperationStatusHasBeenSet = true;
    m_snapshotOperationStatus = value;
  }
  inline ListSnapshotOperationsRequest& WithSnapshotOperationStatus(SnapshotOperationStatus value) {
    SetSnapshotOperationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of snapshot operations to list.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline ListSnapshotOperationsRequest& WithLimit(int value) {
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
  ListSnapshotOperationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_snapshotName;

  SnapshotOperation m_snapshotOperation{SnapshotOperation::NOT_SET};

  SnapshotOperationStatus m_snapshotOperationStatus{SnapshotOperationStatus::NOT_SET};

  int m_limit{0};

  Aws::String m_nextToken;
  bool m_snapshotNameHasBeenSet = false;
  bool m_snapshotOperationHasBeenSet = false;
  bool m_snapshotOperationStatusHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
