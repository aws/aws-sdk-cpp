/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>How long a job is allowed to run, or how many candidates a job is allowed to
   * generate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLJobCompletionCriteria">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API AutoMLJobCompletionCriteria
  {
  public:
    AutoMLJobCompletionCriteria();
    AutoMLJobCompletionCriteria(Aws::Utils::Json::JsonView jsonValue);
    AutoMLJobCompletionCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of times a training job is allowed to run.</p>
     */
    inline int GetMaxCandidates() const{ return m_maxCandidates; }

    /**
     * <p>The maximum number of times a training job is allowed to run.</p>
     */
    inline bool MaxCandidatesHasBeenSet() const { return m_maxCandidatesHasBeenSet; }

    /**
     * <p>The maximum number of times a training job is allowed to run.</p>
     */
    inline void SetMaxCandidates(int value) { m_maxCandidatesHasBeenSet = true; m_maxCandidates = value; }

    /**
     * <p>The maximum number of times a training job is allowed to run.</p>
     */
    inline AutoMLJobCompletionCriteria& WithMaxCandidates(int value) { SetMaxCandidates(value); return *this;}


    /**
     * <p>The maximum time, in seconds, a job is allowed to run.</p>
     */
    inline int GetMaxRuntimePerTrainingJobInSeconds() const{ return m_maxRuntimePerTrainingJobInSeconds; }

    /**
     * <p>The maximum time, in seconds, a job is allowed to run.</p>
     */
    inline bool MaxRuntimePerTrainingJobInSecondsHasBeenSet() const { return m_maxRuntimePerTrainingJobInSecondsHasBeenSet; }

    /**
     * <p>The maximum time, in seconds, a job is allowed to run.</p>
     */
    inline void SetMaxRuntimePerTrainingJobInSeconds(int value) { m_maxRuntimePerTrainingJobInSecondsHasBeenSet = true; m_maxRuntimePerTrainingJobInSeconds = value; }

    /**
     * <p>The maximum time, in seconds, a job is allowed to run.</p>
     */
    inline AutoMLJobCompletionCriteria& WithMaxRuntimePerTrainingJobInSeconds(int value) { SetMaxRuntimePerTrainingJobInSeconds(value); return *this;}


    /**
     * <p>The maximum time, in seconds, an AutoML job is allowed to wait for a trial to
     * complete. It must be equal to or greater than
     * MaxRuntimePerTrainingJobInSeconds.</p>
     */
    inline int GetMaxAutoMLJobRuntimeInSeconds() const{ return m_maxAutoMLJobRuntimeInSeconds; }

    /**
     * <p>The maximum time, in seconds, an AutoML job is allowed to wait for a trial to
     * complete. It must be equal to or greater than
     * MaxRuntimePerTrainingJobInSeconds.</p>
     */
    inline bool MaxAutoMLJobRuntimeInSecondsHasBeenSet() const { return m_maxAutoMLJobRuntimeInSecondsHasBeenSet; }

    /**
     * <p>The maximum time, in seconds, an AutoML job is allowed to wait for a trial to
     * complete. It must be equal to or greater than
     * MaxRuntimePerTrainingJobInSeconds.</p>
     */
    inline void SetMaxAutoMLJobRuntimeInSeconds(int value) { m_maxAutoMLJobRuntimeInSecondsHasBeenSet = true; m_maxAutoMLJobRuntimeInSeconds = value; }

    /**
     * <p>The maximum time, in seconds, an AutoML job is allowed to wait for a trial to
     * complete. It must be equal to or greater than
     * MaxRuntimePerTrainingJobInSeconds.</p>
     */
    inline AutoMLJobCompletionCriteria& WithMaxAutoMLJobRuntimeInSeconds(int value) { SetMaxAutoMLJobRuntimeInSeconds(value); return *this;}

  private:

    int m_maxCandidates;
    bool m_maxCandidatesHasBeenSet;

    int m_maxRuntimePerTrainingJobInSeconds;
    bool m_maxRuntimePerTrainingJobInSecondsHasBeenSet;

    int m_maxAutoMLJobRuntimeInSeconds;
    bool m_maxAutoMLJobRuntimeInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
