/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/CognitoSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-sync/model/RecordPatch.h>
#include <utility>

namespace Aws
{
namespace CognitoSync
{
namespace Model
{

  /**
   * A request to post updates to records or add and delete records for a dataset and
   * user.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/UpdateRecordsRequest">AWS
   * API Reference</a></p>
   */
  class UpdateRecordsRequest : public CognitoSyncRequest
  {
  public:
    AWS_COGNITOSYNC_API UpdateRecordsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRecords"; }

    AWS_COGNITOSYNC_API Aws::String SerializePayload() const override;

    AWS_COGNITOSYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline UpdateRecordsRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}
    inline UpdateRecordsRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}
    inline UpdateRecordsRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}
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
    inline UpdateRecordsRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}
    inline UpdateRecordsRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}
    inline UpdateRecordsRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}
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
    inline UpdateRecordsRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline UpdateRecordsRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline UpdateRecordsRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID generated for this device by Cognito.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline UpdateRecordsRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline UpdateRecordsRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline UpdateRecordsRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of patch operations.
     */
    inline const Aws::Vector<RecordPatch>& GetRecordPatches() const{ return m_recordPatches; }
    inline bool RecordPatchesHasBeenSet() const { return m_recordPatchesHasBeenSet; }
    inline void SetRecordPatches(const Aws::Vector<RecordPatch>& value) { m_recordPatchesHasBeenSet = true; m_recordPatches = value; }
    inline void SetRecordPatches(Aws::Vector<RecordPatch>&& value) { m_recordPatchesHasBeenSet = true; m_recordPatches = std::move(value); }
    inline UpdateRecordsRequest& WithRecordPatches(const Aws::Vector<RecordPatch>& value) { SetRecordPatches(value); return *this;}
    inline UpdateRecordsRequest& WithRecordPatches(Aws::Vector<RecordPatch>&& value) { SetRecordPatches(std::move(value)); return *this;}
    inline UpdateRecordsRequest& AddRecordPatches(const RecordPatch& value) { m_recordPatchesHasBeenSet = true; m_recordPatches.push_back(value); return *this; }
    inline UpdateRecordsRequest& AddRecordPatches(RecordPatch&& value) { m_recordPatchesHasBeenSet = true; m_recordPatches.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The SyncSessionToken returned by a previous call to ListRecords for this dataset
     * and identity.
     */
    inline const Aws::String& GetSyncSessionToken() const{ return m_syncSessionToken; }
    inline bool SyncSessionTokenHasBeenSet() const { return m_syncSessionTokenHasBeenSet; }
    inline void SetSyncSessionToken(const Aws::String& value) { m_syncSessionTokenHasBeenSet = true; m_syncSessionToken = value; }
    inline void SetSyncSessionToken(Aws::String&& value) { m_syncSessionTokenHasBeenSet = true; m_syncSessionToken = std::move(value); }
    inline void SetSyncSessionToken(const char* value) { m_syncSessionTokenHasBeenSet = true; m_syncSessionToken.assign(value); }
    inline UpdateRecordsRequest& WithSyncSessionToken(const Aws::String& value) { SetSyncSessionToken(value); return *this;}
    inline UpdateRecordsRequest& WithSyncSessionToken(Aws::String&& value) { SetSyncSessionToken(std::move(value)); return *this;}
    inline UpdateRecordsRequest& WithSyncSessionToken(const char* value) { SetSyncSessionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * Intended to supply a device ID that will populate the lastModifiedBy field
     * referenced in other methods. The ClientContext field is not yet implemented.
     */
    inline const Aws::String& GetClientContext() const{ return m_clientContext; }
    inline bool ClientContextHasBeenSet() const { return m_clientContextHasBeenSet; }
    inline void SetClientContext(const Aws::String& value) { m_clientContextHasBeenSet = true; m_clientContext = value; }
    inline void SetClientContext(Aws::String&& value) { m_clientContextHasBeenSet = true; m_clientContext = std::move(value); }
    inline void SetClientContext(const char* value) { m_clientContextHasBeenSet = true; m_clientContext.assign(value); }
    inline UpdateRecordsRequest& WithClientContext(const Aws::String& value) { SetClientContext(value); return *this;}
    inline UpdateRecordsRequest& WithClientContext(Aws::String&& value) { SetClientContext(std::move(value)); return *this;}
    inline UpdateRecordsRequest& WithClientContext(const char* value) { SetClientContext(value); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::Vector<RecordPatch> m_recordPatches;
    bool m_recordPatchesHasBeenSet = false;

    Aws::String m_syncSessionToken;
    bool m_syncSessionTokenHasBeenSet = false;

    Aws::String m_clientContext;
    bool m_clientContextHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
