/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class CreateExclusionsPreviewRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API CreateExclusionsPreviewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExclusionsPreview"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN that specifies the assessment template for which you want to create
     * an exclusions preview.</p>
     */
    inline const Aws::String& GetAssessmentTemplateArn() const { return m_assessmentTemplateArn; }
    inline bool AssessmentTemplateArnHasBeenSet() const { return m_assessmentTemplateArnHasBeenSet; }
    template<typename AssessmentTemplateArnT = Aws::String>
    void SetAssessmentTemplateArn(AssessmentTemplateArnT&& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = std::forward<AssessmentTemplateArnT>(value); }
    template<typename AssessmentTemplateArnT = Aws::String>
    CreateExclusionsPreviewRequest& WithAssessmentTemplateArn(AssessmentTemplateArnT&& value) { SetAssessmentTemplateArn(std::forward<AssessmentTemplateArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentTemplateArn;
    bool m_assessmentTemplateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
