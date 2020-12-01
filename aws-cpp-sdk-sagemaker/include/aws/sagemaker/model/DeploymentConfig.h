/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/BlueGreenUpdatePolicy.h>
#include <aws/sagemaker/model/AutoRollbackConfig.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Currently, the <code>DeploymentConfig</code> API is not
   * supported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeploymentConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API DeploymentConfig
  {
  public:
    DeploymentConfig();
    DeploymentConfig(Aws::Utils::Json::JsonView jsonValue);
    DeploymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const BlueGreenUpdatePolicy& GetBlueGreenUpdatePolicy() const{ return m_blueGreenUpdatePolicy; }

    /**
     * <p/>
     */
    inline bool BlueGreenUpdatePolicyHasBeenSet() const { return m_blueGreenUpdatePolicyHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetBlueGreenUpdatePolicy(const BlueGreenUpdatePolicy& value) { m_blueGreenUpdatePolicyHasBeenSet = true; m_blueGreenUpdatePolicy = value; }

    /**
     * <p/>
     */
    inline void SetBlueGreenUpdatePolicy(BlueGreenUpdatePolicy&& value) { m_blueGreenUpdatePolicyHasBeenSet = true; m_blueGreenUpdatePolicy = std::move(value); }

    /**
     * <p/>
     */
    inline DeploymentConfig& WithBlueGreenUpdatePolicy(const BlueGreenUpdatePolicy& value) { SetBlueGreenUpdatePolicy(value); return *this;}

    /**
     * <p/>
     */
    inline DeploymentConfig& WithBlueGreenUpdatePolicy(BlueGreenUpdatePolicy&& value) { SetBlueGreenUpdatePolicy(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const AutoRollbackConfig& GetAutoRollbackConfiguration() const{ return m_autoRollbackConfiguration; }

    /**
     * <p/>
     */
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAutoRollbackConfiguration(const AutoRollbackConfig& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p/>
     */
    inline void SetAutoRollbackConfiguration(AutoRollbackConfig&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::move(value); }

    /**
     * <p/>
     */
    inline DeploymentConfig& WithAutoRollbackConfiguration(const AutoRollbackConfig& value) { SetAutoRollbackConfiguration(value); return *this;}

    /**
     * <p/>
     */
    inline DeploymentConfig& WithAutoRollbackConfiguration(AutoRollbackConfig&& value) { SetAutoRollbackConfiguration(std::move(value)); return *this;}

  private:

    BlueGreenUpdatePolicy m_blueGreenUpdatePolicy;
    bool m_blueGreenUpdatePolicyHasBeenSet;

    AutoRollbackConfig m_autoRollbackConfiguration;
    bool m_autoRollbackConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
