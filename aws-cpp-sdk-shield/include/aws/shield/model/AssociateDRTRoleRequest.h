/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class AssociateDRTRoleRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API AssociateDRTRoleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDRTRole"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the role the SRT will use to access your
     * Amazon Web Services account.</p> <p>Prior to making the
     * <code>AssociateDRTRole</code> request, you must attach the <a
     * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>
     * managed policy to this role. For more information see <a href="
     * https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Attaching
     * and Detaching IAM Policies</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role the SRT will use to access your
     * Amazon Web Services account.</p> <p>Prior to making the
     * <code>AssociateDRTRole</code> request, you must attach the <a
     * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>
     * managed policy to this role. For more information see <a href="
     * https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Attaching
     * and Detaching IAM Policies</a>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role the SRT will use to access your
     * Amazon Web Services account.</p> <p>Prior to making the
     * <code>AssociateDRTRole</code> request, you must attach the <a
     * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>
     * managed policy to this role. For more information see <a href="
     * https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Attaching
     * and Detaching IAM Policies</a>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role the SRT will use to access your
     * Amazon Web Services account.</p> <p>Prior to making the
     * <code>AssociateDRTRole</code> request, you must attach the <a
     * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>
     * managed policy to this role. For more information see <a href="
     * https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Attaching
     * and Detaching IAM Policies</a>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role the SRT will use to access your
     * Amazon Web Services account.</p> <p>Prior to making the
     * <code>AssociateDRTRole</code> request, you must attach the <a
     * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>
     * managed policy to this role. For more information see <a href="
     * https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Attaching
     * and Detaching IAM Policies</a>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role the SRT will use to access your
     * Amazon Web Services account.</p> <p>Prior to making the
     * <code>AssociateDRTRole</code> request, you must attach the <a
     * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>
     * managed policy to this role. For more information see <a href="
     * https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Attaching
     * and Detaching IAM Policies</a>.</p>
     */
    inline AssociateDRTRoleRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role the SRT will use to access your
     * Amazon Web Services account.</p> <p>Prior to making the
     * <code>AssociateDRTRole</code> request, you must attach the <a
     * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>
     * managed policy to this role. For more information see <a href="
     * https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Attaching
     * and Detaching IAM Policies</a>.</p>
     */
    inline AssociateDRTRoleRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role the SRT will use to access your
     * Amazon Web Services account.</p> <p>Prior to making the
     * <code>AssociateDRTRole</code> request, you must attach the <a
     * href="https://console.aws.amazon.com/iam/home?#/policies/arn:aws:iam::aws:policy/service-role/AWSShieldDRTAccessPolicy">AWSShieldDRTAccessPolicy</a>
     * managed policy to this role. For more information see <a href="
     * https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage-attach-detach.html">Attaching
     * and Detaching IAM Policies</a>.</p>
     */
    inline AssociateDRTRoleRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
