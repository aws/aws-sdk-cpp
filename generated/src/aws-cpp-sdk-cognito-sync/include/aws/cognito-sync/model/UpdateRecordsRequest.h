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
    AWS_COGNITOSYNC_API UpdateRecordsRequest() = default;

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
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    UpdateRecordsRequest& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityId() const { return m_identityId; }
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }
    template<typename IdentityIdT = Aws::String>
    void SetIdentityId(IdentityIdT&& value) { m_identityIdHasBeenSet = true; m_identityId = std::forward<IdentityIdT>(value); }
    template<typename IdentityIdT = Aws::String>
    UpdateRecordsRequest& WithIdentityId(IdentityIdT&& value) { SetIdentityId(std::forward<IdentityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A string of up to 128 characters. Allowed characters are a-z, A-Z, 0-9, '_'
     * (underscore), '-' (dash), and '.' (dot).
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    UpdateRecordsRequest& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID generated for this device by Cognito.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    UpdateRecordsRequest& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of patch operations.
     */
    inline const Aws::Vector<RecordPatch>& GetRecordPatches() const { return m_recordPatches; }
    inline bool RecordPatchesHasBeenSet() const { return m_recordPatchesHasBeenSet; }
    template<typename RecordPatchesT = Aws::Vector<RecordPatch>>
    void SetRecordPatches(RecordPatchesT&& value) { m_recordPatchesHasBeenSet = true; m_recordPatches = std::forward<RecordPatchesT>(value); }
    template<typename RecordPatchesT = Aws::Vector<RecordPatch>>
    UpdateRecordsRequest& WithRecordPatches(RecordPatchesT&& value) { SetRecordPatches(std::forward<RecordPatchesT>(value)); return *this;}
    template<typename RecordPatchesT = RecordPatch>
    UpdateRecordsRequest& AddRecordPatches(RecordPatchesT&& value) { m_recordPatchesHasBeenSet = true; m_recordPatches.emplace_back(std::forward<RecordPatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The SyncSessionToken returned by a previous call to ListRecords for this dataset
     * and identity.
     */
    inline const Aws::String& GetSyncSessionToken() const { return m_syncSessionToken; }
    inline bool SyncSessionTokenHasBeenSet() const { return m_syncSessionTokenHasBeenSet; }
    template<typename SyncSessionTokenT = Aws::String>
    void SetSyncSessionToken(SyncSessionTokenT&& value) { m_syncSessionTokenHasBeenSet = true; m_syncSessionToken = std::forward<SyncSessionTokenT>(value); }
    template<typename SyncSessionTokenT = Aws::String>
    UpdateRecordsRequest& WithSyncSessionToken(SyncSessionTokenT&& value) { SetSyncSessionToken(std::forward<SyncSessionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Intended to supply a device ID that will populate the lastModifiedBy field
     * referenced in other methods. The ClientContext field is not yet implemented.
     */
    inline const Aws::String& GetClientContext() const { return m_clientContext; }
    inline bool ClientContextHasBeenSet() const { return m_clientContextHasBeenSet; }
    template<typename ClientContextT = Aws::String>
    void SetClientContext(ClientContextT&& value) { m_clientContextHasBeenSet = true; m_clientContext = std::forward<ClientContextT>(value); }
    template<typename ClientContextT = Aws::String>
    UpdateRecordsRequest& WithClientContext(ClientContextT&& value) { SetClientContext(std::forward<ClientContextT>(value)); return *this;}
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
