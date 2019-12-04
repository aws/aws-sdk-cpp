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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MonitoringClusterConfig.h>
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
   * <p>Identifies the resources to deploy for a monitoring job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringResources">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API MonitoringResources
  {
  public:
    MonitoringResources();
    MonitoringResources(Aws::Utils::Json::JsonView jsonValue);
    MonitoringResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for the cluster resources used to run the processing
     * job.</p>
     */
    inline const MonitoringClusterConfig& GetClusterConfig() const{ return m_clusterConfig; }

    /**
     * <p>The configuration for the cluster resources used to run the processing
     * job.</p>
     */
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }

    /**
     * <p>The configuration for the cluster resources used to run the processing
     * job.</p>
     */
    inline void SetClusterConfig(const MonitoringClusterConfig& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = value; }

    /**
     * <p>The configuration for the cluster resources used to run the processing
     * job.</p>
     */
    inline void SetClusterConfig(MonitoringClusterConfig&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::move(value); }

    /**
     * <p>The configuration for the cluster resources used to run the processing
     * job.</p>
     */
    inline MonitoringResources& WithClusterConfig(const MonitoringClusterConfig& value) { SetClusterConfig(value); return *this;}

    /**
     * <p>The configuration for the cluster resources used to run the processing
     * job.</p>
     */
    inline MonitoringResources& WithClusterConfig(MonitoringClusterConfig&& value) { SetClusterConfig(std::move(value)); return *this;}

  private:

    MonitoringClusterConfig m_clusterConfig;
    bool m_clusterConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
