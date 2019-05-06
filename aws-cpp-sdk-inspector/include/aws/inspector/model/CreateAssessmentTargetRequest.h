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
  class AWS_INSPECTOR_API CreateAssessmentTargetRequest : public InspectorRequest
  {
  public:
    CreateAssessmentTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssessmentTarget"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user-defined name that identifies the assessment target that you want to
     * create. The name must be unique within the AWS account.</p>
     */
    inline const Aws::String& GetAssessmentTargetName() const{ return m_assessmentTargetName; }

    /**
     * <p>The user-defined name that identifies the assessment target that you want to
     * create. The name must be unique within the AWS account.</p>
     */
    inline bool AssessmentTargetNameHasBeenSet() const { return m_assessmentTargetNameHasBeenSet; }

    /**
     * <p>The user-defined name that identifies the assessment target that you want to
     * create. The name must be unique within the AWS account.</p>
     */
    inline void SetAssessmentTargetName(const Aws::String& value) { m_assessmentTargetNameHasBeenSet = true; m_assessmentTargetName = value; }

    /**
     * <p>The user-defined name that identifies the assessment target that you want to
     * create. The name must be unique within the AWS account.</p>
     */
    inline void SetAssessmentTargetName(Aws::String&& value) { m_assessmentTargetNameHasBeenSet = true; m_assessmentTargetName = std::move(value); }

    /**
     * <p>The user-defined name that identifies the assessment target that you want to
     * create. The name must be unique within the AWS account.</p>
     */
    inline void SetAssessmentTargetName(const char* value) { m_assessmentTargetNameHasBeenSet = true; m_assessmentTargetName.assign(value); }

    /**
     * <p>The user-defined name that identifies the assessment target that you want to
     * create. The name must be unique within the AWS account.</p>
     */
    inline CreateAssessmentTargetRequest& WithAssessmentTargetName(const Aws::String& value) { SetAssessmentTargetName(value); return *this;}

    /**
     * <p>The user-defined name that identifies the assessment target that you want to
     * create. The name must be unique within the AWS account.</p>
     */
    inline CreateAssessmentTargetRequest& WithAssessmentTargetName(Aws::String&& value) { SetAssessmentTargetName(std::move(value)); return *this;}

    /**
     * <p>The user-defined name that identifies the assessment target that you want to
     * create. The name must be unique within the AWS account.</p>
     */
    inline CreateAssessmentTargetRequest& WithAssessmentTargetName(const char* value) { SetAssessmentTargetName(value); return *this;}


    /**
     * <p>The ARN that specifies the resource group that is used to create the
     * assessment target. If resourceGroupArn is not specified, all EC2 instances in
     * the current AWS account and region are included in the assessment target.</p>
     */
    inline const Aws::String& GetResourceGroupArn() const{ return m_resourceGroupArn; }

    /**
     * <p>The ARN that specifies the resource group that is used to create the
     * assessment target. If resourceGroupArn is not specified, all EC2 instances in
     * the current AWS account and region are included in the assessment target.</p>
     */
    inline bool ResourceGroupArnHasBeenSet() const { return m_resourceGroupArnHasBeenSet; }

    /**
     * <p>The ARN that specifies the resource group that is used to create the
     * assessment target. If resourceGroupArn is not specified, all EC2 instances in
     * the current AWS account and region are included in the assessment target.</p>
     */
    inline void SetResourceGroupArn(const Aws::String& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = value; }

    /**
     * <p>The ARN that specifies the resource group that is used to create the
     * assessment target. If resourceGroupArn is not specified, all EC2 instances in
     * the current AWS account and region are included in the assessment target.</p>
     */
    inline void SetResourceGroupArn(Aws::String&& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = std::move(value); }

    /**
     * <p>The ARN that specifies the resource group that is used to create the
     * assessment target. If resourceGroupArn is not specified, all EC2 instances in
     * the current AWS account and region are included in the assessment target.</p>
     */
    inline void SetResourceGroupArn(const char* value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn.assign(value); }

    /**
     * <p>The ARN that specifies the resource group that is used to create the
     * assessment target. If resourceGroupArn is not specified, all EC2 instances in
     * the current AWS account and region are included in the assessment target.</p>
     */
    inline CreateAssessmentTargetRequest& WithResourceGroupArn(const Aws::String& value) { SetResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN that specifies the resource group that is used to create the
     * assessment target. If resourceGroupArn is not specified, all EC2 instances in
     * the current AWS account and region are included in the assessment target.</p>
     */
    inline CreateAssessmentTargetRequest& WithResourceGroupArn(Aws::String&& value) { SetResourceGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the resource group that is used to create the
     * assessment target. If resourceGroupArn is not specified, all EC2 instances in
     * the current AWS account and region are included in the assessment target.</p>
     */
    inline CreateAssessmentTargetRequest& WithResourceGroupArn(const char* value) { SetResourceGroupArn(value); return *this;}

  private:

    Aws::String m_assessmentTargetName;
    bool m_assessmentTargetNameHasBeenSet;

    Aws::String m_resourceGroupArn;
    bool m_resourceGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
