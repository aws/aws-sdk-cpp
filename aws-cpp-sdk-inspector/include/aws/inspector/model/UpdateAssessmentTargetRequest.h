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
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API UpdateAssessmentTargetRequest : public InspectorRequest
  {
  public:
    UpdateAssessmentTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssessmentTarget"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the assessment target that you want to update.</p>
     */
    inline const Aws::String& GetAssessmentTargetArn() const{ return m_assessmentTargetArn; }

    /**
     * <p>The ARN of the assessment target that you want to update.</p>
     */
    inline bool AssessmentTargetArnHasBeenSet() const { return m_assessmentTargetArnHasBeenSet; }

    /**
     * <p>The ARN of the assessment target that you want to update.</p>
     */
    inline void SetAssessmentTargetArn(const Aws::String& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = value; }

    /**
     * <p>The ARN of the assessment target that you want to update.</p>
     */
    inline void SetAssessmentTargetArn(Aws::String&& value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn = std::move(value); }

    /**
     * <p>The ARN of the assessment target that you want to update.</p>
     */
    inline void SetAssessmentTargetArn(const char* value) { m_assessmentTargetArnHasBeenSet = true; m_assessmentTargetArn.assign(value); }

    /**
     * <p>The ARN of the assessment target that you want to update.</p>
     */
    inline UpdateAssessmentTargetRequest& WithAssessmentTargetArn(const Aws::String& value) { SetAssessmentTargetArn(value); return *this;}

    /**
     * <p>The ARN of the assessment target that you want to update.</p>
     */
    inline UpdateAssessmentTargetRequest& WithAssessmentTargetArn(Aws::String&& value) { SetAssessmentTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment target that you want to update.</p>
     */
    inline UpdateAssessmentTargetRequest& WithAssessmentTargetArn(const char* value) { SetAssessmentTargetArn(value); return *this;}


    /**
     * <p>The name of the assessment target that you want to update.</p>
     */
    inline const Aws::String& GetAssessmentTargetName() const{ return m_assessmentTargetName; }

    /**
     * <p>The name of the assessment target that you want to update.</p>
     */
    inline bool AssessmentTargetNameHasBeenSet() const { return m_assessmentTargetNameHasBeenSet; }

    /**
     * <p>The name of the assessment target that you want to update.</p>
     */
    inline void SetAssessmentTargetName(const Aws::String& value) { m_assessmentTargetNameHasBeenSet = true; m_assessmentTargetName = value; }

    /**
     * <p>The name of the assessment target that you want to update.</p>
     */
    inline void SetAssessmentTargetName(Aws::String&& value) { m_assessmentTargetNameHasBeenSet = true; m_assessmentTargetName = std::move(value); }

    /**
     * <p>The name of the assessment target that you want to update.</p>
     */
    inline void SetAssessmentTargetName(const char* value) { m_assessmentTargetNameHasBeenSet = true; m_assessmentTargetName.assign(value); }

    /**
     * <p>The name of the assessment target that you want to update.</p>
     */
    inline UpdateAssessmentTargetRequest& WithAssessmentTargetName(const Aws::String& value) { SetAssessmentTargetName(value); return *this;}

    /**
     * <p>The name of the assessment target that you want to update.</p>
     */
    inline UpdateAssessmentTargetRequest& WithAssessmentTargetName(Aws::String&& value) { SetAssessmentTargetName(std::move(value)); return *this;}

    /**
     * <p>The name of the assessment target that you want to update.</p>
     */
    inline UpdateAssessmentTargetRequest& WithAssessmentTargetName(const char* value) { SetAssessmentTargetName(value); return *this;}


    /**
     * <p>The ARN of the resource group that is used to specify the new resource group
     * to associate with the assessment target.</p>
     */
    inline const Aws::String& GetResourceGroupArn() const{ return m_resourceGroupArn; }

    /**
     * <p>The ARN of the resource group that is used to specify the new resource group
     * to associate with the assessment target.</p>
     */
    inline bool ResourceGroupArnHasBeenSet() const { return m_resourceGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the resource group that is used to specify the new resource group
     * to associate with the assessment target.</p>
     */
    inline void SetResourceGroupArn(const Aws::String& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = value; }

    /**
     * <p>The ARN of the resource group that is used to specify the new resource group
     * to associate with the assessment target.</p>
     */
    inline void SetResourceGroupArn(Aws::String&& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = std::move(value); }

    /**
     * <p>The ARN of the resource group that is used to specify the new resource group
     * to associate with the assessment target.</p>
     */
    inline void SetResourceGroupArn(const char* value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn.assign(value); }

    /**
     * <p>The ARN of the resource group that is used to specify the new resource group
     * to associate with the assessment target.</p>
     */
    inline UpdateAssessmentTargetRequest& WithResourceGroupArn(const Aws::String& value) { SetResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN of the resource group that is used to specify the new resource group
     * to associate with the assessment target.</p>
     */
    inline UpdateAssessmentTargetRequest& WithResourceGroupArn(Aws::String&& value) { SetResourceGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource group that is used to specify the new resource group
     * to associate with the assessment target.</p>
     */
    inline UpdateAssessmentTargetRequest& WithResourceGroupArn(const char* value) { SetResourceGroupArn(value); return *this;}

  private:

    Aws::String m_assessmentTargetArn;
    bool m_assessmentTargetArnHasBeenSet;

    Aws::String m_assessmentTargetName;
    bool m_assessmentTargetNameHasBeenSet;

    Aws::String m_resourceGroupArn;
    bool m_resourceGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
