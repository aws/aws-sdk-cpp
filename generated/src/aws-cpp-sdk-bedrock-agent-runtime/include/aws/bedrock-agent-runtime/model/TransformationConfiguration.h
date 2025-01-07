﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/QueryTransformationMode.h>
#include <aws/bedrock-agent-runtime/model/TextToSqlConfiguration.h>
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
   * <p>Contains configurations for transforming the natural language query into
   * SQL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/TransformationConfiguration">AWS
   * API Reference</a></p>
   */
  class TransformationConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API TransformationConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API TransformationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API TransformationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mode of the transformation.</p>
     */
    inline const QueryTransformationMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const QueryTransformationMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(QueryTransformationMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline TransformationConfiguration& WithMode(const QueryTransformationMode& value) { SetMode(value); return *this;}
    inline TransformationConfiguration& WithMode(QueryTransformationMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for transforming text to SQL.</p>
     */
    inline const TextToSqlConfiguration& GetTextToSqlConfiguration() const{ return m_textToSqlConfiguration; }
    inline bool TextToSqlConfigurationHasBeenSet() const { return m_textToSqlConfigurationHasBeenSet; }
    inline void SetTextToSqlConfiguration(const TextToSqlConfiguration& value) { m_textToSqlConfigurationHasBeenSet = true; m_textToSqlConfiguration = value; }
    inline void SetTextToSqlConfiguration(TextToSqlConfiguration&& value) { m_textToSqlConfigurationHasBeenSet = true; m_textToSqlConfiguration = std::move(value); }
    inline TransformationConfiguration& WithTextToSqlConfiguration(const TextToSqlConfiguration& value) { SetTextToSqlConfiguration(value); return *this;}
    inline TransformationConfiguration& WithTextToSqlConfiguration(TextToSqlConfiguration&& value) { SetTextToSqlConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    QueryTransformationMode m_mode;
    bool m_modeHasBeenSet = false;

    TextToSqlConfiguration m_textToSqlConfiguration;
    bool m_textToSqlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
