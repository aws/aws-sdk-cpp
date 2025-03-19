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
   * <p>The <code>ListJobsByStatusRequest</code> structure.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListJobsByStatusRequest">AWS
   * API Reference</a></p>
   */
  class ListJobsByStatusRequest : public ElasticTranscoderRequest
  {
  public:
    AWS_ELASTICTRANSCODER_API ListJobsByStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobsByStatus"; }

    AWS_ELASTICTRANSCODER_API Aws::String SerializePayload() const override;

    AWS_ELASTICTRANSCODER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>To get information about all of the jobs associated with the current AWS
     * account that have a given status, specify the following status:
     * <code>Submitted</code>, <code>Progressing</code>, <code>Complete</code>,
     * <code>Canceled</code>, or <code>Error</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ListJobsByStatusRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> To list jobs in chronological order by the date and time that they were
     * submitted, enter <code>true</code>. To list jobs in reverse chronological order,
     * enter <code>false</code>. </p>
     */
    inline const Aws::String& GetAscending() const { return m_ascending; }
    inline bool AscendingHasBeenSet() const { return m_ascendingHasBeenSet; }
    template<typename AscendingT = Aws::String>
    void SetAscending(AscendingT&& value) { m_ascendingHasBeenSet = true; m_ascending = std::forward<AscendingT>(value); }
    template<typename AscendingT = Aws::String>
    ListJobsByStatusRequest& WithAscending(AscendingT&& value) { SetAscending(std::forward<AscendingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> When Elastic Transcoder returns more than one page of results, use
     * <code>pageToken</code> in subsequent <code>GET</code> requests to get each
     * successive page of results. </p>
     */
    inline const Aws::String& GetPageToken() const { return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    template<typename PageTokenT = Aws::String>
    void SetPageToken(PageTokenT&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::forward<PageTokenT>(value); }
    template<typename PageTokenT = Aws::String>
    ListJobsByStatusRequest& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_ascending;
    bool m_ascendingHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
