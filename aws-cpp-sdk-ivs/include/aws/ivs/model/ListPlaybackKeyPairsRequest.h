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
  class AWS_IVS_API ListPlaybackKeyPairsRequest : public IVSRequest
  {
  public:
    ListPlaybackKeyPairsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPlaybackKeyPairs"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Maximum number of key pairs to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Maximum number of key pairs to return.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Maximum number of key pairs to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Maximum number of key pairs to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Maximum number of key pairs to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Maximum number of key pairs to return.</p>
     */
    inline ListPlaybackKeyPairsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Maximum number of key pairs to return.</p>
     */
    inline ListPlaybackKeyPairsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Maximum number of key pairs to return.</p>
     */
    inline ListPlaybackKeyPairsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The first key pair to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The first key pair to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The first key pair to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The first key pair to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListPlaybackKeyPairsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
