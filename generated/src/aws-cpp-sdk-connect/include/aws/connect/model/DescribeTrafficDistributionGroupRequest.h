/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class DescribeTrafficDistributionGroupRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DescribeTrafficDistributionGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrafficDistributionGroup"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline const Aws::String& GetTrafficDistributionGroupId() const { return m_trafficDistributionGroupId; }
    inline bool TrafficDistributionGroupIdHasBeenSet() const { return m_trafficDistributionGroupIdHasBeenSet; }
    template<typename TrafficDistributionGroupIdT = Aws::String>
    void SetTrafficDistributionGroupId(TrafficDistributionGroupIdT&& value) { m_trafficDistributionGroupIdHasBeenSet = true; m_trafficDistributionGroupId = std::forward<TrafficDistributionGroupIdT>(value); }
    template<typename TrafficDistributionGroupIdT = Aws::String>
    DescribeTrafficDistributionGroupRequest& WithTrafficDistributionGroupId(TrafficDistributionGroupIdT&& value) { SetTrafficDistributionGroupId(std::forward<TrafficDistributionGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trafficDistributionGroupId;
    bool m_trafficDistributionGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
