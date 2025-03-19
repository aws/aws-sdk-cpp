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
    AWS_INSPECTOR_API AssessmentTemplate() = default;
    AWS_INSPECTOR_API AssessmentTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the assessment template.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AssessmentTemplate& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the assessment template.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssessmentTemplate& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the assessment target that corresponds to this assessment
     * template.</p>
     */
    inline const Aws::String& GetAssessmentTargetArn() const { return m_assessmentTargetArn; }
    inline bool AssessmentTargetArnHasBeenSet() const { return m_assessmentTargetArnHasBeenSet; }
    template<typename AssessmentTargetArnT = Aws::String>
    void SetAssessmentTargetArn(AssessmentTargetArnT&& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = std::forward<AssessmentTargetArnT>(value); }
    template<typename AssessmentTargetArnT = Aws::String>
    AssessmentTemplate& WithAssessmentTargetArn(AssessmentTargetArnT&& value) { SetAssessmentTargetArn(std::forward<AssessmentTargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration in seconds specified for this assessment template. The default
     * value is 3600 seconds (one hour). The maximum value is 86400 seconds (one
     * day).</p>
     */
    inline int GetDurationInSeconds() const { return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline AssessmentTemplate& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules packages that are specified for this assessment template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const { return m_rulesPackageArns; }
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    void SetRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::forward<RulesPackageArnsT>(value); }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    AssessmentTemplate& WithRulesPackageArns(RulesPackageArnsT&& value) { SetRulesPackageArns(std::forward<RulesPackageArnsT>(value)); return *this;}
    template<typename RulesPackageArnsT = Aws::String>
    AssessmentTemplate& AddRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.emplace_back(std::forward<RulesPackageArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-defined attributes that are assigned to every generated finding from
     * the assessment run that uses this assessment template.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributesForFindings() const { return m_userAttributesForFindings; }
    inline bool UserAttributesForFindingsHasBeenSet() const { return m_userAttributesForFindingsHasBeenSet; }
    template<typename UserAttributesForFindingsT = Aws::Vector<Attribute>>
    void SetUserAttributesForFindings(UserAttributesForFindingsT&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = std::forward<UserAttributesForFindingsT>(value); }
    template<typename UserAttributesForFindingsT = Aws::Vector<Attribute>>
    AssessmentTemplate& WithUserAttributesForFindings(UserAttributesForFindingsT&& value) { SetUserAttributesForFindings(std::forward<UserAttributesForFindingsT>(value)); return *this;}
    template<typename UserAttributesForFindingsT = Attribute>
    AssessmentTemplate& AddUserAttributesForFindings(UserAttributesForFindingsT&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.emplace_back(std::forward<UserAttributesForFindingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the most recent assessment run associated
     * with this assessment template. This value exists only when the value of
     * assessmentRunCount is greaterpa than zero.</p>
     */
    inline const Aws::String& GetLastAssessmentRunArn() const { return m_lastAssessmentRunArn; }
    inline bool LastAssessmentRunArnHasBeenSet() const { return m_lastAssessmentRunArnHasBeenSet; }
    template<typename LastAssessmentRunArnT = Aws::String>
    void SetLastAssessmentRunArn(LastAssessmentRunArnT&& value) { m_lastAssessmentRunArnHasBeenSet = true; m_lastAssessmentRunArn = std::forward<LastAssessmentRunArnT>(value); }
    template<typename LastAssessmentRunArnT = Aws::String>
    AssessmentTemplate& WithLastAssessmentRunArn(LastAssessmentRunArnT&& value) { SetLastAssessmentRunArn(std::forward<LastAssessmentRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of existing assessment runs associated with this assessment
     * template. This value can be zero or a positive integer.</p>
     */
    inline int GetAssessmentRunCount() const { return m_assessmentRunCount; }
    inline bool AssessmentRunCountHasBeenSet() const { return m_assessmentRunCountHasBeenSet; }
    inline void SetAssessmentRunCount(int value) { m_assessmentRunCountHasBeenSet = true; m_assessmentRunCount = value; }
    inline AssessmentTemplate& WithAssessmentRunCount(int value) { SetAssessmentRunCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the assessment template is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AssessmentTemplate& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_assessmentTargetArn;
    bool m_assessmentTargetArnHasBeenSet = false;

    int m_durationInSeconds{0};
    bool m_durationInSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet = false;

    Aws::Vector<Attribute> m_userAttributesForFindings;
    bool m_userAttributesForFindingsHasBeenSet = false;

    Aws::String m_lastAssessmentRunArn;
    bool m_lastAssessmentRunArnHasBeenSet = false;

    int m_assessmentRunCount{0};
    bool m_assessmentRunCountHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
