/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/MemoryRecordCreateInput.h>
#include <aws/bedrock-agentcore/model/RecordExpirySpecification.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class BatchCreateMemoryRecordsRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API BatchCreateMemoryRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchCreateMemoryRecords"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique ID of the memory resource where records will be created.</p>
   */
  inline const Aws::String& GetMemoryId() const { return m_memoryId; }
  inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
  template <typename MemoryIdT = Aws::String>
  void SetMemoryId(MemoryIdT&& value) {
    m_memoryIdHasBeenSet = true;
    m_memoryId = std::forward<MemoryIdT>(value);
  }
  template <typename MemoryIdT = Aws::String>
  BatchCreateMemoryRecordsRequest& WithMemoryId(MemoryIdT&& value) {
    SetMemoryId(std::forward<MemoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of memory record creation inputs to be processed in the batch
   * operation.</p>
   */
  inline const Aws::Vector<MemoryRecordCreateInput>& GetRecords() const { return m_records; }
  inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }
  template <typename RecordsT = Aws::Vector<MemoryRecordCreateInput>>
  void SetRecords(RecordsT&& value) {
    m_recordsHasBeenSet = true;
    m_records = std::forward<RecordsT>(value);
  }
  template <typename RecordsT = Aws::Vector<MemoryRecordCreateInput>>
  BatchCreateMemoryRecordsRequest& WithRecords(RecordsT&& value) {
    SetRecords(std::forward<RecordsT>(value));
    return *this;
  }
  template <typename RecordsT = MemoryRecordCreateInput>
  BatchCreateMemoryRecordsRequest& AddRecords(RecordsT&& value) {
    m_recordsHasBeenSet = true;
    m_records.emplace_back(std::forward<RecordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotent processing of the
   * batch request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  BatchCreateMemoryRecordsRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The record expiry (long-term memory time-to-live) applied to every record
   * created by this request. Set <code>recordExpiryDurationDays</code> to the number
   * of days after which the records expire. Only the expiry provided here is
   * applied; the records' strategy association has no effect on their expiry. If you
   * do not provide this value, the records do not expire. The <code>REMOVE</code>
   * action does not apply when creating records.</p>
   */
  inline const RecordExpirySpecification& GetRecordExpirySpecification() const { return m_recordExpirySpecification; }
  inline bool RecordExpirySpecificationHasBeenSet() const { return m_recordExpirySpecificationHasBeenSet; }
  template <typename RecordExpirySpecificationT = RecordExpirySpecification>
  void SetRecordExpirySpecification(RecordExpirySpecificationT&& value) {
    m_recordExpirySpecificationHasBeenSet = true;
    m_recordExpirySpecification = std::forward<RecordExpirySpecificationT>(value);
  }
  template <typename RecordExpirySpecificationT = RecordExpirySpecification>
  BatchCreateMemoryRecordsRequest& WithRecordExpirySpecification(RecordExpirySpecificationT&& value) {
    SetRecordExpirySpecification(std::forward<RecordExpirySpecificationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_memoryId;

  Aws::Vector<MemoryRecordCreateInput> m_records;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  RecordExpirySpecification m_recordExpirySpecification;
  bool m_memoryIdHasBeenSet = false;
  bool m_recordsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_recordExpirySpecificationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
