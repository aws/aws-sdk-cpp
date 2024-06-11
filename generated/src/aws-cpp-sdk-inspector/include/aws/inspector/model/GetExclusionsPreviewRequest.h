﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetExclusionsPreviewRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API GetExclusionsPreviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExclusionsPreview"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN that specifies the assessment template for which the exclusions
     * preview was requested.</p>
     */
    inline const Aws::String& GetAssessmentTemplateArn() const{ return m_assessmentTemplateArn; }
    inline bool AssessmentTemplateArnHasBeenSet() const { return m_assessmentTemplateArnHasBeenSet; }
    inline void SetAssessmentTemplateArn(const Aws::String& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = value; }
    inline void SetAssessmentTemplateArn(Aws::String&& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = std::move(value); }
    inline void SetAssessmentTemplateArn(const char* value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn.assign(value); }
    inline GetExclusionsPreviewRequest& WithAssessmentTemplateArn(const Aws::String& value) { SetAssessmentTemplateArn(value); return *this;}
    inline GetExclusionsPreviewRequest& WithAssessmentTemplateArn(Aws::String&& value) { SetAssessmentTemplateArn(std::move(value)); return *this;}
    inline GetExclusionsPreviewRequest& WithAssessmentTemplateArn(const char* value) { SetAssessmentTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier associated of the exclusions preview.</p>
     */
    inline const Aws::String& GetPreviewToken() const{ return m_previewToken; }
    inline bool PreviewTokenHasBeenSet() const { return m_previewTokenHasBeenSet; }
    inline void SetPreviewToken(const Aws::String& value) { m_previewTokenHasBeenSet = true; m_previewToken = value; }
    inline void SetPreviewToken(Aws::String&& value) { m_previewTokenHasBeenSet = true; m_previewToken = std::move(value); }
    inline void SetPreviewToken(const char* value) { m_previewTokenHasBeenSet = true; m_previewToken.assign(value); }
    inline GetExclusionsPreviewRequest& WithPreviewToken(const Aws::String& value) { SetPreviewToken(value); return *this;}
    inline GetExclusionsPreviewRequest& WithPreviewToken(Aws::String&& value) { SetPreviewToken(std::move(value)); return *this;}
    inline GetExclusionsPreviewRequest& WithPreviewToken(const char* value) { SetPreviewToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the GetExclusionsPreviewRequest action.
     * Subsequent calls to the action fill nextToken in the request with the value of
     * nextToken from the previous response to continue listing data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetExclusionsPreviewRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetExclusionsPreviewRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetExclusionsPreviewRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 100. The maximum value is 500.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetExclusionsPreviewRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline GetExclusionsPreviewRequest& WithLocale(const Locale& value) { SetLocale(value); return *this;}
    inline GetExclusionsPreviewRequest& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentTemplateArn;
    bool m_assessmentTemplateArnHasBeenSet = false;

    Aws::String m_previewToken;
    bool m_previewTokenHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Locale m_locale;
    bool m_localeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
