/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/StopAction.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class StopAssessmentRunRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API StopAssessmentRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopAssessmentRun"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the assessment run that you want to stop.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const { return m_assessmentRunArn; }
    inline bool AssessmentRunArnHasBeenSet() const { return m_assessmentRunArnHasBeenSet; }
    template<typename AssessmentRunArnT = Aws::String>
    void SetAssessmentRunArn(AssessmentRunArnT&& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = std::forward<AssessmentRunArnT>(value); }
    template<typename AssessmentRunArnT = Aws::String>
    StopAssessmentRunRequest& WithAssessmentRunArn(AssessmentRunArnT&& value) { SetAssessmentRunArn(std::forward<AssessmentRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An input option that can be set to either START_EVALUATION or
     * SKIP_EVALUATION. START_EVALUATION (the default value), stops the AWS agent from
     * collecting data and begins the results evaluation and the findings generation
     * process. SKIP_EVALUATION cancels the assessment run immediately, after which no
     * findings are generated.</p>
     */
    inline StopAction GetStopAction() const { return m_stopAction; }
    inline bool StopActionHasBeenSet() const { return m_stopActionHasBeenSet; }
    inline void SetStopAction(StopAction value) { m_stopActionHasBeenSet = true; m_stopAction = value; }
    inline StopAssessmentRunRequest& WithStopAction(StopAction value) { SetStopAction(value); return *this;}
    ///@}
  private:

    Aws::String m_assessmentRunArn;
    bool m_assessmentRunArnHasBeenSet = false;

    StopAction m_stopAction{StopAction::NOT_SET};
    bool m_stopActionHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
