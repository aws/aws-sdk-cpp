/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/StreamNameCondition.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class ListStreamsRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API ListStreamsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreams"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    /**
     * <p>The maximum number of streams to return in the response. The default is
     * 10,000.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of streams to return in the response. The default is
     * 10,000.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of streams to return in the response. The default is
     * 10,000.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of streams to return in the response. The default is
     * 10,000.</p>
     */
    inline ListStreamsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If you specify this parameter, when the result of a <code>ListStreams</code>
     * operation is truncated, the call returns the <code>NextToken</code> in the
     * response. To get another batch of streams, provide this token in your next
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify this parameter, when the result of a <code>ListStreams</code>
     * operation is truncated, the call returns the <code>NextToken</code> in the
     * response. To get another batch of streams, provide this token in your next
     * request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you specify this parameter, when the result of a <code>ListStreams</code>
     * operation is truncated, the call returns the <code>NextToken</code> in the
     * response. To get another batch of streams, provide this token in your next
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you specify this parameter, when the result of a <code>ListStreams</code>
     * operation is truncated, the call returns the <code>NextToken</code> in the
     * response. To get another batch of streams, provide this token in your next
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you specify this parameter, when the result of a <code>ListStreams</code>
     * operation is truncated, the call returns the <code>NextToken</code> in the
     * response. To get another batch of streams, provide this token in your next
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you specify this parameter, when the result of a <code>ListStreams</code>
     * operation is truncated, the call returns the <code>NextToken</code> in the
     * response. To get another batch of streams, provide this token in your next
     * request.</p>
     */
    inline ListStreamsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify this parameter, when the result of a <code>ListStreams</code>
     * operation is truncated, the call returns the <code>NextToken</code> in the
     * response. To get another batch of streams, provide this token in your next
     * request.</p>
     */
    inline ListStreamsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify this parameter, when the result of a <code>ListStreams</code>
     * operation is truncated, the call returns the <code>NextToken</code> in the
     * response. To get another batch of streams, provide this token in your next
     * request.</p>
     */
    inline ListStreamsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Optional: Returns only streams that satisfy a specific condition. Currently,
     * you can specify only the prefix of a stream name as a condition. </p>
     */
    inline const StreamNameCondition& GetStreamNameCondition() const{ return m_streamNameCondition; }

    /**
     * <p>Optional: Returns only streams that satisfy a specific condition. Currently,
     * you can specify only the prefix of a stream name as a condition. </p>
     */
    inline bool StreamNameConditionHasBeenSet() const { return m_streamNameConditionHasBeenSet; }

    /**
     * <p>Optional: Returns only streams that satisfy a specific condition. Currently,
     * you can specify only the prefix of a stream name as a condition. </p>
     */
    inline void SetStreamNameCondition(const StreamNameCondition& value) { m_streamNameConditionHasBeenSet = true; m_streamNameCondition = value; }

    /**
     * <p>Optional: Returns only streams that satisfy a specific condition. Currently,
     * you can specify only the prefix of a stream name as a condition. </p>
     */
    inline void SetStreamNameCondition(StreamNameCondition&& value) { m_streamNameConditionHasBeenSet = true; m_streamNameCondition = std::move(value); }

    /**
     * <p>Optional: Returns only streams that satisfy a specific condition. Currently,
     * you can specify only the prefix of a stream name as a condition. </p>
     */
    inline ListStreamsRequest& WithStreamNameCondition(const StreamNameCondition& value) { SetStreamNameCondition(value); return *this;}

    /**
     * <p>Optional: Returns only streams that satisfy a specific condition. Currently,
     * you can specify only the prefix of a stream name as a condition. </p>
     */
    inline ListStreamsRequest& WithStreamNameCondition(StreamNameCondition&& value) { SetStreamNameCondition(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    StreamNameCondition m_streamNameCondition;
    bool m_streamNameConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
