/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/PromptConfiguration.h>
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
   * <p>Configuration for prompt override.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PromptOverrideConfiguration">AWS
   * API Reference</a></p>
   */
  class PromptOverrideConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API PromptOverrideConfiguration();
    AWS_BEDROCKAGENT_API PromptOverrideConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptOverrideConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<PromptConfiguration>& GetPromptConfigurations() const{ return m_promptConfigurations; }

    
    inline bool PromptConfigurationsHasBeenSet() const { return m_promptConfigurationsHasBeenSet; }

    
    inline void SetPromptConfigurations(const Aws::Vector<PromptConfiguration>& value) { m_promptConfigurationsHasBeenSet = true; m_promptConfigurations = value; }

    
    inline void SetPromptConfigurations(Aws::Vector<PromptConfiguration>&& value) { m_promptConfigurationsHasBeenSet = true; m_promptConfigurations = std::move(value); }

    
    inline PromptOverrideConfiguration& WithPromptConfigurations(const Aws::Vector<PromptConfiguration>& value) { SetPromptConfigurations(value); return *this;}

    
    inline PromptOverrideConfiguration& WithPromptConfigurations(Aws::Vector<PromptConfiguration>&& value) { SetPromptConfigurations(std::move(value)); return *this;}

    
    inline PromptOverrideConfiguration& AddPromptConfigurations(const PromptConfiguration& value) { m_promptConfigurationsHasBeenSet = true; m_promptConfigurations.push_back(value); return *this; }

    
    inline PromptOverrideConfiguration& AddPromptConfigurations(PromptConfiguration&& value) { m_promptConfigurationsHasBeenSet = true; m_promptConfigurations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetOverrideLambda() const{ return m_overrideLambda; }

    
    inline bool OverrideLambdaHasBeenSet() const { return m_overrideLambdaHasBeenSet; }

    
    inline void SetOverrideLambda(const Aws::String& value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda = value; }

    
    inline void SetOverrideLambda(Aws::String&& value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda = std::move(value); }

    
    inline void SetOverrideLambda(const char* value) { m_overrideLambdaHasBeenSet = true; m_overrideLambda.assign(value); }

    
    inline PromptOverrideConfiguration& WithOverrideLambda(const Aws::String& value) { SetOverrideLambda(value); return *this;}

    
    inline PromptOverrideConfiguration& WithOverrideLambda(Aws::String&& value) { SetOverrideLambda(std::move(value)); return *this;}

    
    inline PromptOverrideConfiguration& WithOverrideLambda(const char* value) { SetOverrideLambda(value); return *this;}

  private:

    Aws::Vector<PromptConfiguration> m_promptConfigurations;
    bool m_promptConfigurationsHasBeenSet = false;

    Aws::String m_overrideLambda;
    bool m_overrideLambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
