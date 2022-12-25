/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/resiliencehub/model/TemplateFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/RecommendationTemplateStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resiliencehub/model/S3Location.h>
#include <aws/resiliencehub/model/RenderRecommendationType.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a recommendation template created with the
   * <a>CreateRecommendationTemplate</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/RecommendationTemplate">AWS
   * API Reference</a></p>
   */
  class RecommendationTemplate
  {
  public:
    AWS_RESILIENCEHUB_API RecommendationTemplate();
    AWS_RESILIENCEHUB_API RecommendationTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API RecommendationTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline RecommendationTemplate& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline RecommendationTemplate& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline RecommendationTemplate& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool AssessmentArnHasBeenSet() const { return m_assessmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline RecommendationTemplate& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline RecommendationTemplate& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline RecommendationTemplate& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}


    /**
     * <p>The end time for the action.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time for the action.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time for the action.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time for the action.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time for the action.</p>
     */
    inline RecommendationTemplate& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time for the action.</p>
     */
    inline RecommendationTemplate& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The format of the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd>
     * <p>The template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The
     * template is CloudFormation YAML.</p> </dd> </dl>
     */
    inline const TemplateFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd>
     * <p>The template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The
     * template is CloudFormation YAML.</p> </dd> </dl>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd>
     * <p>The template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The
     * template is CloudFormation YAML.</p> </dd> </dl>
     */
    inline void SetFormat(const TemplateFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd>
     * <p>The template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The
     * template is CloudFormation YAML.</p> </dd> </dl>
     */
    inline void SetFormat(TemplateFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd>
     * <p>The template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The
     * template is CloudFormation YAML.</p> </dd> </dl>
     */
    inline RecommendationTemplate& WithFormat(const TemplateFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the recommendation template.</p> <dl> <dt>CfnJson</dt> <dd>
     * <p>The template is CloudFormation JSON.</p> </dd> <dt>CfnYaml</dt> <dd> <p>The
     * template is CloudFormation YAML.</p> </dd> </dl>
     */
    inline RecommendationTemplate& WithFormat(TemplateFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The message for the recommendation template.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message for the recommendation template.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message for the recommendation template.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message for the recommendation template.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message for the recommendation template.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message for the recommendation template.</p>
     */
    inline RecommendationTemplate& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message for the recommendation template.</p>
     */
    inline RecommendationTemplate& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message for the recommendation template.</p>
     */
    inline RecommendationTemplate& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The name for the recommendation template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline RecommendationTemplate& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline RecommendationTemplate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the recommendation template.</p>
     */
    inline RecommendationTemplate& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Indicates if replacements are needed.</p>
     */
    inline bool GetNeedsReplacements() const{ return m_needsReplacements; }

    /**
     * <p>Indicates if replacements are needed.</p>
     */
    inline bool NeedsReplacementsHasBeenSet() const { return m_needsReplacementsHasBeenSet; }

    /**
     * <p>Indicates if replacements are needed.</p>
     */
    inline void SetNeedsReplacements(bool value) { m_needsReplacementsHasBeenSet = true; m_needsReplacements = value; }

    /**
     * <p>Indicates if replacements are needed.</p>
     */
    inline RecommendationTemplate& WithNeedsReplacements(bool value) { SetNeedsReplacements(value); return *this;}


    /**
     * <p>Identifiers for the recommendations used in the recommendation template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const{ return m_recommendationIds; }

    /**
     * <p>Identifiers for the recommendations used in the recommendation template.</p>
     */
    inline bool RecommendationIdsHasBeenSet() const { return m_recommendationIdsHasBeenSet; }

    /**
     * <p>Identifiers for the recommendations used in the recommendation template.</p>
     */
    inline void SetRecommendationIds(const Aws::Vector<Aws::String>& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = value; }

    /**
     * <p>Identifiers for the recommendations used in the recommendation template.</p>
     */
    inline void SetRecommendationIds(Aws::Vector<Aws::String>&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = std::move(value); }

    /**
     * <p>Identifiers for the recommendations used in the recommendation template.</p>
     */
    inline RecommendationTemplate& WithRecommendationIds(const Aws::Vector<Aws::String>& value) { SetRecommendationIds(value); return *this;}

    /**
     * <p>Identifiers for the recommendations used in the recommendation template.</p>
     */
    inline RecommendationTemplate& WithRecommendationIds(Aws::Vector<Aws::String>&& value) { SetRecommendationIds(std::move(value)); return *this;}

    /**
     * <p>Identifiers for the recommendations used in the recommendation template.</p>
     */
    inline RecommendationTemplate& AddRecommendationIds(const Aws::String& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }

    /**
     * <p>Identifiers for the recommendations used in the recommendation template.</p>
     */
    inline RecommendationTemplate& AddRecommendationIds(Aws::String&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Identifiers for the recommendations used in the recommendation template.</p>
     */
    inline RecommendationTemplate& AddRecommendationIds(const char* value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) for the recommendation template.</p>
     */
    inline const Aws::String& GetRecommendationTemplateArn() const{ return m_recommendationTemplateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the recommendation template.</p>
     */
    inline bool RecommendationTemplateArnHasBeenSet() const { return m_recommendationTemplateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the recommendation template.</p>
     */
    inline void SetRecommendationTemplateArn(const Aws::String& value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the recommendation template.</p>
     */
    inline void SetRecommendationTemplateArn(Aws::String&& value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the recommendation template.</p>
     */
    inline void SetRecommendationTemplateArn(const char* value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the recommendation template.</p>
     */
    inline RecommendationTemplate& WithRecommendationTemplateArn(const Aws::String& value) { SetRecommendationTemplateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the recommendation template.</p>
     */
    inline RecommendationTemplate& WithRecommendationTemplateArn(Aws::String&& value) { SetRecommendationTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the recommendation template.</p>
     */
    inline RecommendationTemplate& WithRecommendationTemplateArn(const char* value) { SetRecommendationTemplateArn(value); return *this;}


    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline const Aws::Vector<RenderRecommendationType>& GetRecommendationTypes() const{ return m_recommendationTypes; }

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline bool RecommendationTypesHasBeenSet() const { return m_recommendationTypesHasBeenSet; }

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline void SetRecommendationTypes(const Aws::Vector<RenderRecommendationType>& value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes = value; }

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline void SetRecommendationTypes(Aws::Vector<RenderRecommendationType>&& value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes = std::move(value); }

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline RecommendationTemplate& WithRecommendationTypes(const Aws::Vector<RenderRecommendationType>& value) { SetRecommendationTypes(value); return *this;}

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline RecommendationTemplate& WithRecommendationTypes(Aws::Vector<RenderRecommendationType>&& value) { SetRecommendationTypes(std::move(value)); return *this;}

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline RecommendationTemplate& AddRecommendationTypes(const RenderRecommendationType& value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes.push_back(value); return *this; }

    /**
     * <p>An array of strings that specify the recommendation template type or
     * types.</p> <dl> <dt>Alarm</dt> <dd> <p>The template is an
     * <a>AlarmRecommendation</a> template.</p> </dd> <dt>Sop</dt> <dd> <p>The template
     * is a <a>SopRecommendation</a> template.</p> </dd> <dt>Test</dt> <dd> <p>The
     * template is a <a>TestRecommendation</a> template.</p> </dd> </dl>
     */
    inline RecommendationTemplate& AddRecommendationTypes(RenderRecommendationType&& value) { m_recommendationTypesHasBeenSet = true; m_recommendationTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The start time for the action.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time for the action.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time for the action.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time for the action.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time for the action.</p>
     */
    inline RecommendationTemplate& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time for the action.</p>
     */
    inline RecommendationTemplate& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The status of the action.</p>
     */
    inline const RecommendationTemplateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the action.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(const RecommendationTemplateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(RecommendationTemplateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the action.</p>
     */
    inline RecommendationTemplate& WithStatus(const RecommendationTemplateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the action.</p>
     */
    inline RecommendationTemplate& WithStatus(RecommendationTemplateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline RecommendationTemplate& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline RecommendationTemplate& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline RecommendationTemplate& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline RecommendationTemplate& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline RecommendationTemplate& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline RecommendationTemplate& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline RecommendationTemplate& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline RecommendationTemplate& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline RecommendationTemplate& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The file location of the template.</p>
     */
    inline const S3Location& GetTemplatesLocation() const{ return m_templatesLocation; }

    /**
     * <p>The file location of the template.</p>
     */
    inline bool TemplatesLocationHasBeenSet() const { return m_templatesLocationHasBeenSet; }

    /**
     * <p>The file location of the template.</p>
     */
    inline void SetTemplatesLocation(const S3Location& value) { m_templatesLocationHasBeenSet = true; m_templatesLocation = value; }

    /**
     * <p>The file location of the template.</p>
     */
    inline void SetTemplatesLocation(S3Location&& value) { m_templatesLocationHasBeenSet = true; m_templatesLocation = std::move(value); }

    /**
     * <p>The file location of the template.</p>
     */
    inline RecommendationTemplate& WithTemplatesLocation(const S3Location& value) { SetTemplatesLocation(value); return *this;}

    /**
     * <p>The file location of the template.</p>
     */
    inline RecommendationTemplate& WithTemplatesLocation(S3Location&& value) { SetTemplatesLocation(std::move(value)); return *this;}

  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    TemplateFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_needsReplacements;
    bool m_needsReplacementsHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendationIds;
    bool m_recommendationIdsHasBeenSet = false;

    Aws::String m_recommendationTemplateArn;
    bool m_recommendationTemplateArnHasBeenSet = false;

    Aws::Vector<RenderRecommendationType> m_recommendationTypes;
    bool m_recommendationTypesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    RecommendationTemplateStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    S3Location m_templatesLocation;
    bool m_templatesLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
