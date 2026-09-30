/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/VpcConfiguration.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {
class GetVpcConfigurationResult {
 public:
  AWS_BEDROCKAGENT_API GetVpcConfigurationResult() = default;
  AWS_BEDROCKAGENT_API GetVpcConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENT_API GetVpcConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The VPC configuration, including its connection settings, resolution mode,
   * and current lifecycle status.</p>
   */
  inline const VpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
  template <typename VpcConfigurationT = VpcConfiguration>
  void SetVpcConfiguration(VpcConfigurationT&& value) {
    m_vpcConfigurationHasBeenSet = true;
    m_vpcConfiguration = std::forward<VpcConfigurationT>(value);
  }
  template <typename VpcConfigurationT = VpcConfiguration>
  GetVpcConfigurationResult& WithVpcConfiguration(VpcConfigurationT&& value) {
    SetVpcConfiguration(std::forward<VpcConfigurationT>(value));
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
  GetVpcConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  VpcConfiguration m_vpcConfiguration;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_vpcConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
