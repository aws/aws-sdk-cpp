/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/backupstorage/BackupStorageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace BackupStorage
{
namespace Model
{

  /**
   */
  class ListObjectsRequest : public BackupStorageRequest
  {
  public:
    AWS_BACKUPSTORAGE_API ListObjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListObjects"; }

    AWS_BACKUPSTORAGE_API Aws::String SerializePayload() const override;

    AWS_BACKUPSTORAGE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * Storage job id
     */
    inline const Aws::String& GetStorageJobId() const{ return m_storageJobId; }

    /**
     * Storage job id
     */
    inline bool StorageJobIdHasBeenSet() const { return m_storageJobIdHasBeenSet; }

    /**
     * Storage job id
     */
    inline void SetStorageJobId(const Aws::String& value) { m_storageJobIdHasBeenSet = true; m_storageJobId = value; }

    /**
     * Storage job id
     */
    inline void SetStorageJobId(Aws::String&& value) { m_storageJobIdHasBeenSet = true; m_storageJobId = std::move(value); }

    /**
     * Storage job id
     */
    inline void SetStorageJobId(const char* value) { m_storageJobIdHasBeenSet = true; m_storageJobId.assign(value); }

    /**
     * Storage job id
     */
    inline ListObjectsRequest& WithStorageJobId(const Aws::String& value) { SetStorageJobId(value); return *this;}

    /**
     * Storage job id
     */
    inline ListObjectsRequest& WithStorageJobId(Aws::String&& value) { SetStorageJobId(std::move(value)); return *this;}

    /**
     * Storage job id
     */
    inline ListObjectsRequest& WithStorageJobId(const char* value) { SetStorageJobId(value); return *this;}


    /**
     * Optional, specifies the starting Object name to list from. Ignored if NextToken
     * is not NULL
     */
    inline const Aws::String& GetStartingObjectName() const{ return m_startingObjectName; }

    /**
     * Optional, specifies the starting Object name to list from. Ignored if NextToken
     * is not NULL
     */
    inline bool StartingObjectNameHasBeenSet() const { return m_startingObjectNameHasBeenSet; }

    /**
     * Optional, specifies the starting Object name to list from. Ignored if NextToken
     * is not NULL
     */
    inline void SetStartingObjectName(const Aws::String& value) { m_startingObjectNameHasBeenSet = true; m_startingObjectName = value; }

    /**
     * Optional, specifies the starting Object name to list from. Ignored if NextToken
     * is not NULL
     */
    inline void SetStartingObjectName(Aws::String&& value) { m_startingObjectNameHasBeenSet = true; m_startingObjectName = std::move(value); }

    /**
     * Optional, specifies the starting Object name to list from. Ignored if NextToken
     * is not NULL
     */
    inline void SetStartingObjectName(const char* value) { m_startingObjectNameHasBeenSet = true; m_startingObjectName.assign(value); }

    /**
     * Optional, specifies the starting Object name to list from. Ignored if NextToken
     * is not NULL
     */
    inline ListObjectsRequest& WithStartingObjectName(const Aws::String& value) { SetStartingObjectName(value); return *this;}

    /**
     * Optional, specifies the starting Object name to list from. Ignored if NextToken
     * is not NULL
     */
    inline ListObjectsRequest& WithStartingObjectName(Aws::String&& value) { SetStartingObjectName(std::move(value)); return *this;}

    /**
     * Optional, specifies the starting Object name to list from. Ignored if NextToken
     * is not NULL
     */
    inline ListObjectsRequest& WithStartingObjectName(const char* value) { SetStartingObjectName(value); return *this;}


    /**
     * Optional, specifies the starting Object prefix to list from. Ignored if
     * NextToken is not NULL
     */
    inline const Aws::String& GetStartingObjectPrefix() const{ return m_startingObjectPrefix; }

    /**
     * Optional, specifies the starting Object prefix to list from. Ignored if
     * NextToken is not NULL
     */
    inline bool StartingObjectPrefixHasBeenSet() const { return m_startingObjectPrefixHasBeenSet; }

    /**
     * Optional, specifies the starting Object prefix to list from. Ignored if
     * NextToken is not NULL
     */
    inline void SetStartingObjectPrefix(const Aws::String& value) { m_startingObjectPrefixHasBeenSet = true; m_startingObjectPrefix = value; }

    /**
     * Optional, specifies the starting Object prefix to list from. Ignored if
     * NextToken is not NULL
     */
    inline void SetStartingObjectPrefix(Aws::String&& value) { m_startingObjectPrefixHasBeenSet = true; m_startingObjectPrefix = std::move(value); }

    /**
     * Optional, specifies the starting Object prefix to list from. Ignored if
     * NextToken is not NULL
     */
    inline void SetStartingObjectPrefix(const char* value) { m_startingObjectPrefixHasBeenSet = true; m_startingObjectPrefix.assign(value); }

    /**
     * Optional, specifies the starting Object prefix to list from. Ignored if
     * NextToken is not NULL
     */
    inline ListObjectsRequest& WithStartingObjectPrefix(const Aws::String& value) { SetStartingObjectPrefix(value); return *this;}

    /**
     * Optional, specifies the starting Object prefix to list from. Ignored if
     * NextToken is not NULL
     */
    inline ListObjectsRequest& WithStartingObjectPrefix(Aws::String&& value) { SetStartingObjectPrefix(std::move(value)); return *this;}

    /**
     * Optional, specifies the starting Object prefix to list from. Ignored if
     * NextToken is not NULL
     */
    inline ListObjectsRequest& WithStartingObjectPrefix(const char* value) { SetStartingObjectPrefix(value); return *this;}


    /**
     * Maximum objects count
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * Maximum objects count
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * Maximum objects count
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * Maximum objects count
     */
    inline ListObjectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * Pagination token
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Pagination token
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * Pagination token
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * Pagination token
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * Pagination token
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * Pagination token
     */
    inline ListObjectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Pagination token
     */
    inline ListObjectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Pagination token
     */
    inline ListObjectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * (Optional) Created before filter
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * (Optional) Created before filter
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * (Optional) Created before filter
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * (Optional) Created before filter
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * (Optional) Created before filter
     */
    inline ListObjectsRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * (Optional) Created before filter
     */
    inline ListObjectsRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * (Optional) Created after filter
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * (Optional) Created after filter
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * (Optional) Created after filter
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * (Optional) Created after filter
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * (Optional) Created after filter
     */
    inline ListObjectsRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * (Optional) Created after filter
     */
    inline ListObjectsRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}

  private:

    Aws::String m_storageJobId;
    bool m_storageJobIdHasBeenSet = false;

    Aws::String m_startingObjectName;
    bool m_startingObjectNameHasBeenSet = false;

    Aws::String m_startingObjectPrefix;
    bool m_startingObjectPrefixHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
