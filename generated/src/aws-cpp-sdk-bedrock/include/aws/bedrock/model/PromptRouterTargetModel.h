﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The target model for a prompt router.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/PromptRouterTargetModel">AWS
   * API Reference</a></p>
   */
  class PromptRouterTargetModel
  {
  public:
    AWS_BEDROCK_API PromptRouterTargetModel();
    AWS_BEDROCK_API PromptRouterTargetModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API PromptRouterTargetModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target model's ARN.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline PromptRouterTargetModel& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline PromptRouterTargetModel& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline PromptRouterTargetModel& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
