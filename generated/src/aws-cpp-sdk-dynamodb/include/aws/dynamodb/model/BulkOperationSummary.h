/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BulkOperationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DynamoDB {
namespace Model {

/**
 * <p>Contains summary information about a bulk operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BulkOperationSummary">AWS
 * API Reference</a></p>
 */
class BulkOperationSummary {
 public:
  AWS_DYNAMODB_API BulkOperationSummary() = default;
  AWS_DYNAMODB_API BulkOperationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API BulkOperationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the bulk operation.</p>
   */
  inline const Aws::String& GetBulkOperationArn() const { return m_bulkOperationArn; }
  inline bool BulkOperationArnHasBeenSet() const { return m_bulkOperationArnHasBeenSet; }
  template <typename BulkOperationArnT = Aws::String>
  void SetBulkOperationArn(BulkOperationArnT&& value) {
    m_bulkOperationArnHasBeenSet = true;
    m_bulkOperationArn = std::forward<BulkOperationArnT>(value);
  }
  template <typename BulkOperationArnT = Aws::String>
  BulkOperationSummary& WithBulkOperationArn(BulkOperationArnT&& value) {
    SetBulkOperationArn(std::forward<BulkOperationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the bulk operation.</p>
   */
  inline BulkOperationStatus GetBulkOperationStatus() const { return m_bulkOperationStatus; }
  inline bool BulkOperationStatusHasBeenSet() const { return m_bulkOperationStatusHasBeenSet; }
  inline void SetBulkOperationStatus(BulkOperationStatus value) {
    m_bulkOperationStatusHasBeenSet = true;
    m_bulkOperationStatus = value;
  }
  inline BulkOperationSummary& WithBulkOperationStatus(BulkOperationStatus value) {
    SetBulkOperationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when DynamoDB accepted the start request.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  BulkOperationSummary& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the operation reached a terminal status. DynamoDB omits this
   * value while the operation remains in progress.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  BulkOperationSummary& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bulkOperationArn;

  BulkOperationStatus m_bulkOperationStatus{BulkOperationStatus::NOT_SET};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};
  bool m_bulkOperationArnHasBeenSet = false;
  bool m_bulkOperationStatusHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
