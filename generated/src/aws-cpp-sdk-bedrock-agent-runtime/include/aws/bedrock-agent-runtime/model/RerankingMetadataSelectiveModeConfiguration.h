/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/FieldForReranking.h>
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
   * <p>Contains configurations for the metadata fields to include or exclude when
   * considering reranking. If you include the <code>fieldsToExclude</code> field,
   * the reranker ignores all the metadata fields that you specify. If you include
   * the <code>fieldsToInclude</code> field, the reranker uses only the metadata
   * fields that you specify and ignores all others. You can include only one of
   * these fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RerankingMetadataSelectiveModeConfiguration">AWS
   * API Reference</a></p>
   */
  class RerankingMetadataSelectiveModeConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RerankingMetadataSelectiveModeConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API RerankingMetadataSelectiveModeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RerankingMetadataSelectiveModeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects, each of which specifies a metadata field to exclude from
     * consideration when reranking.</p>
     */
    inline const Aws::Vector<FieldForReranking>& GetFieldsToExclude() const{ return m_fieldsToExclude; }
    inline bool FieldsToExcludeHasBeenSet() const { return m_fieldsToExcludeHasBeenSet; }
    inline void SetFieldsToExclude(const Aws::Vector<FieldForReranking>& value) { m_fieldsToExcludeHasBeenSet = true; m_fieldsToExclude = value; }
    inline void SetFieldsToExclude(Aws::Vector<FieldForReranking>&& value) { m_fieldsToExcludeHasBeenSet = true; m_fieldsToExclude = std::move(value); }
    inline RerankingMetadataSelectiveModeConfiguration& WithFieldsToExclude(const Aws::Vector<FieldForReranking>& value) { SetFieldsToExclude(value); return *this;}
    inline RerankingMetadataSelectiveModeConfiguration& WithFieldsToExclude(Aws::Vector<FieldForReranking>&& value) { SetFieldsToExclude(std::move(value)); return *this;}
    inline RerankingMetadataSelectiveModeConfiguration& AddFieldsToExclude(const FieldForReranking& value) { m_fieldsToExcludeHasBeenSet = true; m_fieldsToExclude.push_back(value); return *this; }
    inline RerankingMetadataSelectiveModeConfiguration& AddFieldsToExclude(FieldForReranking&& value) { m_fieldsToExcludeHasBeenSet = true; m_fieldsToExclude.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects, each of which specifies a metadata field to include in
     * consideration when reranking. The remaining metadata fields are ignored.</p>
     */
    inline const Aws::Vector<FieldForReranking>& GetFieldsToInclude() const{ return m_fieldsToInclude; }
    inline bool FieldsToIncludeHasBeenSet() const { return m_fieldsToIncludeHasBeenSet; }
    inline void SetFieldsToInclude(const Aws::Vector<FieldForReranking>& value) { m_fieldsToIncludeHasBeenSet = true; m_fieldsToInclude = value; }
    inline void SetFieldsToInclude(Aws::Vector<FieldForReranking>&& value) { m_fieldsToIncludeHasBeenSet = true; m_fieldsToInclude = std::move(value); }
    inline RerankingMetadataSelectiveModeConfiguration& WithFieldsToInclude(const Aws::Vector<FieldForReranking>& value) { SetFieldsToInclude(value); return *this;}
    inline RerankingMetadataSelectiveModeConfiguration& WithFieldsToInclude(Aws::Vector<FieldForReranking>&& value) { SetFieldsToInclude(std::move(value)); return *this;}
    inline RerankingMetadataSelectiveModeConfiguration& AddFieldsToInclude(const FieldForReranking& value) { m_fieldsToIncludeHasBeenSet = true; m_fieldsToInclude.push_back(value); return *this; }
    inline RerankingMetadataSelectiveModeConfiguration& AddFieldsToInclude(FieldForReranking&& value) { m_fieldsToIncludeHasBeenSet = true; m_fieldsToInclude.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FieldForReranking> m_fieldsToExclude;
    bool m_fieldsToExcludeHasBeenSet = false;

    Aws::Vector<FieldForReranking> m_fieldsToInclude;
    bool m_fieldsToIncludeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
