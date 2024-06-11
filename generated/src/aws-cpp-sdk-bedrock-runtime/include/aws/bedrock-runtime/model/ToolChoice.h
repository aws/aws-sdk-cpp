﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/AutoToolChoice.h>
#include <aws/bedrock-runtime/model/AnyToolChoice.h>
#include <aws/bedrock-runtime/model/SpecificToolChoice.h>
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
   * <p>Forces a model to use a tool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolChoice">AWS
   * API Reference</a></p>
   */
  class ToolChoice
  {
  public:
    AWS_BEDROCKRUNTIME_API ToolChoice();
    AWS_BEDROCKRUNTIME_API ToolChoice(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ToolChoice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Model automatically decides if a tool should be called or to whether to
     * generate text instead.</p>
     */
    inline const AutoToolChoice& GetAuto() const{ return m_auto; }
    inline bool AutoHasBeenSet() const { return m_autoHasBeenSet; }
    inline void SetAuto(const AutoToolChoice& value) { m_autoHasBeenSet = true; m_auto = value; }
    inline void SetAuto(AutoToolChoice&& value) { m_autoHasBeenSet = true; m_auto = std::move(value); }
    inline ToolChoice& WithAuto(const AutoToolChoice& value) { SetAuto(value); return *this;}
    inline ToolChoice& WithAuto(AutoToolChoice&& value) { SetAuto(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model must request at least one tool (no text is generated).</p>
     */
    inline const AnyToolChoice& GetAny() const{ return m_any; }
    inline bool AnyHasBeenSet() const { return m_anyHasBeenSet; }
    inline void SetAny(const AnyToolChoice& value) { m_anyHasBeenSet = true; m_any = value; }
    inline void SetAny(AnyToolChoice&& value) { m_anyHasBeenSet = true; m_any = std::move(value); }
    inline ToolChoice& WithAny(const AnyToolChoice& value) { SetAny(value); return *this;}
    inline ToolChoice& WithAny(AnyToolChoice&& value) { SetAny(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Model must request the specified tool.</p>
     */
    inline const SpecificToolChoice& GetTool() const{ return m_tool; }
    inline bool ToolHasBeenSet() const { return m_toolHasBeenSet; }
    inline void SetTool(const SpecificToolChoice& value) { m_toolHasBeenSet = true; m_tool = value; }
    inline void SetTool(SpecificToolChoice&& value) { m_toolHasBeenSet = true; m_tool = std::move(value); }
    inline ToolChoice& WithTool(const SpecificToolChoice& value) { SetTool(value); return *this;}
    inline ToolChoice& WithTool(SpecificToolChoice&& value) { SetTool(std::move(value)); return *this;}
    ///@}
  private:

    AutoToolChoice m_auto;
    bool m_autoHasBeenSet = false;

    AnyToolChoice m_any;
    bool m_anyHasBeenSet = false;

    SpecificToolChoice m_tool;
    bool m_toolHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
