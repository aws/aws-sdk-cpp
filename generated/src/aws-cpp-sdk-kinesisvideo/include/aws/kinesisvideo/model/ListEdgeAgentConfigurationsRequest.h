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
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEdgeAgentConfigurations"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    /**
     * <p>The "Internet of Things (IoT) Thing" Arn of the edge agent.</p>
     */
    inline const Aws::String& GetHubDeviceArn() const{ return m_hubDeviceArn; }

    /**
     * <p>The "Internet of Things (IoT) Thing" Arn of the edge agent.</p>
     */
    inline bool HubDeviceArnHasBeenSet() const { return m_hubDeviceArnHasBeenSet; }

    /**
     * <p>The "Internet of Things (IoT) Thing" Arn of the edge agent.</p>
     */
    inline void SetHubDeviceArn(const Aws::String& value) { m_hubDeviceArnHasBeenSet = true; m_hubDeviceArn = value; }

    /**
     * <p>The "Internet of Things (IoT) Thing" Arn of the edge agent.</p>
     */
    inline void SetHubDeviceArn(Aws::String&& value) { m_hubDeviceArnHasBeenSet = true; m_hubDeviceArn = std::move(value); }

    /**
     * <p>The "Internet of Things (IoT) Thing" Arn of the edge agent.</p>
     */
    inline void SetHubDeviceArn(const char* value) { m_hubDeviceArnHasBeenSet = true; m_hubDeviceArn.assign(value); }

    /**
     * <p>The "Internet of Things (IoT) Thing" Arn of the edge agent.</p>
     */
    inline ListEdgeAgentConfigurationsRequest& WithHubDeviceArn(const Aws::String& value) { SetHubDeviceArn(value); return *this;}

    /**
     * <p>The "Internet of Things (IoT) Thing" Arn of the edge agent.</p>
     */
    inline ListEdgeAgentConfigurationsRequest& WithHubDeviceArn(Aws::String&& value) { SetHubDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The "Internet of Things (IoT) Thing" Arn of the edge agent.</p>
     */
    inline ListEdgeAgentConfigurationsRequest& WithHubDeviceArn(const char* value) { SetHubDeviceArn(value); return *this;}


    /**
     * <p>The maximum number of edge configurations to return in the response. The
     * default is 5.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of edge configurations to return in the response. The
     * default is 5.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of edge configurations to return in the response. The
     * default is 5.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of edge configurations to return in the response. The
     * default is 5.</p>
     */
    inline ListEdgeAgentConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListEdgeAgentConfigurations</code> operation is truncated, the call
     * returns the <code>NextToken</code> in the response. To get another batch of edge
     * configurations, provide this token in your next request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListEdgeAgentConfigurations</code> operation is truncated, the call
     * returns the <code>NextToken</code> in the response. To get another batch of edge
     * configurations, provide this token in your next request. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListEdgeAgentConfigurations</code> operation is truncated, the call
     * returns the <code>NextToken</code> in the response. To get another batch of edge
     * configurations, provide this token in your next request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListEdgeAgentConfigurations</code> operation is truncated, the call
     * returns the <code>NextToken</code> in the response. To get another batch of edge
     * configurations, provide this token in your next request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListEdgeAgentConfigurations</code> operation is truncated, the call
     * returns the <code>NextToken</code> in the response. To get another batch of edge
     * configurations, provide this token in your next request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListEdgeAgentConfigurations</code> operation is truncated, the call
     * returns the <code>NextToken</code> in the response. To get another batch of edge
     * configurations, provide this token in your next request. </p>
     */
    inline ListEdgeAgentConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListEdgeAgentConfigurations</code> operation is truncated, the call
     * returns the <code>NextToken</code> in the response. To get another batch of edge
     * configurations, provide this token in your next request. </p>
     */
    inline ListEdgeAgentConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify this parameter, when the result of a
     * <code>ListEdgeAgentConfigurations</code> operation is truncated, the call
     * returns the <code>NextToken</code> in the response. To get another batch of edge
     * configurations, provide this token in your next request. </p>
     */
    inline ListEdgeAgentConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_hubDeviceArn;
    bool m_hubDeviceArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
