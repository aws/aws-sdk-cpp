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
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API UpdateAssessmentRequest : public InspectorRequest
  {
  public:
    UpdateAssessmentRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Asessment ARN that you want to update.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }

    /**
     * <p>Asessment ARN that you want to update.</p>
     */
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>Asessment ARN that you want to update.</p>
     */
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>Asessment ARN that you want to update.</p>
     */
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }

    /**
     * <p>Asessment ARN that you want to update.</p>
     */
    inline UpdateAssessmentRequest& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>Asessment ARN that you want to update.</p>
     */
    inline UpdateAssessmentRequest& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>Asessment ARN that you want to update.</p>
     */
    inline UpdateAssessmentRequest& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>Assessment name that you want to update.</p>
     */
    inline const Aws::String& GetAssessmentName() const{ return m_assessmentName; }

    /**
     * <p>Assessment name that you want to update.</p>
     */
    inline void SetAssessmentName(const Aws::String& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }

    /**
     * <p>Assessment name that you want to update.</p>
     */
    inline void SetAssessmentName(Aws::String&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }

    /**
     * <p>Assessment name that you want to update.</p>
     */
    inline void SetAssessmentName(const char* value) { m_assessmentNameHasBeenSet = true; m_assessmentName.assign(value); }

    /**
     * <p>Assessment name that you want to update.</p>
     */
    inline UpdateAssessmentRequest& WithAssessmentName(const Aws::String& value) { SetAssessmentName(value); return *this;}

    /**
     * <p>Assessment name that you want to update.</p>
     */
    inline UpdateAssessmentRequest& WithAssessmentName(Aws::String&& value) { SetAssessmentName(value); return *this;}

    /**
     * <p>Assessment name that you want to update.</p>
     */
    inline UpdateAssessmentRequest& WithAssessmentName(const char* value) { SetAssessmentName(value); return *this;}

    /**
     * <p>Assessment duration in seconds that you want to update. The default value is
     * 3600 seconds (one hour). The maximum value is 86400 seconds (one day).</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>Assessment duration in seconds that you want to update. The default value is
     * 3600 seconds (one hour). The maximum value is 86400 seconds (one day).</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>Assessment duration in seconds that you want to update. The default value is
     * 3600 seconds (one hour). The maximum value is 86400 seconds (one day).</p>
     */
    inline UpdateAssessmentRequest& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}

  private:
    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet;
    Aws::String m_assessmentName;
    bool m_assessmentNameHasBeenSet;
    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
