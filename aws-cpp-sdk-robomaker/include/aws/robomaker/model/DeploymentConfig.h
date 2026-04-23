/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>

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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a deployment configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeploymentConfig">AWS
   * API Reference</a></p>
   */
  class AWS_ROBOMAKER_API DeploymentConfig
  {
  public:
    DeploymentConfig();
    DeploymentConfig(Aws::Utils::Json::JsonView jsonValue);
    DeploymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentage of robots receiving the deployment at the same time.</p>
     */
    inline int GetConcurrentDeploymentPercentage() const{ return m_concurrentDeploymentPercentage; }

    /**
     * <p>The percentage of robots receiving the deployment at the same time.</p>
     */
    inline bool ConcurrentDeploymentPercentageHasBeenSet() const { return m_concurrentDeploymentPercentageHasBeenSet; }

    /**
     * <p>The percentage of robots receiving the deployment at the same time.</p>
     */
    inline void SetConcurrentDeploymentPercentage(int value) { m_concurrentDeploymentPercentageHasBeenSet = true; m_concurrentDeploymentPercentage = value; }

    /**
     * <p>The percentage of robots receiving the deployment at the same time.</p>
     */
    inline DeploymentConfig& WithConcurrentDeploymentPercentage(int value) { SetConcurrentDeploymentPercentage(value); return *this;}


    /**
     * <p>The percentage of deployments that need to fail before stopping
     * deployment.</p>
     */
    inline int GetFailureThresholdPercentage() const{ return m_failureThresholdPercentage; }

    /**
     * <p>The percentage of deployments that need to fail before stopping
     * deployment.</p>
     */
    inline bool FailureThresholdPercentageHasBeenSet() const { return m_failureThresholdPercentageHasBeenSet; }

    /**
     * <p>The percentage of deployments that need to fail before stopping
     * deployment.</p>
     */
    inline void SetFailureThresholdPercentage(int value) { m_failureThresholdPercentageHasBeenSet = true; m_failureThresholdPercentage = value; }

    /**
     * <p>The percentage of deployments that need to fail before stopping
     * deployment.</p>
     */
    inline DeploymentConfig& WithFailureThresholdPercentage(int value) { SetFailureThresholdPercentage(value); return *this;}

  private:

    int m_concurrentDeploymentPercentage;
    bool m_concurrentDeploymentPercentageHasBeenSet;

    int m_failureThresholdPercentage;
    bool m_failureThresholdPercentageHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
