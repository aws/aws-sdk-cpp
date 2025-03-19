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
  class DeleteNetworkInsightsPathRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteNetworkInsightsPathRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteNetworkInsightsPath"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DeleteNetworkInsightsPathRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the path.</p>
     */
    inline const Aws::String& GetNetworkInsightsPathId() const { return m_networkInsightsPathId; }
    inline bool NetworkInsightsPathIdHasBeenSet() const { return m_networkInsightsPathIdHasBeenSet; }
    template<typename NetworkInsightsPathIdT = Aws::String>
    void SetNetworkInsightsPathId(NetworkInsightsPathIdT&& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = std::forward<NetworkInsightsPathIdT>(value); }
    template<typename NetworkInsightsPathIdT = Aws::String>
    DeleteNetworkInsightsPathRequest& WithNetworkInsightsPathId(NetworkInsightsPathIdT&& value) { SetNetworkInsightsPathId(std::forward<NetworkInsightsPathIdT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_networkInsightsPathId;
    bool m_networkInsightsPathIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
