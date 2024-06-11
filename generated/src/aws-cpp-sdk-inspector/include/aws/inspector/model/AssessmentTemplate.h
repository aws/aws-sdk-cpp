/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AssessmentTemplate
  {
  public:
    AWS_INSPECTOR_API AssessmentTemplate();
    AWS_INSPECTOR_API AssessmentTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the assessment template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AssessmentTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AssessmentTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AssessmentTemplate& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the assessment template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssessmentTemplate& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssessmentTemplate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssessmentTemplate& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the assessment target that corresponds to this assessment
     * template.</p>
     */
    inline const Aws::String& GetAssessmentTargetArn() const{ return m_assessmentTargetArn; }
    inline bool AssessmentTargetArnHasBeenSet() const { return m_assessmentTargetArnHasBeenSet; }
    inline void SetAssessmentTargetArn(const Aws::String& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = value; }
    inline void SetAssessmentTargetArn(Aws::String&& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = std::move(value); }
    inline void SetAssessmentTargetArn(const char* value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn.assign(value); }
    inline AssessmentTemplate& WithAssessmentTargetArn(const Aws::String& value) { SetAssessmentTargetArn(value); return *this;}
    inline AssessmentTemplate& WithAssessmentTargetArn(Aws::String&& value) { SetAssessmentTargetArn(std::move(value)); return *this;}
    inline AssessmentTemplate& WithAssessmentTargetArn(const char* value) { SetAssessmentTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration in seconds specified for this assessment template. The default
     * value is 3600 seconds (one hour). The maximum value is 86400 seconds (one
     * day).</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline AssessmentTemplate& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules packages that are specified for this assessment template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const{ return m_rulesPackageArns; }
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }
    inline void SetRulesPackageArns(const Aws::Vector<Aws::String>& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = value; }
    inline void SetRulesPackageArns(Aws::Vector<Aws::String>&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::move(value); }
    inline AssessmentTemplate& WithRulesPackageArns(const Aws::Vector<Aws::String>& value) { SetRulesPackageArns(value); return *this;}
    inline AssessmentTemplate& WithRulesPackageArns(Aws::Vector<Aws::String>&& value) { SetRulesPackageArns(std::move(value)); return *this;}
    inline AssessmentTemplate& AddRulesPackageArns(const Aws::String& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }
    inline AssessmentTemplate& AddRulesPackageArns(Aws::String&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(std::move(value)); return *this; }
    inline AssessmentTemplate& AddRulesPackageArns(const char* value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-defined attributes that are assigned to every generated finding from
     * the assessment run that uses this assessment template.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributesForFindings() const{ return m_userAttributesForFindings; }
    inline bool UserAttributesForFindingsHasBeenSet() const { return m_userAttributesForFindingsHasBeenSet; }
    inline void SetUserAttributesForFindings(const Aws::Vector<Attribute>& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = value; }
    inline void SetUserAttributesForFindings(Aws::Vector<Attribute>&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = std::move(value); }
    inline AssessmentTemplate& WithUserAttributesForFindings(const Aws::Vector<Attribute>& value) { SetUserAttributesForFindings(value); return *this;}
    inline AssessmentTemplate& WithUserAttributesForFindings(Aws::Vector<Attribute>&& value) { SetUserAttributesForFindings(std::move(value)); return *this;}
    inline AssessmentTemplate& AddUserAttributesForFindings(const Attribute& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(value); return *this; }
    inline AssessmentTemplate& AddUserAttributesForFindings(Attribute&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the most recent assessment run associated
     * with this assessment template. This value exists only when the value of
     * assessmentRunCount is greaterpa than zero.</p>
     */
    inline const Aws::String& GetLastAssessmentRunArn() const{ return m_lastAssessmentRunArn; }
    inline bool LastAssessmentRunArnHasBeenSet() const { return m_lastAssessmentRunArnHasBeenSet; }
    inline void SetLastAssessmentRunArn(const Aws::String& value) { m_lastAssessmentRunArnHasBeenSet = true; m_lastAssessmentRunArn = value; }
    inline void SetLastAssessmentRunArn(Aws::String&& value) { m_lastAssessmentRunArnHasBeenSet = true; m_lastAssessmentRunArn = std::move(value); }
    inline void SetLastAssessmentRunArn(const char* value) { m_lastAssessmentRunArnHasBeenSet = true; m_lastAssessmentRunArn.assign(value); }
    inline AssessmentTemplate& WithLastAssessmentRunArn(const Aws::String& value) { SetLastAssessmentRunArn(value); return *this;}
    inline AssessmentTemplate& WithLastAssessmentRunArn(Aws::String&& value) { SetLastAssessmentRunArn(std::move(value)); return *this;}
    inline AssessmentTemplate& WithLastAssessmentRunArn(const char* value) { SetLastAssessmentRunArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of existing assessment runs associated with this assessment
     * template. This value can be zero or a positive integer.</p>
     */
    inline int GetAssessmentRunCount() const{ return m_assessmentRunCount; }
    inline bool AssessmentRunCountHasBeenSet() const { return m_assessmentRunCountHasBeenSet; }
    inline void SetAssessmentRunCount(int value) { m_assessmentRunCountHasBeenSet = true; m_assessmentRunCount = value; }
    inline AssessmentTemplate& WithAssessmentRunCount(int value) { SetAssessmentRunCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the assessment template is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline AssessmentTemplate& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline AssessmentTemplate& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_assessmentTargetArn;
    bool m_assessmentTargetArnHasBeenSet = false;

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet = false;

    Aws::Vector<Attribute> m_userAttributesForFindings;
    bool m_userAttributesForFindingsHasBeenSet = false;

    Aws::String m_lastAssessmentRunArn;
    bool m_lastAssessmentRunArnHasBeenSet = false;

    int m_assessmentRunCount;
    bool m_assessmentRunCountHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
