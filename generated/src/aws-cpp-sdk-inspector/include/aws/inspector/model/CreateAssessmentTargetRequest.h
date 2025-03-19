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
  class CreateAssessmentTargetRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API CreateAssessmentTargetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssessmentTarget"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The user-defined name that identifies the assessment target that you want to
     * create. The name must be unique within the AWS account.</p>
     */
    inline const Aws::String& GetAssessmentTargetName() const { return m_assessmentTargetName; }
    inline bool AssessmentTargetNameHasBeenSet() const { return m_assessmentTargetNameHasBeenSet; }
    template<typename AssessmentTargetNameT = Aws::String>
    void SetAssessmentTargetName(AssessmentTargetNameT&& value) { m_assessmentTargetNameHasBeenSet = true; m_assessmentTargetName = std::forward<AssessmentTargetNameT>(value); }
    template<typename AssessmentTargetNameT = Aws::String>
    CreateAssessmentTargetRequest& WithAssessmentTargetName(AssessmentTargetNameT&& value) { SetAssessmentTargetName(std::forward<AssessmentTargetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN that specifies the resource group that is used to create the
     * assessment target. If resourceGroupArn is not specified, all EC2 instances in
     * the current AWS account and region are included in the assessment target.</p>
     */
    inline const Aws::String& GetResourceGroupArn() const { return m_resourceGroupArn; }
    inline bool ResourceGroupArnHasBeenSet() const { return m_resourceGroupArnHasBeenSet; }
    template<typename ResourceGroupArnT = Aws::String>
    void SetResourceGroupArn(ResourceGroupArnT&& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = std::forward<ResourceGroupArnT>(value); }
    template<typename ResourceGroupArnT = Aws::String>
    CreateAssessmentTargetRequest& WithResourceGroupArn(ResourceGroupArnT&& value) { SetResourceGroupArn(std::forward<ResourceGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentTargetName;
    bool m_assessmentTargetNameHasBeenSet = false;

    Aws::String m_resourceGroupArn;
    bool m_resourceGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
