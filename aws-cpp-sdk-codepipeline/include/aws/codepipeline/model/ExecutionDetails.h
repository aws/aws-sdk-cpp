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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The details of the actions taken and results produced on an artifact as it
   * passes through stages in the pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ExecutionDetails">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ExecutionDetails
  {
  public:
    ExecutionDetails();
    ExecutionDetails(Aws::Utils::Json::JsonView jsonValue);
    ExecutionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The summary of the current status of the actions.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }

    /**
     * <p>The summary of the current status of the actions.</p>
     */
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }

    /**
     * <p>The summary of the current status of the actions.</p>
     */
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }

    /**
     * <p>The summary of the current status of the actions.</p>
     */
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }

    /**
     * <p>The summary of the current status of the actions.</p>
     */
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }

    /**
     * <p>The summary of the current status of the actions.</p>
     */
    inline ExecutionDetails& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}

    /**
     * <p>The summary of the current status of the actions.</p>
     */
    inline ExecutionDetails& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}

    /**
     * <p>The summary of the current status of the actions.</p>
     */
    inline ExecutionDetails& WithSummary(const char* value) { SetSummary(value); return *this;}


    /**
     * <p>The system-generated unique ID of this action used to identify this job
     * worker in any external systems, such as AWS CodeDeploy.</p>
     */
    inline const Aws::String& GetExternalExecutionId() const{ return m_externalExecutionId; }

    /**
     * <p>The system-generated unique ID of this action used to identify this job
     * worker in any external systems, such as AWS CodeDeploy.</p>
     */
    inline bool ExternalExecutionIdHasBeenSet() const { return m_externalExecutionIdHasBeenSet; }

    /**
     * <p>The system-generated unique ID of this action used to identify this job
     * worker in any external systems, such as AWS CodeDeploy.</p>
     */
    inline void SetExternalExecutionId(const Aws::String& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = value; }

    /**
     * <p>The system-generated unique ID of this action used to identify this job
     * worker in any external systems, such as AWS CodeDeploy.</p>
     */
    inline void SetExternalExecutionId(Aws::String&& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = std::move(value); }

    /**
     * <p>The system-generated unique ID of this action used to identify this job
     * worker in any external systems, such as AWS CodeDeploy.</p>
     */
    inline void SetExternalExecutionId(const char* value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId.assign(value); }

    /**
     * <p>The system-generated unique ID of this action used to identify this job
     * worker in any external systems, such as AWS CodeDeploy.</p>
     */
    inline ExecutionDetails& WithExternalExecutionId(const Aws::String& value) { SetExternalExecutionId(value); return *this;}

    /**
     * <p>The system-generated unique ID of this action used to identify this job
     * worker in any external systems, such as AWS CodeDeploy.</p>
     */
    inline ExecutionDetails& WithExternalExecutionId(Aws::String&& value) { SetExternalExecutionId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of this action used to identify this job
     * worker in any external systems, such as AWS CodeDeploy.</p>
     */
    inline ExecutionDetails& WithExternalExecutionId(const char* value) { SetExternalExecutionId(value); return *this;}


    /**
     * <p>The percentage of work completed on the action, represented on a scale of
     * zero to one hundred percent.</p>
     */
    inline int GetPercentComplete() const{ return m_percentComplete; }

    /**
     * <p>The percentage of work completed on the action, represented on a scale of
     * zero to one hundred percent.</p>
     */
    inline bool PercentCompleteHasBeenSet() const { return m_percentCompleteHasBeenSet; }

    /**
     * <p>The percentage of work completed on the action, represented on a scale of
     * zero to one hundred percent.</p>
     */
    inline void SetPercentComplete(int value) { m_percentCompleteHasBeenSet = true; m_percentComplete = value; }

    /**
     * <p>The percentage of work completed on the action, represented on a scale of
     * zero to one hundred percent.</p>
     */
    inline ExecutionDetails& WithPercentComplete(int value) { SetPercentComplete(value); return *this;}

  private:

    Aws::String m_summary;
    bool m_summaryHasBeenSet;

    Aws::String m_externalExecutionId;
    bool m_externalExecutionIdHasBeenSet;

    int m_percentComplete;
    bool m_percentCompleteHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
