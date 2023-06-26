/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/Attribute.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class CreateAssessmentTemplateRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API CreateAssessmentTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssessmentTemplate"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN that specifies the assessment target for which you want to create the
     * assessment template.</p>
     */
    inline const Aws::String& GetAssessmentTargetArn() const{ return m_assessmentTargetArn; }

    /**
     * <p>The ARN that specifies the assessment target for which you want to create the
     * assessment template.</p>
     */
    inline bool AssessmentTargetArnHasBeenSet() const { return m_assessmentTargetArnHasBeenSet; }

    /**
     * <p>The ARN that specifies the assessment target for which you want to create the
     * assessment template.</p>
     */
    inline void SetAssessmentTargetArn(const Aws::String& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = value; }

    /**
     * <p>The ARN that specifies the assessment target for which you want to create the
     * assessment template.</p>
     */
    inline void SetAssessmentTargetArn(Aws::String&& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = std::move(value); }

    /**
     * <p>The ARN that specifies the assessment target for which you want to create the
     * assessment template.</p>
     */
    inline void SetAssessmentTargetArn(const char* value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn.assign(value); }

    /**
     * <p>The ARN that specifies the assessment target for which you want to create the
     * assessment template.</p>
     */
    inline CreateAssessmentTemplateRequest& WithAssessmentTargetArn(const Aws::String& value) { SetAssessmentTargetArn(value); return *this;}

    /**
     * <p>The ARN that specifies the assessment target for which you want to create the
     * assessment template.</p>
     */
    inline CreateAssessmentTemplateRequest& WithAssessmentTargetArn(Aws::String&& value) { SetAssessmentTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the assessment target for which you want to create the
     * assessment template.</p>
     */
    inline CreateAssessmentTemplateRequest& WithAssessmentTargetArn(const char* value) { SetAssessmentTargetArn(value); return *this;}


    /**
     * <p>The user-defined name that identifies the assessment template that you want
     * to create. You can create several assessment templates for an assessment target.
     * The names of the assessment templates that correspond to a particular assessment
     * target must be unique.</p>
     */
    inline const Aws::String& GetAssessmentTemplateName() const{ return m_assessmentTemplateName; }

    /**
     * <p>The user-defined name that identifies the assessment template that you want
     * to create. You can create several assessment templates for an assessment target.
     * The names of the assessment templates that correspond to a particular assessment
     * target must be unique.</p>
     */
    inline bool AssessmentTemplateNameHasBeenSet() const { return m_assessmentTemplateNameHasBeenSet; }

    /**
     * <p>The user-defined name that identifies the assessment template that you want
     * to create. You can create several assessment templates for an assessment target.
     * The names of the assessment templates that correspond to a particular assessment
     * target must be unique.</p>
     */
    inline void SetAssessmentTemplateName(const Aws::String& value) { m_assessmentTemplateNameHasBeenSet = true; m_assessmentTemplateName = value; }

    /**
     * <p>The user-defined name that identifies the assessment template that you want
     * to create. You can create several assessment templates for an assessment target.
     * The names of the assessment templates that correspond to a particular assessment
     * target must be unique.</p>
     */
    inline void SetAssessmentTemplateName(Aws::String&& value) { m_assessmentTemplateNameHasBeenSet = true; m_assessmentTemplateName = std::move(value); }

    /**
     * <p>The user-defined name that identifies the assessment template that you want
     * to create. You can create several assessment templates for an assessment target.
     * The names of the assessment templates that correspond to a particular assessment
     * target must be unique.</p>
     */
    inline void SetAssessmentTemplateName(const char* value) { m_assessmentTemplateNameHasBeenSet = true; m_assessmentTemplateName.assign(value); }

    /**
     * <p>The user-defined name that identifies the assessment template that you want
     * to create. You can create several assessment templates for an assessment target.
     * The names of the assessment templates that correspond to a particular assessment
     * target must be unique.</p>
     */
    inline CreateAssessmentTemplateRequest& WithAssessmentTemplateName(const Aws::String& value) { SetAssessmentTemplateName(value); return *this;}

    /**
     * <p>The user-defined name that identifies the assessment template that you want
     * to create. You can create several assessment templates for an assessment target.
     * The names of the assessment templates that correspond to a particular assessment
     * target must be unique.</p>
     */
    inline CreateAssessmentTemplateRequest& WithAssessmentTemplateName(Aws::String&& value) { SetAssessmentTemplateName(std::move(value)); return *this;}

    /**
     * <p>The user-defined name that identifies the assessment template that you want
     * to create. You can create several assessment templates for an assessment target.
     * The names of the assessment templates that correspond to a particular assessment
     * target must be unique.</p>
     */
    inline CreateAssessmentTemplateRequest& WithAssessmentTemplateName(const char* value) { SetAssessmentTemplateName(value); return *this;}


    /**
     * <p>The duration of the assessment run in seconds.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The duration of the assessment run in seconds.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>The duration of the assessment run in seconds.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>The duration of the assessment run in seconds.</p>
     */
    inline CreateAssessmentTemplateRequest& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}


    /**
     * <p>The ARNs that specify the rules packages that you want to attach to the
     * assessment template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const{ return m_rulesPackageArns; }

    /**
     * <p>The ARNs that specify the rules packages that you want to attach to the
     * assessment template.</p>
     */
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }

    /**
     * <p>The ARNs that specify the rules packages that you want to attach to the
     * assessment template.</p>
     */
    inline void SetRulesPackageArns(const Aws::Vector<Aws::String>& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = value; }

    /**
     * <p>The ARNs that specify the rules packages that you want to attach to the
     * assessment template.</p>
     */
    inline void SetRulesPackageArns(Aws::Vector<Aws::String>&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::move(value); }

    /**
     * <p>The ARNs that specify the rules packages that you want to attach to the
     * assessment template.</p>
     */
    inline CreateAssessmentTemplateRequest& WithRulesPackageArns(const Aws::Vector<Aws::String>& value) { SetRulesPackageArns(value); return *this;}

    /**
     * <p>The ARNs that specify the rules packages that you want to attach to the
     * assessment template.</p>
     */
    inline CreateAssessmentTemplateRequest& WithRulesPackageArns(Aws::Vector<Aws::String>&& value) { SetRulesPackageArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs that specify the rules packages that you want to attach to the
     * assessment template.</p>
     */
    inline CreateAssessmentTemplateRequest& AddRulesPackageArns(const Aws::String& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }

    /**
     * <p>The ARNs that specify the rules packages that you want to attach to the
     * assessment template.</p>
     */
    inline CreateAssessmentTemplateRequest& AddRulesPackageArns(Aws::String&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs that specify the rules packages that you want to attach to the
     * assessment template.</p>
     */
    inline CreateAssessmentTemplateRequest& AddRulesPackageArns(const char* value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }


    /**
     * <p>The user-defined attributes that are assigned to every finding that is
     * generated by the assessment run that uses this assessment template. An attribute
     * is a key and value pair (an <a>Attribute</a> object). Within an assessment
     * template, each key must be unique.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributesForFindings() const{ return m_userAttributesForFindings; }

    /**
     * <p>The user-defined attributes that are assigned to every finding that is
     * generated by the assessment run that uses this assessment template. An attribute
     * is a key and value pair (an <a>Attribute</a> object). Within an assessment
     * template, each key must be unique.</p>
     */
    inline bool UserAttributesForFindingsHasBeenSet() const { return m_userAttributesForFindingsHasBeenSet; }

    /**
     * <p>The user-defined attributes that are assigned to every finding that is
     * generated by the assessment run that uses this assessment template. An attribute
     * is a key and value pair (an <a>Attribute</a> object). Within an assessment
     * template, each key must be unique.</p>
     */
    inline void SetUserAttributesForFindings(const Aws::Vector<Attribute>& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = value; }

    /**
     * <p>The user-defined attributes that are assigned to every finding that is
     * generated by the assessment run that uses this assessment template. An attribute
     * is a key and value pair (an <a>Attribute</a> object). Within an assessment
     * template, each key must be unique.</p>
     */
    inline void SetUserAttributesForFindings(Aws::Vector<Attribute>&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = std::move(value); }

    /**
     * <p>The user-defined attributes that are assigned to every finding that is
     * generated by the assessment run that uses this assessment template. An attribute
     * is a key and value pair (an <a>Attribute</a> object). Within an assessment
     * template, each key must be unique.</p>
     */
    inline CreateAssessmentTemplateRequest& WithUserAttributesForFindings(const Aws::Vector<Attribute>& value) { SetUserAttributesForFindings(value); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to every finding that is
     * generated by the assessment run that uses this assessment template. An attribute
     * is a key and value pair (an <a>Attribute</a> object). Within an assessment
     * template, each key must be unique.</p>
     */
    inline CreateAssessmentTemplateRequest& WithUserAttributesForFindings(Aws::Vector<Attribute>&& value) { SetUserAttributesForFindings(std::move(value)); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to every finding that is
     * generated by the assessment run that uses this assessment template. An attribute
     * is a key and value pair (an <a>Attribute</a> object). Within an assessment
     * template, each key must be unique.</p>
     */
    inline CreateAssessmentTemplateRequest& AddUserAttributesForFindings(const Attribute& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(value); return *this; }

    /**
     * <p>The user-defined attributes that are assigned to every finding that is
     * generated by the assessment run that uses this assessment template. An attribute
     * is a key and value pair (an <a>Attribute</a> object). Within an assessment
     * template, each key must be unique.</p>
     */
    inline CreateAssessmentTemplateRequest& AddUserAttributesForFindings(Attribute&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_assessmentTargetArn;
    bool m_assessmentTargetArnHasBeenSet = false;

    Aws::String m_assessmentTemplateName;
    bool m_assessmentTemplateNameHasBeenSet = false;

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet = false;

    Aws::Vector<Attribute> m_userAttributesForFindings;
    bool m_userAttributesForFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
