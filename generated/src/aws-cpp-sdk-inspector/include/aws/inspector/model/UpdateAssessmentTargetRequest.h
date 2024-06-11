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
    AWS_INSPECTOR_API UpdateAssessmentTargetRequest();

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
    inline const Aws::String& GetAssessmentTargetArn() const{ return m_assessmentTargetArn; }
    inline bool AssessmentTargetArnHasBeenSet() const { return m_assessmentTargetArnHasBeenSet; }
    inline void SetAssessmentTargetArn(const Aws::String& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = value; }
    inline void SetAssessmentTargetArn(Aws::String&& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = std::move(value); }
    inline void SetAssessmentTargetArn(const char* value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn.assign(value); }
    inline UpdateAssessmentTargetRequest& WithAssessmentTargetArn(const Aws::String& value) { SetAssessmentTargetArn(value); return *this;}
    inline UpdateAssessmentTargetRequest& WithAssessmentTargetArn(Aws::String&& value) { SetAssessmentTargetArn(std::move(value)); return *this;}
    inline UpdateAssessmentTargetRequest& WithAssessmentTargetArn(const char* value) { SetAssessmentTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the assessment target that you want to update.</p>
     */
    inline const Aws::String& GetAssessmentTargetName() const{ return m_assessmentTargetName; }
    inline bool AssessmentTargetNameHasBeenSet() const { return m_assessmentTargetNameHasBeenSet; }
    inline void SetAssessmentTargetName(const Aws::String& value) { m_assessmentTargetNameHasBeenSet = true; m_assessmentTargetName = value; }
    inline void SetAssessmentTargetName(Aws::String&& value) { m_assessmentTargetNameHasBeenSet = true; m_assessmentTargetName = std::move(value); }
    inline void SetAssessmentTargetName(const char* value) { m_assessmentTargetNameHasBeenSet = true; m_assessmentTargetName.assign(value); }
    inline UpdateAssessmentTargetRequest& WithAssessmentTargetName(const Aws::String& value) { SetAssessmentTargetName(value); return *this;}
    inline UpdateAssessmentTargetRequest& WithAssessmentTargetName(Aws::String&& value) { SetAssessmentTargetName(std::move(value)); return *this;}
    inline UpdateAssessmentTargetRequest& WithAssessmentTargetName(const char* value) { SetAssessmentTargetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource group that is used to specify the new resource group
     * to associate with the assessment target.</p>
     */
    inline const Aws::String& GetResourceGroupArn() const{ return m_resourceGroupArn; }
    inline bool ResourceGroupArnHasBeenSet() const { return m_resourceGroupArnHasBeenSet; }
    inline void SetResourceGroupArn(const Aws::String& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = value; }
    inline void SetResourceGroupArn(Aws::String&& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = std::move(value); }
    inline void SetResourceGroupArn(const char* value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn.assign(value); }
    inline UpdateAssessmentTargetRequest& WithResourceGroupArn(const Aws::String& value) { SetResourceGroupArn(value); return *this;}
    inline UpdateAssessmentTargetRequest& WithResourceGroupArn(Aws::String&& value) { SetResourceGroupArn(std::move(value)); return *this;}
    inline UpdateAssessmentTargetRequest& WithResourceGroupArn(const char* value) { SetResourceGroupArn(value); return *this;}
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
