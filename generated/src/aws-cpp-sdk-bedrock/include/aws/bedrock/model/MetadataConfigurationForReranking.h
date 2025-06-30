/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/RerankingMetadataSelectionMode.h>
#include <aws/bedrock/model/RerankingMetadataSelectiveModeConfiguration.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Configuration for how metadata should be used during the reranking process in
   * Knowledge Base vector searches. This determines which metadata fields are
   * included or excluded when reordering search results.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/MetadataConfigurationForReranking">AWS
   * API Reference</a></p>
   */
  class MetadataConfigurationForReranking
  {
  public:
    AWS_BEDROCK_API MetadataConfigurationForReranking() = default;
    AWS_BEDROCK_API MetadataConfigurationForReranking(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API MetadataConfigurationForReranking& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mode for selecting which metadata fields to include in the reranking
     * process. Valid values are ALL (use all available metadata fields) or SELECTIVE
     * (use only specified fields).</p>
     */
    inline RerankingMetadataSelectionMode GetSelectionMode() const { return m_selectionMode; }
    inline bool SelectionModeHasBeenSet() const { return m_selectionModeHasBeenSet; }
    inline void SetSelectionMode(RerankingMetadataSelectionMode value) { m_selectionModeHasBeenSet = true; m_selectionMode = value; }
    inline MetadataConfigurationForReranking& WithSelectionMode(RerankingMetadataSelectionMode value) { SetSelectionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for selective mode, which allows you to explicitly include or
     * exclude specific metadata fields during reranking. This is only used when
     * selectionMode is set to SELECTIVE.</p>
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
} // namespace Bedrock
} // namespace Aws
