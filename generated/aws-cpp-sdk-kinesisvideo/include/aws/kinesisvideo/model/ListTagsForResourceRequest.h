﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_KINESISVIDEO_API ListTagsForResourceRequest : public KinesisVideoRequest
  {
  public:
    ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForResource</code> call is truncated, the response includes a
     * token that you can use in the next request to fetch the next batch of tags. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForResource</code> call is truncated, the response includes a
     * token that you can use in the next request to fetch the next batch of tags. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForResource</code> call is truncated, the response includes a
     * token that you can use in the next request to fetch the next batch of tags. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForResource</code> call is truncated, the response includes a
     * token that you can use in the next request to fetch the next batch of tags. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForResource</code> call is truncated, the response includes a
     * token that you can use in the next request to fetch the next batch of tags. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForResource</code> call is truncated, the response includes a
     * token that you can use in the next request to fetch the next batch of tags. </p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForResource</code> call is truncated, the response includes a
     * token that you can use in the next request to fetch the next batch of tags. </p>
     */
    inline ListTagsForResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify this parameter and the result of a
     * <code>ListTagsForResource</code> call is truncated, the response includes a
     * token that you can use in the next request to fetch the next batch of tags. </p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel for which you want to
     * list tags.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel for which you want to
     * list tags.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel for which you want to
     * list tags.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel for which you want to
     * list tags.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel for which you want to
     * list tags.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel for which you want to
     * list tags.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel for which you want to
     * list tags.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel for which you want to
     * list tags.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
