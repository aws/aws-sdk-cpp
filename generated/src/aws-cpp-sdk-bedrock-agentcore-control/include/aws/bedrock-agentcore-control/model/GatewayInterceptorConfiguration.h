/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/GatewayInterceptionPoint.h>
#include <aws/bedrock-agentcore-control/model/InterceptorConfiguration.h>
#include <aws/bedrock-agentcore-control/model/InterceptorInputConfiguration.h>
#include <aws/bedrock-agentcore-control/model/ResponseInterceptionMode.h>
#include <aws/bedrock-agentcore-control/model/ResponseStreamingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The configuration for an interceptor on a gateway. This structure defines
 * settings for an interceptor that will be invoked during the invocation of the
 * gateway.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GatewayInterceptorConfiguration">AWS
 * API Reference</a></p>
 */
class GatewayInterceptorConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GatewayInterceptorConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GatewayInterceptorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API GatewayInterceptorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The infrastructure settings of an interceptor configuration. This structure
   * defines how the interceptor can be invoked.</p>
   */
  inline const InterceptorConfiguration& GetInterceptor() const { return m_interceptor; }
  inline bool InterceptorHasBeenSet() const { return m_interceptorHasBeenSet; }
  template <typename InterceptorT = InterceptorConfiguration>
  void SetInterceptor(InterceptorT&& value) {
    m_interceptorHasBeenSet = true;
    m_interceptor = std::forward<InterceptorT>(value);
  }
  template <typename InterceptorT = InterceptorConfiguration>
  GatewayInterceptorConfiguration& WithInterceptor(InterceptorT&& value) {
    SetInterceptor(std::forward<InterceptorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The supported points of interception. This field specifies which points
   * during the gateway invocation to invoke the interceptor</p>
   */
  inline const Aws::Vector<GatewayInterceptionPoint>& GetInterceptionPoints() const { return m_interceptionPoints; }
  inline bool InterceptionPointsHasBeenSet() const { return m_interceptionPointsHasBeenSet; }
  template <typename InterceptionPointsT = Aws::Vector<GatewayInterceptionPoint>>
  void SetInterceptionPoints(InterceptionPointsT&& value) {
    m_interceptionPointsHasBeenSet = true;
    m_interceptionPoints = std::forward<InterceptionPointsT>(value);
  }
  template <typename InterceptionPointsT = Aws::Vector<GatewayInterceptionPoint>>
  GatewayInterceptorConfiguration& WithInterceptionPoints(InterceptionPointsT&& value) {
    SetInterceptionPoints(std::forward<InterceptionPointsT>(value));
    return *this;
  }
  inline GatewayInterceptorConfiguration& AddInterceptionPoints(GatewayInterceptionPoint value) {
    m_interceptionPointsHasBeenSet = true;
    m_interceptionPoints.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the input of the interceptor. This field specifies how
   * the input to the interceptor is constructed</p>
   */
  inline const InterceptorInputConfiguration& GetInputConfiguration() const { return m_inputConfiguration; }
  inline bool InputConfigurationHasBeenSet() const { return m_inputConfigurationHasBeenSet; }
  template <typename InputConfigurationT = InterceptorInputConfiguration>
  void SetInputConfiguration(InputConfigurationT&& value) {
    m_inputConfigurationHasBeenSet = true;
    m_inputConfiguration = std::forward<InputConfigurationT>(value);
  }
  template <typename InputConfigurationT = InterceptorInputConfiguration>
  GatewayInterceptorConfiguration& WithInputConfiguration(InputConfigurationT&& value) {
    SetInputConfiguration(std::forward<InputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how the interceptor processes streamed target responses. You can
   * set this field only on an interceptor that includes the <code>RESPONSE</code>
   * interception point. Valid values include:</p> <ul> <li> <p>
   * <code>BUFFERED</code> - The gateway collects the complete target response and
   * then invokes the interceptor once. This is the default.</p> </li> <li> <p>
   * <code>STREAM</code> - The gateway sends a streamed target response to the
   * interceptor in batches of events and returns each processed batch to the client
   * as soon as it's ready. Non-streamed responses still use <code>BUFFERED</code>
   * processing. If you specify <code>STREAM</code>, you must also specify
   * <code>responseStreamingConfiguration</code>, and the input configuration can't
   * exclude the response body.</p> </li> </ul>
   */
  inline ResponseInterceptionMode GetResponseInterceptionMode() const { return m_responseInterceptionMode; }
  inline bool ResponseInterceptionModeHasBeenSet() const { return m_responseInterceptionModeHasBeenSet; }
  inline void SetResponseInterceptionMode(ResponseInterceptionMode value) {
    m_responseInterceptionModeHasBeenSet = true;
    m_responseInterceptionMode = value;
  }
  inline GatewayInterceptorConfiguration& WithResponseInterceptionMode(ResponseInterceptionMode value) {
    SetResponseInterceptionMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the batching settings for a streamed response. Specify this field
   * only when <code>responseInterceptionMode</code> is <code>STREAM</code>. You must
   * specify it for <code>STREAM</code>.</p>
   */
  inline const ResponseStreamingConfiguration& GetResponseStreamingConfiguration() const { return m_responseStreamingConfiguration; }
  inline bool ResponseStreamingConfigurationHasBeenSet() const { return m_responseStreamingConfigurationHasBeenSet; }
  template <typename ResponseStreamingConfigurationT = ResponseStreamingConfiguration>
  void SetResponseStreamingConfiguration(ResponseStreamingConfigurationT&& value) {
    m_responseStreamingConfigurationHasBeenSet = true;
    m_responseStreamingConfiguration = std::forward<ResponseStreamingConfigurationT>(value);
  }
  template <typename ResponseStreamingConfigurationT = ResponseStreamingConfiguration>
  GatewayInterceptorConfiguration& WithResponseStreamingConfiguration(ResponseStreamingConfigurationT&& value) {
    SetResponseStreamingConfiguration(std::forward<ResponseStreamingConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  InterceptorConfiguration m_interceptor;

  Aws::Vector<GatewayInterceptionPoint> m_interceptionPoints;

  InterceptorInputConfiguration m_inputConfiguration;

  ResponseInterceptionMode m_responseInterceptionMode{ResponseInterceptionMode::NOT_SET};

  ResponseStreamingConfiguration m_responseStreamingConfiguration;
  bool m_interceptorHasBeenSet = false;
  bool m_interceptionPointsHasBeenSet = false;
  bool m_inputConfigurationHasBeenSet = false;
  bool m_responseInterceptionModeHasBeenSet = false;
  bool m_responseStreamingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
