/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class AWS_IOTANALYTICS_API DescribeChannelRequest : public IoTAnalyticsRequest
  {
  public:
    DescribeChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeChannel"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the channel whose information is retrieved.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel whose information is retrieved.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel whose information is retrieved.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel whose information is retrieved.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel whose information is retrieved.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel whose information is retrieved.</p>
     */
    inline DescribeChannelRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel whose information is retrieved.</p>
     */
    inline DescribeChannelRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel whose information is retrieved.</p>
     */
    inline DescribeChannelRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>If true, additional statistical information about the channel is included in
     * the response. This feature cannot be used with a channel whose S3 storage is
     * customer-managed.</p>
     */
    inline bool GetIncludeStatistics() const{ return m_includeStatistics; }

    /**
     * <p>If true, additional statistical information about the channel is included in
     * the response. This feature cannot be used with a channel whose S3 storage is
     * customer-managed.</p>
     */
    inline bool IncludeStatisticsHasBeenSet() const { return m_includeStatisticsHasBeenSet; }

    /**
     * <p>If true, additional statistical information about the channel is included in
     * the response. This feature cannot be used with a channel whose S3 storage is
     * customer-managed.</p>
     */
    inline void SetIncludeStatistics(bool value) { m_includeStatisticsHasBeenSet = true; m_includeStatistics = value; }

    /**
     * <p>If true, additional statistical information about the channel is included in
     * the response. This feature cannot be used with a channel whose S3 storage is
     * customer-managed.</p>
     */
    inline DescribeChannelRequest& WithIncludeStatistics(bool value) { SetIncludeStatistics(value); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet;

    bool m_includeStatistics;
    bool m_includeStatisticsHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
