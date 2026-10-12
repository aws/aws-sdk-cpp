/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/MemoryRecordUpdateInput.h>
#include <aws/bedrock-agentcore/model/RecordExpirySpecification.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class BatchUpdateMemoryRecordsRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API BatchUpdateMemoryRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateMemoryRecords"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique ID of the memory resource where records will be updated.</p>
   */
  inline const Aws::String& GetMemoryId() const { return m_memoryId; }
  inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
  template <typename MemoryIdT = Aws::String>
  void SetMemoryId(MemoryIdT&& value) {
    m_memoryIdHasBeenSet = true;
    m_memoryId = std::forward<MemoryIdT>(value);
  }
  template <typename MemoryIdT = Aws::String>
  BatchUpdateMemoryRecordsRequest& WithMemoryId(MemoryIdT&& value) {
    SetMemoryId(std::forward<MemoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of memory record update inputs to be processed in the batch
   * operation.</p>
   */
  inline const Aws::Vector<MemoryRecordUpdateInput>& GetRecords() const { return m_records; }
  inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }
  template <typename RecordsT = Aws::Vector<MemoryRecordUpdateInput>>
  void SetRecords(RecordsT&& value) {
    m_recordsHasBeenSet = true;
    m_records = std::forward<RecordsT>(value);
  }
  template <typename RecordsT = Aws::Vector<MemoryRecordUpdateInput>>
  BatchUpdateMemoryRecordsRequest& WithRecords(RecordsT&& value) {
    SetRecords(std::forward<RecordsT>(value));
    return *this;
  }
  template <typename RecordsT = MemoryRecordUpdateInput>
  BatchUpdateMemoryRecordsRequest& AddRecords(RecordsT&& value) {
    m_recordsHasBeenSet = true;
    m_records.emplace_back(std::forward<RecordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The record expiry (long-term memory time-to-live) applied to every record
   * updated by this request. Set <code>recordExpiryDurationDays</code> to configure
   * or overwrite the number of days after which the records expire, or set
   * <code>action</code> to <code>REMOVE</code> to clear a previously configured
   * expiry so that the records no longer expire.</p> <p>When you do not provide this
   * value, the service determines each record's expiry from its current state:</p>
   * <ul> <li> <p>If the record already has an expiry configured, the service resets
   * and reapplies the expiry based on the last applied
   * <code>recordExpiryDurationDays</code>.</p> </li> <li> <p>If the record does not
   * have an expiry configured, no expiry is applied and the record remains
   * non-expiring. This is the outcome regardless of whether the record's strategy
   * configures an expiry.</p> </li> </ul> <p>Providing an explicit
   * <code>recordExpiryDurationDays</code> always takes precedence: it overwrites an
   * existing expiry, or sets one on a record that previously had none.</p>
   */
  inline const RecordExpirySpecification& GetRecordExpirySpecification() const { return m_recordExpirySpecification; }
  inline bool RecordExpirySpecificationHasBeenSet() const { return m_recordExpirySpecificationHasBeenSet; }
  template <typename RecordExpirySpecificationT = RecordExpirySpecification>
  void SetRecordExpirySpecification(RecordExpirySpecificationT&& value) {
    m_recordExpirySpecificationHasBeenSet = true;
    m_recordExpirySpecification = std::forward<RecordExpirySpecificationT>(value);
  }
  template <typename RecordExpirySpecificationT = RecordExpirySpecification>
  BatchUpdateMemoryRecordsRequest& WithRecordExpirySpecification(RecordExpirySpecificationT&& value) {
    SetRecordExpirySpecification(std::forward<RecordExpirySpecificationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_memoryId;

  Aws::Vector<MemoryRecordUpdateInput> m_records;

  RecordExpirySpecification m_recordExpirySpecification;
  bool m_memoryIdHasBeenSet = false;
  bool m_recordsHasBeenSet = false;
  bool m_recordExpirySpecificationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
