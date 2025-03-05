/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/gameliftstreams/model/ExportFilesStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/StreamSessionStatus.h>
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
    AWS_GAMELIFTSTREAMS_API ListStreamSessionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreamSessions"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;

    AWS_GAMELIFTSTREAMS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Filter by the exported files status. You can specify one status in each
     * request to retrieve only sessions that currently have that exported files
     * status.</p> <p> Exported files can be in one of the following states: </p> <ul>
     * <li> <p> <b>SUCCEEDED</b>: The exported files are successfully stored in S3
     * bucket. </p> </li> <li> <p> <b>FAILED</b>: The session ended but Amazon GameLift
     * Streams couldn't collect and upload the to S3. </p> </li> <li> <p>
     * <b>PENDING</b>: Either the stream session is still in progress, or uploading the
     * exported files to the S3 bucket is in progress. </p> </li> </ul>
     */
    inline const ExportFilesStatus& GetExportFilesStatus() const{ return m_exportFilesStatus; }
    inline bool ExportFilesStatusHasBeenSet() const { return m_exportFilesStatusHasBeenSet; }
    inline void SetExportFilesStatus(const ExportFilesStatus& value) { m_exportFilesStatusHasBeenSet = true; m_exportFilesStatus = value; }
    inline void SetExportFilesStatus(ExportFilesStatus&& value) { m_exportFilesStatusHasBeenSet = true; m_exportFilesStatus = std::move(value); }
    inline ListStreamSessionsRequest& WithExportFilesStatus(const ExportFilesStatus& value) { SetExportFilesStatus(value); return *this;}
    inline ListStreamSessionsRequest& WithExportFilesStatus(ExportFilesStatus&& value) { SetExportFilesStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of a Amazon GameLift Streams stream group to retrieve
     * the stream session for. You can use either the stream group ID or the Amazon
     * Resource Name (ARN).</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline ListStreamSessionsRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline ListStreamSessionsRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline ListStreamSessionsRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of results to return. Use this parameter with
     * <code>NextToken</code> to return results in sequential pages. Default value is
     * <code>25</code>. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListStreamSessionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that marks the start of the next set of results. Use this token
     * when you retrieve results as sequential pages. To get the first page of results,
     * omit a token value. To get the remaining pages, provide the token returned with
     * the previous result set. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListStreamSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStreamSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStreamSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter by the stream session status. You can specify one status in each
     * request to retrieve only sessions that are currently in that status.</p>
     */
    inline const StreamSessionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StreamSessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StreamSessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListStreamSessionsRequest& WithStatus(const StreamSessionStatus& value) { SetStatus(value); return *this;}
    inline ListStreamSessionsRequest& WithStatus(StreamSessionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    ExportFilesStatus m_exportFilesStatus;
    bool m_exportFilesStatusHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    StreamSessionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
