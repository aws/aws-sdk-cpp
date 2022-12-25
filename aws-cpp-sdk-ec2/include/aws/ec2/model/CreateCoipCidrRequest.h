/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateCoipCidrRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateCoipCidrRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCoipCidr"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> A customer-owned IP address range to create. </p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p> A customer-owned IP address range to create. </p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p> A customer-owned IP address range to create. </p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p> A customer-owned IP address range to create. </p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p> A customer-owned IP address range to create. </p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p> A customer-owned IP address range to create. </p>
     */
    inline CreateCoipCidrRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p> A customer-owned IP address range to create. </p>
     */
    inline CreateCoipCidrRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p> A customer-owned IP address range to create. </p>
     */
    inline CreateCoipCidrRequest& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p> The ID of the address pool. </p>
     */
    inline const Aws::String& GetCoipPoolId() const{ return m_coipPoolId; }

    /**
     * <p> The ID of the address pool. </p>
     */
    inline bool CoipPoolIdHasBeenSet() const { return m_coipPoolIdHasBeenSet; }

    /**
     * <p> The ID of the address pool. </p>
     */
    inline void SetCoipPoolId(const Aws::String& value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId = value; }

    /**
     * <p> The ID of the address pool. </p>
     */
    inline void SetCoipPoolId(Aws::String&& value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId = std::move(value); }

    /**
     * <p> The ID of the address pool. </p>
     */
    inline void SetCoipPoolId(const char* value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId.assign(value); }

    /**
     * <p> The ID of the address pool. </p>
     */
    inline CreateCoipCidrRequest& WithCoipPoolId(const Aws::String& value) { SetCoipPoolId(value); return *this;}

    /**
     * <p> The ID of the address pool. </p>
     */
    inline CreateCoipCidrRequest& WithCoipPoolId(Aws::String&& value) { SetCoipPoolId(std::move(value)); return *this;}

    /**
     * <p> The ID of the address pool. </p>
     */
    inline CreateCoipCidrRequest& WithCoipPoolId(const char* value) { SetCoipPoolId(value); return *this;}


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
    inline CreateCoipCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_coipPoolId;
    bool m_coipPoolIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
