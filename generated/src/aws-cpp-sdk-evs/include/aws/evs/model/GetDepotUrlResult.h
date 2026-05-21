/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/EVS_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EVS {
namespace Model {
class GetDepotUrlResult {
 public:
  AWS_EVS_API GetDepotUrlResult() = default;
  AWS_EVS_API GetDepotUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EVS_API GetDepotUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The URL for accessing the Amazon EVS Custom Addon depot. This URL includes
   * the authentication token as a path component.</p>
   */
  inline const Aws::String& GetDepotUrl() const { return m_depotUrl; }
  template <typename DepotUrlT = Aws::String>
  void SetDepotUrl(DepotUrlT&& value) {
    m_depotUrlHasBeenSet = true;
    m_depotUrl = std::forward<DepotUrlT>(value);
  }
  template <typename DepotUrlT = Aws::String>
  GetDepotUrlResult& WithDepotUrl(DepotUrlT&& value) {
    SetDepotUrl(std::forward<DepotUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication token for depot access. This token is included in the
   * depot URL and is used to authenticate requests.</p>
   */
  inline const Aws::String& GetToken() const { return m_token; }
  template <typename TokenT = Aws::String>
  void SetToken(TokenT&& value) {
    m_tokenHasBeenSet = true;
    m_token = std::forward<TokenT>(value);
  }
  template <typename TokenT = Aws::String>
  GetDepotUrlResult& WithToken(TokenT&& value) {
    SetToken(std::forward<TokenT>(value));
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
  GetDepotUrlResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_depotUrl;

  Aws::String m_token;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_depotUrlHasBeenSet = false;
  bool m_tokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
