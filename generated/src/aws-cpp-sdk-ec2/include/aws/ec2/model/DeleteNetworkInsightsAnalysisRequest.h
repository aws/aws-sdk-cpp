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
  class DeleteNetworkInsightsAnalysisRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteNetworkInsightsAnalysisRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteNetworkInsightsAnalysis"; }

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
    inline DeleteNetworkInsightsAnalysisRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAnalysisId() const { return m_networkInsightsAnalysisId; }
    inline bool NetworkInsightsAnalysisIdHasBeenSet() const { return m_networkInsightsAnalysisIdHasBeenSet; }
    template<typename NetworkInsightsAnalysisIdT = Aws::String>
    void SetNetworkInsightsAnalysisId(NetworkInsightsAnalysisIdT&& value) { m_networkInsightsAnalysisIdHasBeenSet = true; m_networkInsightsAnalysisId = std::forward<NetworkInsightsAnalysisIdT>(value); }
    template<typename NetworkInsightsAnalysisIdT = Aws::String>
    DeleteNetworkInsightsAnalysisRequest& WithNetworkInsightsAnalysisId(NetworkInsightsAnalysisIdT&& value) { SetNetworkInsightsAnalysisId(std::forward<NetworkInsightsAnalysisIdT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_networkInsightsAnalysisId;
    bool m_networkInsightsAnalysisIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
