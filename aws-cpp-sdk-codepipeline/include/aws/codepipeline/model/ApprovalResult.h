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
#include <aws/codepipeline/model/ApprovalStatus.h>
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
   * <p>Represents information about the result of an approval request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ApprovalResult">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ApprovalResult
  {
  public:
    ApprovalResult();
    ApprovalResult(Aws::Utils::Json::JsonView jsonValue);
    ApprovalResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The summary of the current status of the approval request.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }

    /**
     * <p>The summary of the current status of the approval request.</p>
     */
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }

    /**
     * <p>The summary of the current status of the approval request.</p>
     */
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }

    /**
     * <p>The summary of the current status of the approval request.</p>
     */
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }

    /**
     * <p>The summary of the current status of the approval request.</p>
     */
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }

    /**
     * <p>The summary of the current status of the approval request.</p>
     */
    inline ApprovalResult& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}

    /**
     * <p>The summary of the current status of the approval request.</p>
     */
    inline ApprovalResult& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}

    /**
     * <p>The summary of the current status of the approval request.</p>
     */
    inline ApprovalResult& WithSummary(const char* value) { SetSummary(value); return *this;}


    /**
     * <p>The response submitted by a reviewer assigned to an approval action
     * request.</p>
     */
    inline const ApprovalStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The response submitted by a reviewer assigned to an approval action
     * request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The response submitted by a reviewer assigned to an approval action
     * request.</p>
     */
    inline void SetStatus(const ApprovalStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The response submitted by a reviewer assigned to an approval action
     * request.</p>
     */
    inline void SetStatus(ApprovalStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The response submitted by a reviewer assigned to an approval action
     * request.</p>
     */
    inline ApprovalResult& WithStatus(const ApprovalStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The response submitted by a reviewer assigned to an approval action
     * request.</p>
     */
    inline ApprovalResult& WithStatus(ApprovalStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_summary;
    bool m_summaryHasBeenSet;

    ApprovalStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
