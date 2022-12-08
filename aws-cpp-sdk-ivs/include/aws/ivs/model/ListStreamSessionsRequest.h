/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class ListStreamSessionsRequest : public IVSRequest
  {
  public:
    AWS_IVS_API ListStreamSessionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreamSessions"; }

    AWS_IVS_API Aws::String SerializePayload() const override;


    /**
     * <p>Channel ARN used to filter the list.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>Channel ARN used to filter the list.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>Channel ARN used to filter the list.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>Channel ARN used to filter the list.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>Channel ARN used to filter the list.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>Channel ARN used to filter the list.</p>
     */
    inline ListStreamSessionsRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>Channel ARN used to filter the list.</p>
     */
    inline ListStreamSessionsRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>Channel ARN used to filter the list.</p>
     */
    inline ListStreamSessionsRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>Maximum number of streams to return. Default: 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of streams to return. Default: 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of streams to return. Default: 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of streams to return. Default: 100.</p>
     */
    inline ListStreamSessionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The first stream to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The first stream to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The first stream to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The first stream to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The first stream to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The first stream to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListStreamSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The first stream to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListStreamSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The first stream to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListStreamSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
