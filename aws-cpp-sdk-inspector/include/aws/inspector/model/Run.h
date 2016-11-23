/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>A snapshot of an Inspector assessment that contains the assessment's
   * findings.</p> <p>This data type is used as the response element in the
   * <a>DescribeRun</a> action.</p>
   */
  class AWS_INSPECTOR_API Run
  {
  public:
    Run();
    Run(const Aws::Utils::Json::JsonValue& jsonValue);
    Run& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ARN of the run.</p>
     */
    inline const Aws::String& GetRunArn() const{ return m_runArn; }

    /**
     * <p>The ARN of the run.</p>
     */
    inline void SetRunArn(const Aws::String& value) { m_runArnHasBeenSet = true; m_runArn = value; }

    /**
     * <p>The ARN of the run.</p>
     */
    inline void SetRunArn(Aws::String&& value) { m_runArnHasBeenSet = true; m_runArn = value; }

    /**
     * <p>The ARN of the run.</p>
     */
    inline void SetRunArn(const char* value) { m_runArnHasBeenSet = true; m_runArn.assign(value); }

    /**
     * <p>The ARN of the run.</p>
     */
    inline Run& WithRunArn(const Aws::String& value) { SetRunArn(value); return *this;}

    /**
     * <p>The ARN of the run.</p>
     */
    inline Run& WithRunArn(Aws::String&& value) { SetRunArn(value); return *this;}

    /**
     * <p>The ARN of the run.</p>
     */
    inline Run& WithRunArn(const char* value) { SetRunArn(value); return *this;}

    /**
     * <p>The auto-generated name for the run. </p>
     */
    inline const Aws::String& GetRunName() const{ return m_runName; }

    /**
     * <p>The auto-generated name for the run. </p>
     */
    inline void SetRunName(const Aws::String& value) { m_runNameHasBeenSet = true; m_runName = value; }

    /**
     * <p>The auto-generated name for the run. </p>
     */
    inline void SetRunName(Aws::String&& value) { m_runNameHasBeenSet = true; m_runName = value; }

    /**
     * <p>The auto-generated name for the run. </p>
     */
    inline void SetRunName(const char* value) { m_runNameHasBeenSet = true; m_runName.assign(value); }

    /**
     * <p>The auto-generated name for the run. </p>
     */
    inline Run& WithRunName(const Aws::String& value) { SetRunName(value); return *this;}

    /**
     * <p>The auto-generated name for the run. </p>
     */
    inline Run& WithRunName(Aws::String&& value) { SetRunName(value); return *this;}

    /**
     * <p>The auto-generated name for the run. </p>
     */
    inline Run& WithRunName(const char* value) { SetRunName(value); return *this;}

    /**
     * <p>The ARN of the assessment that is associated with the run.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }

    /**
     * <p>The ARN of the assessment that is associated with the run.</p>
     */
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN of the assessment that is associated with the run.</p>
     */
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN of the assessment that is associated with the run.</p>
     */
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }

    /**
     * <p>The ARN of the assessment that is associated with the run.</p>
     */
    inline Run& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN of the assessment that is associated with the run.</p>
     */
    inline Run& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN of the assessment that is associated with the run.</p>
     */
    inline Run& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The state of the run. Values can be set to <i>DataCollectionComplete</i>,
     * <i>EvaluatingPolicies</i>, <i>EvaluatingPoliciesErrorCanRetry</i>,
     * <i>Completed</i>, <i>Failed</i>, <i>TombStoned</i>.</p>
     */
    inline const Aws::String& GetRunState() const{ return m_runState; }

    /**
     * <p>The state of the run. Values can be set to <i>DataCollectionComplete</i>,
     * <i>EvaluatingPolicies</i>, <i>EvaluatingPoliciesErrorCanRetry</i>,
     * <i>Completed</i>, <i>Failed</i>, <i>TombStoned</i>.</p>
     */
    inline void SetRunState(const Aws::String& value) { m_runStateHasBeenSet = true; m_runState = value; }

    /**
     * <p>The state of the run. Values can be set to <i>DataCollectionComplete</i>,
     * <i>EvaluatingPolicies</i>, <i>EvaluatingPoliciesErrorCanRetry</i>,
     * <i>Completed</i>, <i>Failed</i>, <i>TombStoned</i>.</p>
     */
    inline void SetRunState(Aws::String&& value) { m_runStateHasBeenSet = true; m_runState = value; }

    /**
     * <p>The state of the run. Values can be set to <i>DataCollectionComplete</i>,
     * <i>EvaluatingPolicies</i>, <i>EvaluatingPoliciesErrorCanRetry</i>,
     * <i>Completed</i>, <i>Failed</i>, <i>TombStoned</i>.</p>
     */
    inline void SetRunState(const char* value) { m_runStateHasBeenSet = true; m_runState.assign(value); }

    /**
     * <p>The state of the run. Values can be set to <i>DataCollectionComplete</i>,
     * <i>EvaluatingPolicies</i>, <i>EvaluatingPoliciesErrorCanRetry</i>,
     * <i>Completed</i>, <i>Failed</i>, <i>TombStoned</i>.</p>
     */
    inline Run& WithRunState(const Aws::String& value) { SetRunState(value); return *this;}

    /**
     * <p>The state of the run. Values can be set to <i>DataCollectionComplete</i>,
     * <i>EvaluatingPolicies</i>, <i>EvaluatingPoliciesErrorCanRetry</i>,
     * <i>Completed</i>, <i>Failed</i>, <i>TombStoned</i>.</p>
     */
    inline Run& WithRunState(Aws::String&& value) { SetRunState(value); return *this;}

    /**
     * <p>The state of the run. Values can be set to <i>DataCollectionComplete</i>,
     * <i>EvaluatingPolicies</i>, <i>EvaluatingPoliciesErrorCanRetry</i>,
     * <i>Completed</i>, <i>Failed</i>, <i>TombStoned</i>.</p>
     */
    inline Run& WithRunState(const char* value) { SetRunState(value); return *this;}

    /**
     * <p>Rules packages selected for the run of the assessment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackages() const{ return m_rulesPackages; }

    /**
     * <p>Rules packages selected for the run of the assessment.</p>
     */
    inline void SetRulesPackages(const Aws::Vector<Aws::String>& value) { m_rulesPackagesHasBeenSet = true; m_rulesPackages = value; }

    /**
     * <p>Rules packages selected for the run of the assessment.</p>
     */
    inline void SetRulesPackages(Aws::Vector<Aws::String>&& value) { m_rulesPackagesHasBeenSet = true; m_rulesPackages = value; }

    /**
     * <p>Rules packages selected for the run of the assessment.</p>
     */
    inline Run& WithRulesPackages(const Aws::Vector<Aws::String>& value) { SetRulesPackages(value); return *this;}

    /**
     * <p>Rules packages selected for the run of the assessment.</p>
     */
    inline Run& WithRulesPackages(Aws::Vector<Aws::String>&& value) { SetRulesPackages(value); return *this;}

    /**
     * <p>Rules packages selected for the run of the assessment.</p>
     */
    inline Run& AddRulesPackages(const Aws::String& value) { m_rulesPackagesHasBeenSet = true; m_rulesPackages.push_back(value); return *this; }

    /**
     * <p>Rules packages selected for the run of the assessment.</p>
     */
    inline Run& AddRulesPackages(Aws::String&& value) { m_rulesPackagesHasBeenSet = true; m_rulesPackages.push_back(value); return *this; }

    /**
     * <p>Rules packages selected for the run of the assessment.</p>
     */
    inline Run& AddRulesPackages(const char* value) { m_rulesPackagesHasBeenSet = true; m_rulesPackages.push_back(value); return *this; }

    /**
     * <p>Run creation time that corresponds to the data collection completion time or
     * failure.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Run creation time that corresponds to the data collection completion time or
     * failure.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Run creation time that corresponds to the data collection completion time or
     * failure.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Run creation time that corresponds to the data collection completion time or
     * failure.</p>
     */
    inline Run& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Run creation time that corresponds to the data collection completion time or
     * failure.</p>
     */
    inline Run& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Run completion time that corresponds to the rules packages evaluation
     * completion time or failure.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>Run completion time that corresponds to the rules packages evaluation
     * completion time or failure.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>Run completion time that corresponds to the rules packages evaluation
     * completion time or failure.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>Run completion time that corresponds to the rules packages evaluation
     * completion time or failure.</p>
     */
    inline Run& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>Run completion time that corresponds to the rules packages evaluation
     * completion time or failure.</p>
     */
    inline Run& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(value); return *this;}

  private:
    Aws::String m_runArn;
    bool m_runArnHasBeenSet;
    Aws::String m_runName;
    bool m_runNameHasBeenSet;
    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet;
    Aws::String m_runState;
    bool m_runStateHasBeenSet;
    Aws::Vector<Aws::String> m_rulesPackages;
    bool m_rulesPackagesHasBeenSet;
    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
