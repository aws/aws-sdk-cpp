/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SecurityProfileItem.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class ListEntitySecurityProfilesResult {
 public:
  AWS_CONNECT_API ListEntitySecurityProfilesResult() = default;
  AWS_CONNECT_API ListEntitySecurityProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListEntitySecurityProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> List of Security Profile Object. </p>
   */
  inline const Aws::Vector<SecurityProfileItem>& GetSecurityProfiles() const { return m_securityProfiles; }
  template <typename SecurityProfilesT = Aws::Vector<SecurityProfileItem>>
  void SetSecurityProfiles(SecurityProfilesT&& value) {
    m_securityProfilesHasBeenSet = true;
    m_securityProfiles = std::forward<SecurityProfilesT>(value);
  }
  template <typename SecurityProfilesT = Aws::Vector<SecurityProfileItem>>
  ListEntitySecurityProfilesResult& WithSecurityProfiles(SecurityProfilesT&& value) {
    SetSecurityProfiles(std::forward<SecurityProfilesT>(value));
    return *this;
  }
  template <typename SecurityProfilesT = SecurityProfileItem>
  ListEntitySecurityProfilesResult& AddSecurityProfiles(SecurityProfilesT&& value) {
    m_securityProfilesHasBeenSet = true;
    m_securityProfiles.emplace_back(std::forward<SecurityProfilesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The token for the next set of results. Use the value returned in the
   * previous response in the next request to retrieve the next set of results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEntitySecurityProfilesResult& WithNextToken(NextTokenT&& value) {
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
  ListEntitySecurityProfilesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SecurityProfileItem> m_securityProfiles;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_securityProfilesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
