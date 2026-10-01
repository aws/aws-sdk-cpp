/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/NotifyCodeConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {
class ListNotifyCodeConfigurationsResult {
 public:
  AWS_ENDUSERMESSAGING_API ListNotifyCodeConfigurationsResult() = default;
  AWS_ENDUSERMESSAGING_API ListNotifyCodeConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ENDUSERMESSAGING_API ListNotifyCodeConfigurationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of notify code configurations.</p>
   */
  inline const Aws::Vector<NotifyCodeConfiguration>& GetNotifyCodeConfigurations() const { return m_notifyCodeConfigurations; }
  template <typename NotifyCodeConfigurationsT = Aws::Vector<NotifyCodeConfiguration>>
  void SetNotifyCodeConfigurations(NotifyCodeConfigurationsT&& value) {
    m_notifyCodeConfigurationsHasBeenSet = true;
    m_notifyCodeConfigurations = std::forward<NotifyCodeConfigurationsT>(value);
  }
  template <typename NotifyCodeConfigurationsT = Aws::Vector<NotifyCodeConfiguration>>
  ListNotifyCodeConfigurationsResult& WithNotifyCodeConfigurations(NotifyCodeConfigurationsT&& value) {
    SetNotifyCodeConfigurations(std::forward<NotifyCodeConfigurationsT>(value));
    return *this;
  }
  template <typename NotifyCodeConfigurationsT = NotifyCodeConfiguration>
  ListNotifyCodeConfigurationsResult& AddNotifyCodeConfigurations(NotifyCodeConfigurationsT&& value) {
    m_notifyCodeConfigurationsHasBeenSet = true;
    m_notifyCodeConfigurations.emplace_back(std::forward<NotifyCodeConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to retrieve the next page of results. This value is returned when
   * more results are available, and is null when there are no more results to
   * return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListNotifyCodeConfigurationsResult& WithNextToken(NextTokenT&& value) {
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
  ListNotifyCodeConfigurationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<NotifyCodeConfiguration> m_notifyCodeConfigurations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_notifyCodeConfigurationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
