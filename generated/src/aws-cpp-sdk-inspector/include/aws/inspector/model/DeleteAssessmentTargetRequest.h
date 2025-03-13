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
  class DeleteAssessmentTargetRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API DeleteAssessmentTargetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAssessmentTarget"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN that specifies the assessment target that you want to delete.</p>
     */
    inline const Aws::String& GetAssessmentTargetArn() const { return m_assessmentTargetArn; }
    inline bool AssessmentTargetArnHasBeenSet() const { return m_assessmentTargetArnHasBeenSet; }
    template<typename AssessmentTargetArnT = Aws::String>
    void SetAssessmentTargetArn(AssessmentTargetArnT&& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = std::forward<AssessmentTargetArnT>(value); }
    template<typename AssessmentTargetArnT = Aws::String>
    DeleteAssessmentTargetRequest& WithAssessmentTargetArn(AssessmentTargetArnT&& value) { SetAssessmentTargetArn(std::forward<AssessmentTargetArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentTargetArn;
    bool m_assessmentTargetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
