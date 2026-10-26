/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/FailoverSlateConfiguration.h>

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
class UpdateFailoverSlateConfigurationResult {
 public:
  AWS_IVS_API UpdateFailoverSlateConfigurationResult() = default;
  AWS_IVS_API UpdateFailoverSlateConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IVS_API UpdateFailoverSlateConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Object specifying the updated failover slate configuration.</p>
   */
  inline const FailoverSlateConfiguration& GetFailoverSlateConfiguration() const { return m_failoverSlateConfiguration; }
  template <typename FailoverSlateConfigurationT = FailoverSlateConfiguration>
  void SetFailoverSlateConfiguration(FailoverSlateConfigurationT&& value) {
    m_failoverSlateConfigurationHasBeenSet = true;
    m_failoverSlateConfiguration = std::forward<FailoverSlateConfigurationT>(value);
  }
  template <typename FailoverSlateConfigurationT = FailoverSlateConfiguration>
  UpdateFailoverSlateConfigurationResult& WithFailoverSlateConfiguration(FailoverSlateConfigurationT&& value) {
    SetFailoverSlateConfiguration(std::forward<FailoverSlateConfigurationT>(value));
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
  UpdateFailoverSlateConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  FailoverSlateConfiguration m_failoverSlateConfiguration;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_failoverSlateConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
