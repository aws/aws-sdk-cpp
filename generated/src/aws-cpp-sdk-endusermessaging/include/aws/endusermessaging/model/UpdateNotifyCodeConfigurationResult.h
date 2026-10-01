/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
class UpdateNotifyCodeConfigurationResult {
 public:
  AWS_ENDUSERMESSAGING_API UpdateNotifyCodeConfigurationResult() = default;
  AWS_ENDUSERMESSAGING_API UpdateNotifyCodeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ENDUSERMESSAGING_API UpdateNotifyCodeConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The notify code configuration resource.</p>
   */
  inline const NotifyCodeConfiguration& GetNotifyCodeConfiguration() const { return m_notifyCodeConfiguration; }
  template <typename NotifyCodeConfigurationT = NotifyCodeConfiguration>
  void SetNotifyCodeConfiguration(NotifyCodeConfigurationT&& value) {
    m_notifyCodeConfigurationHasBeenSet = true;
    m_notifyCodeConfiguration = std::forward<NotifyCodeConfigurationT>(value);
  }
  template <typename NotifyCodeConfigurationT = NotifyCodeConfiguration>
  UpdateNotifyCodeConfigurationResult& WithNotifyCodeConfiguration(NotifyCodeConfigurationT&& value) {
    SetNotifyCodeConfiguration(std::forward<NotifyCodeConfigurationT>(value));
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
  UpdateNotifyCodeConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  NotifyCodeConfiguration m_notifyCodeConfiguration;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_notifyCodeConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
