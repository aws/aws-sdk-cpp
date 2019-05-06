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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API DeleteAssessmentTargetRequest : public InspectorRequest
  {
  public:
    DeleteAssessmentTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAssessmentTarget"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN that specifies the assessment target that you want to delete.</p>
     */
    inline const Aws::String& GetAssessmentTargetArn() const{ return m_assessmentTargetArn; }

    /**
     * <p>The ARN that specifies the assessment target that you want to delete.</p>
     */
    inline bool AssessmentTargetArnHasBeenSet() const { return m_assessmentTargetArnHasBeenSet; }

    /**
     * <p>The ARN that specifies the assessment target that you want to delete.</p>
     */
    inline void SetAssessmentTargetArn(const Aws::String& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = value; }

    /**
     * <p>The ARN that specifies the assessment target that you want to delete.</p>
     */
    inline void SetAssessmentTargetArn(Aws::String&& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = std::move(value); }

    /**
     * <p>The ARN that specifies the assessment target that you want to delete.</p>
     */
    inline void SetAssessmentTargetArn(const char* value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn.assign(value); }

    /**
     * <p>The ARN that specifies the assessment target that you want to delete.</p>
     */
    inline DeleteAssessmentTargetRequest& WithAssessmentTargetArn(const Aws::String& value) { SetAssessmentTargetArn(value); return *this;}

    /**
     * <p>The ARN that specifies the assessment target that you want to delete.</p>
     */
    inline DeleteAssessmentTargetRequest& WithAssessmentTargetArn(Aws::String&& value) { SetAssessmentTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the assessment target that you want to delete.</p>
     */
    inline DeleteAssessmentTargetRequest& WithAssessmentTargetArn(const char* value) { SetAssessmentTargetArn(value); return *this;}

  private:

    Aws::String m_assessmentTargetArn;
    bool m_assessmentTargetArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
