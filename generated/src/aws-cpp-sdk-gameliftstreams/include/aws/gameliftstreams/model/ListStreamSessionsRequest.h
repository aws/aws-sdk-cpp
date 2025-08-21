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
  class ListStreamSessionsRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API ListStreamSessionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreamSessions"; }

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
    inline ListStreamSessionsRequest& WithStatus(StreamSessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter by the exported files status. You can specify one status in each
     * request to retrieve only sessions that currently have that exported files
     * status.</p> <p> Exported files can be in one of the following states: </p> <ul>
     * <li> <p> <code>SUCCEEDED</code>: The exported files are successfully stored in
     * an S3 bucket.</p> </li> <li> <p> <code>FAILED</code>: The session ended but
     * Amazon GameLift Streams couldn't collect and upload the files to S3.</p> </li>
     * <li> <p> <code>PENDING</code>: Either the stream session is still in progress,
     * or uploading the exported files to the S3 bucket is in progress.</p> </li> </ul>
     */
    inline ExportFilesStatus GetExportFilesStatus() const { return m_exportFilesStatus; }
    inline bool ExportFilesStatusHasBeenSet() const { return m_exportFilesStatusHasBeenSet; }
    inline void SetExportFilesStatus(ExportFilesStatus value) { m_exportFilesStatusHasBeenSet = true; m_exportFilesStatus = value; }
    inline ListStreamSessionsRequest& WithExportFilesStatus(ExportFilesStatus value) { SetExportFilesStatus(value); return *this;}
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
    ListStreamSessionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline ListStreamSessionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of a Amazon GameLift Streams stream group to retrieve
     * the stream session for. You can use either the stream group ID or the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a>.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    ListStreamSessionsRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
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

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
