/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/KeyLastUsageTrackingOperation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace KMS {
namespace Model {

/**
 * <p>Contains usage information about the last time the KMS key was used for a
 * successful cryptographic operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/KeyLastUsageData">AWS
 * API Reference</a></p>
 */
class KeyLastUsageData {
 public:
  AWS_KMS_API KeyLastUsageData() = default;
  AWS_KMS_API KeyLastUsageData(Aws::Utils::Json::JsonView jsonValue);
  AWS_KMS_API KeyLastUsageData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The last successful cryptographic operation the KMS key was used for. Absent
   * if the key has not been used since KMS began tracking.</p>
   */
  inline KeyLastUsageTrackingOperation GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  inline void SetOperation(KeyLastUsageTrackingOperation value) {
    m_operationHasBeenSet = true;
    m_operation = value;
  }
  inline KeyLastUsageData& WithOperation(KeyLastUsageTrackingOperation value) {
    SetOperation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the KMS key was most recently used for a successful
   * cryptographic operation. Absent if the key has not been used since KMS began
   * tracking.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  KeyLastUsageData& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudTrail <code>eventId</code> associated with the last successful
   * cryptographic operation. Absent if the key has not been used since KMS began
   * tracking.</p>
   */
  inline const Aws::String& GetCloudTrailEventId() const { return m_cloudTrailEventId; }
  inline bool CloudTrailEventIdHasBeenSet() const { return m_cloudTrailEventIdHasBeenSet; }
  template <typename CloudTrailEventIdT = Aws::String>
  void SetCloudTrailEventId(CloudTrailEventIdT&& value) {
    m_cloudTrailEventIdHasBeenSet = true;
    m_cloudTrailEventId = std::forward<CloudTrailEventIdT>(value);
  }
  template <typename CloudTrailEventIdT = Aws::String>
  KeyLastUsageData& WithCloudTrailEventId(CloudTrailEventIdT&& value) {
    SetCloudTrailEventId(std::forward<CloudTrailEventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The KMS request ID associated with the last successful cryptographic
   * operation. Absent if the key has not been used since KMS began tracking.</p>
   */
  inline const Aws::String& GetKmsRequestId() const { return m_kmsRequestId; }
  inline bool KmsRequestIdHasBeenSet() const { return m_kmsRequestIdHasBeenSet; }
  template <typename KmsRequestIdT = Aws::String>
  void SetKmsRequestId(KmsRequestIdT&& value) {
    m_kmsRequestIdHasBeenSet = true;
    m_kmsRequestId = std::forward<KmsRequestIdT>(value);
  }
  template <typename KmsRequestIdT = Aws::String>
  KeyLastUsageData& WithKmsRequestId(KmsRequestIdT&& value) {
    SetKmsRequestId(std::forward<KmsRequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  KeyLastUsageTrackingOperation m_operation{KeyLastUsageTrackingOperation::NOT_SET};

  Aws::Utils::DateTime m_timestamp{};

  Aws::String m_cloudTrailEventId;

  Aws::String m_kmsRequestId;
  bool m_operationHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
  bool m_cloudTrailEventIdHasBeenSet = false;
  bool m_kmsRequestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace KMS
}  // namespace Aws
