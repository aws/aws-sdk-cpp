/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/PutRawEventsResultEntry.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {
class PutRawEventsResult {
 public:
  AWS_EVENTBRIDGEV2_API PutRawEventsResult() = default;
  AWS_EVENTBRIDGEV2_API PutRawEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_EVENTBRIDGEV2_API PutRawEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The number of entries in the batch that failed to be published.</p>
   */
  inline int64_t GetFailedEntryCount() const { return m_failedEntryCount; }
  inline void SetFailedEntryCount(int64_t value) {
    m_failedEntryCountHasBeenSet = true;
    m_failedEntryCount = value;
  }
  inline PutRawEventsResult& WithFailedEntryCount(int64_t value) {
    SetFailedEntryCount(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<PutRawEventsResultEntry>& GetEntries() const { return m_entries; }
  template <typename EntriesT = Aws::Vector<PutRawEventsResultEntry>>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::Vector<PutRawEventsResultEntry>>
  PutRawEventsResult& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  template <typename EntriesT = PutRawEventsResultEntry>
  PutRawEventsResult& AddEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries.emplace_back(std::forward<EntriesT>(value));
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
  PutRawEventsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  int64_t m_failedEntryCount{0};

  Aws::Vector<PutRawEventsResultEntry> m_entries;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_failedEntryCountHasBeenSet = false;
  bool m_entriesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
