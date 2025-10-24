/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ProfileHistoryRecord.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {
class ListProfileHistoryRecordsResult {
 public:
  AWS_CUSTOMERPROFILES_API ListProfileHistoryRecordsResult() = default;
  AWS_CUSTOMERPROFILES_API ListProfileHistoryRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API ListProfileHistoryRecordsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of profile history records.</p>
   */
  inline const Aws::Vector<ProfileHistoryRecord>& GetProfileHistoryRecords() const { return m_profileHistoryRecords; }
  template <typename ProfileHistoryRecordsT = Aws::Vector<ProfileHistoryRecord>>
  void SetProfileHistoryRecords(ProfileHistoryRecordsT&& value) {
    m_profileHistoryRecordsHasBeenSet = true;
    m_profileHistoryRecords = std::forward<ProfileHistoryRecordsT>(value);
  }
  template <typename ProfileHistoryRecordsT = Aws::Vector<ProfileHistoryRecord>>
  ListProfileHistoryRecordsResult& WithProfileHistoryRecords(ProfileHistoryRecordsT&& value) {
    SetProfileHistoryRecords(std::forward<ProfileHistoryRecordsT>(value));
    return *this;
  }
  template <typename ProfileHistoryRecordsT = ProfileHistoryRecord>
  ListProfileHistoryRecordsResult& AddProfileHistoryRecords(ProfileHistoryRecordsT&& value) {
    m_profileHistoryRecordsHasBeenSet = true;
    m_profileHistoryRecords.emplace_back(std::forward<ProfileHistoryRecordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If there are additional results, this is the token for the next set of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListProfileHistoryRecordsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListProfileHistoryRecordsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ProfileHistoryRecord> m_profileHistoryRecords;
  bool m_profileHistoryRecordsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
