﻿/**
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
   * <p>Contains the parameters for CancelBundleTask.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelBundleTaskRequest">AWS
   * API Reference</a></p>
   */
  class CancelBundleTaskRequest : public EC2Request
  {
  public:
    AWS_EC2_API CancelBundleTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelBundleTask"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the bundle task.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline CancelBundleTaskRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline CancelBundleTaskRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline CancelBundleTaskRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CancelBundleTaskRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
