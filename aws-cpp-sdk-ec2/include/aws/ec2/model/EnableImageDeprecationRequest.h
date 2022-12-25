/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class EnableImageDeprecationRequest : public EC2Request
  {
  public:
    AWS_EC2_API EnableImageDeprecationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableImageDeprecation"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline EnableImageDeprecationRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline EnableImageDeprecationRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline EnableImageDeprecationRequest& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specify a
     * value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     * <p>You can’t specify a date in the past. The upper limit for
     * <code>DeprecateAt</code> is 10 years from now, except for public AMIs, where the
     * upper limit is 2 years from the creation date.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecateAt() const{ return m_deprecateAt; }

    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specify a
     * value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     * <p>You can’t specify a date in the past. The upper limit for
     * <code>DeprecateAt</code> is 10 years from now, except for public AMIs, where the
     * upper limit is 2 years from the creation date.</p>
     */
    inline bool DeprecateAtHasBeenSet() const { return m_deprecateAtHasBeenSet; }

    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specify a
     * value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     * <p>You can’t specify a date in the past. The upper limit for
     * <code>DeprecateAt</code> is 10 years from now, except for public AMIs, where the
     * upper limit is 2 years from the creation date.</p>
     */
    inline void SetDeprecateAt(const Aws::Utils::DateTime& value) { m_deprecateAtHasBeenSet = true; m_deprecateAt = value; }

    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specify a
     * value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     * <p>You can’t specify a date in the past. The upper limit for
     * <code>DeprecateAt</code> is 10 years from now, except for public AMIs, where the
     * upper limit is 2 years from the creation date.</p>
     */
    inline void SetDeprecateAt(Aws::Utils::DateTime&& value) { m_deprecateAtHasBeenSet = true; m_deprecateAt = std::move(value); }

    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specify a
     * value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     * <p>You can’t specify a date in the past. The upper limit for
     * <code>DeprecateAt</code> is 10 years from now, except for public AMIs, where the
     * upper limit is 2 years from the creation date.</p>
     */
    inline EnableImageDeprecationRequest& WithDeprecateAt(const Aws::Utils::DateTime& value) { SetDeprecateAt(value); return *this;}

    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specify a
     * value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     * <p>You can’t specify a date in the past. The upper limit for
     * <code>DeprecateAt</code> is 10 years from now, except for public AMIs, where the
     * upper limit is 2 years from the creation date.</p>
     */
    inline EnableImageDeprecationRequest& WithDeprecateAt(Aws::Utils::DateTime&& value) { SetDeprecateAt(std::move(value)); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline EnableImageDeprecationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::Utils::DateTime m_deprecateAt;
    bool m_deprecateAtHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
