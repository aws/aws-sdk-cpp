/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/StorageFlowNodeServiceConfiguration.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains configurations for a Storage node in a flow. This node stores the
   * input in an Amazon S3 location that you specify.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/StorageFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class StorageFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API StorageFlowNodeConfiguration() = default;
    AWS_BEDROCKAGENT_API StorageFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API StorageFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations for the service to use for storing the input into the
     * node.</p>
     */
    inline const StorageFlowNodeServiceConfiguration& GetServiceConfiguration() const { return m_serviceConfiguration; }
    inline bool ServiceConfigurationHasBeenSet() const { return m_serviceConfigurationHasBeenSet; }
    template<typename ServiceConfigurationT = StorageFlowNodeServiceConfiguration>
    void SetServiceConfiguration(ServiceConfigurationT&& value) { m_serviceConfigurationHasBeenSet = true; m_serviceConfiguration = std::forward<ServiceConfigurationT>(value); }
    template<typename ServiceConfigurationT = StorageFlowNodeServiceConfiguration>
    StorageFlowNodeConfiguration& WithServiceConfiguration(ServiceConfigurationT&& value) { SetServiceConfiguration(std::forward<ServiceConfigurationT>(value)); return *this;}
    ///@}
  private:

    StorageFlowNodeServiceConfiguration m_serviceConfiguration;
    bool m_serviceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
