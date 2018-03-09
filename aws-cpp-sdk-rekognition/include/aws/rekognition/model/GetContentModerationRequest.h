﻿/*
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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/ContentModerationSortBy.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API GetContentModerationRequest : public RekognitionRequest
  {
  public:
    GetContentModerationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContentModeration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier for the content moderation job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier for the content moderation job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The identifier for the content moderation job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The identifier for the content moderation job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The identifier for the content moderation job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline GetContentModerationRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier for the content moderation job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline GetContentModerationRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the content moderation job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline GetContentModerationRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>Maximum number of content moderation labels to return. The default is
     * 1000.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of content moderation labels to return. The default is
     * 1000.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of content moderation labels to return. The default is
     * 1000.</p>
     */
    inline GetContentModerationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of content moderation
     * labels.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of content moderation
     * labels.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of content moderation
     * labels.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of content moderation
     * labels.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of content moderation
     * labels.</p>
     */
    inline GetContentModerationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of content moderation
     * labels.</p>
     */
    inline GetContentModerationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of content moderation
     * labels.</p>
     */
    inline GetContentModerationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Sort to use for elements in the <code>ModerationLabelDetections</code> array.
     * Use <code>TIMESTAMP</code> to sort array elements by the time labels are
     * detected. Use <code>NAME</code> to alphabetically group elements for a label
     * together. Within each label group, the array element are sorted by detection
     * confidence. The default sort is by <code>TIMESTAMP</code>.</p>
     */
    inline const ContentModerationSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Sort to use for elements in the <code>ModerationLabelDetections</code> array.
     * Use <code>TIMESTAMP</code> to sort array elements by the time labels are
     * detected. Use <code>NAME</code> to alphabetically group elements for a label
     * together. Within each label group, the array element are sorted by detection
     * confidence. The default sort is by <code>TIMESTAMP</code>.</p>
     */
    inline void SetSortBy(const ContentModerationSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Sort to use for elements in the <code>ModerationLabelDetections</code> array.
     * Use <code>TIMESTAMP</code> to sort array elements by the time labels are
     * detected. Use <code>NAME</code> to alphabetically group elements for a label
     * together. Within each label group, the array element are sorted by detection
     * confidence. The default sort is by <code>TIMESTAMP</code>.</p>
     */
    inline void SetSortBy(ContentModerationSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Sort to use for elements in the <code>ModerationLabelDetections</code> array.
     * Use <code>TIMESTAMP</code> to sort array elements by the time labels are
     * detected. Use <code>NAME</code> to alphabetically group elements for a label
     * together. Within each label group, the array element are sorted by detection
     * confidence. The default sort is by <code>TIMESTAMP</code>.</p>
     */
    inline GetContentModerationRequest& WithSortBy(const ContentModerationSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Sort to use for elements in the <code>ModerationLabelDetections</code> array.
     * Use <code>TIMESTAMP</code> to sort array elements by the time labels are
     * detected. Use <code>NAME</code> to alphabetically group elements for a label
     * together. Within each label group, the array element are sorted by detection
     * confidence. The default sort is by <code>TIMESTAMP</code>.</p>
     */
    inline GetContentModerationRequest& WithSortBy(ContentModerationSortBy&& value) { SetSortBy(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    ContentModerationSortBy m_sortBy;
    bool m_sortByHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
