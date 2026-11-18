/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/RestorationDescriptionType.h>
#include <aws/core/http/HttpResponse.h>
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
namespace CognitoIdentityProvider {
namespace Model {
class ListPointInTimeRecoveriesResult {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API ListPointInTimeRecoveriesResult() = default;
  AWS_COGNITOIDENTITYPROVIDER_API ListPointInTimeRecoveriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COGNITOIDENTITYPROVIDER_API ListPointInTimeRecoveriesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A summary of each requested recovery, including its ID, status, and the point
   * in time that it restores the user pool to.</p>
   */
  inline const Aws::Vector<RestorationDescriptionType>& GetRestorations() const { return m_restorations; }
  template <typename RestorationsT = Aws::Vector<RestorationDescriptionType>>
  void SetRestorations(RestorationsT&& value) {
    m_restorationsHasBeenSet = true;
    m_restorations = std::forward<RestorationsT>(value);
  }
  template <typename RestorationsT = Aws::Vector<RestorationDescriptionType>>
  ListPointInTimeRecoveriesResult& WithRestorations(RestorationsT&& value) {
    SetRestorations(std::forward<RestorationsT>(value));
    return *this;
  }
  template <typename RestorationsT = RestorationDescriptionType>
  ListPointInTimeRecoveriesResult& AddRestorations(RestorationsT&& value) {
    m_restorationsHasBeenSet = true;
    m_restorations.emplace_back(std::forward<RestorationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier that Amazon Cognito returned with the previous request to this
   * operation. When you include a pagination token in your request, Amazon Cognito
   * returns the next set of items in the list. By use of this token, you can
   * paginate through the full list of items.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPointInTimeRecoveriesResult& WithNextToken(NextTokenT&& value) {
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
  ListPointInTimeRecoveriesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RestorationDescriptionType> m_restorations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_restorationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
