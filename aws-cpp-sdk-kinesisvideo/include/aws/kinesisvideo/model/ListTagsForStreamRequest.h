/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class AWS_KINESISVIDEO_API ListTagsForStreamRequest : public KinesisVideoRequest
  {
  public:
    ListTagsForStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForStream"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForStream</code> call is truncated, the response includes a token
     * that you can use in the next request to fetch the next batch of tags.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForStream</code> call is truncated, the response includes a token
     * that you can use in the next request to fetch the next batch of tags.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForStream</code> call is truncated, the response includes a token
     * that you can use in the next request to fetch the next batch of tags.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForStream</code> call is truncated, the response includes a token
     * that you can use in the next request to fetch the next batch of tags.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForStream</code> call is truncated, the response includes a token
     * that you can use in the next request to fetch the next batch of tags.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForStream</code> call is truncated, the response includes a token
     * that you can use in the next request to fetch the next batch of tags.</p>
     */
    inline ListTagsForStreamRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForStream</code> call is truncated, the response includes a token
     * that you can use in the next request to fetch the next batch of tags.</p>
     */
    inline ListTagsForStreamRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForStream</code> call is truncated, the response includes a token
     * that you can use in the next request to fetch the next batch of tags.</p>
     */
    inline ListTagsForStreamRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to list tags
     * for.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to list tags
     * for.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to list tags
     * for.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to list tags
     * for.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to list tags
     * for.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to list tags
     * for.</p>
     */
    inline ListTagsForStreamRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to list tags
     * for.</p>
     */
    inline ListTagsForStreamRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to list tags
     * for.</p>
     */
    inline ListTagsForStreamRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>The name of the stream that you want to list tags for.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream that you want to list tags for.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream that you want to list tags for.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream that you want to list tags for.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream that you want to list tags for.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream that you want to list tags for.</p>
     */
    inline ListTagsForStreamRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream that you want to list tags for.</p>
     */
    inline ListTagsForStreamRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream that you want to list tags for.</p>
     */
    inline ListTagsForStreamRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
