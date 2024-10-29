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
namespace Bedrock
{
namespace Model
{

  /**
   */
  class GetInferenceProfileRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API GetInferenceProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInferenceProfile"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or Amazon Resource Name (ARN) of the inference profile.</p>
     */
    inline const Aws::String& GetInferenceProfileIdentifier() const{ return m_inferenceProfileIdentifier; }
    inline bool InferenceProfileIdentifierHasBeenSet() const { return m_inferenceProfileIdentifierHasBeenSet; }
    inline void SetInferenceProfileIdentifier(const Aws::String& value) { m_inferenceProfileIdentifierHasBeenSet = true; m_inferenceProfileIdentifier = value; }
    inline void SetInferenceProfileIdentifier(Aws::String&& value) { m_inferenceProfileIdentifierHasBeenSet = true; m_inferenceProfileIdentifier = std::move(value); }
    inline void SetInferenceProfileIdentifier(const char* value) { m_inferenceProfileIdentifierHasBeenSet = true; m_inferenceProfileIdentifier.assign(value); }
    inline GetInferenceProfileRequest& WithInferenceProfileIdentifier(const Aws::String& value) { SetInferenceProfileIdentifier(value); return *this;}
    inline GetInferenceProfileRequest& WithInferenceProfileIdentifier(Aws::String&& value) { SetInferenceProfileIdentifier(std::move(value)); return *this;}
    inline GetInferenceProfileRequest& WithInferenceProfileIdentifier(const char* value) { SetInferenceProfileIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_inferenceProfileIdentifier;
    bool m_inferenceProfileIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
