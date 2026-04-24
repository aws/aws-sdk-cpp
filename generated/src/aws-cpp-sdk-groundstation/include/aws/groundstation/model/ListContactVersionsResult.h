/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/ContactVersion.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {
class ListContactVersionsResult {
 public:
  AWS_GROUNDSTATION_API ListContactVersionsResult() = default;
  AWS_GROUNDSTATION_API ListContactVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GROUNDSTATION_API ListContactVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Next token to be used in a subsequent <code>ListContactVersions</code> call
   * to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListContactVersionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of contact versions.</p>
   */
  inline const Aws::Vector<ContactVersion>& GetContactVersionsList() const { return m_contactVersionsList; }
  template <typename ContactVersionsListT = Aws::Vector<ContactVersion>>
  void SetContactVersionsList(ContactVersionsListT&& value) {
    m_contactVersionsListHasBeenSet = true;
    m_contactVersionsList = std::forward<ContactVersionsListT>(value);
  }
  template <typename ContactVersionsListT = Aws::Vector<ContactVersion>>
  ListContactVersionsResult& WithContactVersionsList(ContactVersionsListT&& value) {
    SetContactVersionsList(std::forward<ContactVersionsListT>(value));
    return *this;
  }
  template <typename ContactVersionsListT = ContactVersion>
  ListContactVersionsResult& AddContactVersionsList(ContactVersionsListT&& value) {
    m_contactVersionsListHasBeenSet = true;
    m_contactVersionsList.emplace_back(std::forward<ContactVersionsListT>(value));
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
  ListContactVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<ContactVersion> m_contactVersionsList;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_contactVersionsListHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
