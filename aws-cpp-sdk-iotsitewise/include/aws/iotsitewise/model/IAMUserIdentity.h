/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains information about an AWS Identity and Access Management (IAM)
   * user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/IAMUserIdentity">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API IAMUserIdentity
  {
  public:
    IAMUserIdentity();
    IAMUserIdentity(Aws::Utils::Json::JsonView jsonValue);
    IAMUserIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the IAM user. IAM users must have the
     * <code>iotsitewise:CreatePresignedPortalUrl</code> permission to sign in to the
     * portal. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>  <p>If you delete the IAM user,
     * access policies that contain this identity include an empty <code>arn</code>.
     * You can delete the access policy for the IAM user that no longer exists.</p>
     * 
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the IAM user. IAM users must have the
     * <code>iotsitewise:CreatePresignedPortalUrl</code> permission to sign in to the
     * portal. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>  <p>If you delete the IAM user,
     * access policies that contain this identity include an empty <code>arn</code>.
     * You can delete the access policy for the IAM user that no longer exists.</p>
     * 
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the IAM user. IAM users must have the
     * <code>iotsitewise:CreatePresignedPortalUrl</code> permission to sign in to the
     * portal. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>  <p>If you delete the IAM user,
     * access policies that contain this identity include an empty <code>arn</code>.
     * You can delete the access policy for the IAM user that no longer exists.</p>
     * 
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the IAM user. IAM users must have the
     * <code>iotsitewise:CreatePresignedPortalUrl</code> permission to sign in to the
     * portal. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>  <p>If you delete the IAM user,
     * access policies that contain this identity include an empty <code>arn</code>.
     * You can delete the access policy for the IAM user that no longer exists.</p>
     * 
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the IAM user. IAM users must have the
     * <code>iotsitewise:CreatePresignedPortalUrl</code> permission to sign in to the
     * portal. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>  <p>If you delete the IAM user,
     * access policies that contain this identity include an empty <code>arn</code>.
     * You can delete the access policy for the IAM user that no longer exists.</p>
     * 
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the IAM user. IAM users must have the
     * <code>iotsitewise:CreatePresignedPortalUrl</code> permission to sign in to the
     * portal. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>  <p>If you delete the IAM user,
     * access policies that contain this identity include an empty <code>arn</code>.
     * You can delete the access policy for the IAM user that no longer exists.</p>
     * 
     */
    inline IAMUserIdentity& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the IAM user. IAM users must have the
     * <code>iotsitewise:CreatePresignedPortalUrl</code> permission to sign in to the
     * portal. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>  <p>If you delete the IAM user,
     * access policies that contain this identity include an empty <code>arn</code>.
     * You can delete the access policy for the IAM user that no longer exists.</p>
     * 
     */
    inline IAMUserIdentity& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM user. IAM users must have the
     * <code>iotsitewise:CreatePresignedPortalUrl</code> permission to sign in to the
     * portal. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>  <p>If you delete the IAM user,
     * access policies that contain this identity include an empty <code>arn</code>.
     * You can delete the access policy for the IAM user that no longer exists.</p>
     * 
     */
    inline IAMUserIdentity& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
