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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector/model/Attribute.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about an Amazon Inspector assessment template. This data
   * type is used as the response element in the <a>DescribeAssessmentTemplates</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AssessmentTemplate">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API AssessmentTemplate
  {
  public:
    AssessmentTemplate();
    AssessmentTemplate(Aws::Utils::Json::JsonView jsonValue);
    AssessmentTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the assessment template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the assessment template.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the assessment template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the assessment template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the assessment template.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the assessment template.</p>
     */
    inline AssessmentTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the assessment template.</p>
     */
    inline AssessmentTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment template.</p>
     */
    inline AssessmentTemplate& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the assessment template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the assessment template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the assessment template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the assessment template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the assessment template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the assessment template.</p>
     */
    inline AssessmentTemplate& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the assessment template.</p>
     */
    inline AssessmentTemplate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the assessment template.</p>
     */
    inline AssessmentTemplate& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the assessment target that corresponds to this assessment
     * template.</p>
     */
    inline const Aws::String& GetAssessmentTargetArn() const{ return m_assessmentTargetArn; }

    /**
     * <p>The ARN of the assessment target that corresponds to this assessment
     * template.</p>
     */
    inline bool AssessmentTargetArnHasBeenSet() const { return m_assessmentTargetArnHasBeenSet; }

    /**
     * <p>The ARN of the assessment target that corresponds to this assessment
     * template.</p>
     */
    inline void SetAssessmentTargetArn(const Aws::String& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = value; }

    /**
     * <p>The ARN of the assessment target that corresponds to this assessment
     * template.</p>
     */
    inline void SetAssessmentTargetArn(Aws::String&& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = std::move(value); }

    /**
     * <p>The ARN of the assessment target that corresponds to this assessment
     * template.</p>
     */
    inline void SetAssessmentTargetArn(const char* value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn.assign(value); }

    /**
     * <p>The ARN of the assessment target that corresponds to this assessment
     * template.</p>
     */
    inline AssessmentTemplate& WithAssessmentTargetArn(const Aws::String& value) { SetAssessmentTargetArn(value); return *this;}

    /**
     * <p>The ARN of the assessment target that corresponds to this assessment
     * template.</p>
     */
    inline AssessmentTemplate& WithAssessmentTargetArn(Aws::String&& value) { SetAssessmentTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment target that corresponds to this assessment
     * template.</p>
     */
    inline AssessmentTemplate& WithAssessmentTargetArn(const char* value) { SetAssessmentTargetArn(value); return *this;}


    /**
     * <p>The duration in seconds specified for this assessment template. The default
     * value is 3600 seconds (one hour). The maximum value is 86400 seconds (one
     * day).</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The duration in seconds specified for this assessment template. The default
     * value is 3600 seconds (one hour). The maximum value is 86400 seconds (one
     * day).</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>The duration in seconds specified for this assessment template. The default
     * value is 3600 seconds (one hour). The maximum value is 86400 seconds (one
     * day).</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>The duration in seconds specified for this assessment template. The default
     * value is 3600 seconds (one hour). The maximum value is 86400 seconds (one
     * day).</p>
     */
    inline AssessmentTemplate& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}


    /**
     * <p>The rules packages that are specified for this assessment template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const{ return m_rulesPackageArns; }

    /**
     * <p>The rules packages that are specified for this assessment template.</p>
     */
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }

    /**
     * <p>The rules packages that are specified for this assessment template.</p>
     */
    inline void SetRulesPackageArns(const Aws::Vector<Aws::String>& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = value; }

    /**
     * <p>The rules packages that are specified for this assessment template.</p>
     */
    inline void SetRulesPackageArns(Aws::Vector<Aws::String>&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::move(value); }

    /**
     * <p>The rules packages that are specified for this assessment template.</p>
     */
    inline AssessmentTemplate& WithRulesPackageArns(const Aws::Vector<Aws::String>& value) { SetRulesPackageArns(value); return *this;}

    /**
     * <p>The rules packages that are specified for this assessment template.</p>
     */
    inline AssessmentTemplate& WithRulesPackageArns(Aws::Vector<Aws::String>&& value) { SetRulesPackageArns(std::move(value)); return *this;}

    /**
     * <p>The rules packages that are specified for this assessment template.</p>
     */
    inline AssessmentTemplate& AddRulesPackageArns(const Aws::String& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }

    /**
     * <p>The rules packages that are specified for this assessment template.</p>
     */
    inline AssessmentTemplate& AddRulesPackageArns(Aws::String&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The rules packages that are specified for this assessment template.</p>
     */
    inline AssessmentTemplate& AddRulesPackageArns(const char* value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }


    /**
     * <p>The user-defined attributes that are assigned to every generated finding from
     * the assessment run that uses this assessment template.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributesForFindings() const{ return m_userAttributesForFindings; }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding from
     * the assessment run that uses this assessment template.</p>
     */
    inline bool UserAttributesForFindingsHasBeenSet() const { return m_userAttributesForFindingsHasBeenSet; }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding from
     * the assessment run that uses this assessment template.</p>
     */
    inline void SetUserAttributesForFindings(const Aws::Vector<Attribute>& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = value; }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding from
     * the assessment run that uses this assessment template.</p>
     */
    inline void SetUserAttributesForFindings(Aws::Vector<Attribute>&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = std::move(value); }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding from
     * the assessment run that uses this assessment template.</p>
     */
    inline AssessmentTemplate& WithUserAttributesForFindings(const Aws::Vector<Attribute>& value) { SetUserAttributesForFindings(value); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to every generated finding from
     * the assessment run that uses this assessment template.</p>
     */
    inline AssessmentTemplate& WithUserAttributesForFindings(Aws::Vector<Attribute>&& value) { SetUserAttributesForFindings(std::move(value)); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to every generated finding from
     * the assessment run that uses this assessment template.</p>
     */
    inline AssessmentTemplate& AddUserAttributesForFindings(const Attribute& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(value); return *this; }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding from
     * the assessment run that uses this assessment template.</p>
     */
    inline AssessmentTemplate& AddUserAttributesForFindings(Attribute&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the most recent assessment run associated
     * with this assessment template. This value exists only when the value of
     * assessmentRunCount is greaterpa than zero.</p>
     */
    inline const Aws::String& GetLastAssessmentRunArn() const{ return m_lastAssessmentRunArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the most recent assessment run associated
     * with this assessment template. This value exists only when the value of
     * assessmentRunCount is greaterpa than zero.</p>
     */
    inline bool LastAssessmentRunArnHasBeenSet() const { return m_lastAssessmentRunArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the most recent assessment run associated
     * with this assessment template. This value exists only when the value of
     * assessmentRunCount is greaterpa than zero.</p>
     */
    inline void SetLastAssessmentRunArn(const Aws::String& value) { m_lastAssessmentRunArnHasBeenSet = true; m_lastAssessmentRunArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the most recent assessment run associated
     * with this assessment template. This value exists only when the value of
     * assessmentRunCount is greaterpa than zero.</p>
     */
    inline void SetLastAssessmentRunArn(Aws::String&& value) { m_lastAssessmentRunArnHasBeenSet = true; m_lastAssessmentRunArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the most recent assessment run associated
     * with this assessment template. This value exists only when the value of
     * assessmentRunCount is greaterpa than zero.</p>
     */
    inline void SetLastAssessmentRunArn(const char* value) { m_lastAssessmentRunArnHasBeenSet = true; m_lastAssessmentRunArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the most recent assessment run associated
     * with this assessment template. This value exists only when the value of
     * assessmentRunCount is greaterpa than zero.</p>
     */
    inline AssessmentTemplate& WithLastAssessmentRunArn(const Aws::String& value) { SetLastAssessmentRunArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the most recent assessment run associated
     * with this assessment template. This value exists only when the value of
     * assessmentRunCount is greaterpa than zero.</p>
     */
    inline AssessmentTemplate& WithLastAssessmentRunArn(Aws::String&& value) { SetLastAssessmentRunArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the most recent assessment run associated
     * with this assessment template. This value exists only when the value of
     * assessmentRunCount is greaterpa than zero.</p>
     */
    inline AssessmentTemplate& WithLastAssessmentRunArn(const char* value) { SetLastAssessmentRunArn(value); return *this;}


    /**
     * <p>The number of existing assessment runs associated with this assessment
     * template. This value can be zero or a positive integer.</p>
     */
    inline int GetAssessmentRunCount() const{ return m_assessmentRunCount; }

    /**
     * <p>The number of existing assessment runs associated with this assessment
     * template. This value can be zero or a positive integer.</p>
     */
    inline bool AssessmentRunCountHasBeenSet() const { return m_assessmentRunCountHasBeenSet; }

    /**
     * <p>The number of existing assessment runs associated with this assessment
     * template. This value can be zero or a positive integer.</p>
     */
    inline void SetAssessmentRunCount(int value) { m_assessmentRunCountHasBeenSet = true; m_assessmentRunCount = value; }

    /**
     * <p>The number of existing assessment runs associated with this assessment
     * template. This value can be zero or a positive integer.</p>
     */
    inline AssessmentTemplate& WithAssessmentRunCount(int value) { SetAssessmentRunCount(value); return *this;}


    /**
     * <p>The time at which the assessment template is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the assessment template is created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the assessment template is created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the assessment template is created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the assessment template is created.</p>
     */
    inline AssessmentTemplate& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the assessment template is created.</p>
     */
    inline AssessmentTemplate& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_assessmentTargetArn;
    bool m_assessmentTargetArnHasBeenSet;

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet;

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet;

    Aws::Vector<Attribute> m_userAttributesForFindings;
    bool m_userAttributesForFindingsHasBeenSet;

    Aws::String m_lastAssessmentRunArn;
    bool m_lastAssessmentRunArnHasBeenSet;

    int m_assessmentRunCount;
    bool m_assessmentRunCountHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
