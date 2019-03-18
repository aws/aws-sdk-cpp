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
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/JobSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplify/model/Step.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p> Structure for an execution job for an Amplify App. </p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/Job">AWS API
   * Reference</a></p>
   */
  class AWS_AMPLIFY_API Job
  {
  public:
    Job();
    Job(Aws::Utils::Json::JsonView jsonValue);
    Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Summary for an execution job for an Amplify App. </p>
     */
    inline const JobSummary& GetSummary() const{ return m_summary; }

    /**
     * <p> Summary for an execution job for an Amplify App. </p>
     */
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }

    /**
     * <p> Summary for an execution job for an Amplify App. </p>
     */
    inline void SetSummary(const JobSummary& value) { m_summaryHasBeenSet = true; m_summary = value; }

    /**
     * <p> Summary for an execution job for an Amplify App. </p>
     */
    inline void SetSummary(JobSummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }

    /**
     * <p> Summary for an execution job for an Amplify App. </p>
     */
    inline Job& WithSummary(const JobSummary& value) { SetSummary(value); return *this;}

    /**
     * <p> Summary for an execution job for an Amplify App. </p>
     */
    inline Job& WithSummary(JobSummary&& value) { SetSummary(std::move(value)); return *this;}


    /**
     * <p> Execution steps for an execution job, for an Amplify App. </p>
     */
    inline const Aws::Vector<Step>& GetSteps() const{ return m_steps; }

    /**
     * <p> Execution steps for an execution job, for an Amplify App. </p>
     */
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }

    /**
     * <p> Execution steps for an execution job, for an Amplify App. </p>
     */
    inline void SetSteps(const Aws::Vector<Step>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p> Execution steps for an execution job, for an Amplify App. </p>
     */
    inline void SetSteps(Aws::Vector<Step>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }

    /**
     * <p> Execution steps for an execution job, for an Amplify App. </p>
     */
    inline Job& WithSteps(const Aws::Vector<Step>& value) { SetSteps(value); return *this;}

    /**
     * <p> Execution steps for an execution job, for an Amplify App. </p>
     */
    inline Job& WithSteps(Aws::Vector<Step>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p> Execution steps for an execution job, for an Amplify App. </p>
     */
    inline Job& AddSteps(const Step& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p> Execution steps for an execution job, for an Amplify App. </p>
     */
    inline Job& AddSteps(Step&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }

  private:

    JobSummary m_summary;
    bool m_summaryHasBeenSet;

    Aws::Vector<Step> m_steps;
    bool m_stepsHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
