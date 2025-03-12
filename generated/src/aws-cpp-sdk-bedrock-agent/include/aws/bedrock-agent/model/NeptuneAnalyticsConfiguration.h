/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/NeptuneAnalyticsFieldMapping.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_BEDROCKAGENT_API NeptuneAnalyticsConfiguration();
    AWS_BEDROCKAGENT_API NeptuneAnalyticsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API NeptuneAnalyticsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline const NeptuneAnalyticsFieldMapping& GetFieldMapping() const{ return m_fieldMapping; }
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }
    inline void SetFieldMapping(const NeptuneAnalyticsFieldMapping& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = value; }
    inline void SetFieldMapping(NeptuneAnalyticsFieldMapping&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::move(value); }
    inline NeptuneAnalyticsConfiguration& WithFieldMapping(const NeptuneAnalyticsFieldMapping& value) { SetFieldMapping(value); return *this;}
    inline NeptuneAnalyticsConfiguration& WithFieldMapping(NeptuneAnalyticsFieldMapping&& value) { SetFieldMapping(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Neptune Analytics vector store.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }
    inline NeptuneAnalyticsConfiguration& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}
    inline NeptuneAnalyticsConfiguration& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}
    inline NeptuneAnalyticsConfiguration& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}
    ///@}
  private:

    NeptuneAnalyticsFieldMapping m_fieldMapping;
    bool m_fieldMappingHasBeenSet = false;

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
