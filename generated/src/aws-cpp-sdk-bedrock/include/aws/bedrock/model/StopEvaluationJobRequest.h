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
  class StopEvaluationJobRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API StopEvaluationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopEvaluationJob"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the model evaluation job you want to stop.</p>
     */
    inline const Aws::String& GetJobIdentifier() const{ return m_jobIdentifier; }

    /**
     * <p>The ARN of the model evaluation job you want to stop.</p>
     */
    inline bool JobIdentifierHasBeenSet() const { return m_jobIdentifierHasBeenSet; }

    /**
     * <p>The ARN of the model evaluation job you want to stop.</p>
     */
    inline void SetJobIdentifier(const Aws::String& value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier = value; }

    /**
     * <p>The ARN of the model evaluation job you want to stop.</p>
     */
    inline void SetJobIdentifier(Aws::String&& value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier = std::move(value); }

    /**
     * <p>The ARN of the model evaluation job you want to stop.</p>
     */
    inline void SetJobIdentifier(const char* value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier.assign(value); }

    /**
     * <p>The ARN of the model evaluation job you want to stop.</p>
     */
    inline StopEvaluationJobRequest& WithJobIdentifier(const Aws::String& value) { SetJobIdentifier(value); return *this;}

    /**
     * <p>The ARN of the model evaluation job you want to stop.</p>
     */
    inline StopEvaluationJobRequest& WithJobIdentifier(Aws::String&& value) { SetJobIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ARN of the model evaluation job you want to stop.</p>
     */
    inline StopEvaluationJobRequest& WithJobIdentifier(const char* value) { SetJobIdentifier(value); return *this;}

  private:

    Aws::String m_jobIdentifier;
    bool m_jobIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
