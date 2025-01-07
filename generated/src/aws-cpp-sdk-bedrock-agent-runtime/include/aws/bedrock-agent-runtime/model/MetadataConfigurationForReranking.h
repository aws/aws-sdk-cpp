/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/RerankingMetadataSelectionMode.h>
#include <aws/bedrock-agent-runtime/model/RerankingMetadataSelectiveModeConfiguration.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains configurations for the metadata to use in reranking.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/MetadataConfigurationForReranking">AWS
   * API Reference</a></p>
   */
  class MetadataConfigurationForReranking
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API MetadataConfigurationForReranking();
    AWS_BEDROCKAGENTRUNTIME_API MetadataConfigurationForReranking(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API MetadataConfigurationForReranking& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to consider all metadata when reranking, or only the
     * metadata that you select. If you specify <code>SELECTIVE</code>, include the
     * <code>selectiveModeConfiguration</code> field.</p>
     */
    inline const RerankingMetadataSelectionMode& GetSelectionMode() const{ return m_selectionMode; }
    inline bool SelectionModeHasBeenSet() const { return m_selectionModeHasBeenSet; }
    inline void SetSelectionMode(const RerankingMetadataSelectionMode& value) { m_selectionModeHasBeenSet = true; m_selectionMode = value; }
    inline void SetSelectionMode(RerankingMetadataSelectionMode&& value) { m_selectionModeHasBeenSet = true; m_selectionMode = std::move(value); }
    inline MetadataConfigurationForReranking& WithSelectionMode(const RerankingMetadataSelectionMode& value) { SetSelectionMode(value); return *this;}
    inline MetadataConfigurationForReranking& WithSelectionMode(RerankingMetadataSelectionMode&& value) { SetSelectionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for the metadata fields to include or exclude when
     * considering reranking.</p>
     */
    inline const RerankingMetadataSelectiveModeConfiguration& GetSelectiveModeConfiguration() const{ return m_selectiveModeConfiguration; }
    inline bool SelectiveModeConfigurationHasBeenSet() const { return m_selectiveModeConfigurationHasBeenSet; }
    inline void SetSelectiveModeConfiguration(const RerankingMetadataSelectiveModeConfiguration& value) { m_selectiveModeConfigurationHasBeenSet = true; m_selectiveModeConfiguration = value; }
    inline void SetSelectiveModeConfiguration(RerankingMetadataSelectiveModeConfiguration&& value) { m_selectiveModeConfigurationHasBeenSet = true; m_selectiveModeConfiguration = std::move(value); }
    inline MetadataConfigurationForReranking& WithSelectiveModeConfiguration(const RerankingMetadataSelectiveModeConfiguration& value) { SetSelectiveModeConfiguration(value); return *this;}
    inline MetadataConfigurationForReranking& WithSelectiveModeConfiguration(RerankingMetadataSelectiveModeConfiguration&& value) { SetSelectiveModeConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    RerankingMetadataSelectionMode m_selectionMode;
    bool m_selectionModeHasBeenSet = false;

    RerankingMetadataSelectiveModeConfiguration m_selectiveModeConfiguration;
    bool m_selectiveModeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
