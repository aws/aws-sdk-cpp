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
    AWS_BEDROCK_API BatchDeleteEvaluationJobItem();
    AWS_BEDROCK_API BatchDeleteEvaluationJobItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API BatchDeleteEvaluationJobItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the evaluation job for deletion.</p>
     */
    inline const Aws::String& GetJobIdentifier() const{ return m_jobIdentifier; }
    inline bool JobIdentifierHasBeenSet() const { return m_jobIdentifierHasBeenSet; }
    inline void SetJobIdentifier(const Aws::String& value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier = value; }
    inline void SetJobIdentifier(Aws::String&& value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier = std::move(value); }
    inline void SetJobIdentifier(const char* value) { m_jobIdentifierHasBeenSet = true; m_jobIdentifier.assign(value); }
    inline BatchDeleteEvaluationJobItem& WithJobIdentifier(const Aws::String& value) { SetJobIdentifier(value); return *this;}
    inline BatchDeleteEvaluationJobItem& WithJobIdentifier(Aws::String&& value) { SetJobIdentifier(std::move(value)); return *this;}
    inline BatchDeleteEvaluationJobItem& WithJobIdentifier(const char* value) { SetJobIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the evaluation job for deletion.</p>
     */
    inline const EvaluationJobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(const EvaluationJobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline void SetJobStatus(EvaluationJobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }
    inline BatchDeleteEvaluationJobItem& WithJobStatus(const EvaluationJobStatus& value) { SetJobStatus(value); return *this;}
    inline BatchDeleteEvaluationJobItem& WithJobStatus(EvaluationJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobIdentifier;
    bool m_jobIdentifierHasBeenSet = false;

    EvaluationJobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
