/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/AdConfigurationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IVS {
namespace Model {
class ListAdConfigurationsResult {
 public:
  AWS_IVS_API ListAdConfigurationsResult() = default;
  AWS_IVS_API ListAdConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IVS_API ListAdConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of the matching ad configurations.</p>
   */
  inline const Aws::Vector<AdConfigurationSummary>& GetAdConfigurations() const { return m_adConfigurations; }
  template <typename AdConfigurationsT = Aws::Vector<AdConfigurationSummary>>
  void SetAdConfigurations(AdConfigurationsT&& value) {
    m_adConfigurationsHasBeenSet = true;
    m_adConfigurations = std::forward<AdConfigurationsT>(value);
  }
  template <typename AdConfigurationsT = Aws::Vector<AdConfigurationSummary>>
  ListAdConfigurationsResult& WithAdConfigurations(AdConfigurationsT&& value) {
    SetAdConfigurations(std::forward<AdConfigurationsT>(value));
    return *this;
  }
  template <typename AdConfigurationsT = AdConfigurationSummary>
  ListAdConfigurationsResult& AddAdConfigurations(AdConfigurationsT&& value) {
    m_adConfigurationsHasBeenSet = true;
    m_adConfigurations.emplace_back(std::forward<AdConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If there are more ad configurations than <code>maxResults</code>, use
   * <code>nextToken</code> in the request to get the next set.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAdConfigurationsResult& WithNextToken(NextTokenT&& value) {
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
  ListAdConfigurationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AdConfigurationSummary> m_adConfigurations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_adConfigurationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
