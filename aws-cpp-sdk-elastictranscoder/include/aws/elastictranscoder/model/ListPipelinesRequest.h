/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/ElasticTranscoderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The <code>ListPipelineRequest</code> structure.</p>
   */
  class AWS_ELASTICTRANSCODER_API ListPipelinesRequest : public ElasticTranscoderRequest
  {
  public:
    ListPipelinesRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>To list pipelines in chronological order by the date and time that they were
     * created, enter <code>true</code>. To list pipelines in reverse chronological
     * order, enter <code>false</code>.</p>
     */
    inline const Aws::String& GetAscending() const{ return m_ascending; }

    /**
     * <p>To list pipelines in chronological order by the date and time that they were
     * created, enter <code>true</code>. To list pipelines in reverse chronological
     * order, enter <code>false</code>.</p>
     */
    inline void SetAscending(const Aws::String& value) { m_ascendingHasBeenSet = true; m_ascending = value; }

    /**
     * <p>To list pipelines in chronological order by the date and time that they were
     * created, enter <code>true</code>. To list pipelines in reverse chronological
     * order, enter <code>false</code>.</p>
     */
    inline void SetAscending(Aws::String&& value) { m_ascendingHasBeenSet = true; m_ascending = value; }

    /**
     * <p>To list pipelines in chronological order by the date and time that they were
     * created, enter <code>true</code>. To list pipelines in reverse chronological
     * order, enter <code>false</code>.</p>
     */
    inline void SetAscending(const char* value) { m_ascendingHasBeenSet = true; m_ascending.assign(value); }

    /**
     * <p>To list pipelines in chronological order by the date and time that they were
     * created, enter <code>true</code>. To list pipelines in reverse chronological
     * order, enter <code>false</code>.</p>
     */
    inline ListPipelinesRequest& WithAscending(const Aws::String& value) { SetAscending(value); return *this;}

    /**
     * <p>To list pipelines in chronological order by the date and time that they were
     * created, enter <code>true</code>. To list pipelines in reverse chronological
     * order, enter <code>false</code>.</p>
     */
    inline ListPipelinesRequest& WithAscending(Aws::String&& value) { SetAscending(value); return *this;}

    /**
     * <p>To list pipelines in chronological order by the date and time that they were
     * created, enter <code>true</code>. To list pipelines in reverse chronological
     * order, enter <code>false</code>.</p>
     */
    inline ListPipelinesRequest& WithAscending(const char* value) { SetAscending(value); return *this;}

    /**
     * <p>When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p>When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline ListPipelinesRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline ListPipelinesRequest& WithPageToken(Aws::String&& value) { SetPageToken(value); return *this;}

    /**
     * <p>When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline ListPipelinesRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}

  private:
    Aws::String m_ascending;
    bool m_ascendingHasBeenSet;
    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
