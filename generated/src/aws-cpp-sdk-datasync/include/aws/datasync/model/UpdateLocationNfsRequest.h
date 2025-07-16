/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/OnPremConfig.h>
#include <aws/datasync/model/NfsMountOptions.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class UpdateLocationNfsRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateLocationNfsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLocationNfs"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the NFS transfer location that
     * you want to update.</p>
     */
    inline const Aws::String& GetLocationArn() const { return m_locationArn; }
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }
    template<typename LocationArnT = Aws::String>
    void SetLocationArn(LocationArnT&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::forward<LocationArnT>(value); }
    template<typename LocationArnT = Aws::String>
    UpdateLocationNfsRequest& WithLocationArn(LocationArnT&& value) { SetLocationArn(std::forward<LocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the export path in your NFS file server that you want DataSync to
     * mount.</p> <p>This path (or a subdirectory of the path) is where DataSync
     * transfers data to or from. For information on configuring an export for
     * DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#accessing-nfs">Accessing
     * NFS file servers</a>.</p>
     */
    inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    template<typename SubdirectoryT = Aws::String>
    void SetSubdirectory(SubdirectoryT&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::forward<SubdirectoryT>(value); }
    template<typename SubdirectoryT = Aws::String>
    UpdateLocationNfsRequest& WithSubdirectory(SubdirectoryT&& value) { SetSubdirectory(std::forward<SubdirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DNS name or IP address (IPv4 or IPv6) of the NFS file server
     * that your DataSync agent connects to.</p>
     */
    inline const Aws::String& GetServerHostname() const { return m_serverHostname; }
    inline bool ServerHostnameHasBeenSet() const { return m_serverHostnameHasBeenSet; }
    template<typename ServerHostnameT = Aws::String>
    void SetServerHostname(ServerHostnameT&& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = std::forward<ServerHostnameT>(value); }
    template<typename ServerHostnameT = Aws::String>
    UpdateLocationNfsRequest& WithServerHostname(ServerHostnameT&& value) { SetServerHostname(std::forward<ServerHostnameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OnPremConfig& GetOnPremConfig() const { return m_onPremConfig; }
    inline bool OnPremConfigHasBeenSet() const { return m_onPremConfigHasBeenSet; }
    template<typename OnPremConfigT = OnPremConfig>
    void SetOnPremConfig(OnPremConfigT&& value) { m_onPremConfigHasBeenSet = true; m_onPremConfig = std::forward<OnPremConfigT>(value); }
    template<typename OnPremConfigT = OnPremConfig>
    UpdateLocationNfsRequest& WithOnPremConfig(OnPremConfigT&& value) { SetOnPremConfig(std::forward<OnPremConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const NfsMountOptions& GetMountOptions() const { return m_mountOptions; }
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }
    template<typename MountOptionsT = NfsMountOptions>
    void SetMountOptions(MountOptionsT&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::forward<MountOptionsT>(value); }
    template<typename MountOptionsT = NfsMountOptions>
    UpdateLocationNfsRequest& WithMountOptions(MountOptionsT&& value) { SetMountOptions(std::forward<MountOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::String m_serverHostname;
    bool m_serverHostnameHasBeenSet = false;

    OnPremConfig m_onPremConfig;
    bool m_onPremConfigHasBeenSet = false;

    NfsMountOptions m_mountOptions;
    bool m_mountOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
