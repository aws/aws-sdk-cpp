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
#include <aws/inspector/model/Locale.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API GetExclusionsPreviewRequest : public InspectorRequest
  {
  public:
    GetExclusionsPreviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExclusionsPreview"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN that specifies the assessment template for which the exclusions
     * preview was requested.</p>
     */
    inline const Aws::String& GetAssessmentTemplateArn() const{ return m_assessmentTemplateArn; }

    /**
     * <p>The ARN that specifies the assessment template for which the exclusions
     * preview was requested.</p>
     */
    inline bool AssessmentTemplateArnHasBeenSet() const { return m_assessmentTemplateArnHasBeenSet; }

    /**
     * <p>The ARN that specifies the assessment template for which the exclusions
     * preview was requested.</p>
     */
    inline void SetAssessmentTemplateArn(const Aws::String& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = value; }

    /**
     * <p>The ARN that specifies the assessment template for which the exclusions
     * preview was requested.</p>
     */
    inline void SetAssessmentTemplateArn(Aws::String&& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = std::move(value); }

    /**
     * <p>The ARN that specifies the assessment template for which the exclusions
     * preview was requested.</p>
     */
    inline void SetAssessmentTemplateArn(const char* value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn.assign(value); }

    /**
     * <p>The ARN that specifies the assessment template for which the exclusions
     * preview was requested.</p>
     */
    inline GetExclusionsPreviewRequest& WithAssessmentTemplateArn(const Aws::String& value) { SetAssessmentTemplateArn(value); return *this;}

    /**
     * <p>The ARN that specifies the assessment template for which the exclusions
     * preview was requested.</p>
     */
    inline GetExclusionsPreviewRequest& WithAssessmentTemplateArn(Aws::String&& value) { SetAssessmentTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the assessment template for which the exclusions
     * preview was requested.</p>
     */
    inline GetExclusionsPreviewRequest& WithAssessmentTemplateArn(const char* value) { SetAssessmentTemplateArn(value); return *this;}


    /**
     * <p>The unique identifier associated of the exclusions preview.</p>
     */
    inline const Aws::String& GetPreviewToken() const{ return m_previewToken; }

    /**
     * <p>The unique identifier associated of the exclusions preview.</p>
     */
    inline bool PreviewTokenHasBeenSet() const { return m_previewTokenHasBeenSet; }

    /**
     * <p>The unique identifier associated of the exclusions preview.</p>
     */
    inline void SetPreviewToken(const Aws::String& value) { m_previewTokenHasBeenSet = true; m_previewToken = value; }

    /**
     * <p>The unique identifier associated of the exclusions preview.</p>
     */
    inline void SetPreviewToken(Aws::String&& value) { m_previewTokenHasBeenSet = true; m_previewToken = std::move(value); }

    /**
     * <p>The unique identifier associated of the exclusions preview.</p>
     */
    inline void SetPreviewToken(const char* value) { m_previewTokenHasBeenSet = true; m_previewToken.assign(value); }

    /**
     * <p>The unique identifier associated of the exclusions preview.</p>
     */
    inline GetExclusionsPreviewRequest& WithPreviewToken(const Aws::String& value) { SetPreviewToken(value); return *this;}

    /**
     * <p>The unique identifier associated of the exclusions preview.</p>
     */
    inline GetExclusionsPreviewRequest& WithPreviewToken(Aws::String&& value) { SetPreviewToken(std::move(value)); return *this;}

    /**
     * <p>The unique identifier associated of the exclusions preview.</p>
     */
    inline GetExclusionsPreviewRequest& WithPreviewToken(const char* value) { SetPreviewToken(value); return *this;}


    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the GetExclusionsPreviewRequest action.
     * Subsequent calls to the action fill nextToken in the request with the value of
     * nextToken from the previous response to continue listing data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the GetExclusionsPreviewRequest action.
     * Subsequent calls to the action fill nextToken in the request with the value of
     * nextToken from the previous response to continue listing data.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the GetExclusionsPreviewRequest action.
     * Subsequent calls to the action fill nextToken in the request with the value of
     * nextToken from the previous response to continue listing data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the GetExclusionsPreviewRequest action.
     * Subsequent calls to the action fill nextToken in the request with the value of
     * nextToken from the previous response to continue listing data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the GetExclusionsPreviewRequest action.
     * Subsequent calls to the action fill nextToken in the request with the value of
     * nextToken from the previous response to continue listing data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the GetExclusionsPreviewRequest action.
     * Subsequent calls to the action fill nextToken in the request with the value of
     * nextToken from the previous response to continue listing data.</p>
     */
    inline GetExclusionsPreviewRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the GetExclusionsPreviewRequest action.
     * Subsequent calls to the action fill nextToken in the request with the value of
     * nextToken from the previous response to continue listing data.</p>
     */
    inline GetExclusionsPreviewRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the GetExclusionsPreviewRequest action.
     * Subsequent calls to the action fill nextToken in the request with the value of
     * nextToken from the previous response to continue listing data.</p>
     */
    inline GetExclusionsPreviewRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 100. The maximum value is 500.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 100. The maximum value is 500.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 100. The maximum value is 500.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 100. The maximum value is 500.</p>
     */
    inline GetExclusionsPreviewRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline GetExclusionsPreviewRequest& WithLocale(const Locale& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline GetExclusionsPreviewRequest& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}

  private:

    Aws::String m_assessmentTemplateArn;
    bool m_assessmentTemplateArnHasBeenSet;

    Aws::String m_previewToken;
    bool m_previewTokenHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Locale m_locale;
    bool m_localeHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
