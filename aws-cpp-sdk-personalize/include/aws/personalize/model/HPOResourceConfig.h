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
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes the resource configuration for hyperparameter optimization
   * (HPO).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/HPOResourceConfig">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API HPOResourceConfig
  {
  public:
    HPOResourceConfig();
    HPOResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    HPOResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of training jobs.</p>
     */
    inline const Aws::String& GetMaxNumberOfTrainingJobs() const{ return m_maxNumberOfTrainingJobs; }

    /**
     * <p>The maximum number of training jobs.</p>
     */
    inline bool MaxNumberOfTrainingJobsHasBeenSet() const { return m_maxNumberOfTrainingJobsHasBeenSet; }

    /**
     * <p>The maximum number of training jobs.</p>
     */
    inline void SetMaxNumberOfTrainingJobs(const Aws::String& value) { m_maxNumberOfTrainingJobsHasBeenSet = true; m_maxNumberOfTrainingJobs = value; }

    /**
     * <p>The maximum number of training jobs.</p>
     */
    inline void SetMaxNumberOfTrainingJobs(Aws::String&& value) { m_maxNumberOfTrainingJobsHasBeenSet = true; m_maxNumberOfTrainingJobs = std::move(value); }

    /**
     * <p>The maximum number of training jobs.</p>
     */
    inline void SetMaxNumberOfTrainingJobs(const char* value) { m_maxNumberOfTrainingJobsHasBeenSet = true; m_maxNumberOfTrainingJobs.assign(value); }

    /**
     * <p>The maximum number of training jobs.</p>
     */
    inline HPOResourceConfig& WithMaxNumberOfTrainingJobs(const Aws::String& value) { SetMaxNumberOfTrainingJobs(value); return *this;}

    /**
     * <p>The maximum number of training jobs.</p>
     */
    inline HPOResourceConfig& WithMaxNumberOfTrainingJobs(Aws::String&& value) { SetMaxNumberOfTrainingJobs(std::move(value)); return *this;}

    /**
     * <p>The maximum number of training jobs.</p>
     */
    inline HPOResourceConfig& WithMaxNumberOfTrainingJobs(const char* value) { SetMaxNumberOfTrainingJobs(value); return *this;}


    /**
     * <p>The maximum number of parallel training jobs.</p>
     */
    inline const Aws::String& GetMaxParallelTrainingJobs() const{ return m_maxParallelTrainingJobs; }

    /**
     * <p>The maximum number of parallel training jobs.</p>
     */
    inline bool MaxParallelTrainingJobsHasBeenSet() const { return m_maxParallelTrainingJobsHasBeenSet; }

    /**
     * <p>The maximum number of parallel training jobs.</p>
     */
    inline void SetMaxParallelTrainingJobs(const Aws::String& value) { m_maxParallelTrainingJobsHasBeenSet = true; m_maxParallelTrainingJobs = value; }

    /**
     * <p>The maximum number of parallel training jobs.</p>
     */
    inline void SetMaxParallelTrainingJobs(Aws::String&& value) { m_maxParallelTrainingJobsHasBeenSet = true; m_maxParallelTrainingJobs = std::move(value); }

    /**
     * <p>The maximum number of parallel training jobs.</p>
     */
    inline void SetMaxParallelTrainingJobs(const char* value) { m_maxParallelTrainingJobsHasBeenSet = true; m_maxParallelTrainingJobs.assign(value); }

    /**
     * <p>The maximum number of parallel training jobs.</p>
     */
    inline HPOResourceConfig& WithMaxParallelTrainingJobs(const Aws::String& value) { SetMaxParallelTrainingJobs(value); return *this;}

    /**
     * <p>The maximum number of parallel training jobs.</p>
     */
    inline HPOResourceConfig& WithMaxParallelTrainingJobs(Aws::String&& value) { SetMaxParallelTrainingJobs(std::move(value)); return *this;}

    /**
     * <p>The maximum number of parallel training jobs.</p>
     */
    inline HPOResourceConfig& WithMaxParallelTrainingJobs(const char* value) { SetMaxParallelTrainingJobs(value); return *this;}

  private:

    Aws::String m_maxNumberOfTrainingJobs;
    bool m_maxNumberOfTrainingJobsHasBeenSet;

    Aws::String m_maxParallelTrainingJobs;
    bool m_maxParallelTrainingJobsHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
