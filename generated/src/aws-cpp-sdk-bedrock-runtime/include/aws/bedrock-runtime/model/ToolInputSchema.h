/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
   * <p>The schema for the tool. The top level schema type must be
   * <code>object</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolInputSchema">AWS
   * API Reference</a></p>
   */
  class ToolInputSchema
  {
  public:
    AWS_BEDROCKRUNTIME_API ToolInputSchema();
    AWS_BEDROCKRUNTIME_API ToolInputSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ToolInputSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The JSON schema for the tool. For more information, see <a
     * href="https://json-schema.org/understanding-json-schema/reference">JSON Schema
     * Reference</a>.</p>
     */
    inline Aws::Utils::DocumentView GetJson() const{ return m_json; }
    inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
    inline void SetJson(const Aws::Utils::Document& value) { m_jsonHasBeenSet = true; m_json = value; }
    inline void SetJson(Aws::Utils::Document&& value) { m_jsonHasBeenSet = true; m_json = std::move(value); }
    inline ToolInputSchema& WithJson(const Aws::Utils::Document& value) { SetJson(value); return *this;}
    inline ToolInputSchema& WithJson(Aws::Utils::Document&& value) { SetJson(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_json;
    bool m_jsonHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
