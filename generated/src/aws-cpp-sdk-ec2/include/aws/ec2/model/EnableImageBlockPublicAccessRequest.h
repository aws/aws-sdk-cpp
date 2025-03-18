/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/ImageBlockPublicAccessEnabledState.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class EnableImageBlockPublicAccessRequest : public EC2Request
  {
  public:
    AWS_EC2_API EnableImageBlockPublicAccessRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableImageBlockPublicAccess"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Specify <code>block-new-sharing</code> to enable block public access for AMIs
     * at the account level in the specified Region. This will block any attempt to
     * publicly share your AMIs in the specified Region.</p>
     */
    inline ImageBlockPublicAccessEnabledState GetImageBlockPublicAccessState() const { return m_imageBlockPublicAccessState; }
    inline bool ImageBlockPublicAccessStateHasBeenSet() const { return m_imageBlockPublicAccessStateHasBeenSet; }
    inline void SetImageBlockPublicAccessState(ImageBlockPublicAccessEnabledState value) { m_imageBlockPublicAccessStateHasBeenSet = true; m_imageBlockPublicAccessState = value; }
    inline EnableImageBlockPublicAccessRequest& WithImageBlockPublicAccessState(ImageBlockPublicAccessEnabledState value) { SetImageBlockPublicAccessState(value); return *this;}
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
    inline EnableImageBlockPublicAccessRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    ImageBlockPublicAccessEnabledState m_imageBlockPublicAccessState{ImageBlockPublicAccessEnabledState::NOT_SET};
    bool m_imageBlockPublicAccessStateHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
