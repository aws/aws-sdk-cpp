/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/SpotFleetRequestConfigData.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for RequestSpotFleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestSpotFleetRequest">AWS
   * API Reference</a></p>
   */
  class RequestSpotFleetRequest : public EC2Request
  {
  public:
    AWS_EC2_API RequestSpotFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RequestSpotFleet"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline RequestSpotFleetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The configuration for the Spot Fleet request.</p>
     */
    inline const SpotFleetRequestConfigData& GetSpotFleetRequestConfig() const{ return m_spotFleetRequestConfig; }

    /**
     * <p>The configuration for the Spot Fleet request.</p>
     */
    inline bool SpotFleetRequestConfigHasBeenSet() const { return m_spotFleetRequestConfigHasBeenSet; }

    /**
     * <p>The configuration for the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestConfig(const SpotFleetRequestConfigData& value) { m_spotFleetRequestConfigHasBeenSet = true; m_spotFleetRequestConfig = value; }

    /**
     * <p>The configuration for the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestConfig(SpotFleetRequestConfigData&& value) { m_spotFleetRequestConfigHasBeenSet = true; m_spotFleetRequestConfig = std::move(value); }

    /**
     * <p>The configuration for the Spot Fleet request.</p>
     */
    inline RequestSpotFleetRequest& WithSpotFleetRequestConfig(const SpotFleetRequestConfigData& value) { SetSpotFleetRequestConfig(value); return *this;}

    /**
     * <p>The configuration for the Spot Fleet request.</p>
     */
    inline RequestSpotFleetRequest& WithSpotFleetRequestConfig(SpotFleetRequestConfigData&& value) { SetSpotFleetRequestConfig(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    SpotFleetRequestConfigData m_spotFleetRequestConfig;
    bool m_spotFleetRequestConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
