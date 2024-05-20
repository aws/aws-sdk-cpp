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
   * <p>The details of the guardrails configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GuardrailConfiguration">AWS
   * API Reference</a></p>
   */
  class GuardrailConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API GuardrailConfiguration();
    AWS_BEDROCKAGENT_API GuardrailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API GuardrailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The guardrails identifier assigned to the guardrails configuration.</p>
     */
    inline const Aws::String& GetGuardrailIdentifier() const{ return m_guardrailIdentifier; }

    /**
     * <p>The guardrails identifier assigned to the guardrails configuration.</p>
     */
    inline bool GuardrailIdentifierHasBeenSet() const { return m_guardrailIdentifierHasBeenSet; }

    /**
     * <p>The guardrails identifier assigned to the guardrails configuration.</p>
     */
    inline void SetGuardrailIdentifier(const Aws::String& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = value; }

    /**
     * <p>The guardrails identifier assigned to the guardrails configuration.</p>
     */
    inline void SetGuardrailIdentifier(Aws::String&& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = std::move(value); }

    /**
     * <p>The guardrails identifier assigned to the guardrails configuration.</p>
     */
    inline void SetGuardrailIdentifier(const char* value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier.assign(value); }

    /**
     * <p>The guardrails identifier assigned to the guardrails configuration.</p>
     */
    inline GuardrailConfiguration& WithGuardrailIdentifier(const Aws::String& value) { SetGuardrailIdentifier(value); return *this;}

    /**
     * <p>The guardrails identifier assigned to the guardrails configuration.</p>
     */
    inline GuardrailConfiguration& WithGuardrailIdentifier(Aws::String&& value) { SetGuardrailIdentifier(std::move(value)); return *this;}

    /**
     * <p>The guardrails identifier assigned to the guardrails configuration.</p>
     */
    inline GuardrailConfiguration& WithGuardrailIdentifier(const char* value) { SetGuardrailIdentifier(value); return *this;}


    /**
     * <p>The guardrails version assigned to the guardrails configuration.</p>
     */
    inline const Aws::String& GetGuardrailVersion() const{ return m_guardrailVersion; }

    /**
     * <p>The guardrails version assigned to the guardrails configuration.</p>
     */
    inline bool GuardrailVersionHasBeenSet() const { return m_guardrailVersionHasBeenSet; }

    /**
     * <p>The guardrails version assigned to the guardrails configuration.</p>
     */
    inline void SetGuardrailVersion(const Aws::String& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = value; }

    /**
     * <p>The guardrails version assigned to the guardrails configuration.</p>
     */
    inline void SetGuardrailVersion(Aws::String&& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = std::move(value); }

    /**
     * <p>The guardrails version assigned to the guardrails configuration.</p>
     */
    inline void SetGuardrailVersion(const char* value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion.assign(value); }

    /**
     * <p>The guardrails version assigned to the guardrails configuration.</p>
     */
    inline GuardrailConfiguration& WithGuardrailVersion(const Aws::String& value) { SetGuardrailVersion(value); return *this;}

    /**
     * <p>The guardrails version assigned to the guardrails configuration.</p>
     */
    inline GuardrailConfiguration& WithGuardrailVersion(Aws::String&& value) { SetGuardrailVersion(std::move(value)); return *this;}

    /**
     * <p>The guardrails version assigned to the guardrails configuration.</p>
     */
    inline GuardrailConfiguration& WithGuardrailVersion(const char* value) { SetGuardrailVersion(value); return *this;}

  private:

    Aws::String m_guardrailIdentifier;
    bool m_guardrailIdentifierHasBeenSet = false;

    Aws::String m_guardrailVersion;
    bool m_guardrailVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
