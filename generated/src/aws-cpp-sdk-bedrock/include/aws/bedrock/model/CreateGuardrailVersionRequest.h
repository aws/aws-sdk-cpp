/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class CreateGuardrailVersionRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreateGuardrailVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGuardrailVersion"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the guardrail. This can be an ID or the ARN.</p>
     */
    inline const Aws::String& GetGuardrailIdentifier() const{ return m_guardrailIdentifier; }
    inline bool GuardrailIdentifierHasBeenSet() const { return m_guardrailIdentifierHasBeenSet; }
    inline void SetGuardrailIdentifier(const Aws::String& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = value; }
    inline void SetGuardrailIdentifier(Aws::String&& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = std::move(value); }
    inline void SetGuardrailIdentifier(const char* value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier.assign(value); }
    inline CreateGuardrailVersionRequest& WithGuardrailIdentifier(const Aws::String& value) { SetGuardrailIdentifier(value); return *this;}
    inline CreateGuardrailVersionRequest& WithGuardrailIdentifier(Aws::String&& value) { SetGuardrailIdentifier(std::move(value)); return *this;}
    inline CreateGuardrailVersionRequest& WithGuardrailIdentifier(const char* value) { SetGuardrailIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the guardrail version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateGuardrailVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateGuardrailVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateGuardrailVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than once. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateGuardrailVersionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateGuardrailVersionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateGuardrailVersionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    Aws::String m_guardrailIdentifier;
    bool m_guardrailIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
