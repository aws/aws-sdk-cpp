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
  class UpdateAssessmentTargetRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API UpdateAssessmentTargetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssessmentTarget"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the assessment target that you want to update.</p>
     */
    inline const Aws::String& GetAssessmentTargetArn() const { return m_assessmentTargetArn; }
    inline bool AssessmentTargetArnHasBeenSet() const { return m_assessmentTargetArnHasBeenSet; }
    template<typename AssessmentTargetArnT = Aws::String>
    void SetAssessmentTargetArn(AssessmentTargetArnT&& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = std::forward<AssessmentTargetArnT>(value); }
    template<typename AssessmentTargetArnT = Aws::String>
    UpdateAssessmentTargetRequest& WithAssessmentTargetArn(AssessmentTargetArnT&& value) { SetAssessmentTargetArn(std::forward<AssessmentTargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the assessment target that you want to update.</p>
     */
    inline const Aws::String& GetAssessmentTargetName() const { return m_assessmentTargetName; }
    inline bool AssessmentTargetNameHasBeenSet() const { return m_assessmentTargetNameHasBeenSet; }
    template<typename AssessmentTargetNameT = Aws::String>
    void SetAssessmentTargetName(AssessmentTargetNameT&& value) { m_assessmentTargetNameHasBeenSet = true; m_assessmentTargetName = std::forward<AssessmentTargetNameT>(value); }
    template<typename AssessmentTargetNameT = Aws::String>
    UpdateAssessmentTargetRequest& WithAssessmentTargetName(AssessmentTargetNameT&& value) { SetAssessmentTargetName(std::forward<AssessmentTargetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource group that is used to specify the new resource group
     * to associate with the assessment target.</p>
     */
    inline const Aws::String& GetResourceGroupArn() const { return m_resourceGroupArn; }
    inline bool ResourceGroupArnHasBeenSet() const { return m_resourceGroupArnHasBeenSet; }
    template<typename ResourceGroupArnT = Aws::String>
    void SetResourceGroupArn(ResourceGroupArnT&& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = std::forward<ResourceGroupArnT>(value); }
    template<typename ResourceGroupArnT = Aws::String>
    UpdateAssessmentTargetRequest& WithResourceGroupArn(ResourceGroupArnT&& value) { SetResourceGroupArn(std::forward<ResourceGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentTargetArn;
    bool m_assessmentTargetArnHasBeenSet = false;

    Aws::String m_assessmentTargetName;
    bool m_assessmentTargetNameHasBeenSet = false;

    Aws::String m_resourceGroupArn;
    bool m_resourceGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
