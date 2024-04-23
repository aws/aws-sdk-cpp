/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GuardrailManagedWordsType.h>
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
   * <p>The managed word list to configure for the guardrail.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailManagedWordsConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailManagedWordsConfig
  {
  public:
    AWS_BEDROCK_API GuardrailManagedWordsConfig();
    AWS_BEDROCK_API GuardrailManagedWordsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailManagedWordsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The managed word type to configure for the guardrail.</p>
     */
    inline const GuardrailManagedWordsType& GetType() const{ return m_type; }

    /**
     * <p>The managed word type to configure for the guardrail.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The managed word type to configure for the guardrail.</p>
     */
    inline void SetType(const GuardrailManagedWordsType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The managed word type to configure for the guardrail.</p>
     */
    inline void SetType(GuardrailManagedWordsType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The managed word type to configure for the guardrail.</p>
     */
    inline GuardrailManagedWordsConfig& WithType(const GuardrailManagedWordsType& value) { SetType(value); return *this;}

    /**
     * <p>The managed word type to configure for the guardrail.</p>
     */
    inline GuardrailManagedWordsConfig& WithType(GuardrailManagedWordsType&& value) { SetType(std::move(value)); return *this;}

  private:

    GuardrailManagedWordsType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
