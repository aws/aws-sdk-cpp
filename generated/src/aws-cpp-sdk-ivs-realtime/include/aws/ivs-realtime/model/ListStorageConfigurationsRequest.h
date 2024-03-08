/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

  /**
   */
  class ListStorageConfigurationsRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API ListStorageConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStorageConfigurations"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    /**
     * <p>Maximum number of storage configurations to return. Default: your service
     * quota or 100, whichever is smaller.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of storage configurations to return. Default: your service
     * quota or 100, whichever is smaller.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of storage configurations to return. Default: your service
     * quota or 100, whichever is smaller.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of storage configurations to return. Default: your service
     * quota or 100, whichever is smaller.</p>
     */
    inline ListStorageConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The first storage configuration to retrieve. This is used for pagination; see
     * the <code>nextToken</code> response field.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The first storage configuration to retrieve. This is used for pagination; see
     * the <code>nextToken</code> response field.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The first storage configuration to retrieve. This is used for pagination; see
     * the <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The first storage configuration to retrieve. This is used for pagination; see
     * the <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The first storage configuration to retrieve. This is used for pagination; see
     * the <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The first storage configuration to retrieve. This is used for pagination; see
     * the <code>nextToken</code> response field.</p>
     */
    inline ListStorageConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The first storage configuration to retrieve. This is used for pagination; see
     * the <code>nextToken</code> response field.</p>
     */
    inline ListStorageConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The first storage configuration to retrieve. This is used for pagination; see
     * the <code>nextToken</code> response field.</p>
     */
    inline ListStorageConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
