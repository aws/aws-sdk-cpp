/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class ListEdgeAgentConfigurationsRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEdgeAgentConfigurations"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The "Internet of Things (IoT) Thing" Arn of the edge agent.</p>
     */
    inline const Aws::String& GetHubDeviceArn() const { return m_hubDeviceArn; }
    inline bool HubDeviceArnHasBeenSet() const { return m_hubDeviceArnHasBeenSet; }
    template<typename HubDeviceArnT = Aws::String>
    void SetHubDeviceArn(HubDeviceArnT&& value) { m_hubDeviceArnHasBeenSet = true; m_hubDeviceArn = std::forward<HubDeviceArnT>(value); }
    template<typename HubDeviceArnT = Aws::String>
    ListEdgeAgentConfigurationsRequest& WithHubDeviceArn(HubDeviceArnT&& value) { SetHubDeviceArn(std::forward<HubDeviceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of edge configurations to return in the response. The
     * default is 5.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEdgeAgentConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListEdgeAgentConfigurations</code> operation is truncated, the call
     * returns the <code>NextToken</code> in the response. To get another batch of edge
     * configurations, provide this token in your next request. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEdgeAgentConfigurationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hubDeviceArn;
    bool m_hubDeviceArnHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
