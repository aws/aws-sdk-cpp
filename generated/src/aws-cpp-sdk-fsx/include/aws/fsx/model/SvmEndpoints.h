/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SvmEndpoint.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{

  /**
   * <p>An Amazon FSx for NetApp ONTAP storage virtual machine (SVM) has the
   * following endpoints that are used to access data or to manage the SVM using the
   * NetApp ONTAP CLI, REST API, or NetApp CloudManager.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SvmEndpoints">AWS
   * API Reference</a></p>
   */
  class SvmEndpoints
  {
  public:
    AWS_FSX_API SvmEndpoints();
    AWS_FSX_API SvmEndpoints(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API SvmEndpoints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An endpoint for connecting using the Internet Small Computer Systems
     * Interface (iSCSI) protocol.</p>
     */
    inline const SvmEndpoint& GetIscsi() const{ return m_iscsi; }

    /**
     * <p>An endpoint for connecting using the Internet Small Computer Systems
     * Interface (iSCSI) protocol.</p>
     */
    inline bool IscsiHasBeenSet() const { return m_iscsiHasBeenSet; }

    /**
     * <p>An endpoint for connecting using the Internet Small Computer Systems
     * Interface (iSCSI) protocol.</p>
     */
    inline void SetIscsi(const SvmEndpoint& value) { m_iscsiHasBeenSet = true; m_iscsi = value; }

    /**
     * <p>An endpoint for connecting using the Internet Small Computer Systems
     * Interface (iSCSI) protocol.</p>
     */
    inline void SetIscsi(SvmEndpoint&& value) { m_iscsiHasBeenSet = true; m_iscsi = std::move(value); }

    /**
     * <p>An endpoint for connecting using the Internet Small Computer Systems
     * Interface (iSCSI) protocol.</p>
     */
    inline SvmEndpoints& WithIscsi(const SvmEndpoint& value) { SetIscsi(value); return *this;}

    /**
     * <p>An endpoint for connecting using the Internet Small Computer Systems
     * Interface (iSCSI) protocol.</p>
     */
    inline SvmEndpoints& WithIscsi(SvmEndpoint&& value) { SetIscsi(std::move(value)); return *this;}


    /**
     * <p>An endpoint for managing SVMs using the NetApp ONTAP CLI, NetApp ONTAP API,
     * or NetApp CloudManager.</p>
     */
    inline const SvmEndpoint& GetManagement() const{ return m_management; }

    /**
     * <p>An endpoint for managing SVMs using the NetApp ONTAP CLI, NetApp ONTAP API,
     * or NetApp CloudManager.</p>
     */
    inline bool ManagementHasBeenSet() const { return m_managementHasBeenSet; }

    /**
     * <p>An endpoint for managing SVMs using the NetApp ONTAP CLI, NetApp ONTAP API,
     * or NetApp CloudManager.</p>
     */
    inline void SetManagement(const SvmEndpoint& value) { m_managementHasBeenSet = true; m_management = value; }

    /**
     * <p>An endpoint for managing SVMs using the NetApp ONTAP CLI, NetApp ONTAP API,
     * or NetApp CloudManager.</p>
     */
    inline void SetManagement(SvmEndpoint&& value) { m_managementHasBeenSet = true; m_management = std::move(value); }

    /**
     * <p>An endpoint for managing SVMs using the NetApp ONTAP CLI, NetApp ONTAP API,
     * or NetApp CloudManager.</p>
     */
    inline SvmEndpoints& WithManagement(const SvmEndpoint& value) { SetManagement(value); return *this;}

    /**
     * <p>An endpoint for managing SVMs using the NetApp ONTAP CLI, NetApp ONTAP API,
     * or NetApp CloudManager.</p>
     */
    inline SvmEndpoints& WithManagement(SvmEndpoint&& value) { SetManagement(std::move(value)); return *this;}


    /**
     * <p>An endpoint for connecting using the Network File System (NFS) protocol.</p>
     */
    inline const SvmEndpoint& GetNfs() const{ return m_nfs; }

    /**
     * <p>An endpoint for connecting using the Network File System (NFS) protocol.</p>
     */
    inline bool NfsHasBeenSet() const { return m_nfsHasBeenSet; }

    /**
     * <p>An endpoint for connecting using the Network File System (NFS) protocol.</p>
     */
    inline void SetNfs(const SvmEndpoint& value) { m_nfsHasBeenSet = true; m_nfs = value; }

    /**
     * <p>An endpoint for connecting using the Network File System (NFS) protocol.</p>
     */
    inline void SetNfs(SvmEndpoint&& value) { m_nfsHasBeenSet = true; m_nfs = std::move(value); }

    /**
     * <p>An endpoint for connecting using the Network File System (NFS) protocol.</p>
     */
    inline SvmEndpoints& WithNfs(const SvmEndpoint& value) { SetNfs(value); return *this;}

    /**
     * <p>An endpoint for connecting using the Network File System (NFS) protocol.</p>
     */
    inline SvmEndpoints& WithNfs(SvmEndpoint&& value) { SetNfs(std::move(value)); return *this;}


    /**
     * <p>An endpoint for connecting using the Server Message Block (SMB) protocol.</p>
     */
    inline const SvmEndpoint& GetSmb() const{ return m_smb; }

    /**
     * <p>An endpoint for connecting using the Server Message Block (SMB) protocol.</p>
     */
    inline bool SmbHasBeenSet() const { return m_smbHasBeenSet; }

    /**
     * <p>An endpoint for connecting using the Server Message Block (SMB) protocol.</p>
     */
    inline void SetSmb(const SvmEndpoint& value) { m_smbHasBeenSet = true; m_smb = value; }

    /**
     * <p>An endpoint for connecting using the Server Message Block (SMB) protocol.</p>
     */
    inline void SetSmb(SvmEndpoint&& value) { m_smbHasBeenSet = true; m_smb = std::move(value); }

    /**
     * <p>An endpoint for connecting using the Server Message Block (SMB) protocol.</p>
     */
    inline SvmEndpoints& WithSmb(const SvmEndpoint& value) { SetSmb(value); return *this;}

    /**
     * <p>An endpoint for connecting using the Server Message Block (SMB) protocol.</p>
     */
    inline SvmEndpoints& WithSmb(SvmEndpoint&& value) { SetSmb(std::move(value)); return *this;}

  private:

    SvmEndpoint m_iscsi;
    bool m_iscsiHasBeenSet = false;

    SvmEndpoint m_management;
    bool m_managementHasBeenSet = false;

    SvmEndpoint m_nfs;
    bool m_nfsHasBeenSet = false;

    SvmEndpoint m_smb;
    bool m_smbHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
