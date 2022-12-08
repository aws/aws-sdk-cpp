/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/backupstorage/BackupStorageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListChunksRequest : public BackupStorageRequest
  {
  public:
    AWS_BACKUPSTORAGE_API ListChunksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChunks"; }

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
    inline ListChunksRequest& WithStorageJobId(const Aws::String& value) { SetStorageJobId(value); return *this;}

    /**
     * Storage job id
     */
    inline ListChunksRequest& WithStorageJobId(Aws::String&& value) { SetStorageJobId(std::move(value)); return *this;}

    /**
     * Storage job id
     */
    inline ListChunksRequest& WithStorageJobId(const char* value) { SetStorageJobId(value); return *this;}


    /**
     * Object token
     */
    inline const Aws::String& GetObjectToken() const{ return m_objectToken; }

    /**
     * Object token
     */
    inline bool ObjectTokenHasBeenSet() const { return m_objectTokenHasBeenSet; }

    /**
     * Object token
     */
    inline void SetObjectToken(const Aws::String& value) { m_objectTokenHasBeenSet = true; m_objectToken = value; }

    /**
     * Object token
     */
    inline void SetObjectToken(Aws::String&& value) { m_objectTokenHasBeenSet = true; m_objectToken = std::move(value); }

    /**
     * Object token
     */
    inline void SetObjectToken(const char* value) { m_objectTokenHasBeenSet = true; m_objectToken.assign(value); }

    /**
     * Object token
     */
    inline ListChunksRequest& WithObjectToken(const Aws::String& value) { SetObjectToken(value); return *this;}

    /**
     * Object token
     */
    inline ListChunksRequest& WithObjectToken(Aws::String&& value) { SetObjectToken(std::move(value)); return *this;}

    /**
     * Object token
     */
    inline ListChunksRequest& WithObjectToken(const char* value) { SetObjectToken(value); return *this;}


    /**
     * Maximum number of chunks
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * Maximum number of chunks
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * Maximum number of chunks
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * Maximum number of chunks
     */
    inline ListChunksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListChunksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Pagination token
     */
    inline ListChunksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Pagination token
     */
    inline ListChunksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_storageJobId;
    bool m_storageJobIdHasBeenSet = false;

    Aws::String m_objectToken;
    bool m_objectTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
