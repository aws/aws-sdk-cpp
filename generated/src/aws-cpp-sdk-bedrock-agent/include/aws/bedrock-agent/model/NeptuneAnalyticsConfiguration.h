/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/NeptuneAnalyticsFieldMapping.h>
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
   * <p>Contains details about the storage configuration of the knowledge base in
   * Amazon Neptune Analytics. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-neptune.html">Create
   * a vector index in Amazon Neptune Analytics</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/NeptuneAnalyticsConfiguration">AWS
   * API Reference</a></p>
   */
  class NeptuneAnalyticsConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API NeptuneAnalyticsConfiguration() = default;
    AWS_BEDROCKAGENT_API NeptuneAnalyticsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API NeptuneAnalyticsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Neptune Analytics vector store.</p>
     */
    inline const Aws::String& GetGraphArn() const { return m_graphArn; }
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }
    template<typename GraphArnT = Aws::String>
    void SetGraphArn(GraphArnT&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::forward<GraphArnT>(value); }
    template<typename GraphArnT = Aws::String>
    NeptuneAnalyticsConfiguration& WithGraphArn(GraphArnT&& value) { SetGraphArn(std::forward<GraphArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline const NeptuneAnalyticsFieldMapping& GetFieldMapping() const { return m_fieldMapping; }
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }
    template<typename FieldMappingT = NeptuneAnalyticsFieldMapping>
    void SetFieldMapping(FieldMappingT&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::forward<FieldMappingT>(value); }
    template<typename FieldMappingT = NeptuneAnalyticsFieldMapping>
    NeptuneAnalyticsConfiguration& WithFieldMapping(FieldMappingT&& value) { SetFieldMapping(std::forward<FieldMappingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    NeptuneAnalyticsFieldMapping m_fieldMapping;
    bool m_fieldMappingHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
