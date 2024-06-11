﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/ToolInputSchema.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>The specification for the tool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolSpecification">AWS
   * API Reference</a></p>
   */
  class ToolSpecification
  {
  public:
    AWS_BEDROCKRUNTIME_API ToolSpecification();
    AWS_BEDROCKRUNTIME_API ToolSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ToolSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name for the tool.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ToolSpecification& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ToolSpecification& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ToolSpecification& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the tool.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ToolSpecification& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ToolSpecification& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ToolSpecification& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input schema for the tool in JSON format.</p>
     */
    inline const ToolInputSchema& GetInputSchema() const{ return m_inputSchema; }
    inline bool InputSchemaHasBeenSet() const { return m_inputSchemaHasBeenSet; }
    inline void SetInputSchema(const ToolInputSchema& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = value; }
    inline void SetInputSchema(ToolInputSchema&& value) { m_inputSchemaHasBeenSet = true; m_inputSchema = std::move(value); }
    inline ToolSpecification& WithInputSchema(const ToolInputSchema& value) { SetInputSchema(value); return *this;}
    inline ToolSpecification& WithInputSchema(ToolInputSchema&& value) { SetInputSchema(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ToolInputSchema m_inputSchema;
    bool m_inputSchemaHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
