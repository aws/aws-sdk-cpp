/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/Subdomain.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {
class GetSubdomainsResult {
 public:
  AWS_LIGHTSAIL_API GetSubdomainsResult() = default;
  AWS_LIGHTSAIL_API GetSubdomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LIGHTSAIL_API GetSubdomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of objects that describe your subdomains.</p>
   */
  inline const Aws::Vector<Subdomain>& GetSubdomains() const { return m_subdomains; }
  template <typename SubdomainsT = Aws::Vector<Subdomain>>
  void SetSubdomains(SubdomainsT&& value) {
    m_subdomainsHasBeenSet = true;
    m_subdomains = std::forward<SubdomainsT>(value);
  }
  template <typename SubdomainsT = Aws::Vector<Subdomain>>
  GetSubdomainsResult& WithSubdomains(SubdomainsT&& value) {
    SetSubdomains(std::forward<SubdomainsT>(value));
    return *this;
  }
  template <typename SubdomainsT = Subdomain>
  GetSubdomainsResult& AddSubdomains(SubdomainsT&& value) {
    m_subdomainsHasBeenSet = true;
    m_subdomains.emplace_back(std::forward<SubdomainsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to advance to the next page of results from your request.</p> <p>A
   * next page token is not returned if there are no more results to display.</p>
   * <p>To get the next page of results, perform another <code>GetSubdomains</code>
   * request and specify the next page token using the <code>pageToken</code>
   * parameter.</p>
   */
  inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
  template <typename NextPageTokenT = Aws::String>
  void SetNextPageToken(NextPageTokenT&& value) {
    m_nextPageTokenHasBeenSet = true;
    m_nextPageToken = std::forward<NextPageTokenT>(value);
  }
  template <typename NextPageTokenT = Aws::String>
  GetSubdomainsResult& WithNextPageToken(NextPageTokenT&& value) {
    SetNextPageToken(std::forward<NextPageTokenT>(value));
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
  GetSubdomainsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Subdomain> m_subdomains;

  Aws::String m_nextPageToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_subdomainsHasBeenSet = false;
  bool m_nextPageTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
