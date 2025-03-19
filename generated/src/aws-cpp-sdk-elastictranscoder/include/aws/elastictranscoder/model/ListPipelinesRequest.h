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
   * <p>The <code>ListPipelineRequest</code> structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListPipelinesRequest">AWS
   * API Reference</a></p>
   */
  class ListPipelinesRequest : public ElasticTranscoderRequest
  {
  public:
    AWS_ELASTICTRANSCODER_API ListPipelinesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPipelines"; }

    AWS_ELASTICTRANSCODER_API Aws::String SerializePayload() const override;

    AWS_ELASTICTRANSCODER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>To list pipelines in chronological order by the date and time that they were
     * created, enter <code>true</code>. To list pipelines in reverse chronological
     * order, enter <code>false</code>.</p>
     */
    inline const Aws::String& GetAscending() const { return m_ascending; }
    inline bool AscendingHasBeenSet() const { return m_ascendingHasBeenSet; }
    template<typename AscendingT = Aws::String>
    void SetAscending(AscendingT&& value) { m_ascendingHasBeenSet = true; m_ascending = std::forward<AscendingT>(value); }
    template<typename AscendingT = Aws::String>
    ListPipelinesRequest& WithAscending(AscendingT&& value) { SetAscending(std::forward<AscendingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline const Aws::String& GetPageToken() const { return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    template<typename PageTokenT = Aws::String>
    void SetPageToken(PageTokenT&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::forward<PageTokenT>(value); }
    template<typename PageTokenT = Aws::String>
    ListPipelinesRequest& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ascending;
    bool m_ascendingHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
