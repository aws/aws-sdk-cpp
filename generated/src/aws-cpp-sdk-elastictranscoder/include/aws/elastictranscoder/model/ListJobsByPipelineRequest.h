/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/ElasticTranscoderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>The <code>ListJobsByPipelineRequest</code> structure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListJobsByPipelineRequest">AWS
   * API Reference</a></p>
   */
  class ListJobsByPipelineRequest : public ElasticTranscoderRequest
  {
  public:
    AWS_ELASTICTRANSCODER_API ListJobsByPipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobsByPipeline"; }

    AWS_ELASTICTRANSCODER_API Aws::String SerializePayload() const override;

    AWS_ELASTICTRANSCODER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the pipeline for which you want to get job information.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p>The ID of the pipeline for which you want to get job information.</p>
     */
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }

    /**
     * <p>The ID of the pipeline for which you want to get job information.</p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline for which you want to get job information.</p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }

    /**
     * <p>The ID of the pipeline for which you want to get job information.</p>
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * <p>The ID of the pipeline for which you want to get job information.</p>
     */
    inline ListJobsByPipelineRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline for which you want to get job information.</p>
     */
    inline ListJobsByPipelineRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pipeline for which you want to get job information.</p>
     */
    inline ListJobsByPipelineRequest& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}


    /**
     * <p> To list jobs in chronological order by the date and time that they were
     * submitted, enter <code>true</code>. To list jobs in reverse chronological order,
     * enter <code>false</code>. </p>
     */
    inline const Aws::String& GetAscending() const{ return m_ascending; }

    /**
     * <p> To list jobs in chronological order by the date and time that they were
     * submitted, enter <code>true</code>. To list jobs in reverse chronological order,
     * enter <code>false</code>. </p>
     */
    inline bool AscendingHasBeenSet() const { return m_ascendingHasBeenSet; }

    /**
     * <p> To list jobs in chronological order by the date and time that they were
     * submitted, enter <code>true</code>. To list jobs in reverse chronological order,
     * enter <code>false</code>. </p>
     */
    inline void SetAscending(const Aws::String& value) { m_ascendingHasBeenSet = true; m_ascending = value; }

    /**
     * <p> To list jobs in chronological order by the date and time that they were
     * submitted, enter <code>true</code>. To list jobs in reverse chronological order,
     * enter <code>false</code>. </p>
     */
    inline void SetAscending(Aws::String&& value) { m_ascendingHasBeenSet = true; m_ascending = std::move(value); }

    /**
     * <p> To list jobs in chronological order by the date and time that they were
     * submitted, enter <code>true</code>. To list jobs in reverse chronological order,
     * enter <code>false</code>. </p>
     */
    inline void SetAscending(const char* value) { m_ascendingHasBeenSet = true; m_ascending.assign(value); }

    /**
     * <p> To list jobs in chronological order by the date and time that they were
     * submitted, enter <code>true</code>. To list jobs in reverse chronological order,
     * enter <code>false</code>. </p>
     */
    inline ListJobsByPipelineRequest& WithAscending(const Aws::String& value) { SetAscending(value); return *this;}

    /**
     * <p> To list jobs in chronological order by the date and time that they were
     * submitted, enter <code>true</code>. To list jobs in reverse chronological order,
     * enter <code>false</code>. </p>
     */
    inline ListJobsByPipelineRequest& WithAscending(Aws::String&& value) { SetAscending(std::move(value)); return *this;}

    /**
     * <p> To list jobs in chronological order by the date and time that they were
     * submitted, enter <code>true</code>. To list jobs in reverse chronological order,
     * enter <code>false</code>. </p>
     */
    inline ListJobsByPipelineRequest& WithAscending(const char* value) { SetAscending(value); return *this;}


    /**
     * <p> When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p> When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }

    /**
     * <p> When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p> When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }

    /**
     * <p> When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p> When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline ListJobsByPipelineRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p> When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline ListJobsByPipelineRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p> When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline ListJobsByPipelineRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}

  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;

    Aws::String m_ascending;
    bool m_ascendingHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
