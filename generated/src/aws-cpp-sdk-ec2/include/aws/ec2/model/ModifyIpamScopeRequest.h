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
  class ModifyIpamScopeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyIpamScopeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIpamScope"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyIpamScopeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the scope you want to modify.</p>
     */
    inline const Aws::String& GetIpamScopeId() const{ return m_ipamScopeId; }

    /**
     * <p>The ID of the scope you want to modify.</p>
     */
    inline bool IpamScopeIdHasBeenSet() const { return m_ipamScopeIdHasBeenSet; }

    /**
     * <p>The ID of the scope you want to modify.</p>
     */
    inline void SetIpamScopeId(const Aws::String& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = value; }

    /**
     * <p>The ID of the scope you want to modify.</p>
     */
    inline void SetIpamScopeId(Aws::String&& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = std::move(value); }

    /**
     * <p>The ID of the scope you want to modify.</p>
     */
    inline void SetIpamScopeId(const char* value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId.assign(value); }

    /**
     * <p>The ID of the scope you want to modify.</p>
     */
    inline ModifyIpamScopeRequest& WithIpamScopeId(const Aws::String& value) { SetIpamScopeId(value); return *this;}

    /**
     * <p>The ID of the scope you want to modify.</p>
     */
    inline ModifyIpamScopeRequest& WithIpamScopeId(Aws::String&& value) { SetIpamScopeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the scope you want to modify.</p>
     */
    inline ModifyIpamScopeRequest& WithIpamScopeId(const char* value) { SetIpamScopeId(value); return *this;}


    /**
     * <p>The description of the scope you want to modify.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the scope you want to modify.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the scope you want to modify.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the scope you want to modify.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the scope you want to modify.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the scope you want to modify.</p>
     */
    inline ModifyIpamScopeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the scope you want to modify.</p>
     */
    inline ModifyIpamScopeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the scope you want to modify.</p>
     */
    inline ModifyIpamScopeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamScopeId;
    bool m_ipamScopeIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
