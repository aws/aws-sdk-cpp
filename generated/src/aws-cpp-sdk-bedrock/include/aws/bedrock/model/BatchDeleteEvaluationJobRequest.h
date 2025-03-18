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
    AWS_BEDROCK_API BatchDeleteEvaluationJobRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetJobIdentifiers() const { return m_jobIdentifiers; }
    inline bool JobIdentifiersHasBeenSet() const { return m_jobIdentifiersHasBeenSet; }
    template<typename JobIdentifiersT = Aws::Vector<Aws::String>>
    void SetJobIdentifiers(JobIdentifiersT&& value) { m_jobIdentifiersHasBeenSet = true; m_jobIdentifiers = std::forward<JobIdentifiersT>(value); }
    template<typename JobIdentifiersT = Aws::Vector<Aws::String>>
    BatchDeleteEvaluationJobRequest& WithJobIdentifiers(JobIdentifiersT&& value) { SetJobIdentifiers(std::forward<JobIdentifiersT>(value)); return *this;}
    template<typename JobIdentifiersT = Aws::String>
    BatchDeleteEvaluationJobRequest& AddJobIdentifiers(JobIdentifiersT&& value) { m_jobIdentifiersHasBeenSet = true; m_jobIdentifiers.emplace_back(std::forward<JobIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_jobIdentifiers;
    bool m_jobIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
