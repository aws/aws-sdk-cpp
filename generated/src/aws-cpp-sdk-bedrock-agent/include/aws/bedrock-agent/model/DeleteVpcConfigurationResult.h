/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/VpcConfigurationStatus.h>
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
class DeleteVpcConfigurationResult {
 public:
  AWS_BEDROCKAGENT_API DeleteVpcConfigurationResult() = default;
  AWS_BEDROCKAGENT_API DeleteVpcConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENT_API DeleteVpcConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the VPC configuration being deleted.</p>
   */
  inline const Aws::String& GetVpcConfigurationId() const { return m_vpcConfigurationId; }
  template <typename VpcConfigurationIdT = Aws::String>
  void SetVpcConfigurationId(VpcConfigurationIdT&& value) {
    m_vpcConfigurationIdHasBeenSet = true;
    m_vpcConfigurationId = std::forward<VpcConfigurationIdT>(value);
  }
  template <typename VpcConfigurationIdT = Aws::String>
  DeleteVpcConfigurationResult& WithVpcConfigurationId(VpcConfigurationIdT&& value) {
    SetVpcConfigurationId(std::forward<VpcConfigurationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the VPC configuration. Immediately after a delete
   * request this is <code>DELETING</code>.</p>
   */
  inline VpcConfigurationStatus GetStatus() const { return m_status; }
  inline void SetStatus(VpcConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteVpcConfigurationResult& WithStatus(VpcConfigurationStatus value) {
    SetStatus(value);
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
  DeleteVpcConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_vpcConfigurationId;

  VpcConfigurationStatus m_status{VpcConfigurationStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_vpcConfigurationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
