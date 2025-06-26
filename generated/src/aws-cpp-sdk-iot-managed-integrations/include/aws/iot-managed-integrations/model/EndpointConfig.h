/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/LambdaConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>The configuration details for an endpoint, which defines how to connect to
   * and communicate with external services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/EndpointConfig">AWS
   * API Reference</a></p>
   */
  class EndpointConfig
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API EndpointConfig() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API EndpointConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API EndpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Lambda function configuration for the endpoint, used when the endpoint
     * communicates through an AWS Lambda function.</p>
     */
    inline const LambdaConfig& GetLambda() const { return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    template<typename LambdaT = LambdaConfig>
    void SetLambda(LambdaT&& value) { m_lambdaHasBeenSet = true; m_lambda = std::forward<LambdaT>(value); }
    template<typename LambdaT = LambdaConfig>
    EndpointConfig& WithLambda(LambdaT&& value) { SetLambda(std::forward<LambdaT>(value)); return *this;}
    ///@}
  private:

    LambdaConfig m_lambda;
    bool m_lambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
