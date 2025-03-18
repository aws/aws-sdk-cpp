/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/FsxProtocolNfs.h>
#include <aws/datasync/model/FsxUpdateProtocolSmb.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Specifies the data transfer protocol that DataSync uses to access your Amazon
   * FSx file system.</p>  <p>You can't update the Network File System (NFS)
   * protocol configuration for FSx for ONTAP locations. DataSync currently only
   * supports NFS version 3 with this location type.</p> <p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/FsxUpdateProtocol">AWS
   * API Reference</a></p>
   */
  class FsxUpdateProtocol
  {
  public:
    AWS_DATASYNC_API FsxUpdateProtocol() = default;
    AWS_DATASYNC_API FsxUpdateProtocol(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API FsxUpdateProtocol& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const FsxProtocolNfs& GetNFS() const { return m_nFS; }
    inline bool NFSHasBeenSet() const { return m_nFSHasBeenSet; }
    template<typename NFST = FsxProtocolNfs>
    void SetNFS(NFST&& value) { m_nFSHasBeenSet = true; m_nFS = std::forward<NFST>(value); }
    template<typename NFST = FsxProtocolNfs>
    FsxUpdateProtocol& WithNFS(NFST&& value) { SetNFS(std::forward<NFST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Server Message Block (SMB) protocol configuration that DataSync
     * uses to access your FSx for ONTAP file system's storage virtual machine
     * (SVM).</p>
     */
    inline const FsxUpdateProtocolSmb& GetSMB() const { return m_sMB; }
    inline bool SMBHasBeenSet() const { return m_sMBHasBeenSet; }
    template<typename SMBT = FsxUpdateProtocolSmb>
    void SetSMB(SMBT&& value) { m_sMBHasBeenSet = true; m_sMB = std::forward<SMBT>(value); }
    template<typename SMBT = FsxUpdateProtocolSmb>
    FsxUpdateProtocol& WithSMB(SMBT&& value) { SetSMB(std::forward<SMBT>(value)); return *this;}
    ///@}
  private:

    FsxProtocolNfs m_nFS;
    bool m_nFSHasBeenSet = false;

    FsxUpdateProtocolSmb m_sMB;
    bool m_sMBHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
