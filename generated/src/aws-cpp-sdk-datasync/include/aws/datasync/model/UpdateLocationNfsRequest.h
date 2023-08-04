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
    AWS_DATASYNC_API UpdateLocationNfsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLocationNfs"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the NFS transfer location that
     * you want to update.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the NFS transfer location that
     * you want to update.</p>
     */
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the NFS transfer location that
     * you want to update.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the NFS transfer location that
     * you want to update.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the NFS transfer location that
     * you want to update.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the NFS transfer location that
     * you want to update.</p>
     */
    inline UpdateLocationNfsRequest& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the NFS transfer location that
     * you want to update.</p>
     */
    inline UpdateLocationNfsRequest& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the NFS transfer location that
     * you want to update.</p>
     */
    inline UpdateLocationNfsRequest& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>Specifies the export path in your NFS file server that you want DataSync to
     * mount.</p> <p>This path (or a subdirectory of the path) is where DataSync
     * transfers data to or from. For information on configuring an export for
     * DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#accessing-nfs">Accessing
     * NFS file servers</a>.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>Specifies the export path in your NFS file server that you want DataSync to
     * mount.</p> <p>This path (or a subdirectory of the path) is where DataSync
     * transfers data to or from. For information on configuring an export for
     * DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#accessing-nfs">Accessing
     * NFS file servers</a>.</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>Specifies the export path in your NFS file server that you want DataSync to
     * mount.</p> <p>This path (or a subdirectory of the path) is where DataSync
     * transfers data to or from. For information on configuring an export for
     * DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#accessing-nfs">Accessing
     * NFS file servers</a>.</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>Specifies the export path in your NFS file server that you want DataSync to
     * mount.</p> <p>This path (or a subdirectory of the path) is where DataSync
     * transfers data to or from. For information on configuring an export for
     * DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#accessing-nfs">Accessing
     * NFS file servers</a>.</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>Specifies the export path in your NFS file server that you want DataSync to
     * mount.</p> <p>This path (or a subdirectory of the path) is where DataSync
     * transfers data to or from. For information on configuring an export for
     * DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#accessing-nfs">Accessing
     * NFS file servers</a>.</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>Specifies the export path in your NFS file server that you want DataSync to
     * mount.</p> <p>This path (or a subdirectory of the path) is where DataSync
     * transfers data to or from. For information on configuring an export for
     * DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#accessing-nfs">Accessing
     * NFS file servers</a>.</p>
     */
    inline UpdateLocationNfsRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>Specifies the export path in your NFS file server that you want DataSync to
     * mount.</p> <p>This path (or a subdirectory of the path) is where DataSync
     * transfers data to or from. For information on configuring an export for
     * DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#accessing-nfs">Accessing
     * NFS file servers</a>.</p>
     */
    inline UpdateLocationNfsRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies the export path in your NFS file server that you want DataSync to
     * mount.</p> <p>This path (or a subdirectory of the path) is where DataSync
     * transfers data to or from. For information on configuring an export for
     * DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#accessing-nfs">Accessing
     * NFS file servers</a>.</p>
     */
    inline UpdateLocationNfsRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    
    inline const OnPremConfig& GetOnPremConfig() const{ return m_onPremConfig; }

    
    inline bool OnPremConfigHasBeenSet() const { return m_onPremConfigHasBeenSet; }

    
    inline void SetOnPremConfig(const OnPremConfig& value) { m_onPremConfigHasBeenSet = true; m_onPremConfig = value; }

    
    inline void SetOnPremConfig(OnPremConfig&& value) { m_onPremConfigHasBeenSet = true; m_onPremConfig = std::move(value); }

    
    inline UpdateLocationNfsRequest& WithOnPremConfig(const OnPremConfig& value) { SetOnPremConfig(value); return *this;}

    
    inline UpdateLocationNfsRequest& WithOnPremConfig(OnPremConfig&& value) { SetOnPremConfig(std::move(value)); return *this;}


    
    inline const NfsMountOptions& GetMountOptions() const{ return m_mountOptions; }

    
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }

    
    inline void SetMountOptions(const NfsMountOptions& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }

    
    inline void SetMountOptions(NfsMountOptions&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }

    
    inline UpdateLocationNfsRequest& WithMountOptions(const NfsMountOptions& value) { SetMountOptions(value); return *this;}

    
    inline UpdateLocationNfsRequest& WithMountOptions(NfsMountOptions&& value) { SetMountOptions(std::move(value)); return *this;}

  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    OnPremConfig m_onPremConfig;
    bool m_onPremConfigHasBeenSet = false;

    NfsMountOptions m_mountOptions;
    bool m_mountOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
