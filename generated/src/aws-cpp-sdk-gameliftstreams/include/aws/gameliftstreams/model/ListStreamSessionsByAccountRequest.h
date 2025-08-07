/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/gameliftstreams/model/StreamSessionStatus.h>
#include <aws/gameliftstreams/model/ExportFilesStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GameLiftStreams
{
namespace Model
{

  /**
   */
  class ListStreamSessionsByAccountRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API ListStreamSessionsByAccountRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreamSessionsByAccount"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;

    AWS_GAMELIFTSTREAMS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Filter by the stream session status. You can specify one status in each
     * request to retrieve only sessions that are currently in that status.</p>
     */
    inline StreamSessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StreamSessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListStreamSessionsByAccountRequest& WithStatus(StreamSessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter by the exported files status. You can specify one status in each
     * request to retrieve only sessions that currently have that exported files
     * status.</p>
     */
    inline ExportFilesStatus GetExportFilesStatus() const { return m_exportFilesStatus; }
    inline bool ExportFilesStatusHasBeenSet() const { return m_exportFilesStatusHasBeenSet; }
    inline void SetExportFilesStatus(ExportFilesStatus value) { m_exportFilesStatusHasBeenSet = true; m_exportFilesStatus = value; }
    inline ListStreamSessionsByAccountRequest& WithExportFilesStatus(ExportFilesStatus value) { SetExportFilesStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that marks the start of the next set of results. Use this token
     * when you retrieve results as sequential pages. To get the first page of results,
     * omit a token value. To get the remaining pages, provide the token returned with
     * the previous result set. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStreamSessionsByAccountRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of results to return. Use this parameter with
     * <code>NextToken</code> to return results in sequential pages. Default value is
     * <code>25</code>. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListStreamSessionsByAccountRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    StreamSessionStatus m_status{StreamSessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ExportFilesStatus m_exportFilesStatus{ExportFilesStatus::NOT_SET};
    bool m_exportFilesStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
