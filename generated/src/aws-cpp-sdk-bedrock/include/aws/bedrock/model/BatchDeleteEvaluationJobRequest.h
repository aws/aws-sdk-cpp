/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchDeleteEvaluationJobRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API BatchDeleteEvaluationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteEvaluationJob"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of one or more evaluation job Amazon Resource Names (ARNs) you want to
     * delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobIdentifiers() const{ return m_jobIdentifiers; }
    inline bool JobIdentifiersHasBeenSet() const { return m_jobIdentifiersHasBeenSet; }
    inline void SetJobIdentifiers(const Aws::Vector<Aws::String>& value) { m_jobIdentifiersHasBeenSet = true; m_jobIdentifiers = value; }
    inline void SetJobIdentifiers(Aws::Vector<Aws::String>&& value) { m_jobIdentifiersHasBeenSet = true; m_jobIdentifiers = std::move(value); }
    inline BatchDeleteEvaluationJobRequest& WithJobIdentifiers(const Aws::Vector<Aws::String>& value) { SetJobIdentifiers(value); return *this;}
    inline BatchDeleteEvaluationJobRequest& WithJobIdentifiers(Aws::Vector<Aws::String>&& value) { SetJobIdentifiers(std::move(value)); return *this;}
    inline BatchDeleteEvaluationJobRequest& AddJobIdentifiers(const Aws::String& value) { m_jobIdentifiersHasBeenSet = true; m_jobIdentifiers.push_back(value); return *this; }
    inline BatchDeleteEvaluationJobRequest& AddJobIdentifiers(Aws::String&& value) { m_jobIdentifiersHasBeenSet = true; m_jobIdentifiers.push_back(std::move(value)); return *this; }
    inline BatchDeleteEvaluationJobRequest& AddJobIdentifiers(const char* value) { m_jobIdentifiersHasBeenSet = true; m_jobIdentifiers.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_jobIdentifiers;
    bool m_jobIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
