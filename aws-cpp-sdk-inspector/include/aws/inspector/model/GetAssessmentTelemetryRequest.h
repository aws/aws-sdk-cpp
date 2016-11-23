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
  class AWS_INSPECTOR_API GetAssessmentTelemetryRequest : public InspectorRequest
  {
  public:
    GetAssessmentTelemetryRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN specifying the assessment the telemetry of which you want to
     * obtain.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }

    /**
     * <p>The ARN specifying the assessment the telemetry of which you want to
     * obtain.</p>
     */
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN specifying the assessment the telemetry of which you want to
     * obtain.</p>
     */
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN specifying the assessment the telemetry of which you want to
     * obtain.</p>
     */
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }

    /**
     * <p>The ARN specifying the assessment the telemetry of which you want to
     * obtain.</p>
     */
    inline GetAssessmentTelemetryRequest& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN specifying the assessment the telemetry of which you want to
     * obtain.</p>
     */
    inline GetAssessmentTelemetryRequest& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN specifying the assessment the telemetry of which you want to
     * obtain.</p>
     */
    inline GetAssessmentTelemetryRequest& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}

  private:
    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
