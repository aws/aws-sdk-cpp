/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/LambdaConnectorProvisioningConfig.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>Contains information about the configuration of the connector being
   * registered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorProvisioningConfig">AWS
   * API Reference</a></p>
   */
  class ConnectorProvisioningConfig
  {
  public:
    AWS_APPFLOW_API ConnectorProvisioningConfig() = default;
    AWS_APPFLOW_API ConnectorProvisioningConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorProvisioningConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the configuration of the lambda which is being
     * registered as the connector.</p>
     */
    inline const LambdaConnectorProvisioningConfig& GetLambda() const { return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    template<typename LambdaT = LambdaConnectorProvisioningConfig>
    void SetLambda(LambdaT&& value) { m_lambdaHasBeenSet = true; m_lambda = std::forward<LambdaT>(value); }
    template<typename LambdaT = LambdaConnectorProvisioningConfig>
    ConnectorProvisioningConfig& WithLambda(LambdaT&& value) { SetLambda(std::forward<LambdaT>(value)); return *this;}
    ///@}
  private:

    LambdaConnectorProvisioningConfig m_lambda;
    bool m_lambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
