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
  class ListStageSessionsRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API ListStageSessionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStageSessions"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    /**
     * <p>Maximum number of results to return. Default: 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to return. Default: 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to return. Default: 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to return. Default: 50.</p>
     */
    inline ListStageSessionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The first stage session to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The first stage session to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The first stage session to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The first stage session to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The first stage session to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The first stage session to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListStageSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The first stage session to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListStageSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The first stage session to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListStageSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Stage ARN.</p>
     */
    inline const Aws::String& GetStageArn() const{ return m_stageArn; }

    /**
     * <p>Stage ARN.</p>
     */
    inline bool StageArnHasBeenSet() const { return m_stageArnHasBeenSet; }

    /**
     * <p>Stage ARN.</p>
     */
    inline void SetStageArn(const Aws::String& value) { m_stageArnHasBeenSet = true; m_stageArn = value; }

    /**
     * <p>Stage ARN.</p>
     */
    inline void SetStageArn(Aws::String&& value) { m_stageArnHasBeenSet = true; m_stageArn = std::move(value); }

    /**
     * <p>Stage ARN.</p>
     */
    inline void SetStageArn(const char* value) { m_stageArnHasBeenSet = true; m_stageArn.assign(value); }

    /**
     * <p>Stage ARN.</p>
     */
    inline ListStageSessionsRequest& WithStageArn(const Aws::String& value) { SetStageArn(value); return *this;}

    /**
     * <p>Stage ARN.</p>
     */
    inline ListStageSessionsRequest& WithStageArn(Aws::String&& value) { SetStageArn(std::move(value)); return *this;}

    /**
     * <p>Stage ARN.</p>
     */
    inline ListStageSessionsRequest& WithStageArn(const char* value) { SetStageArn(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_stageArn;
    bool m_stageArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
