/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class ListDiscoveryJobsRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API ListDiscoveryJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDiscoveryJobs"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of an on-premises storage system.
     * Use this parameter if you only want to list the discovery jobs that are
     * associated with a specific storage system.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const{ return m_storageSystemArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of an on-premises storage system.
     * Use this parameter if you only want to list the discovery jobs that are
     * associated with a specific storage system.</p>
     */
    inline bool StorageSystemArnHasBeenSet() const { return m_storageSystemArnHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of an on-premises storage system.
     * Use this parameter if you only want to list the discovery jobs that are
     * associated with a specific storage system.</p>
     */
    inline void SetStorageSystemArn(const Aws::String& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of an on-premises storage system.
     * Use this parameter if you only want to list the discovery jobs that are
     * associated with a specific storage system.</p>
     */
    inline void SetStorageSystemArn(Aws::String&& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of an on-premises storage system.
     * Use this parameter if you only want to list the discovery jobs that are
     * associated with a specific storage system.</p>
     */
    inline void SetStorageSystemArn(const char* value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of an on-premises storage system.
     * Use this parameter if you only want to list the discovery jobs that are
     * associated with a specific storage system.</p>
     */
    inline ListDiscoveryJobsRequest& WithStorageSystemArn(const Aws::String& value) { SetStorageSystemArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of an on-premises storage system.
     * Use this parameter if you only want to list the discovery jobs that are
     * associated with a specific storage system.</p>
     */
    inline ListDiscoveryJobsRequest& WithStorageSystemArn(Aws::String&& value) { SetStorageSystemArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of an on-premises storage system.
     * Use this parameter if you only want to list the discovery jobs that are
     * associated with a specific storage system.</p>
     */
    inline ListDiscoveryJobsRequest& WithStorageSystemArn(const char* value) { SetStorageSystemArn(value); return *this;}


    /**
     * <p>Specifies how many results you want in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies how many results you want in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies how many results you want in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies how many results you want in the response.</p>
     */
    inline ListDiscoveryJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline ListDiscoveryJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline ListDiscoveryJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies an opaque string that indicates the position to begin the next list
     * of results in the response.</p>
     */
    inline ListDiscoveryJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_storageSystemArn;
    bool m_storageSystemArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
