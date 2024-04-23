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
   * <p>The regular expression to configure for the guardrail.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailRegexConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailRegexConfig
  {
  public:
    AWS_BEDROCK_API GuardrailRegexConfig();
    AWS_BEDROCK_API GuardrailRegexConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailRegexConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the regular expression to configure for the guardrail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the regular expression to configure for the guardrail.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the regular expression to configure for the guardrail.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the regular expression to configure for the guardrail.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the regular expression to configure for the guardrail.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the regular expression to configure for the guardrail.</p>
     */
    inline GuardrailRegexConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the regular expression to configure for the guardrail.</p>
     */
    inline GuardrailRegexConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the regular expression to configure for the guardrail.</p>
     */
    inline GuardrailRegexConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the regular expression to configure for the guardrail.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the regular expression to configure for the guardrail.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the regular expression to configure for the guardrail.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the regular expression to configure for the guardrail.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the regular expression to configure for the guardrail.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the regular expression to configure for the guardrail.</p>
     */
    inline GuardrailRegexConfig& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the regular expression to configure for the guardrail.</p>
     */
    inline GuardrailRegexConfig& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the regular expression to configure for the guardrail.</p>
     */
    inline GuardrailRegexConfig& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The regular expression pattern to configure for the guardrail.</p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p>The regular expression pattern to configure for the guardrail.</p>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p>The regular expression pattern to configure for the guardrail.</p>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p>The regular expression pattern to configure for the guardrail.</p>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p>The regular expression pattern to configure for the guardrail.</p>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p>The regular expression pattern to configure for the guardrail.</p>
     */
    inline GuardrailRegexConfig& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p>The regular expression pattern to configure for the guardrail.</p>
     */
    inline GuardrailRegexConfig& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p>The regular expression pattern to configure for the guardrail.</p>
     */
    inline GuardrailRegexConfig& WithPattern(const char* value) { SetPattern(value); return *this;}


    /**
     * <p>The guardrail action to configure when matching regular expression is
     * detected.</p>
     */
    inline const GuardrailSensitiveInformationAction& GetAction() const{ return m_action; }

    /**
     * <p>The guardrail action to configure when matching regular expression is
     * detected.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The guardrail action to configure when matching regular expression is
     * detected.</p>
     */
    inline void SetAction(const GuardrailSensitiveInformationAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The guardrail action to configure when matching regular expression is
     * detected.</p>
     */
    inline void SetAction(GuardrailSensitiveInformationAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The guardrail action to configure when matching regular expression is
     * detected.</p>
     */
    inline GuardrailRegexConfig& WithAction(const GuardrailSensitiveInformationAction& value) { SetAction(value); return *this;}

    /**
     * <p>The guardrail action to configure when matching regular expression is
     * detected.</p>
     */
    inline GuardrailRegexConfig& WithAction(GuardrailSensitiveInformationAction&& value) { SetAction(std::move(value)); return *this;}

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
