/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BulkOperationPerformanceTier.h>
#include <aws/dynamodb/model/BulkOperationStatus.h>
#include <aws/dynamodb/model/BulkOperationTableDetail.h>
#include <aws/dynamodb/model/BulkOperationUsage.h>
#include <aws/dynamodb/model/InputS3Configuration.h>
#include <aws/dynamodb/model/OutputS3Configuration.h>

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
 * <p>Contains detailed information about a bulk operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BulkOperationDescription">AWS
 * API Reference</a></p>
 */
class BulkOperationDescription {
 public:
  AWS_DYNAMODB_API BulkOperationDescription() = default;
  AWS_DYNAMODB_API BulkOperationDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API BulkOperationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  BulkOperationDescription& WithBulkOperationArn(BulkOperationArnT&& value) {
    SetBulkOperationArn(std::forward<BulkOperationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the bulk operation can be one of the following
   * values:</p> <dl> <dt> IN_PROGRESS </dt> <dd> <p>DynamoDB is processing the
   * input.</p> </dd> <dt> COMPLETED </dt> <dd> <p>The bulk operation finished
   * without parsing or validation errors. Condition-check failures do not cause the
   * operation to complete with errors.</p> </dd> <dt> COMPLETED_WITH_ERRORS </dt>
   * <dd> <p>The bulk operation finished, but DynamoDB couldn't process at least one
   * input item because of a parsing or validation error. When you enable
   * <code>ERROR</code> output, DynamoDB writes the details to the configured Amazon
   * S3 output location.</p> </dd> <dt> CANCELLING </dt> <dd> <p>DynamoDB accepted a
   * cancellation request and is stopping the operation.</p> </dd> <dt> CANCELLED
   * </dt> <dd> <p>DynamoDB stopped the operation after a cancellation request.</p>
   * </dd> <dt> FAILED </dt> <dd> <p>The bulk operation failed. DynamoDB might write
   * some items before the operation reaches this status. See <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_BulkOperationDescription.html#DDB-Type-BulkOperationDescription-FailureCode">FailureCode</a>
   * and <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_BulkOperationDescription.html#DDB-Type-BulkOperationDescription-FailureMessage">FailureMessage</a>
   * for details.</p> </dd> </dl>
   */
  inline BulkOperationStatus GetBulkOperationStatus() const { return m_bulkOperationStatus; }
  inline bool BulkOperationStatusHasBeenSet() const { return m_bulkOperationStatusHasBeenSet; }
  inline void SetBulkOperationStatus(BulkOperationStatus value) {
    m_bulkOperationStatusHasBeenSet = true;
    m_bulkOperationStatus = value;
  }
  inline BulkOperationDescription& WithBulkOperationStatus(BulkOperationStatus value) {
    SetBulkOperationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list containing identifying information for the table targeted by the bulk
   * operation.</p>
   */
  inline const Aws::Vector<BulkOperationTableDetail>& GetTableDetails() const { return m_tableDetails; }
  inline bool TableDetailsHasBeenSet() const { return m_tableDetailsHasBeenSet; }
  template <typename TableDetailsT = Aws::Vector<BulkOperationTableDetail>>
  void SetTableDetails(TableDetailsT&& value) {
    m_tableDetailsHasBeenSet = true;
    m_tableDetails = std::forward<TableDetailsT>(value);
  }
  template <typename TableDetailsT = Aws::Vector<BulkOperationTableDetail>>
  BulkOperationDescription& WithTableDetails(TableDetailsT&& value) {
    SetTableDetails(std::forward<TableDetailsT>(value));
    return *this;
  }
  template <typename TableDetailsT = BulkOperationTableDetail>
  BulkOperationDescription& AddTableDetails(TableDetailsT&& value) {
    m_tableDetailsHasBeenSet = true;
    m_tableDetails.emplace_back(std::forward<TableDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The idempotency token associated with the start request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  BulkOperationDescription& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 input configuration associated with the bulk operation.</p>
   */
  inline const InputS3Configuration& GetInputS3Configuration() const { return m_inputS3Configuration; }
  inline bool InputS3ConfigurationHasBeenSet() const { return m_inputS3ConfigurationHasBeenSet; }
  template <typename InputS3ConfigurationT = InputS3Configuration>
  void SetInputS3Configuration(InputS3ConfigurationT&& value) {
    m_inputS3ConfigurationHasBeenSet = true;
    m_inputS3Configuration = std::forward<InputS3ConfigurationT>(value);
  }
  template <typename InputS3ConfigurationT = InputS3Configuration>
  BulkOperationDescription& WithInputS3Configuration(InputS3ConfigurationT&& value) {
    SetInputS3Configuration(std::forward<InputS3ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 output configuration associated with the bulk operation.</p>
   */
  inline const OutputS3Configuration& GetOutputS3Configuration() const { return m_outputS3Configuration; }
  inline bool OutputS3ConfigurationHasBeenSet() const { return m_outputS3ConfigurationHasBeenSet; }
  template <typename OutputS3ConfigurationT = OutputS3Configuration>
  void SetOutputS3Configuration(OutputS3ConfigurationT&& value) {
    m_outputS3ConfigurationHasBeenSet = true;
    m_outputS3Configuration = std::forward<OutputS3ConfigurationT>(value);
  }
  template <typename OutputS3ConfigurationT = OutputS3Configuration>
  BulkOperationDescription& WithOutputS3Configuration(OutputS3ConfigurationT&& value) {
    SetOutputS3Configuration(std::forward<OutputS3ConfigurationT>(value));
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
  BulkOperationDescription& WithStartTime(StartTimeT&& value) {
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
  BulkOperationDescription& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of input items that DynamoDB has processed. This count includes
   * successful writes, parsing or validation failures, and condition-check
   * failures.</p>
   */
  inline long long GetProcessedItemCount() const { return m_processedItemCount; }
  inline bool ProcessedItemCountHasBeenSet() const { return m_processedItemCountHasBeenSet; }
  inline void SetProcessedItemCount(long long value) {
    m_processedItemCountHasBeenSet = true;
    m_processedItemCount = value;
  }
  inline BulkOperationDescription& WithProcessedItemCount(long long value) {
    SetProcessedItemCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of bytes that DynamoDB has read from the Amazon S3 input
   * objects.</p>
   */
  inline long long GetProcessedInputBytes() const { return m_processedInputBytes; }
  inline bool ProcessedInputBytesHasBeenSet() const { return m_processedInputBytesHasBeenSet; }
  inline void SetProcessedInputBytes(long long value) {
    m_processedInputBytesHasBeenSet = true;
    m_processedInputBytes = value;
  }
  inline BulkOperationDescription& WithProcessedInputBytes(long long value) {
    SetProcessedInputBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total size, in bytes, of the Amazon S3 input objects. DynamoDB omits this
   * value until the initial input-size calculation completes.</p>
   */
  inline long long GetTotalInputBytes() const { return m_totalInputBytes; }
  inline bool TotalInputBytesHasBeenSet() const { return m_totalInputBytesHasBeenSet; }
  inline void SetTotalInputBytes(long long value) {
    m_totalInputBytesHasBeenSet = true;
    m_totalInputBytes = value;
  }
  inline BulkOperationDescription& WithTotalInputBytes(long long value) {
    SetTotalInputBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Usage information for the table and its indexes.</p>
   */
  inline const Aws::Vector<BulkOperationUsage>& GetBulkOperationUsage() const { return m_bulkOperationUsage; }
  inline bool BulkOperationUsageHasBeenSet() const { return m_bulkOperationUsageHasBeenSet; }
  template <typename BulkOperationUsageT = Aws::Vector<BulkOperationUsage>>
  void SetBulkOperationUsage(BulkOperationUsageT&& value) {
    m_bulkOperationUsageHasBeenSet = true;
    m_bulkOperationUsage = std::forward<BulkOperationUsageT>(value);
  }
  template <typename BulkOperationUsageT = Aws::Vector<BulkOperationUsage>>
  BulkOperationDescription& WithBulkOperationUsage(BulkOperationUsageT&& value) {
    SetBulkOperationUsage(std::forward<BulkOperationUsageT>(value));
    return *this;
  }
  template <typename BulkOperationUsageT = BulkOperationUsage>
  BulkOperationDescription& AddBulkOperationUsage(BulkOperationUsageT&& value) {
    m_bulkOperationUsageHasBeenSet = true;
    m_bulkOperationUsage.emplace_back(std::forward<BulkOperationUsageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of processed input items that failed because of parsing or
   * validation errors. This count is included in <code>ProcessedItemCount</code>.
   * Condition-check failures do not increase this count.</p>
   */
  inline long long GetFailedItemCount() const { return m_failedItemCount; }
  inline bool FailedItemCountHasBeenSet() const { return m_failedItemCountHasBeenSet; }
  inline void SetFailedItemCount(long long value) {
    m_failedItemCountHasBeenSet = true;
    m_failedItemCount = value;
  }
  inline BulkOperationDescription& WithFailedItemCount(long long value) {
    SetFailedItemCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A code that identifies why the bulk operation failed or was cancelled.
   * DynamoDB returns this value only when <code>BulkOperationStatus</code> is
   * <code>FAILED</code> or <code>CANCELLED</code>.</p>
   */
  inline const Aws::String& GetFailureCode() const { return m_failureCode; }
  inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
  template <typename FailureCodeT = Aws::String>
  void SetFailureCode(FailureCodeT&& value) {
    m_failureCodeHasBeenSet = true;
    m_failureCode = std::forward<FailureCodeT>(value);
  }
  template <typename FailureCodeT = Aws::String>
  BulkOperationDescription& WithFailureCode(FailureCodeT&& value) {
    SetFailureCode(std::forward<FailureCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that describes why the bulk operation failed or was cancelled.
   * DynamoDB returns this value only when <code>BulkOperationStatus</code> is
   * <code>FAILED</code> or <code>CANCELLED</code>.</p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  BulkOperationDescription& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum write request unit rate configured for the bulk operation.</p>
   */
  inline long long GetMaxWriteRequestUnits() const { return m_maxWriteRequestUnits; }
  inline bool MaxWriteRequestUnitsHasBeenSet() const { return m_maxWriteRequestUnitsHasBeenSet; }
  inline void SetMaxWriteRequestUnits(long long value) {
    m_maxWriteRequestUnitsHasBeenSet = true;
    m_maxWriteRequestUnits = value;
  }
  inline BulkOperationDescription& WithMaxWriteRequestUnits(long long value) {
    SetMaxWriteRequestUnits(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The performance tier selected for the bulk operation. Valid values are
   * <code>STANDARD</code> and <code>ACCELERATED</code>. If the start request omitted
   * this value, DynamoDB uses <code>STANDARD</code>.</p>
   */
  inline BulkOperationPerformanceTier GetPerformanceTier() const { return m_performanceTier; }
  inline bool PerformanceTierHasBeenSet() const { return m_performanceTierHasBeenSet; }
  inline void SetPerformanceTier(BulkOperationPerformanceTier value) {
    m_performanceTierHasBeenSet = true;
    m_performanceTier = value;
  }
  inline BulkOperationDescription& WithPerformanceTier(BulkOperationPerformanceTier value) {
    SetPerformanceTier(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_bulkOperationArn;

  BulkOperationStatus m_bulkOperationStatus{BulkOperationStatus::NOT_SET};

  Aws::Vector<BulkOperationTableDetail> m_tableDetails;

  Aws::String m_clientToken;

  InputS3Configuration m_inputS3Configuration;

  OutputS3Configuration m_outputS3Configuration;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  long long m_processedItemCount{0};

  long long m_processedInputBytes{0};

  long long m_totalInputBytes{0};

  Aws::Vector<BulkOperationUsage> m_bulkOperationUsage;

  long long m_failedItemCount{0};

  Aws::String m_failureCode;

  Aws::String m_failureMessage;

  long long m_maxWriteRequestUnits{0};

  BulkOperationPerformanceTier m_performanceTier{BulkOperationPerformanceTier::NOT_SET};
  bool m_bulkOperationArnHasBeenSet = false;
  bool m_bulkOperationStatusHasBeenSet = false;
  bool m_tableDetailsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
  bool m_inputS3ConfigurationHasBeenSet = false;
  bool m_outputS3ConfigurationHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_processedItemCountHasBeenSet = false;
  bool m_processedInputBytesHasBeenSet = false;
  bool m_totalInputBytesHasBeenSet = false;
  bool m_bulkOperationUsageHasBeenSet = false;
  bool m_failedItemCountHasBeenSet = false;
  bool m_failureCodeHasBeenSet = false;
  bool m_failureMessageHasBeenSet = false;
  bool m_maxWriteRequestUnitsHasBeenSet = false;
  bool m_performanceTierHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
