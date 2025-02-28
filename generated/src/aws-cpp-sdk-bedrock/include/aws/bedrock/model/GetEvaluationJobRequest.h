﻿/**
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
  class GetEvaluationJobRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API GetEvaluationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEvaluationJob"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the evaluation job you want get information
     * on.</p>
     */
    inline const Aws::String& GetJobIdentifier() const{ return m_jobIdentifier; }
    inline bool JobIdentifierHasBeenSet() const { return m_jobIdentifierHasBeenSet; }
    inline void SetJobIdentifier(const Aws::String& value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier = value; }
    inline void SetJobIdentifier(Aws::String&& value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier = std::move(value); }
    inline void SetJobIdentifier(const char* value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier.assign(value); }
    inline GetEvaluationJobRequest& WithJobIdentifier(const Aws::String& value) { SetJobIdentifier(value); return *this;}
    inline GetEvaluationJobRequest& WithJobIdentifier(Aws::String&& value) { SetJobIdentifier(std::move(value)); return *this;}
    inline GetEvaluationJobRequest& WithJobIdentifier(const char* value) { SetJobIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_jobIdentifier;
    bool m_jobIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
