/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API RegisterCrossAccountAccessRoleRequest : public InspectorRequest
  {
  public:
    RegisterCrossAccountAccessRoleRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * The ARN of the IAM role that Inspector uses to list your EC2 instances during
     * the assessment.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The ARN of the IAM role that Inspector uses to list your EC2 instances during
     * the assessment.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The ARN of the IAM role that Inspector uses to list your EC2 instances during
     * the assessment.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The ARN of the IAM role that Inspector uses to list your EC2 instances during
     * the assessment.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The ARN of the IAM role that Inspector uses to list your EC2 instances during
     * the assessment.
     */
    inline RegisterCrossAccountAccessRoleRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The ARN of the IAM role that Inspector uses to list your EC2 instances during
     * the assessment.
     */
    inline RegisterCrossAccountAccessRoleRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * The ARN of the IAM role that Inspector uses to list your EC2 instances during
     * the assessment.
     */
    inline RegisterCrossAccountAccessRoleRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
