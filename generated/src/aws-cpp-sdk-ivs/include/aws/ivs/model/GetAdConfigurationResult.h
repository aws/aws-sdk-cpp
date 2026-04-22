/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/AdConfiguration.h>

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
class GetAdConfigurationResult {
 public:
  AWS_IVS_API GetAdConfigurationResult() = default;
  AWS_IVS_API GetAdConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IVS_API GetAdConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p/>
   */
  inline const AdConfiguration& GetAdConfiguration() const { return m_adConfiguration; }
  template <typename AdConfigurationT = AdConfiguration>
  void SetAdConfiguration(AdConfigurationT&& value) {
    m_adConfigurationHasBeenSet = true;
    m_adConfiguration = std::forward<AdConfigurationT>(value);
  }
  template <typename AdConfigurationT = AdConfiguration>
  GetAdConfigurationResult& WithAdConfiguration(AdConfigurationT&& value) {
    SetAdConfiguration(std::forward<AdConfigurationT>(value));
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
  GetAdConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AdConfiguration m_adConfiguration;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_adConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
