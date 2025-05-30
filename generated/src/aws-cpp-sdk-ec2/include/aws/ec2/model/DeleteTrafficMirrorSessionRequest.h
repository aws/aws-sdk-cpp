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
   */
  class DeleteTrafficMirrorSessionRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteTrafficMirrorSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTrafficMirrorSession"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Traffic Mirror session.</p>
     */
    inline const Aws::String& GetTrafficMirrorSessionId() const { return m_trafficMirrorSessionId; }
    inline bool TrafficMirrorSessionIdHasBeenSet() const { return m_trafficMirrorSessionIdHasBeenSet; }
    template<typename TrafficMirrorSessionIdT = Aws::String>
    void SetTrafficMirrorSessionId(TrafficMirrorSessionIdT&& value) { m_trafficMirrorSessionIdHasBeenSet = true; m_trafficMirrorSessionId = std::forward<TrafficMirrorSessionIdT>(value); }
    template<typename TrafficMirrorSessionIdT = Aws::String>
    DeleteTrafficMirrorSessionRequest& WithTrafficMirrorSessionId(TrafficMirrorSessionIdT&& value) { SetTrafficMirrorSessionId(std::forward<TrafficMirrorSessionIdT>(value)); return *this;}
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
    inline DeleteTrafficMirrorSessionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_trafficMirrorSessionId;
    bool m_trafficMirrorSessionIdHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
