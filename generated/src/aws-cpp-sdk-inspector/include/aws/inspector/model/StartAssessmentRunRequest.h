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
  class StartAssessmentRunRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API StartAssessmentRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAssessmentRun"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the assessment template of the assessment run that you want to
     * start.</p>
     */
    inline const Aws::String& GetAssessmentTemplateArn() const { return m_assessmentTemplateArn; }
    inline bool AssessmentTemplateArnHasBeenSet() const { return m_assessmentTemplateArnHasBeenSet; }
    template<typename AssessmentTemplateArnT = Aws::String>
    void SetAssessmentTemplateArn(AssessmentTemplateArnT&& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = std::forward<AssessmentTemplateArnT>(value); }
    template<typename AssessmentTemplateArnT = Aws::String>
    StartAssessmentRunRequest& WithAssessmentTemplateArn(AssessmentTemplateArnT&& value) { SetAssessmentTemplateArn(std::forward<AssessmentTemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can specify the name for the assessment run. The name must be unique for
     * the assessment template whose ARN is used to start the assessment run.</p>
     */
    inline const Aws::String& GetAssessmentRunName() const { return m_assessmentRunName; }
    inline bool AssessmentRunNameHasBeenSet() const { return m_assessmentRunNameHasBeenSet; }
    template<typename AssessmentRunNameT = Aws::String>
    void SetAssessmentRunName(AssessmentRunNameT&& value) { m_assessmentRunNameHasBeenSet = true; m_assessmentRunName = std::forward<AssessmentRunNameT>(value); }
    template<typename AssessmentRunNameT = Aws::String>
    StartAssessmentRunRequest& WithAssessmentRunName(AssessmentRunNameT&& value) { SetAssessmentRunName(std::forward<AssessmentRunNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentTemplateArn;
    bool m_assessmentTemplateArnHasBeenSet = false;

    Aws::String m_assessmentRunName;
    bool m_assessmentRunNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
