/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/MigrationHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

  /**
   */
  class ListMigrationTaskUpdatesRequest : public MigrationHubRequest
  {
  public:
    AWS_MIGRATIONHUB_API ListMigrationTaskUpdatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMigrationTaskUpdates"; }

    AWS_MIGRATIONHUB_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the progress-update stream, which is used for access control as
     * well as a namespace for migration-task names that is implicitly linked to your
     * AWS account. The progress-update stream must uniquely identify the migration
     * tool as it is used for all updates made by the tool; however, it does not need
     * to be unique for each AWS account because it is scoped to the AWS account.</p>
     */
    inline const Aws::String& GetProgressUpdateStream() const{ return m_progressUpdateStream; }
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }
    inline void SetProgressUpdateStream(const Aws::String& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = value; }
    inline void SetProgressUpdateStream(Aws::String&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::move(value); }
    inline void SetProgressUpdateStream(const char* value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream.assign(value); }
    inline ListMigrationTaskUpdatesRequest& WithProgressUpdateStream(const Aws::String& value) { SetProgressUpdateStream(value); return *this;}
    inline ListMigrationTaskUpdatesRequest& WithProgressUpdateStream(Aws::String&& value) { SetProgressUpdateStream(std::move(value)); return *this;}
    inline ListMigrationTaskUpdatesRequest& WithProgressUpdateStream(const char* value) { SetProgressUpdateStream(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that references the migration task. <i>Do not include
     * sensitive data in this field.</i> </p>
     */
    inline const Aws::String& GetMigrationTaskName() const{ return m_migrationTaskName; }
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }
    inline void SetMigrationTaskName(const Aws::String& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = value; }
    inline void SetMigrationTaskName(Aws::String&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::move(value); }
    inline void SetMigrationTaskName(const char* value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName.assign(value); }
    inline ListMigrationTaskUpdatesRequest& WithMigrationTaskName(const Aws::String& value) { SetMigrationTaskName(value); return *this;}
    inline ListMigrationTaskUpdatesRequest& WithMigrationTaskName(Aws::String&& value) { SetMigrationTaskName(std::move(value)); return *this;}
    inline ListMigrationTaskUpdatesRequest& WithMigrationTaskName(const char* value) { SetMigrationTaskName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>NextToken</code> was returned by a previous call, there are more
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. To retrieve the next page of results, specify the
     * <code>NextToken</code> value that the previous call returned. Keep all other
     * arguments unchanged. Each pagination token expires after 24 hours. Using an
     * expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListMigrationTaskUpdatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMigrationTaskUpdatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMigrationTaskUpdatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the value that you specify here for <code>MaxResults</code>, the
     * response will include a token that you can use to retrieve the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMigrationTaskUpdatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet = false;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
