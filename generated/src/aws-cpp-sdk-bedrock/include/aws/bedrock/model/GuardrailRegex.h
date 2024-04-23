/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/GuardrailSensitiveInformationAction.h>
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
   * <p>The regular expression configured for the guardrail.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailRegex">AWS
   * API Reference</a></p>
   */
  class GuardrailRegex
  {
  public:
    AWS_BEDROCK_API GuardrailRegex();
    AWS_BEDROCK_API GuardrailRegex(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailRegex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the regular expression for the guardrail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the regular expression for the guardrail.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the regular expression for the guardrail.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the regular expression for the guardrail.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the regular expression for the guardrail.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the regular expression for the guardrail.</p>
     */
    inline GuardrailRegex& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the regular expression for the guardrail.</p>
     */
    inline GuardrailRegex& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the regular expression for the guardrail.</p>
     */
    inline GuardrailRegex& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the regular expression for the guardrail.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the regular expression for the guardrail.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the regular expression for the guardrail.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the regular expression for the guardrail.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the regular expression for the guardrail.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the regular expression for the guardrail.</p>
     */
    inline GuardrailRegex& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the regular expression for the guardrail.</p>
     */
    inline GuardrailRegex& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the regular expression for the guardrail.</p>
     */
    inline GuardrailRegex& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The pattern of the regular expression configured for the guardrail.</p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p>The pattern of the regular expression configured for the guardrail.</p>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p>The pattern of the regular expression configured for the guardrail.</p>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p>The pattern of the regular expression configured for the guardrail.</p>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p>The pattern of the regular expression configured for the guardrail.</p>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p>The pattern of the regular expression configured for the guardrail.</p>
     */
    inline GuardrailRegex& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p>The pattern of the regular expression configured for the guardrail.</p>
     */
    inline GuardrailRegex& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p>The pattern of the regular expression configured for the guardrail.</p>
     */
    inline GuardrailRegex& WithPattern(const char* value) { SetPattern(value); return *this;}


    /**
     * <p>The action taken when a match to the regular expression is detected.</p>
     */
    inline const GuardrailSensitiveInformationAction& GetAction() const{ return m_action; }

    /**
     * <p>The action taken when a match to the regular expression is detected.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action taken when a match to the regular expression is detected.</p>
     */
    inline void SetAction(const GuardrailSensitiveInformationAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action taken when a match to the regular expression is detected.</p>
     */
    inline void SetAction(GuardrailSensitiveInformationAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action taken when a match to the regular expression is detected.</p>
     */
    inline GuardrailRegex& WithAction(const GuardrailSensitiveInformationAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action taken when a match to the regular expression is detected.</p>
     */
    inline GuardrailRegex& WithAction(GuardrailSensitiveInformationAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;

    GuardrailSensitiveInformationAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
