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
  class RegisterCrossAccountAccessRoleRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API RegisterCrossAccountAccessRoleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterCrossAccountAccessRole"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the IAM role that grants Amazon Inspector access to AWS Services
     * needed to perform security assessments. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that grants Amazon Inspector access to AWS Services
     * needed to perform security assessments. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that grants Amazon Inspector access to AWS Services
     * needed to perform security assessments. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that grants Amazon Inspector access to AWS Services
     * needed to perform security assessments. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that grants Amazon Inspector access to AWS Services
     * needed to perform security assessments. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that grants Amazon Inspector access to AWS Services
     * needed to perform security assessments. </p>
     */
    inline RegisterCrossAccountAccessRoleRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that grants Amazon Inspector access to AWS Services
     * needed to perform security assessments. </p>
     */
    inline RegisterCrossAccountAccessRoleRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that grants Amazon Inspector access to AWS Services
     * needed to perform security assessments. </p>
     */
    inline RegisterCrossAccountAccessRoleRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
