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
    AWS_INSPECTOR_API StopAssessmentRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopAssessmentRun"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the assessment run that you want to stop.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const{ return m_assessmentRunArn; }

    /**
     * <p>The ARN of the assessment run that you want to stop.</p>
     */
    inline bool AssessmentRunArnHasBeenSet() const { return m_assessmentRunArnHasBeenSet; }

    /**
     * <p>The ARN of the assessment run that you want to stop.</p>
     */
    inline void SetAssessmentRunArn(const Aws::String& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = value; }

    /**
     * <p>The ARN of the assessment run that you want to stop.</p>
     */
    inline void SetAssessmentRunArn(Aws::String&& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = std::move(value); }

    /**
     * <p>The ARN of the assessment run that you want to stop.</p>
     */
    inline void SetAssessmentRunArn(const char* value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn.assign(value); }

    /**
     * <p>The ARN of the assessment run that you want to stop.</p>
     */
    inline StopAssessmentRunRequest& WithAssessmentRunArn(const Aws::String& value) { SetAssessmentRunArn(value); return *this;}

    /**
     * <p>The ARN of the assessment run that you want to stop.</p>
     */
    inline StopAssessmentRunRequest& WithAssessmentRunArn(Aws::String&& value) { SetAssessmentRunArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment run that you want to stop.</p>
     */
    inline StopAssessmentRunRequest& WithAssessmentRunArn(const char* value) { SetAssessmentRunArn(value); return *this;}


    /**
     * <p>An input option that can be set to either START_EVALUATION or
     * SKIP_EVALUATION. START_EVALUATION (the default value), stops the AWS agent from
     * collecting data and begins the results evaluation and the findings generation
     * process. SKIP_EVALUATION cancels the assessment run immediately, after which no
     * findings are generated.</p>
     */
    inline const StopAction& GetStopAction() const{ return m_stopAction; }

    /**
     * <p>An input option that can be set to either START_EVALUATION or
     * SKIP_EVALUATION. START_EVALUATION (the default value), stops the AWS agent from
     * collecting data and begins the results evaluation and the findings generation
     * process. SKIP_EVALUATION cancels the assessment run immediately, after which no
     * findings are generated.</p>
     */
    inline bool StopActionHasBeenSet() const { return m_stopActionHasBeenSet; }

    /**
     * <p>An input option that can be set to either START_EVALUATION or
     * SKIP_EVALUATION. START_EVALUATION (the default value), stops the AWS agent from
     * collecting data and begins the results evaluation and the findings generation
     * process. SKIP_EVALUATION cancels the assessment run immediately, after which no
     * findings are generated.</p>
     */
    inline void SetStopAction(const StopAction& value) { m_stopActionHasBeenSet = true; m_stopAction = value; }

    /**
     * <p>An input option that can be set to either START_EVALUATION or
     * SKIP_EVALUATION. START_EVALUATION (the default value), stops the AWS agent from
     * collecting data and begins the results evaluation and the findings generation
     * process. SKIP_EVALUATION cancels the assessment run immediately, after which no
     * findings are generated.</p>
     */
    inline void SetStopAction(StopAction&& value) { m_stopActionHasBeenSet = true; m_stopAction = std::move(value); }

    /**
     * <p>An input option that can be set to either START_EVALUATION or
     * SKIP_EVALUATION. START_EVALUATION (the default value), stops the AWS agent from
     * collecting data and begins the results evaluation and the findings generation
     * process. SKIP_EVALUATION cancels the assessment run immediately, after which no
     * findings are generated.</p>
     */
    inline StopAssessmentRunRequest& WithStopAction(const StopAction& value) { SetStopAction(value); return *this;}

    /**
     * <p>An input option that can be set to either START_EVALUATION or
     * SKIP_EVALUATION. START_EVALUATION (the default value), stops the AWS agent from
     * collecting data and begins the results evaluation and the findings generation
     * process. SKIP_EVALUATION cancels the assessment run immediately, after which no
     * findings are generated.</p>
     */
    inline StopAssessmentRunRequest& WithStopAction(StopAction&& value) { SetStopAction(std::move(value)); return *this;}

  private:

    Aws::String m_assessmentRunArn;
    bool m_assessmentRunArnHasBeenSet = false;

    StopAction m_stopAction;
    bool m_stopActionHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
