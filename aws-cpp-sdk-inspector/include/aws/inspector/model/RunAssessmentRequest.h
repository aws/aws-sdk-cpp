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
  class AWS_INSPECTOR_API RunAssessmentRequest : public InspectorRequest
  {
  public:
    RunAssessmentRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN of the assessment that you want to run.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }

    /**
     * <p>The ARN of the assessment that you want to run.</p>
     */
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN of the assessment that you want to run.</p>
     */
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN of the assessment that you want to run.</p>
     */
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }

    /**
     * <p>The ARN of the assessment that you want to run.</p>
     */
    inline RunAssessmentRequest& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN of the assessment that you want to run.</p>
     */
    inline RunAssessmentRequest& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN of the assessment that you want to run.</p>
     */
    inline RunAssessmentRequest& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>A name specifying the run of the assessment.</p>
     */
    inline const Aws::String& GetRunName() const{ return m_runName; }

    /**
     * <p>A name specifying the run of the assessment.</p>
     */
    inline void SetRunName(const Aws::String& value) { m_runNameHasBeenSet = true; m_runName = value; }

    /**
     * <p>A name specifying the run of the assessment.</p>
     */
    inline void SetRunName(Aws::String&& value) { m_runNameHasBeenSet = true; m_runName = value; }

    /**
     * <p>A name specifying the run of the assessment.</p>
     */
    inline void SetRunName(const char* value) { m_runNameHasBeenSet = true; m_runName.assign(value); }

    /**
     * <p>A name specifying the run of the assessment.</p>
     */
    inline RunAssessmentRequest& WithRunName(const Aws::String& value) { SetRunName(value); return *this;}

    /**
     * <p>A name specifying the run of the assessment.</p>
     */
    inline RunAssessmentRequest& WithRunName(Aws::String&& value) { SetRunName(value); return *this;}

    /**
     * <p>A name specifying the run of the assessment.</p>
     */
    inline RunAssessmentRequest& WithRunName(const char* value) { SetRunName(value); return *this;}

  private:
    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet;
    Aws::String m_runName;
    bool m_runNameHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
