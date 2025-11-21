/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>The product REST endpoint page.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/EndpointDisplayContentResponse">AWS
 * API Reference</a></p>
 */
class EndpointDisplayContentResponse {
 public:
  AWS_APIGATEWAYV2_API EndpointDisplayContentResponse() = default;
  AWS_APIGATEWAYV2_API EndpointDisplayContentResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API EndpointDisplayContentResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The API documentation.</p>
   */
  inline const Aws::String& GetBody() const { return m_body; }
  inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
  template <typename BodyT = Aws::String>
  void SetBody(BodyT&& value) {
    m_bodyHasBeenSet = true;
    m_body = std::forward<BodyT>(value);
  }
  template <typename BodyT = Aws::String>
  EndpointDisplayContentResponse& WithBody(BodyT&& value) {
    SetBody(std::forward<BodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL to invoke your REST API.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  EndpointDisplayContentResponse& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation name.</p>
   */
  inline const Aws::String& GetOperationName() const { return m_operationName; }
  inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
  template <typename OperationNameT = Aws::String>
  void SetOperationName(OperationNameT&& value) {
    m_operationNameHasBeenSet = true;
    m_operationName = std::forward<OperationNameT>(value);
  }
  template <typename OperationNameT = Aws::String>
  EndpointDisplayContentResponse& WithOperationName(OperationNameT&& value) {
    SetOperationName(std::forward<OperationNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_body;
  bool m_bodyHasBeenSet = false;

  Aws::String m_endpoint;
  bool m_endpointHasBeenSet = false;

  Aws::String m_operationName;
  bool m_operationNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
