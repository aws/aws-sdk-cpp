/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/CognitoSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CognitoSync
{
namespace Model
{

  /**
   * A request for a list of records.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListRecordsRequest">AWS
   * API Reference</a></p>
   */
  class ListRecordsRequest : public CognitoSyncRequest
  {
  public:
    AWS_COGNITOSYNC_API ListRecordsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecords"; }

    AWS_COGNITOSYNC_API Aws::String SerializePayload() const override;

    AWS_COGNITOSYNC_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }
    inline ListRecordsRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}
    inline ListRecordsRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}
    inline ListRecordsRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }
    inline ListRecordsRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}
    inline ListRecordsRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}
    inline ListRecordsRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}
    ///@}

    ///@{
    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }
    inline ListRecordsRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline ListRecordsRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline ListRecordsRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The last server sync count for this record.
     */
    inline long long GetLastSyncCount() const{ return m_lastSyncCount; }
    inline bool LastSyncCountHasBeenSet() const { return m_lastSyncCountHasBeenSet; }
    inline void SetLastSyncCount(long long value) { m_lastSyncCountHasBeenSet = true; m_lastSyncCount = value; }
    inline ListRecordsRequest& WithLastSyncCount(long long value) { SetLastSyncCount(value); return *this;}
    ///@}

    ///@{
    /**
     * A pagination token for obtaining the next page of results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListRecordsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecordsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecordsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * The maximum number of results to be returned.
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRecordsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * A token containing a session ID, identity ID, and expiration.
     */
    inline const Aws::String& GetSyncSessionToken() const{ return m_syncSessionToken; }
    inline bool SyncSessionTokenHasBeenSet() const { return m_syncSessionTokenHasBeenSet; }
    inline void SetSyncSessionToken(const Aws::String& value) { m_syncSessionTokenHasBeenSet = true; m_syncSessionToken = value; }
    inline void SetSyncSessionToken(Aws::String&& value) { m_syncSessionTokenHasBeenSet = true; m_syncSessionToken = std::move(value); }
    inline void SetSyncSessionToken(const char* value) { m_syncSessionTokenHasBeenSet = true; m_syncSessionToken.assign(value); }
    inline ListRecordsRequest& WithSyncSessionToken(const Aws::String& value) { SetSyncSessionToken(value); return *this;}
    inline ListRecordsRequest& WithSyncSessionToken(Aws::String&& value) { SetSyncSessionToken(std::move(value)); return *this;}
    inline ListRecordsRequest& WithSyncSessionToken(const char* value) { SetSyncSessionToken(value); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    long long m_lastSyncCount;
    bool m_lastSyncCountHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_syncSessionToken;
    bool m_syncSessionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
