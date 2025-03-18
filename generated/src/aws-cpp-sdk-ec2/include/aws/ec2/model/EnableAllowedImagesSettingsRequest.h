/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/AllowedImagesSettingsEnabledState.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class EnableAllowedImagesSettingsRequest : public EC2Request
  {
  public:
    AWS_EC2_API EnableAllowedImagesSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableAllowedImagesSettings"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Specify <code>enabled</code> to apply the image criteria specified by the
     * Allowed AMIs settings. Specify <code>audit-mode</code> so that you can check
     * which AMIs will be allowed or not allowed by the image criteria.</p>
     */
    inline AllowedImagesSettingsEnabledState GetAllowedImagesSettingsState() const { return m_allowedImagesSettingsState; }
    inline bool AllowedImagesSettingsStateHasBeenSet() const { return m_allowedImagesSettingsStateHasBeenSet; }
    inline void SetAllowedImagesSettingsState(AllowedImagesSettingsEnabledState value) { m_allowedImagesSettingsStateHasBeenSet = true; m_allowedImagesSettingsState = value; }
    inline EnableAllowedImagesSettingsRequest& WithAllowedImagesSettingsState(AllowedImagesSettingsEnabledState value) { SetAllowedImagesSettingsState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline EnableAllowedImagesSettingsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    AllowedImagesSettingsEnabledState m_allowedImagesSettingsState{AllowedImagesSettingsEnabledState::NOT_SET};
    bool m_allowedImagesSettingsStateHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
