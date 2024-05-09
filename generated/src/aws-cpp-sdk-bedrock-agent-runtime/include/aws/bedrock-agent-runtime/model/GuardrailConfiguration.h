/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>The configuration details for the guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailConfiguration">AWS
   * API Reference</a></p>
   */
  class GuardrailConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API GuardrailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailId() const{ return m_guardrailId; }

    /**
     * <p>The unique identifier for the guardrail.</p>
     */
    inline bool GuardrailIdHasBeenSet() const { return m_guardrailIdHasBeenSet; }

    /**
     * <p>The unique identifier for the guardrail.</p>
     */
    inline void SetGuardrailId(const Aws::String& value) { m_guardrailIdHasBeenSet = true; m_guardrailId = value; }

    /**
     * <p>The unique identifier for the guardrail.</p>
     */
    inline void SetGuardrailId(Aws::String&& value) { m_guardrailIdHasBeenSet = true; m_guardrailId = std::move(value); }

    /**
     * <p>The unique identifier for the guardrail.</p>
     */
    inline void SetGuardrailId(const char* value) { m_guardrailIdHasBeenSet = true; m_guardrailId.assign(value); }

    /**
     * <p>The unique identifier for the guardrail.</p>
     */
    inline GuardrailConfiguration& WithGuardrailId(const Aws::String& value) { SetGuardrailId(value); return *this;}

    /**
     * <p>The unique identifier for the guardrail.</p>
     */
    inline GuardrailConfiguration& WithGuardrailId(Aws::String&& value) { SetGuardrailId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the guardrail.</p>
     */
    inline GuardrailConfiguration& WithGuardrailId(const char* value) { SetGuardrailId(value); return *this;}


    /**
     * <p>The version of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailVersion() const{ return m_guardrailVersion; }

    /**
     * <p>The version of the guardrail.</p>
     */
    inline bool GuardrailVersionHasBeenSet() const { return m_guardrailVersionHasBeenSet; }

    /**
     * <p>The version of the guardrail.</p>
     */
    inline void SetGuardrailVersion(const Aws::String& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = value; }

    /**
     * <p>The version of the guardrail.</p>
     */
    inline void SetGuardrailVersion(Aws::String&& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = std::move(value); }

    /**
     * <p>The version of the guardrail.</p>
     */
    inline void SetGuardrailVersion(const char* value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion.assign(value); }

    /**
     * <p>The version of the guardrail.</p>
     */
    inline GuardrailConfiguration& WithGuardrailVersion(const Aws::String& value) { SetGuardrailVersion(value); return *this;}

    /**
     * <p>The version of the guardrail.</p>
     */
    inline GuardrailConfiguration& WithGuardrailVersion(Aws::String&& value) { SetGuardrailVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the guardrail.</p>
     */
    inline GuardrailConfiguration& WithGuardrailVersion(const char* value) { SetGuardrailVersion(value); return *this;}

  private:

    Aws::String m_guardrailId;
    bool m_guardrailIdHasBeenSet = false;

    Aws::String m_guardrailVersion;
    bool m_guardrailVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
