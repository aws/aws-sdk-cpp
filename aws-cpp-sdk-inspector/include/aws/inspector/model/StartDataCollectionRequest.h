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
  class AWS_INSPECTOR_API StartDataCollectionRequest : public InspectorRequest
  {
  public:
    StartDataCollectionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN of the assessment for which you want to start the data collection
     * process.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }

    /**
     * <p>The ARN of the assessment for which you want to start the data collection
     * process.</p>
     */
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN of the assessment for which you want to start the data collection
     * process.</p>
     */
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN of the assessment for which you want to start the data collection
     * process.</p>
     */
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }

    /**
     * <p>The ARN of the assessment for which you want to start the data collection
     * process.</p>
     */
    inline StartDataCollectionRequest& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN of the assessment for which you want to start the data collection
     * process.</p>
     */
    inline StartDataCollectionRequest& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN of the assessment for which you want to start the data collection
     * process.</p>
     */
    inline StartDataCollectionRequest& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}

  private:
    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
