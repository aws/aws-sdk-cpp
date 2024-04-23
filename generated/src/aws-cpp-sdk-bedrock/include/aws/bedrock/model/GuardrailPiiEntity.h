/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GuardrailPiiEntityType.h>
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
   * <p>The PII entity configured for the guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailPiiEntity">AWS
   * API Reference</a></p>
   */
  class GuardrailPiiEntity
  {
  public:
    AWS_BEDROCK_API GuardrailPiiEntity();
    AWS_BEDROCK_API GuardrailPiiEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailPiiEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of PII entity. For example, Social Security Number.</p>
     */
    inline const GuardrailPiiEntityType& GetType() const{ return m_type; }

    /**
     * <p>The type of PII entity. For example, Social Security Number.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of PII entity. For example, Social Security Number.</p>
     */
    inline void SetType(const GuardrailPiiEntityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of PII entity. For example, Social Security Number.</p>
     */
    inline void SetType(GuardrailPiiEntityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of PII entity. For example, Social Security Number.</p>
     */
    inline GuardrailPiiEntity& WithType(const GuardrailPiiEntityType& value) { SetType(value); return *this;}

    /**
     * <p>The type of PII entity. For example, Social Security Number.</p>
     */
    inline GuardrailPiiEntity& WithType(GuardrailPiiEntityType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The configured guardrail action when PII entity is detected.</p>
     */
    inline const GuardrailSensitiveInformationAction& GetAction() const{ return m_action; }

    /**
     * <p>The configured guardrail action when PII entity is detected.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The configured guardrail action when PII entity is detected.</p>
     */
    inline void SetAction(const GuardrailSensitiveInformationAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The configured guardrail action when PII entity is detected.</p>
     */
    inline void SetAction(GuardrailSensitiveInformationAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The configured guardrail action when PII entity is detected.</p>
     */
    inline GuardrailPiiEntity& WithAction(const GuardrailSensitiveInformationAction& value) { SetAction(value); return *this;}

    /**
     * <p>The configured guardrail action when PII entity is detected.</p>
     */
    inline GuardrailPiiEntity& WithAction(GuardrailSensitiveInformationAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    GuardrailPiiEntityType m_type;
    bool m_typeHasBeenSet = false;

    GuardrailSensitiveInformationAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
