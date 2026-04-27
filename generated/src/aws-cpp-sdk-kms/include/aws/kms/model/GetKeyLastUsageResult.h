/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/KeyLastUsageData.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace KMS {
namespace Model {
class GetKeyLastUsageResult {
 public:
  AWS_KMS_API GetKeyLastUsageResult() = default;
  AWS_KMS_API GetKeyLastUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KMS_API GetKeyLastUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The globally unique identifier for the KMS key.</p>
   */
  inline const Aws::String& GetKeyId() const { return m_keyId; }
  template <typename KeyIdT = Aws::String>
  void SetKeyId(KeyIdT&& value) {
    m_keyIdHasBeenSet = true;
    m_keyId = std::forward<KeyIdT>(value);
  }
  template <typename KeyIdT = Aws::String>
  GetKeyLastUsageResult& WithKeyId(KeyIdT&& value) {
    SetKeyId(std::forward<KeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains usage information about the last time the KMS key was used for a
   * successful cryptographic operation. If the key has not been used since tracking
   * began, this response element is empty.</p>
   */
  inline const KeyLastUsageData& GetKeyLastUsage() const { return m_keyLastUsage; }
  template <typename KeyLastUsageT = KeyLastUsageData>
  void SetKeyLastUsage(KeyLastUsageT&& value) {
    m_keyLastUsageHasBeenSet = true;
    m_keyLastUsage = std::forward<KeyLastUsageT>(value);
  }
  template <typename KeyLastUsageT = KeyLastUsageData>
  GetKeyLastUsageResult& WithKeyLastUsage(KeyLastUsageT&& value) {
    SetKeyLastUsage(std::forward<KeyLastUsageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date from which KMS began recording cryptographic activity for this key,
   * or the date the KMS key was created, whichever is later.</p>
   */
  inline const Aws::Utils::DateTime& GetTrackingStartDate() const { return m_trackingStartDate; }
  template <typename TrackingStartDateT = Aws::Utils::DateTime>
  void SetTrackingStartDate(TrackingStartDateT&& value) {
    m_trackingStartDateHasBeenSet = true;
    m_trackingStartDate = std::forward<TrackingStartDateT>(value);
  }
  template <typename TrackingStartDateT = Aws::Utils::DateTime>
  GetKeyLastUsageResult& WithTrackingStartDate(TrackingStartDateT&& value) {
    SetTrackingStartDate(std::forward<TrackingStartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the KMS key was created.</p>
   */
  inline const Aws::Utils::DateTime& GetKeyCreationDate() const { return m_keyCreationDate; }
  template <typename KeyCreationDateT = Aws::Utils::DateTime>
  void SetKeyCreationDate(KeyCreationDateT&& value) {
    m_keyCreationDateHasBeenSet = true;
    m_keyCreationDate = std::forward<KeyCreationDateT>(value);
  }
  template <typename KeyCreationDateT = Aws::Utils::DateTime>
  GetKeyLastUsageResult& WithKeyCreationDate(KeyCreationDateT&& value) {
    SetKeyCreationDate(std::forward<KeyCreationDateT>(value));
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
  GetKeyLastUsageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_keyId;

  KeyLastUsageData m_keyLastUsage;

  Aws::Utils::DateTime m_trackingStartDate{};

  Aws::Utils::DateTime m_keyCreationDate{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_keyIdHasBeenSet = false;
  bool m_keyLastUsageHasBeenSet = false;
  bool m_trackingStartDateHasBeenSet = false;
  bool m_keyCreationDateHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace KMS
}  // namespace Aws
