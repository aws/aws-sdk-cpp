/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
   * <p>Type of Executors for an Action Group</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ActionGroupExecutor">AWS
   * API Reference</a></p>
   */
  class ActionGroupExecutor
  {
  public:
    AWS_BEDROCKAGENT_API ActionGroupExecutor();
    AWS_BEDROCKAGENT_API ActionGroupExecutor(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ActionGroupExecutor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetLambda() const{ return m_lambda; }

    
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }

    
    inline void SetLambda(const Aws::String& value) { m_lambdaHasBeenSet = true; m_lambda = value; }

    
    inline void SetLambda(Aws::String&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }

    
    inline void SetLambda(const char* value) { m_lambdaHasBeenSet = true; m_lambda.assign(value); }

    
    inline ActionGroupExecutor& WithLambda(const Aws::String& value) { SetLambda(value); return *this;}

    
    inline ActionGroupExecutor& WithLambda(Aws::String&& value) { SetLambda(std::move(value)); return *this;}

    
    inline ActionGroupExecutor& WithLambda(const char* value) { SetLambda(value); return *this;}

  private:

    Aws::String m_lambda;
    bool m_lambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
