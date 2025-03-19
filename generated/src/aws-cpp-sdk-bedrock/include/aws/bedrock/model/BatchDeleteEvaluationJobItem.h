/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/EvaluationJobStatus.h>
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
   * <p>An evaluation job for deletion, and it’s current status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/BatchDeleteEvaluationJobItem">AWS
   * API Reference</a></p>
   */
  class BatchDeleteEvaluationJobItem
  {
  public:
    AWS_BEDROCK_API BatchDeleteEvaluationJobItem() = default;
    AWS_BEDROCK_API BatchDeleteEvaluationJobItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API BatchDeleteEvaluationJobItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the evaluation job for deletion.</p>
     */
    inline const Aws::String& GetJobIdentifier() const { return m_jobIdentifier; }
    inline bool JobIdentifierHasBeenSet() const { return m_jobIdentifierHasBeenSet; }
    template<typename JobIdentifierT = Aws::String>
    void SetJobIdentifier(JobIdentifierT&& value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier = std::forward<JobIdentifierT>(value); }
    template<typename JobIdentifierT = Aws::String>
    BatchDeleteEvaluationJobItem& WithJobIdentifier(JobIdentifierT&& value) { SetJobIdentifier(std::forward<JobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the evaluation job for deletion.</p>
     */
    inline EvaluationJobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(EvaluationJobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline BatchDeleteEvaluationJobItem& WithJobStatus(EvaluationJobStatus value) { SetJobStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_jobIdentifier;
    bool m_jobIdentifierHasBeenSet = false;

    EvaluationJobStatus m_jobStatus{EvaluationJobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
