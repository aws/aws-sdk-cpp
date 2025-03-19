/**
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
    AWS_INSPECTOR_API GetExclusionsPreviewRequest() = default;

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
    inline const Aws::String& GetAssessmentTemplateArn() const { return m_assessmentTemplateArn; }
    inline bool AssessmentTemplateArnHasBeenSet() const { return m_assessmentTemplateArnHasBeenSet; }
    template<typename AssessmentTemplateArnT = Aws::String>
    void SetAssessmentTemplateArn(AssessmentTemplateArnT&& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = std::forward<AssessmentTemplateArnT>(value); }
    template<typename AssessmentTemplateArnT = Aws::String>
    GetExclusionsPreviewRequest& WithAssessmentTemplateArn(AssessmentTemplateArnT&& value) { SetAssessmentTemplateArn(std::forward<AssessmentTemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier associated of the exclusions preview.</p>
     */
    inline const Aws::String& GetPreviewToken() const { return m_previewToken; }
    inline bool PreviewTokenHasBeenSet() const { return m_previewTokenHasBeenSet; }
    template<typename PreviewTokenT = Aws::String>
    void SetPreviewToken(PreviewTokenT&& value) { m_previewTokenHasBeenSet = true; m_previewToken = std::forward<PreviewTokenT>(value); }
    template<typename PreviewTokenT = Aws::String>
    GetExclusionsPreviewRequest& WithPreviewToken(PreviewTokenT&& value) { SetPreviewToken(std::forward<PreviewTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the GetExclusionsPreviewRequest action.
     * Subsequent calls to the action fill nextToken in the request with the value of
     * nextToken from the previous response to continue listing data.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetExclusionsPreviewRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 100. The maximum value is 500.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetExclusionsPreviewRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline Locale GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(Locale value) { m_localeHasBeenSet = true; m_locale = value; }
    inline GetExclusionsPreviewRequest& WithLocale(Locale value) { SetLocale(value); return *this;}
    ///@}
  private:

    Aws::String m_assessmentTemplateArn;
    bool m_assessmentTemplateArnHasBeenSet = false;

    Aws::String m_previewToken;
    bool m_previewTokenHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Locale m_locale{Locale::NOT_SET};
    bool m_localeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
