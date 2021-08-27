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
  class AWS_IVS_API ListChannelsRequest : public IVSRequest
  {
  public:
    ListChannelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChannels"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Filters the channel list to match the specified name.</p>
     */
    inline const Aws::String& GetFilterByName() const{ return m_filterByName; }

    /**
     * <p>Filters the channel list to match the specified name.</p>
     */
    inline bool FilterByNameHasBeenSet() const { return m_filterByNameHasBeenSet; }

    /**
     * <p>Filters the channel list to match the specified name.</p>
     */
    inline void SetFilterByName(const Aws::String& value) { m_filterByNameHasBeenSet = true; m_filterByName = value; }

    /**
     * <p>Filters the channel list to match the specified name.</p>
     */
    inline void SetFilterByName(Aws::String&& value) { m_filterByNameHasBeenSet = true; m_filterByName = std::move(value); }

    /**
     * <p>Filters the channel list to match the specified name.</p>
     */
    inline void SetFilterByName(const char* value) { m_filterByNameHasBeenSet = true; m_filterByName.assign(value); }

    /**
     * <p>Filters the channel list to match the specified name.</p>
     */
    inline ListChannelsRequest& WithFilterByName(const Aws::String& value) { SetFilterByName(value); return *this;}

    /**
     * <p>Filters the channel list to match the specified name.</p>
     */
    inline ListChannelsRequest& WithFilterByName(Aws::String&& value) { SetFilterByName(std::move(value)); return *this;}

    /**
     * <p>Filters the channel list to match the specified name.</p>
     */
    inline ListChannelsRequest& WithFilterByName(const char* value) { SetFilterByName(value); return *this;}


    /**
     * <p>The first channel to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The first channel to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The first channel to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The first channel to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The first channel to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The first channel to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListChannelsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The first channel to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListChannelsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The first channel to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListChannelsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Maximum number of channels to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of channels to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of channels to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of channels to return.</p>
     */
    inline ListChannelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_filterByName;
    bool m_filterByNameHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
