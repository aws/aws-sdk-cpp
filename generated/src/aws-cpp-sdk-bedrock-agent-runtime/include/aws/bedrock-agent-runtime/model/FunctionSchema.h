/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/FunctionDefinition.h>
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
   * <p> Contains details about the function schema for the action group or the JSON
   * or YAML-formatted payload defining the schema. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FunctionSchema">AWS
   * API Reference</a></p>
   */
  class FunctionSchema
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FunctionSchema();
    AWS_BEDROCKAGENTRUNTIME_API FunctionSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FunctionSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of functions that each define an action in the action group. </p>
     */
    inline const Aws::Vector<FunctionDefinition>& GetFunctions() const{ return m_functions; }
    inline bool FunctionsHasBeenSet() const { return m_functionsHasBeenSet; }
    inline void SetFunctions(const Aws::Vector<FunctionDefinition>& value) { m_functionsHasBeenSet = true; m_functions = value; }
    inline void SetFunctions(Aws::Vector<FunctionDefinition>&& value) { m_functionsHasBeenSet = true; m_functions = std::move(value); }
    inline FunctionSchema& WithFunctions(const Aws::Vector<FunctionDefinition>& value) { SetFunctions(value); return *this;}
    inline FunctionSchema& WithFunctions(Aws::Vector<FunctionDefinition>&& value) { SetFunctions(std::move(value)); return *this;}
    inline FunctionSchema& AddFunctions(const FunctionDefinition& value) { m_functionsHasBeenSet = true; m_functions.push_back(value); return *this; }
    inline FunctionSchema& AddFunctions(FunctionDefinition&& value) { m_functionsHasBeenSet = true; m_functions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FunctionDefinition> m_functions;
    bool m_functionsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
