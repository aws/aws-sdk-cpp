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
    AWS_KINESISVIDEO_API ListStreamsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreams"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The maximum number of streams to return in the response. The default is
     * 10,000.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListStreamsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify this parameter, when the result of a <code>ListStreams</code>
     * operation is truncated, the call returns the <code>NextToken</code> in the
     * response. To get another batch of streams, provide this token in your next
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStreamsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional: Returns only streams that satisfy a specific condition. Currently,
     * you can specify only the prefix of a stream name as a condition. </p>
     */
    inline const StreamNameCondition& GetStreamNameCondition() const { return m_streamNameCondition; }
    inline bool StreamNameConditionHasBeenSet() const { return m_streamNameConditionHasBeenSet; }
    template<typename StreamNameConditionT = StreamNameCondition>
    void SetStreamNameCondition(StreamNameConditionT&& value) { m_streamNameConditionHasBeenSet = true; m_streamNameCondition = std::forward<StreamNameConditionT>(value); }
    template<typename StreamNameConditionT = StreamNameCondition>
    ListStreamsRequest& WithStreamNameCondition(StreamNameConditionT&& value) { SetStreamNameCondition(std::forward<StreamNameConditionT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    StreamNameCondition m_streamNameCondition;
    bool m_streamNameConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
