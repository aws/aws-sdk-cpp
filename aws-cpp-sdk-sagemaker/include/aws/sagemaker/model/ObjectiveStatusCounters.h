/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Specifies the number of training jobs that this hyperparameter tuning job
   * launched, categorized by the status of their objective metric. The objective
   * metric status shows whether the final objective metric for the training job has
   * been evaluated by the tuning job and used in the hyperparameter tuning
   * process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ObjectiveStatusCounters">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ObjectiveStatusCounters
  {
  public:
    ObjectiveStatusCounters();
    ObjectiveStatusCounters(Aws::Utils::Json::JsonView jsonValue);
    ObjectiveStatusCounters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of training jobs whose final objective metric was evaluated by the
     * hyperparameter tuning job and used in the hyperparameter tuning process.</p>
     */
    inline int GetSucceeded() const{ return m_succeeded; }

    /**
     * <p>The number of training jobs whose final objective metric was evaluated by the
     * hyperparameter tuning job and used in the hyperparameter tuning process.</p>
     */
    inline bool SucceededHasBeenSet() const { return m_succeededHasBeenSet; }

    /**
     * <p>The number of training jobs whose final objective metric was evaluated by the
     * hyperparameter tuning job and used in the hyperparameter tuning process.</p>
     */
    inline void SetSucceeded(int value) { m_succeededHasBeenSet = true; m_succeeded = value; }

    /**
     * <p>The number of training jobs whose final objective metric was evaluated by the
     * hyperparameter tuning job and used in the hyperparameter tuning process.</p>
     */
    inline ObjectiveStatusCounters& WithSucceeded(int value) { SetSucceeded(value); return *this;}


    /**
     * <p>The number of training jobs that are in progress and pending evaluation of
     * their final objective metric.</p>
     */
    inline int GetPending() const{ return m_pending; }

    /**
     * <p>The number of training jobs that are in progress and pending evaluation of
     * their final objective metric.</p>
     */
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }

    /**
     * <p>The number of training jobs that are in progress and pending evaluation of
     * their final objective metric.</p>
     */
    inline void SetPending(int value) { m_pendingHasBeenSet = true; m_pending = value; }

    /**
     * <p>The number of training jobs that are in progress and pending evaluation of
     * their final objective metric.</p>
     */
    inline ObjectiveStatusCounters& WithPending(int value) { SetPending(value); return *this;}


    /**
     * <p>The number of training jobs whose final objective metric was not evaluated
     * and used in the hyperparameter tuning process. This typically occurs when the
     * training job failed or did not emit an objective metric.</p>
     */
    inline int GetFailed() const{ return m_failed; }

    /**
     * <p>The number of training jobs whose final objective metric was not evaluated
     * and used in the hyperparameter tuning process. This typically occurs when the
     * training job failed or did not emit an objective metric.</p>
     */
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }

    /**
     * <p>The number of training jobs whose final objective metric was not evaluated
     * and used in the hyperparameter tuning process. This typically occurs when the
     * training job failed or did not emit an objective metric.</p>
     */
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }

    /**
     * <p>The number of training jobs whose final objective metric was not evaluated
     * and used in the hyperparameter tuning process. This typically occurs when the
     * training job failed or did not emit an objective metric.</p>
     */
    inline ObjectiveStatusCounters& WithFailed(int value) { SetFailed(value); return *this;}

  private:

    int m_succeeded;
    bool m_succeededHasBeenSet;

    int m_pending;
    bool m_pendingHasBeenSet;

    int m_failed;
    bool m_failedHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
