/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace KafkaConnect {
namespace Model {
class RestartConnectorResult {
 public:
  AWS_KAFKACONNECT_API RestartConnectorResult() = default;
  AWS_KAFKACONNECT_API RestartConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKACONNECT_API RestartConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connector.</p>
   */
  inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
  template <typename ConnectorArnT = Aws::String>
  void SetConnectorArn(ConnectorArnT&& value) {
    m_connectorArnHasBeenSet = true;
    m_connectorArn = std::forward<ConnectorArnT>(value);
  }
  template <typename ConnectorArnT = Aws::String>
  RestartConnectorResult& WithConnectorArn(ConnectorArnT&& value) {
    SetConnectorArn(std::forward<ConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connector operation created to perform
   * the restart.</p>
   */
  inline const Aws::String& GetConnectorOperationArn() const { return m_connectorOperationArn; }
  template <typename ConnectorOperationArnT = Aws::String>
  void SetConnectorOperationArn(ConnectorOperationArnT&& value) {
    m_connectorOperationArnHasBeenSet = true;
    m_connectorOperationArn = std::forward<ConnectorOperationArnT>(value);
  }
  template <typename ConnectorOperationArnT = Aws::String>
  RestartConnectorResult& WithConnectorOperationArn(ConnectorOperationArnT&& value) {
    SetConnectorOperationArn(std::forward<ConnectorOperationArnT>(value));
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
  RestartConnectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_connectorArn;

  Aws::String m_connectorOperationArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_connectorArnHasBeenSet = false;
  bool m_connectorOperationArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace KafkaConnect
}  // namespace Aws
