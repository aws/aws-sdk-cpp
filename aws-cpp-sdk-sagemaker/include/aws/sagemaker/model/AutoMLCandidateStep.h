/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CandidateStepType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Information about the steps for a candidate and what step it is working
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLCandidateStep">AWS
   * API Reference</a></p>
   */
  class AutoMLCandidateStep
  {
  public:
    AWS_SAGEMAKER_API AutoMLCandidateStep();
    AWS_SAGEMAKER_API AutoMLCandidateStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLCandidateStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the candidate is at the transform, training, or processing step.</p>
     */
    inline const CandidateStepType& GetCandidateStepType() const{ return m_candidateStepType; }

    /**
     * <p>Whether the candidate is at the transform, training, or processing step.</p>
     */
    inline bool CandidateStepTypeHasBeenSet() const { return m_candidateStepTypeHasBeenSet; }

    /**
     * <p>Whether the candidate is at the transform, training, or processing step.</p>
     */
    inline void SetCandidateStepType(const CandidateStepType& value) { m_candidateStepTypeHasBeenSet = true; m_candidateStepType = value; }

    /**
     * <p>Whether the candidate is at the transform, training, or processing step.</p>
     */
    inline void SetCandidateStepType(CandidateStepType&& value) { m_candidateStepTypeHasBeenSet = true; m_candidateStepType = std::move(value); }

    /**
     * <p>Whether the candidate is at the transform, training, or processing step.</p>
     */
    inline AutoMLCandidateStep& WithCandidateStepType(const CandidateStepType& value) { SetCandidateStepType(value); return *this;}

    /**
     * <p>Whether the candidate is at the transform, training, or processing step.</p>
     */
    inline AutoMLCandidateStep& WithCandidateStepType(CandidateStepType&& value) { SetCandidateStepType(std::move(value)); return *this;}


    /**
     * <p>The ARN for the candidate's step.</p>
     */
    inline const Aws::String& GetCandidateStepArn() const{ return m_candidateStepArn; }

    /**
     * <p>The ARN for the candidate's step.</p>
     */
    inline bool CandidateStepArnHasBeenSet() const { return m_candidateStepArnHasBeenSet; }

    /**
     * <p>The ARN for the candidate's step.</p>
     */
    inline void SetCandidateStepArn(const Aws::String& value) { m_candidateStepArnHasBeenSet = true; m_candidateStepArn = value; }

    /**
     * <p>The ARN for the candidate's step.</p>
     */
    inline void SetCandidateStepArn(Aws::String&& value) { m_candidateStepArnHasBeenSet = true; m_candidateStepArn = std::move(value); }

    /**
     * <p>The ARN for the candidate's step.</p>
     */
    inline void SetCandidateStepArn(const char* value) { m_candidateStepArnHasBeenSet = true; m_candidateStepArn.assign(value); }

    /**
     * <p>The ARN for the candidate's step.</p>
     */
    inline AutoMLCandidateStep& WithCandidateStepArn(const Aws::String& value) { SetCandidateStepArn(value); return *this;}

    /**
     * <p>The ARN for the candidate's step.</p>
     */
    inline AutoMLCandidateStep& WithCandidateStepArn(Aws::String&& value) { SetCandidateStepArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the candidate's step.</p>
     */
    inline AutoMLCandidateStep& WithCandidateStepArn(const char* value) { SetCandidateStepArn(value); return *this;}


    /**
     * <p>The name for the candidate's step.</p>
     */
    inline const Aws::String& GetCandidateStepName() const{ return m_candidateStepName; }

    /**
     * <p>The name for the candidate's step.</p>
     */
    inline bool CandidateStepNameHasBeenSet() const { return m_candidateStepNameHasBeenSet; }

    /**
     * <p>The name for the candidate's step.</p>
     */
    inline void SetCandidateStepName(const Aws::String& value) { m_candidateStepNameHasBeenSet = true; m_candidateStepName = value; }

    /**
     * <p>The name for the candidate's step.</p>
     */
    inline void SetCandidateStepName(Aws::String&& value) { m_candidateStepNameHasBeenSet = true; m_candidateStepName = std::move(value); }

    /**
     * <p>The name for the candidate's step.</p>
     */
    inline void SetCandidateStepName(const char* value) { m_candidateStepNameHasBeenSet = true; m_candidateStepName.assign(value); }

    /**
     * <p>The name for the candidate's step.</p>
     */
    inline AutoMLCandidateStep& WithCandidateStepName(const Aws::String& value) { SetCandidateStepName(value); return *this;}

    /**
     * <p>The name for the candidate's step.</p>
     */
    inline AutoMLCandidateStep& WithCandidateStepName(Aws::String&& value) { SetCandidateStepName(std::move(value)); return *this;}

    /**
     * <p>The name for the candidate's step.</p>
     */
    inline AutoMLCandidateStep& WithCandidateStepName(const char* value) { SetCandidateStepName(value); return *this;}

  private:

    CandidateStepType m_candidateStepType;
    bool m_candidateStepTypeHasBeenSet = false;

    Aws::String m_candidateStepArn;
    bool m_candidateStepArnHasBeenSet = false;

    Aws::String m_candidateStepName;
    bool m_candidateStepNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
