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
  class AWS_INSPECTOR_API AttachAssessmentAndRulesPackageRequest : public InspectorRequest
  {
  public:
    AttachAssessmentAndRulesPackageRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN specifying the assessment to which you want to attach a rules
     * package.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }

    /**
     * <p>The ARN specifying the assessment to which you want to attach a rules
     * package.</p>
     */
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN specifying the assessment to which you want to attach a rules
     * package.</p>
     */
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN specifying the assessment to which you want to attach a rules
     * package.</p>
     */
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }

    /**
     * <p>The ARN specifying the assessment to which you want to attach a rules
     * package.</p>
     */
    inline AttachAssessmentAndRulesPackageRequest& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN specifying the assessment to which you want to attach a rules
     * package.</p>
     */
    inline AttachAssessmentAndRulesPackageRequest& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN specifying the assessment to which you want to attach a rules
     * package.</p>
     */
    inline AttachAssessmentAndRulesPackageRequest& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN specifying the rules package that you want to attach to the
     * assessment.</p>
     */
    inline const Aws::String& GetRulesPackageArn() const{ return m_rulesPackageArn; }

    /**
     * <p>The ARN specifying the rules package that you want to attach to the
     * assessment.</p>
     */
    inline void SetRulesPackageArn(const Aws::String& value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn = value; }

    /**
     * <p>The ARN specifying the rules package that you want to attach to the
     * assessment.</p>
     */
    inline void SetRulesPackageArn(Aws::String&& value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn = value; }

    /**
     * <p>The ARN specifying the rules package that you want to attach to the
     * assessment.</p>
     */
    inline void SetRulesPackageArn(const char* value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn.assign(value); }

    /**
     * <p>The ARN specifying the rules package that you want to attach to the
     * assessment.</p>
     */
    inline AttachAssessmentAndRulesPackageRequest& WithRulesPackageArn(const Aws::String& value) { SetRulesPackageArn(value); return *this;}

    /**
     * <p>The ARN specifying the rules package that you want to attach to the
     * assessment.</p>
     */
    inline AttachAssessmentAndRulesPackageRequest& WithRulesPackageArn(Aws::String&& value) { SetRulesPackageArn(value); return *this;}

    /**
     * <p>The ARN specifying the rules package that you want to attach to the
     * assessment.</p>
     */
    inline AttachAssessmentAndRulesPackageRequest& WithRulesPackageArn(const char* value) { SetRulesPackageArn(value); return *this;}

  private:
    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet;
    Aws::String m_rulesPackageArn;
    bool m_rulesPackageArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
