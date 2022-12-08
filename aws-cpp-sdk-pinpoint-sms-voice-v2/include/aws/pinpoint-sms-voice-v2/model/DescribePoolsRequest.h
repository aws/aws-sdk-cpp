/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/PoolFilter.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class DescribePoolsRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribePoolsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePools"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of pools to find. This is an array of strings that can
     * be either the PoolId or PoolArn.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPoolIds() const{ return m_poolIds; }

    /**
     * <p>The unique identifier of pools to find. This is an array of strings that can
     * be either the PoolId or PoolArn.</p>
     */
    inline bool PoolIdsHasBeenSet() const { return m_poolIdsHasBeenSet; }

    /**
     * <p>The unique identifier of pools to find. This is an array of strings that can
     * be either the PoolId or PoolArn.</p>
     */
    inline void SetPoolIds(const Aws::Vector<Aws::String>& value) { m_poolIdsHasBeenSet = true; m_poolIds = value; }

    /**
     * <p>The unique identifier of pools to find. This is an array of strings that can
     * be either the PoolId or PoolArn.</p>
     */
    inline void SetPoolIds(Aws::Vector<Aws::String>&& value) { m_poolIdsHasBeenSet = true; m_poolIds = std::move(value); }

    /**
     * <p>The unique identifier of pools to find. This is an array of strings that can
     * be either the PoolId or PoolArn.</p>
     */
    inline DescribePoolsRequest& WithPoolIds(const Aws::Vector<Aws::String>& value) { SetPoolIds(value); return *this;}

    /**
     * <p>The unique identifier of pools to find. This is an array of strings that can
     * be either the PoolId or PoolArn.</p>
     */
    inline DescribePoolsRequest& WithPoolIds(Aws::Vector<Aws::String>&& value) { SetPoolIds(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of pools to find. This is an array of strings that can
     * be either the PoolId or PoolArn.</p>
     */
    inline DescribePoolsRequest& AddPoolIds(const Aws::String& value) { m_poolIdsHasBeenSet = true; m_poolIds.push_back(value); return *this; }

    /**
     * <p>The unique identifier of pools to find. This is an array of strings that can
     * be either the PoolId or PoolArn.</p>
     */
    inline DescribePoolsRequest& AddPoolIds(Aws::String&& value) { m_poolIdsHasBeenSet = true; m_poolIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique identifier of pools to find. This is an array of strings that can
     * be either the PoolId or PoolArn.</p>
     */
    inline DescribePoolsRequest& AddPoolIds(const char* value) { m_poolIdsHasBeenSet = true; m_poolIds.push_back(value); return *this; }


    /**
     * <p>An array of PoolFilter objects to filter the results.</p>
     */
    inline const Aws::Vector<PoolFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of PoolFilter objects to filter the results.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of PoolFilter objects to filter the results.</p>
     */
    inline void SetFilters(const Aws::Vector<PoolFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of PoolFilter objects to filter the results.</p>
     */
    inline void SetFilters(Aws::Vector<PoolFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of PoolFilter objects to filter the results.</p>
     */
    inline DescribePoolsRequest& WithFilters(const Aws::Vector<PoolFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of PoolFilter objects to filter the results.</p>
     */
    inline DescribePoolsRequest& WithFilters(Aws::Vector<PoolFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of PoolFilter objects to filter the results.</p>
     */
    inline DescribePoolsRequest& AddFilters(const PoolFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of PoolFilter objects to filter the results.</p>
     */
    inline DescribePoolsRequest& AddFilters(PoolFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribePoolsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribePoolsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline DescribePoolsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline DescribePoolsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_poolIds;
    bool m_poolIdsHasBeenSet = false;

    Aws::Vector<PoolFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
