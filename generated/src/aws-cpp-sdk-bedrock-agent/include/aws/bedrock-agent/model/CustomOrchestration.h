﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/OrchestrationExecutor.h>
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
   * <p> Details of custom orchestration. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CustomOrchestration">AWS
   * API Reference</a></p>
   */
  class CustomOrchestration
  {
  public:
    AWS_BEDROCKAGENT_API CustomOrchestration();
    AWS_BEDROCKAGENT_API CustomOrchestration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API CustomOrchestration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The structure of the executor invoking the actions in custom orchestration.
     * </p>
     */
    inline const OrchestrationExecutor& GetExecutor() const{ return m_executor; }
    inline bool ExecutorHasBeenSet() const { return m_executorHasBeenSet; }
    inline void SetExecutor(const OrchestrationExecutor& value) { m_executorHasBeenSet = true; m_executor = value; }
    inline void SetExecutor(OrchestrationExecutor&& value) { m_executorHasBeenSet = true; m_executor = std::move(value); }
    inline CustomOrchestration& WithExecutor(const OrchestrationExecutor& value) { SetExecutor(value); return *this;}
    inline CustomOrchestration& WithExecutor(OrchestrationExecutor&& value) { SetExecutor(std::move(value)); return *this;}
    ///@}
  private:

    OrchestrationExecutor m_executor;
    bool m_executorHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
