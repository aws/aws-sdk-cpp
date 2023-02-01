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
     * <p>The Amazon Resource Name (ARN) of the NFS location to update.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the NFS location to update.</p>
     */
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the NFS location to update.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the NFS location to update.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the NFS location to update.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the NFS location to update.</p>
     */
    inline UpdateLocationNfsRequest& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the NFS location to update.</p>
     */
    inline UpdateLocationNfsRequest& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the NFS location to update.</p>
     */
    inline UpdateLocationNfsRequest& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your
     * network.</p> <p>To see all the paths exported by your NFS server, run
     * "<code>showmount -e nfs-server-name</code>" from an NFS client that has access
     * to your server. You can specify any directory that appears in the results, and
     * any subdirectory of that directory. Ensure that the NFS export is accessible
     * without Kerberos authentication. </p> <p>To transfer all the data in the folder
     * that you specified, DataSync must have permissions to read all the data. To
     * ensure this, either configure the NFS export with <code>no_root_squash</code>,
     * or ensure that the files you want DataSync to access have permissions that allow
     * read access for all users. Doing either option enables the agent to read the
     * files. For the agent to access directories, you must additionally enable all
     * execute access.</p> <p>If you are copying data to or from your Snowcone device,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#nfs-on-snowcone">NFS
     * Server on Snowcone</a> for more information.</p> <p>For information about NFS
     * export configuration, see 18.7. The /etc/exports Configuration File in the Red
     * Hat Enterprise Linux documentation.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your
     * network.</p> <p>To see all the paths exported by your NFS server, run
     * "<code>showmount -e nfs-server-name</code>" from an NFS client that has access
     * to your server. You can specify any directory that appears in the results, and
     * any subdirectory of that directory. Ensure that the NFS export is accessible
     * without Kerberos authentication. </p> <p>To transfer all the data in the folder
     * that you specified, DataSync must have permissions to read all the data. To
     * ensure this, either configure the NFS export with <code>no_root_squash</code>,
     * or ensure that the files you want DataSync to access have permissions that allow
     * read access for all users. Doing either option enables the agent to read the
     * files. For the agent to access directories, you must additionally enable all
     * execute access.</p> <p>If you are copying data to or from your Snowcone device,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#nfs-on-snowcone">NFS
     * Server on Snowcone</a> for more information.</p> <p>For information about NFS
     * export configuration, see 18.7. The /etc/exports Configuration File in the Red
     * Hat Enterprise Linux documentation.</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your
     * network.</p> <p>To see all the paths exported by your NFS server, run
     * "<code>showmount -e nfs-server-name</code>" from an NFS client that has access
     * to your server. You can specify any directory that appears in the results, and
     * any subdirectory of that directory. Ensure that the NFS export is accessible
     * without Kerberos authentication. </p> <p>To transfer all the data in the folder
     * that you specified, DataSync must have permissions to read all the data. To
     * ensure this, either configure the NFS export with <code>no_root_squash</code>,
     * or ensure that the files you want DataSync to access have permissions that allow
     * read access for all users. Doing either option enables the agent to read the
     * files. For the agent to access directories, you must additionally enable all
     * execute access.</p> <p>If you are copying data to or from your Snowcone device,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#nfs-on-snowcone">NFS
     * Server on Snowcone</a> for more information.</p> <p>For information about NFS
     * export configuration, see 18.7. The /etc/exports Configuration File in the Red
     * Hat Enterprise Linux documentation.</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your
     * network.</p> <p>To see all the paths exported by your NFS server, run
     * "<code>showmount -e nfs-server-name</code>" from an NFS client that has access
     * to your server. You can specify any directory that appears in the results, and
     * any subdirectory of that directory. Ensure that the NFS export is accessible
     * without Kerberos authentication. </p> <p>To transfer all the data in the folder
     * that you specified, DataSync must have permissions to read all the data. To
     * ensure this, either configure the NFS export with <code>no_root_squash</code>,
     * or ensure that the files you want DataSync to access have permissions that allow
     * read access for all users. Doing either option enables the agent to read the
     * files. For the agent to access directories, you must additionally enable all
     * execute access.</p> <p>If you are copying data to or from your Snowcone device,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#nfs-on-snowcone">NFS
     * Server on Snowcone</a> for more information.</p> <p>For information about NFS
     * export configuration, see 18.7. The /etc/exports Configuration File in the Red
     * Hat Enterprise Linux documentation.</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your
     * network.</p> <p>To see all the paths exported by your NFS server, run
     * "<code>showmount -e nfs-server-name</code>" from an NFS client that has access
     * to your server. You can specify any directory that appears in the results, and
     * any subdirectory of that directory. Ensure that the NFS export is accessible
     * without Kerberos authentication. </p> <p>To transfer all the data in the folder
     * that you specified, DataSync must have permissions to read all the data. To
     * ensure this, either configure the NFS export with <code>no_root_squash</code>,
     * or ensure that the files you want DataSync to access have permissions that allow
     * read access for all users. Doing either option enables the agent to read the
     * files. For the agent to access directories, you must additionally enable all
     * execute access.</p> <p>If you are copying data to or from your Snowcone device,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#nfs-on-snowcone">NFS
     * Server on Snowcone</a> for more information.</p> <p>For information about NFS
     * export configuration, see 18.7. The /etc/exports Configuration File in the Red
     * Hat Enterprise Linux documentation.</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your
     * network.</p> <p>To see all the paths exported by your NFS server, run
     * "<code>showmount -e nfs-server-name</code>" from an NFS client that has access
     * to your server. You can specify any directory that appears in the results, and
     * any subdirectory of that directory. Ensure that the NFS export is accessible
     * without Kerberos authentication. </p> <p>To transfer all the data in the folder
     * that you specified, DataSync must have permissions to read all the data. To
     * ensure this, either configure the NFS export with <code>no_root_squash</code>,
     * or ensure that the files you want DataSync to access have permissions that allow
     * read access for all users. Doing either option enables the agent to read the
     * files. For the agent to access directories, you must additionally enable all
     * execute access.</p> <p>If you are copying data to or from your Snowcone device,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#nfs-on-snowcone">NFS
     * Server on Snowcone</a> for more information.</p> <p>For information about NFS
     * export configuration, see 18.7. The /etc/exports Configuration File in the Red
     * Hat Enterprise Linux documentation.</p>
     */
    inline UpdateLocationNfsRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your
     * network.</p> <p>To see all the paths exported by your NFS server, run
     * "<code>showmount -e nfs-server-name</code>" from an NFS client that has access
     * to your server. You can specify any directory that appears in the results, and
     * any subdirectory of that directory. Ensure that the NFS export is accessible
     * without Kerberos authentication. </p> <p>To transfer all the data in the folder
     * that you specified, DataSync must have permissions to read all the data. To
     * ensure this, either configure the NFS export with <code>no_root_squash</code>,
     * or ensure that the files you want DataSync to access have permissions that allow
     * read access for all users. Doing either option enables the agent to read the
     * files. For the agent to access directories, you must additionally enable all
     * execute access.</p> <p>If you are copying data to or from your Snowcone device,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#nfs-on-snowcone">NFS
     * Server on Snowcone</a> for more information.</p> <p>For information about NFS
     * export configuration, see 18.7. The /etc/exports Configuration File in the Red
     * Hat Enterprise Linux documentation.</p>
     */
    inline UpdateLocationNfsRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>The subdirectory in the NFS file system that is used to read data from the
     * NFS source location or write data to the NFS destination. The NFS path should be
     * a path that's exported by the NFS server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other NFS clients in your
     * network.</p> <p>To see all the paths exported by your NFS server, run
     * "<code>showmount -e nfs-server-name</code>" from an NFS client that has access
     * to your server. You can specify any directory that appears in the results, and
     * any subdirectory of that directory. Ensure that the NFS export is accessible
     * without Kerberos authentication. </p> <p>To transfer all the data in the folder
     * that you specified, DataSync must have permissions to read all the data. To
     * ensure this, either configure the NFS export with <code>no_root_squash</code>,
     * or ensure that the files you want DataSync to access have permissions that allow
     * read access for all users. Doing either option enables the agent to read the
     * files. For the agent to access directories, you must additionally enable all
     * execute access.</p> <p>If you are copying data to or from your Snowcone device,
     * see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-nfs-location.html#nfs-on-snowcone">NFS
     * Server on Snowcone</a> for more information.</p> <p>For information about NFS
     * export configuration, see 18.7. The /etc/exports Configuration File in the Red
     * Hat Enterprise Linux documentation.</p>
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
