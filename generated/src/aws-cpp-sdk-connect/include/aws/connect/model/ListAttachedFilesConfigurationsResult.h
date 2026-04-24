/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AttachedFilesConfigurationSummary.h>
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
namespace Connect {
namespace Model {
class ListAttachedFilesConfigurationsResult {
 public:
  AWS_CONNECT_API ListAttachedFilesConfigurationsResult() = default;
  AWS_CONNECT_API ListAttachedFilesConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListAttachedFilesConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the attached files configurations.</p>
   */
  inline const Aws::Vector<AttachedFilesConfigurationSummary>& GetAttachedFilesConfigurations() const {
    return m_attachedFilesConfigurations;
  }
  template <typename AttachedFilesConfigurationsT = Aws::Vector<AttachedFilesConfigurationSummary>>
  void SetAttachedFilesConfigurations(AttachedFilesConfigurationsT&& value) {
    m_attachedFilesConfigurationsHasBeenSet = true;
    m_attachedFilesConfigurations = std::forward<AttachedFilesConfigurationsT>(value);
  }
  template <typename AttachedFilesConfigurationsT = Aws::Vector<AttachedFilesConfigurationSummary>>
  ListAttachedFilesConfigurationsResult& WithAttachedFilesConfigurations(AttachedFilesConfigurationsT&& value) {
    SetAttachedFilesConfigurations(std::forward<AttachedFilesConfigurationsT>(value));
    return *this;
  }
  template <typename AttachedFilesConfigurationsT = AttachedFilesConfigurationSummary>
  ListAttachedFilesConfigurationsResult& AddAttachedFilesConfigurations(AttachedFilesConfigurationsT&& value) {
    m_attachedFilesConfigurationsHasBeenSet = true;
    m_attachedFilesConfigurations.emplace_back(std::forward<AttachedFilesConfigurationsT>(value));
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
  ListAttachedFilesConfigurationsResult& WithNextToken(NextTokenT&& value) {
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
  ListAttachedFilesConfigurationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AttachedFilesConfigurationSummary> m_attachedFilesConfigurations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_attachedFilesConfigurationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
