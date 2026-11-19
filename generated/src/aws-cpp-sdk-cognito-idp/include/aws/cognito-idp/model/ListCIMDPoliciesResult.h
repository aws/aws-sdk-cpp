/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/CIMDPolicySummaryType.h>
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
class ListCIMDPoliciesResult {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API ListCIMDPoliciesResult() = default;
  AWS_COGNITOIDENTITYPROVIDER_API ListCIMDPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COGNITOIDENTITYPROVIDER_API ListCIMDPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListCIMDPoliciesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of each CIMD policy in the user pool.</p>
   */
  inline const Aws::Vector<CIMDPolicySummaryType>& GetCIMDPolicies() const { return m_cIMDPolicies; }
  template <typename CIMDPoliciesT = Aws::Vector<CIMDPolicySummaryType>>
  void SetCIMDPolicies(CIMDPoliciesT&& value) {
    m_cIMDPoliciesHasBeenSet = true;
    m_cIMDPolicies = std::forward<CIMDPoliciesT>(value);
  }
  template <typename CIMDPoliciesT = Aws::Vector<CIMDPolicySummaryType>>
  ListCIMDPoliciesResult& WithCIMDPolicies(CIMDPoliciesT&& value) {
    SetCIMDPolicies(std::forward<CIMDPoliciesT>(value));
    return *this;
  }
  template <typename CIMDPoliciesT = CIMDPolicySummaryType>
  ListCIMDPoliciesResult& AddCIMDPolicies(CIMDPoliciesT&& value) {
    m_cIMDPoliciesHasBeenSet = true;
    m_cIMDPolicies.emplace_back(std::forward<CIMDPoliciesT>(value));
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
  ListCIMDPoliciesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<CIMDPolicySummaryType> m_cIMDPolicies;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_cIMDPoliciesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
