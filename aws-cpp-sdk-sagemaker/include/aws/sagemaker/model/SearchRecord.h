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
#include <aws/sagemaker/model/TrainingJob.h>
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
   * <p>An individual search result record that contains a single resource
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SearchRecord">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API SearchRecord
  {
  public:
    SearchRecord();
    SearchRecord(Aws::Utils::Json::JsonView jsonValue);
    SearchRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>TrainingJob</code> object that is returned as part of a
     * <code>Search</code> request.</p>
     */
    inline const TrainingJob& GetTrainingJob() const{ return m_trainingJob; }

    /**
     * <p>A <code>TrainingJob</code> object that is returned as part of a
     * <code>Search</code> request.</p>
     */
    inline bool TrainingJobHasBeenSet() const { return m_trainingJobHasBeenSet; }

    /**
     * <p>A <code>TrainingJob</code> object that is returned as part of a
     * <code>Search</code> request.</p>
     */
    inline void SetTrainingJob(const TrainingJob& value) { m_trainingJobHasBeenSet = true; m_trainingJob = value; }

    /**
     * <p>A <code>TrainingJob</code> object that is returned as part of a
     * <code>Search</code> request.</p>
     */
    inline void SetTrainingJob(TrainingJob&& value) { m_trainingJobHasBeenSet = true; m_trainingJob = std::move(value); }

    /**
     * <p>A <code>TrainingJob</code> object that is returned as part of a
     * <code>Search</code> request.</p>
     */
    inline SearchRecord& WithTrainingJob(const TrainingJob& value) { SetTrainingJob(value); return *this;}

    /**
     * <p>A <code>TrainingJob</code> object that is returned as part of a
     * <code>Search</code> request.</p>
     */
    inline SearchRecord& WithTrainingJob(TrainingJob&& value) { SetTrainingJob(std::move(value)); return *this;}

  private:

    TrainingJob m_trainingJob;
    bool m_trainingJobHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
