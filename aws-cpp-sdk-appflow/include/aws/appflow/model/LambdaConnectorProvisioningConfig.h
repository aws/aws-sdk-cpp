/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about the configuration of the lambda which is being
   * registered as the connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/LambdaConnectorProvisioningConfig">AWS
   * API Reference</a></p>
   */
  class LambdaConnectorProvisioningConfig
  {
  public:
    AWS_APPFLOW_API LambdaConnectorProvisioningConfig();
    AWS_APPFLOW_API LambdaConnectorProvisioningConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API LambdaConnectorProvisioningConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lambda ARN of the connector being registered.</p>
     */
    inline const Aws::String& GetLambdaArn() const{ return m_lambdaArn; }

    /**
     * <p>Lambda ARN of the connector being registered.</p>
     */
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }

    /**
     * <p>Lambda ARN of the connector being registered.</p>
     */
    inline void SetLambdaArn(const Aws::String& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = value; }

    /**
     * <p>Lambda ARN of the connector being registered.</p>
     */
    inline void SetLambdaArn(Aws::String&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::move(value); }

    /**
     * <p>Lambda ARN of the connector being registered.</p>
     */
    inline void SetLambdaArn(const char* value) { m_lambdaArnHasBeenSet = true; m_lambdaArn.assign(value); }

    /**
     * <p>Lambda ARN of the connector being registered.</p>
     */
    inline LambdaConnectorProvisioningConfig& WithLambdaArn(const Aws::String& value) { SetLambdaArn(value); return *this;}

    /**
     * <p>Lambda ARN of the connector being registered.</p>
     */
    inline LambdaConnectorProvisioningConfig& WithLambdaArn(Aws::String&& value) { SetLambdaArn(std::move(value)); return *this;}

    /**
     * <p>Lambda ARN of the connector being registered.</p>
     */
    inline LambdaConnectorProvisioningConfig& WithLambdaArn(const char* value) { SetLambdaArn(value); return *this;}

  private:

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
