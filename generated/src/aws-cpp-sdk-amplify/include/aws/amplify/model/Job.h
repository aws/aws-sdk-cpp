/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p> Describes an execution job for an Amplify app. </p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/Job">AWS API
   * Reference</a></p>
   */
  class Job
  {
  public:
    AWS_AMPLIFY_API Job();
    AWS_AMPLIFY_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the summary for an execution job for an Amplify app. </p>
     */
    inline const JobSummary& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const JobSummary& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(JobSummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline Job& WithSummary(const JobSummary& value) { SetSummary(value); return *this;}
    inline Job& WithSummary(JobSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The execution steps for an execution job, for an Amplify app. </p>
     */
    inline const Aws::Vector<Step>& GetSteps() const{ return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    inline void SetSteps(const Aws::Vector<Step>& value) { m_stepsHasBeenSet = true; m_steps = value; }
    inline void SetSteps(Aws::Vector<Step>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }
    inline Job& WithSteps(const Aws::Vector<Step>& value) { SetSteps(value); return *this;}
    inline Job& WithSteps(Aws::Vector<Step>&& value) { SetSteps(std::move(value)); return *this;}
    inline Job& AddSteps(const Step& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }
    inline Job& AddSteps(Step&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }
    ///@}
  private:

    JobSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::Vector<Step> m_steps;
    bool m_stepsHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
