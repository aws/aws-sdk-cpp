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
    AWS_FSX_API SvmEndpoints() = default;
    AWS_FSX_API SvmEndpoints(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API SvmEndpoints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An endpoint for connecting using the Internet Small Computer Systems
     * Interface (iSCSI) protocol.</p>
     */
    inline const SvmEndpoint& GetIscsi() const { return m_iscsi; }
    inline bool IscsiHasBeenSet() const { return m_iscsiHasBeenSet; }
    template<typename IscsiT = SvmEndpoint>
    void SetIscsi(IscsiT&& value) { m_iscsiHasBeenSet = true; m_iscsi = std::forward<IscsiT>(value); }
    template<typename IscsiT = SvmEndpoint>
    SvmEndpoints& WithIscsi(IscsiT&& value) { SetIscsi(std::forward<IscsiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An endpoint for managing SVMs using the NetApp ONTAP CLI, NetApp ONTAP API,
     * or NetApp CloudManager.</p>
     */
    inline const SvmEndpoint& GetManagement() const { return m_management; }
    inline bool ManagementHasBeenSet() const { return m_managementHasBeenSet; }
    template<typename ManagementT = SvmEndpoint>
    void SetManagement(ManagementT&& value) { m_managementHasBeenSet = true; m_management = std::forward<ManagementT>(value); }
    template<typename ManagementT = SvmEndpoint>
    SvmEndpoints& WithManagement(ManagementT&& value) { SetManagement(std::forward<ManagementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An endpoint for connecting using the Network File System (NFS) protocol.</p>
     */
    inline const SvmEndpoint& GetNfs() const { return m_nfs; }
    inline bool NfsHasBeenSet() const { return m_nfsHasBeenSet; }
    template<typename NfsT = SvmEndpoint>
    void SetNfs(NfsT&& value) { m_nfsHasBeenSet = true; m_nfs = std::forward<NfsT>(value); }
    template<typename NfsT = SvmEndpoint>
    SvmEndpoints& WithNfs(NfsT&& value) { SetNfs(std::forward<NfsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An endpoint for connecting using the Server Message Block (SMB) protocol.</p>
     */
    inline const SvmEndpoint& GetSmb() const { return m_smb; }
    inline bool SmbHasBeenSet() const { return m_smbHasBeenSet; }
    template<typename SmbT = SvmEndpoint>
    void SetSmb(SmbT&& value) { m_smbHasBeenSet = true; m_smb = std::forward<SmbT>(value); }
    template<typename SmbT = SvmEndpoint>
    SvmEndpoints& WithSmb(SmbT&& value) { SetSmb(std::forward<SmbT>(value)); return *this;}
    ///@}
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
