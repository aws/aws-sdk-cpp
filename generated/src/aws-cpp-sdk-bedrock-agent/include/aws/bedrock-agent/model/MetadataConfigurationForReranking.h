/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RerankingMetadataSelectionMode.h>
#include <aws/bedrock-agent/model/RerankingMetadataSelectiveModeConfiguration.h>
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
   * <p>Specifies how metadata fields should be handled during the reranking
   * process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MetadataConfigurationForReranking">AWS
   * API Reference</a></p>
   */
  class MetadataConfigurationForReranking
  {
  public:
    AWS_BEDROCKAGENT_API MetadataConfigurationForReranking() = default;
    AWS_BEDROCKAGENT_API MetadataConfigurationForReranking(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MetadataConfigurationForReranking& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mode for selecting metadata fields for reranking.</p>
     */
    inline RerankingMetadataSelectionMode GetSelectionMode() const { return m_selectionMode; }
    inline bool SelectionModeHasBeenSet() const { return m_selectionModeHasBeenSet; }
    inline void SetSelectionMode(RerankingMetadataSelectionMode value) { m_selectionModeHasBeenSet = true; m_selectionMode = value; }
    inline MetadataConfigurationForReranking& WithSelectionMode(RerankingMetadataSelectionMode value) { SetSelectionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for selective metadata field inclusion or exclusion during
     * reranking.</p>
     */
    inline const RerankingMetadataSelectiveModeConfiguration& GetSelectiveModeConfiguration() const { return m_selectiveModeConfiguration; }
    inline bool SelectiveModeConfigurationHasBeenSet() const { return m_selectiveModeConfigurationHasBeenSet; }
    template<typename SelectiveModeConfigurationT = RerankingMetadataSelectiveModeConfiguration>
    void SetSelectiveModeConfiguration(SelectiveModeConfigurationT&& value) { m_selectiveModeConfigurationHasBeenSet = true; m_selectiveModeConfiguration = std::forward<SelectiveModeConfigurationT>(value); }
    template<typename SelectiveModeConfigurationT = RerankingMetadataSelectiveModeConfiguration>
    MetadataConfigurationForReranking& WithSelectiveModeConfiguration(SelectiveModeConfigurationT&& value) { SetSelectiveModeConfiguration(std::forward<SelectiveModeConfigurationT>(value)); return *this;}
    ///@}
  private:

    RerankingMetadataSelectionMode m_selectionMode{RerankingMetadataSelectionMode::NOT_SET};
    bool m_selectionModeHasBeenSet = false;

    RerankingMetadataSelectiveModeConfiguration m_selectiveModeConfiguration;
    bool m_selectiveModeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
