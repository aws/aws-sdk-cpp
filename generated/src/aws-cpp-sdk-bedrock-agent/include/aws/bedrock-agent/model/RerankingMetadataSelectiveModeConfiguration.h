/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/FieldForReranking.h>
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
   * <p>Configures the metadata fields to include or exclude during the reranking
   * process when using selective mode.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RerankingMetadataSelectiveModeConfiguration">AWS
   * API Reference</a></p>
   */
  class RerankingMetadataSelectiveModeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RerankingMetadataSelectiveModeConfiguration() = default;
    AWS_BEDROCKAGENT_API RerankingMetadataSelectiveModeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RerankingMetadataSelectiveModeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the metadata fields to include in the reranking process.</p>
     */
    inline const Aws::Vector<FieldForReranking>& GetFieldsToInclude() const { return m_fieldsToInclude; }
    inline bool FieldsToIncludeHasBeenSet() const { return m_fieldsToIncludeHasBeenSet; }
    template<typename FieldsToIncludeT = Aws::Vector<FieldForReranking>>
    void SetFieldsToInclude(FieldsToIncludeT&& value) { m_fieldsToIncludeHasBeenSet = true; m_fieldsToInclude = std::forward<FieldsToIncludeT>(value); }
    template<typename FieldsToIncludeT = Aws::Vector<FieldForReranking>>
    RerankingMetadataSelectiveModeConfiguration& WithFieldsToInclude(FieldsToIncludeT&& value) { SetFieldsToInclude(std::forward<FieldsToIncludeT>(value)); return *this;}
    template<typename FieldsToIncludeT = FieldForReranking>
    RerankingMetadataSelectiveModeConfiguration& AddFieldsToInclude(FieldsToIncludeT&& value) { m_fieldsToIncludeHasBeenSet = true; m_fieldsToInclude.emplace_back(std::forward<FieldsToIncludeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the metadata fields to exclude from the reranking process.</p>
     */
    inline const Aws::Vector<FieldForReranking>& GetFieldsToExclude() const { return m_fieldsToExclude; }
    inline bool FieldsToExcludeHasBeenSet() const { return m_fieldsToExcludeHasBeenSet; }
    template<typename FieldsToExcludeT = Aws::Vector<FieldForReranking>>
    void SetFieldsToExclude(FieldsToExcludeT&& value) { m_fieldsToExcludeHasBeenSet = true; m_fieldsToExclude = std::forward<FieldsToExcludeT>(value); }
    template<typename FieldsToExcludeT = Aws::Vector<FieldForReranking>>
    RerankingMetadataSelectiveModeConfiguration& WithFieldsToExclude(FieldsToExcludeT&& value) { SetFieldsToExclude(std::forward<FieldsToExcludeT>(value)); return *this;}
    template<typename FieldsToExcludeT = FieldForReranking>
    RerankingMetadataSelectiveModeConfiguration& AddFieldsToExclude(FieldsToExcludeT&& value) { m_fieldsToExcludeHasBeenSet = true; m_fieldsToExclude.emplace_back(std::forward<FieldsToExcludeT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FieldForReranking> m_fieldsToInclude;
    bool m_fieldsToIncludeHasBeenSet = false;

    Aws::Vector<FieldForReranking> m_fieldsToExclude;
    bool m_fieldsToExcludeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
