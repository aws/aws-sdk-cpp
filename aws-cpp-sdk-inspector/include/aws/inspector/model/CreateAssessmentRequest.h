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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/Attribute.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API CreateAssessmentRequest : public InspectorRequest
  {
  public:
    CreateAssessmentRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN specifying the application for which you want to create an
     * assessment.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The ARN specifying the application for which you want to create an
     * assessment.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The ARN specifying the application for which you want to create an
     * assessment.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The ARN specifying the application for which you want to create an
     * assessment.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>The ARN specifying the application for which you want to create an
     * assessment.</p>
     */
    inline CreateAssessmentRequest& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The ARN specifying the application for which you want to create an
     * assessment.</p>
     */
    inline CreateAssessmentRequest& WithApplicationArn(Aws::String&& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The ARN specifying the application for which you want to create an
     * assessment.</p>
     */
    inline CreateAssessmentRequest& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The user-defined name identifying the assessment that you want to create. You
     * can create several assessments for an application. The names of the assessments
     * corresponding to a particular application must be unique.</p>
     */
    inline const Aws::String& GetAssessmentName() const{ return m_assessmentName; }

    /**
     * <p>The user-defined name identifying the assessment that you want to create. You
     * can create several assessments for an application. The names of the assessments
     * corresponding to a particular application must be unique.</p>
     */
    inline void SetAssessmentName(const Aws::String& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }

    /**
     * <p>The user-defined name identifying the assessment that you want to create. You
     * can create several assessments for an application. The names of the assessments
     * corresponding to a particular application must be unique.</p>
     */
    inline void SetAssessmentName(Aws::String&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }

    /**
     * <p>The user-defined name identifying the assessment that you want to create. You
     * can create several assessments for an application. The names of the assessments
     * corresponding to a particular application must be unique.</p>
     */
    inline void SetAssessmentName(const char* value) { m_assessmentNameHasBeenSet = true; m_assessmentName.assign(value); }

    /**
     * <p>The user-defined name identifying the assessment that you want to create. You
     * can create several assessments for an application. The names of the assessments
     * corresponding to a particular application must be unique.</p>
     */
    inline CreateAssessmentRequest& WithAssessmentName(const Aws::String& value) { SetAssessmentName(value); return *this;}

    /**
     * <p>The user-defined name identifying the assessment that you want to create. You
     * can create several assessments for an application. The names of the assessments
     * corresponding to a particular application must be unique.</p>
     */
    inline CreateAssessmentRequest& WithAssessmentName(Aws::String&& value) { SetAssessmentName(value); return *this;}

    /**
     * <p>The user-defined name identifying the assessment that you want to create. You
     * can create several assessments for an application. The names of the assessments
     * corresponding to a particular application must be unique.</p>
     */
    inline CreateAssessmentRequest& WithAssessmentName(const char* value) { SetAssessmentName(value); return *this;}

    /**
     * <p>The duration of the assessment in seconds. The default value is 3600 seconds
     * (one hour). The maximum value is 86400 seconds (one day).</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The duration of the assessment in seconds. The default value is 3600 seconds
     * (one hour). The maximum value is 86400 seconds (one day).</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>The duration of the assessment in seconds. The default value is 3600 seconds
     * (one hour). The maximum value is 86400 seconds (one day).</p>
     */
    inline CreateAssessmentRequest& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to every finding generated by
     * running this assessment.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributesForFindings() const{ return m_userAttributesForFindings; }

    /**
     * <p>The user-defined attributes that are assigned to every finding generated by
     * running this assessment.</p>
     */
    inline void SetUserAttributesForFindings(const Aws::Vector<Attribute>& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = value; }

    /**
     * <p>The user-defined attributes that are assigned to every finding generated by
     * running this assessment.</p>
     */
    inline void SetUserAttributesForFindings(Aws::Vector<Attribute>&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = value; }

    /**
     * <p>The user-defined attributes that are assigned to every finding generated by
     * running this assessment.</p>
     */
    inline CreateAssessmentRequest& WithUserAttributesForFindings(const Aws::Vector<Attribute>& value) { SetUserAttributesForFindings(value); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to every finding generated by
     * running this assessment.</p>
     */
    inline CreateAssessmentRequest& WithUserAttributesForFindings(Aws::Vector<Attribute>&& value) { SetUserAttributesForFindings(value); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to every finding generated by
     * running this assessment.</p>
     */
    inline CreateAssessmentRequest& AddUserAttributesForFindings(const Attribute& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(value); return *this; }

    /**
     * <p>The user-defined attributes that are assigned to every finding generated by
     * running this assessment.</p>
     */
    inline CreateAssessmentRequest& AddUserAttributesForFindings(Attribute&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(value); return *this; }

  private:
    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet;
    Aws::String m_assessmentName;
    bool m_assessmentNameHasBeenSet;
    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet;
    Aws::Vector<Attribute> m_userAttributesForFindings;
    bool m_userAttributesForFindingsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
