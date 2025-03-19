/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RetrievalFlowNodeServiceConfiguration.h>
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
   * <p>Contains configurations for a Retrieval node in a flow. This node retrieves
   * data from the Amazon S3 location that you specify and returns it as the
   * output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RetrievalFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class RetrievalFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RetrievalFlowNodeConfiguration() = default;
    AWS_BEDROCKAGENT_API RetrievalFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RetrievalFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations for the service to use for retrieving data to return
     * as the output from the node.</p>
     */
    inline const RetrievalFlowNodeServiceConfiguration& GetServiceConfiguration() const { return m_serviceConfiguration; }
    inline bool ServiceConfigurationHasBeenSet() const { return m_serviceConfigurationHasBeenSet; }
    template<typename ServiceConfigurationT = RetrievalFlowNodeServiceConfiguration>
    void SetServiceConfiguration(ServiceConfigurationT&& value) { m_serviceConfigurationHasBeenSet = true; m_serviceConfiguration = std::forward<ServiceConfigurationT>(value); }
    template<typename ServiceConfigurationT = RetrievalFlowNodeServiceConfiguration>
    RetrievalFlowNodeConfiguration& WithServiceConfiguration(ServiceConfigurationT&& value) { SetServiceConfiguration(std::forward<ServiceConfigurationT>(value)); return *this;}
    ///@}
  private:

    RetrievalFlowNodeServiceConfiguration m_serviceConfiguration;
    bool m_serviceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
