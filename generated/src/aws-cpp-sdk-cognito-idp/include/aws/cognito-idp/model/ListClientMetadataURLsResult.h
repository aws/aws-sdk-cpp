/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ClientMetadataURLType.h>
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
class ListClientMetadataURLsResult {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API ListClientMetadataURLsResult() = default;
  AWS_COGNITOIDENTITYPROVIDER_API ListClientMetadataURLsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COGNITOIDENTITYPROVIDER_API ListClientMetadataURLsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListClientMetadataURLsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client metadata document URLs for the CIMD policy, with the cache state
   * of each URL.</p>
   */
  inline const Aws::Vector<ClientMetadataURLType>& GetClientMetadataURLs() const { return m_clientMetadataURLs; }
  template <typename ClientMetadataURLsT = Aws::Vector<ClientMetadataURLType>>
  void SetClientMetadataURLs(ClientMetadataURLsT&& value) {
    m_clientMetadataURLsHasBeenSet = true;
    m_clientMetadataURLs = std::forward<ClientMetadataURLsT>(value);
  }
  template <typename ClientMetadataURLsT = Aws::Vector<ClientMetadataURLType>>
  ListClientMetadataURLsResult& WithClientMetadataURLs(ClientMetadataURLsT&& value) {
    SetClientMetadataURLs(std::forward<ClientMetadataURLsT>(value));
    return *this;
  }
  template <typename ClientMetadataURLsT = ClientMetadataURLType>
  ListClientMetadataURLsResult& AddClientMetadataURLs(ClientMetadataURLsT&& value) {
    m_clientMetadataURLsHasBeenSet = true;
    m_clientMetadataURLs.emplace_back(std::forward<ClientMetadataURLsT>(value));
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
  ListClientMetadataURLsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<ClientMetadataURLType> m_clientMetadataURLs;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_clientMetadataURLsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
