/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/ivs/model/StreamFilters.h>
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
  class ListStreamsRequest : public IVSRequest
  {
  public:
    AWS_IVS_API ListStreamsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreams"; }

    AWS_IVS_API Aws::String SerializePayload() const override;


    /**
     * <p>Filters the stream list to match the specified criterion.</p>
     */
    inline const StreamFilters& GetFilterBy() const{ return m_filterBy; }

    /**
     * <p>Filters the stream list to match the specified criterion.</p>
     */
    inline bool FilterByHasBeenSet() const { return m_filterByHasBeenSet; }

    /**
     * <p>Filters the stream list to match the specified criterion.</p>
     */
    inline void SetFilterBy(const StreamFilters& value) { m_filterByHasBeenSet = true; m_filterBy = value; }

    /**
     * <p>Filters the stream list to match the specified criterion.</p>
     */
    inline void SetFilterBy(StreamFilters&& value) { m_filterByHasBeenSet = true; m_filterBy = std::move(value); }

    /**
     * <p>Filters the stream list to match the specified criterion.</p>
     */
    inline ListStreamsRequest& WithFilterBy(const StreamFilters& value) { SetFilterBy(value); return *this;}

    /**
     * <p>Filters the stream list to match the specified criterion.</p>
     */
    inline ListStreamsRequest& WithFilterBy(StreamFilters&& value) { SetFilterBy(std::move(value)); return *this;}


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
    inline ListStreamsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListStreamsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The first stream to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListStreamsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The first stream to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListStreamsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    StreamFilters m_filterBy;
    bool m_filterByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
