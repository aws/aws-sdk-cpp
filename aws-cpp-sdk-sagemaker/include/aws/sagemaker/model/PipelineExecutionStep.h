/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/StepStatus.h>
#include <aws/sagemaker/model/CacheHitResult.h>
#include <aws/sagemaker/model/PipelineExecutionStepMetadata.h>
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
   * <p>An execution of a step in a pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PipelineExecutionStep">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API PipelineExecutionStep
  {
  public:
    PipelineExecutionStep();
    PipelineExecutionStep(Aws::Utils::Json::JsonView jsonValue);
    PipelineExecutionStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the step that is executed.</p>
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }

    /**
     * <p>The name of the step that is executed.</p>
     */
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }

    /**
     * <p>The name of the step that is executed.</p>
     */
    inline void SetStepName(const Aws::String& value) { m_stepNameHasBeenSet = true; m_stepName = value; }

    /**
     * <p>The name of the step that is executed.</p>
     */
    inline void SetStepName(Aws::String&& value) { m_stepNameHasBeenSet = true; m_stepName = std::move(value); }

    /**
     * <p>The name of the step that is executed.</p>
     */
    inline void SetStepName(const char* value) { m_stepNameHasBeenSet = true; m_stepName.assign(value); }

    /**
     * <p>The name of the step that is executed.</p>
     */
    inline PipelineExecutionStep& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}

    /**
     * <p>The name of the step that is executed.</p>
     */
    inline PipelineExecutionStep& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}

    /**
     * <p>The name of the step that is executed.</p>
     */
    inline PipelineExecutionStep& WithStepName(const char* value) { SetStepName(value); return *this;}


    /**
     * <p>The time that the step started executing.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time that the step started executing.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time that the step started executing.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time that the step started executing.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time that the step started executing.</p>
     */
    inline PipelineExecutionStep& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time that the step started executing.</p>
     */
    inline PipelineExecutionStep& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time that the step stopped executing.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time that the step stopped executing.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time that the step stopped executing.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time that the step stopped executing.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time that the step stopped executing.</p>
     */
    inline PipelineExecutionStep& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time that the step stopped executing.</p>
     */
    inline PipelineExecutionStep& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The status of the step execution.</p>
     */
    inline const StepStatus& GetStepStatus() const{ return m_stepStatus; }

    /**
     * <p>The status of the step execution.</p>
     */
    inline bool StepStatusHasBeenSet() const { return m_stepStatusHasBeenSet; }

    /**
     * <p>The status of the step execution.</p>
     */
    inline void SetStepStatus(const StepStatus& value) { m_stepStatusHasBeenSet = true; m_stepStatus = value; }

    /**
     * <p>The status of the step execution.</p>
     */
    inline void SetStepStatus(StepStatus&& value) { m_stepStatusHasBeenSet = true; m_stepStatus = std::move(value); }

    /**
     * <p>The status of the step execution.</p>
     */
    inline PipelineExecutionStep& WithStepStatus(const StepStatus& value) { SetStepStatus(value); return *this;}

    /**
     * <p>The status of the step execution.</p>
     */
    inline PipelineExecutionStep& WithStepStatus(StepStatus&& value) { SetStepStatus(std::move(value)); return *this;}


    /**
     * <p>If this pipeline execution step was cached, details on the cache hit.</p>
     */
    inline const CacheHitResult& GetCacheHitResult() const{ return m_cacheHitResult; }

    /**
     * <p>If this pipeline execution step was cached, details on the cache hit.</p>
     */
    inline bool CacheHitResultHasBeenSet() const { return m_cacheHitResultHasBeenSet; }

    /**
     * <p>If this pipeline execution step was cached, details on the cache hit.</p>
     */
    inline void SetCacheHitResult(const CacheHitResult& value) { m_cacheHitResultHasBeenSet = true; m_cacheHitResult = value; }

    /**
     * <p>If this pipeline execution step was cached, details on the cache hit.</p>
     */
    inline void SetCacheHitResult(CacheHitResult&& value) { m_cacheHitResultHasBeenSet = true; m_cacheHitResult = std::move(value); }

    /**
     * <p>If this pipeline execution step was cached, details on the cache hit.</p>
     */
    inline PipelineExecutionStep& WithCacheHitResult(const CacheHitResult& value) { SetCacheHitResult(value); return *this;}

    /**
     * <p>If this pipeline execution step was cached, details on the cache hit.</p>
     */
    inline PipelineExecutionStep& WithCacheHitResult(CacheHitResult&& value) { SetCacheHitResult(std::move(value)); return *this;}


    /**
     * <p>The reason why the step failed execution. This is only returned if the step
     * failed its execution.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason why the step failed execution. This is only returned if the step
     * failed its execution.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The reason why the step failed execution. This is only returned if the step
     * failed its execution.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason why the step failed execution. This is only returned if the step
     * failed its execution.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The reason why the step failed execution. This is only returned if the step
     * failed its execution.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The reason why the step failed execution. This is only returned if the step
     * failed its execution.</p>
     */
    inline PipelineExecutionStep& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason why the step failed execution. This is only returned if the step
     * failed its execution.</p>
     */
    inline PipelineExecutionStep& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason why the step failed execution. This is only returned if the step
     * failed its execution.</p>
     */
    inline PipelineExecutionStep& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The metadata for the step execution.</p>
     */
    inline const PipelineExecutionStepMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata for the step execution.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata for the step execution.</p>
     */
    inline void SetMetadata(const PipelineExecutionStepMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata for the step execution.</p>
     */
    inline void SetMetadata(PipelineExecutionStepMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata for the step execution.</p>
     */
    inline PipelineExecutionStep& WithMetadata(const PipelineExecutionStepMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata for the step execution.</p>
     */
    inline PipelineExecutionStep& WithMetadata(PipelineExecutionStepMetadata&& value) { SetMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    StepStatus m_stepStatus;
    bool m_stepStatusHasBeenSet;

    CacheHitResult m_cacheHitResult;
    bool m_cacheHitResultHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;

    PipelineExecutionStepMetadata m_metadata;
    bool m_metadataHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
