/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Backup
{
namespace Model
{

  /**
   */
  class ListRecoveryPointsByLegalHoldRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListRecoveryPointsByLegalHoldRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecoveryPointsByLegalHold"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the legal hold.</p>
     */
    inline const Aws::String& GetLegalHoldId() const{ return m_legalHoldId; }
    inline bool LegalHoldIdHasBeenSet() const { return m_legalHoldIdHasBeenSet; }
    inline void SetLegalHoldId(const Aws::String& value) { m_legalHoldIdHasBeenSet = true; m_legalHoldId = value; }
    inline void SetLegalHoldId(Aws::String&& value) { m_legalHoldIdHasBeenSet = true; m_legalHoldId = std::move(value); }
    inline void SetLegalHoldId(const char* value) { m_legalHoldIdHasBeenSet = true; m_legalHoldId.assign(value); }
    inline ListRecoveryPointsByLegalHoldRequest& WithLegalHoldId(const Aws::String& value) { SetLegalHoldId(value); return *this;}
    inline ListRecoveryPointsByLegalHoldRequest& WithLegalHoldId(Aws::String&& value) { SetLegalHoldId(std::move(value)); return *this;}
    inline ListRecoveryPointsByLegalHoldRequest& WithLegalHoldId(const char* value) { SetLegalHoldId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListRecoveryPointsByLegalHoldRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecoveryPointsByLegalHoldRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecoveryPointsByLegalHoldRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of resource list items to be returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRecoveryPointsByLegalHoldRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_legalHoldId;
    bool m_legalHoldIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
