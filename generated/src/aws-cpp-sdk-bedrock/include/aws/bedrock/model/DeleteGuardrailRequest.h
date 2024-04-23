/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Bedrock
{
namespace Model
{

  /**
   */
  class DeleteGuardrailRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API DeleteGuardrailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGuardrail"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailIdentifier() const{ return m_guardrailIdentifier; }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline bool GuardrailIdentifierHasBeenSet() const { return m_guardrailIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline void SetGuardrailIdentifier(const Aws::String& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = value; }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline void SetGuardrailIdentifier(Aws::String&& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline void SetGuardrailIdentifier(const char* value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline DeleteGuardrailRequest& WithGuardrailIdentifier(const Aws::String& value) { SetGuardrailIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline DeleteGuardrailRequest& WithGuardrailIdentifier(Aws::String&& value) { SetGuardrailIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline DeleteGuardrailRequest& WithGuardrailIdentifier(const char* value) { SetGuardrailIdentifier(value); return *this;}


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
    inline DeleteGuardrailRequest& WithGuardrailVersion(const Aws::String& value) { SetGuardrailVersion(value); return *this;}

    /**
     * <p>The version of the guardrail.</p>
     */
    inline DeleteGuardrailRequest& WithGuardrailVersion(Aws::String&& value) { SetGuardrailVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the guardrail.</p>
     */
    inline DeleteGuardrailRequest& WithGuardrailVersion(const char* value) { SetGuardrailVersion(value); return *this;}

  private:

    Aws::String m_guardrailIdentifier;
    bool m_guardrailIdentifierHasBeenSet = false;

    Aws::String m_guardrailVersion;
    bool m_guardrailVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
