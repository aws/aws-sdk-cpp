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
    AWS_CONNECT_API DescribeTrafficDistributionGroupRequest();

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
    inline const Aws::String& GetTrafficDistributionGroupId() const{ return m_trafficDistributionGroupId; }
    inline bool TrafficDistributionGroupIdHasBeenSet() const { return m_trafficDistributionGroupIdHasBeenSet; }
    inline void SetTrafficDistributionGroupId(const Aws::String& value) { m_trafficDistributionGroupIdHasBeenSet = true; m_trafficDistributionGroupId = value; }
    inline void SetTrafficDistributionGroupId(Aws::String&& value) { m_trafficDistributionGroupIdHasBeenSet = true; m_trafficDistributionGroupId = std::move(value); }
    inline void SetTrafficDistributionGroupId(const char* value) { m_trafficDistributionGroupIdHasBeenSet = true; m_trafficDistributionGroupId.assign(value); }
    inline DescribeTrafficDistributionGroupRequest& WithTrafficDistributionGroupId(const Aws::String& value) { SetTrafficDistributionGroupId(value); return *this;}
    inline DescribeTrafficDistributionGroupRequest& WithTrafficDistributionGroupId(Aws::String&& value) { SetTrafficDistributionGroupId(std::move(value)); return *this;}
    inline DescribeTrafficDistributionGroupRequest& WithTrafficDistributionGroupId(const char* value) { SetTrafficDistributionGroupId(value); return *this;}
    ///@}
  private:

    Aws::String m_trafficDistributionGroupId;
    bool m_trafficDistributionGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
