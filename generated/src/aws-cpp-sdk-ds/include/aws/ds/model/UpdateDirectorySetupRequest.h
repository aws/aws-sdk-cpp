/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/UpdateType.h>
#include <aws/ds/model/OSUpdateSettings.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class UpdateDirectorySetupRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API UpdateDirectorySetupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDirectorySetup"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The identifier of the directory on which you want to perform the update.
     * </p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    UpdateDirectorySetupRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of update that needs to be performed on the directory. For example,
     * OS. </p>
     */
    inline UpdateType GetUpdateType() const { return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(UpdateType value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline UpdateDirectorySetupRequest& WithUpdateType(UpdateType value) { SetUpdateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The settings for the OS update that needs to be performed on the directory.
     * </p>
     */
    inline const OSUpdateSettings& GetOSUpdateSettings() const { return m_oSUpdateSettings; }
    inline bool OSUpdateSettingsHasBeenSet() const { return m_oSUpdateSettingsHasBeenSet; }
    template<typename OSUpdateSettingsT = OSUpdateSettings>
    void SetOSUpdateSettings(OSUpdateSettingsT&& value) { m_oSUpdateSettingsHasBeenSet = true; m_oSUpdateSettings = std::forward<OSUpdateSettingsT>(value); }
    template<typename OSUpdateSettingsT = OSUpdateSettings>
    UpdateDirectorySetupRequest& WithOSUpdateSettings(OSUpdateSettingsT&& value) { SetOSUpdateSettings(std::forward<OSUpdateSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The boolean that specifies if a snapshot for the directory needs to be taken
     * before updating the directory. </p>
     */
    inline bool GetCreateSnapshotBeforeUpdate() const { return m_createSnapshotBeforeUpdate; }
    inline bool CreateSnapshotBeforeUpdateHasBeenSet() const { return m_createSnapshotBeforeUpdateHasBeenSet; }
    inline void SetCreateSnapshotBeforeUpdate(bool value) { m_createSnapshotBeforeUpdateHasBeenSet = true; m_createSnapshotBeforeUpdate = value; }
    inline UpdateDirectorySetupRequest& WithCreateSnapshotBeforeUpdate(bool value) { SetCreateSnapshotBeforeUpdate(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    UpdateType m_updateType{UpdateType::NOT_SET};
    bool m_updateTypeHasBeenSet = false;

    OSUpdateSettings m_oSUpdateSettings;
    bool m_oSUpdateSettingsHasBeenSet = false;

    bool m_createSnapshotBeforeUpdate{false};
    bool m_createSnapshotBeforeUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
