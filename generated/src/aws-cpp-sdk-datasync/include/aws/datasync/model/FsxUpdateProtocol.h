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
    AWS_DATASYNC_API FsxUpdateProtocol();
    AWS_DATASYNC_API FsxUpdateProtocol(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API FsxUpdateProtocol& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const FsxProtocolNfs& GetNFS() const{ return m_nFS; }
    inline bool NFSHasBeenSet() const { return m_nFSHasBeenSet; }
    inline void SetNFS(const FsxProtocolNfs& value) { m_nFSHasBeenSet = true; m_nFS = value; }
    inline void SetNFS(FsxProtocolNfs&& value) { m_nFSHasBeenSet = true; m_nFS = std::move(value); }
    inline FsxUpdateProtocol& WithNFS(const FsxProtocolNfs& value) { SetNFS(value); return *this;}
    inline FsxUpdateProtocol& WithNFS(FsxProtocolNfs&& value) { SetNFS(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Server Message Block (SMB) protocol configuration that DataSync
     * uses to access your FSx for ONTAP file system's storage virtual machine
     * (SVM).</p>
     */
    inline const FsxUpdateProtocolSmb& GetSMB() const{ return m_sMB; }
    inline bool SMBHasBeenSet() const { return m_sMBHasBeenSet; }
    inline void SetSMB(const FsxUpdateProtocolSmb& value) { m_sMBHasBeenSet = true; m_sMB = value; }
    inline void SetSMB(FsxUpdateProtocolSmb&& value) { m_sMBHasBeenSet = true; m_sMB = std::move(value); }
    inline FsxUpdateProtocol& WithSMB(const FsxUpdateProtocolSmb& value) { SetSMB(value); return *this;}
    inline FsxUpdateProtocol& WithSMB(FsxUpdateProtocolSmb&& value) { SetSMB(std::move(value)); return *this;}
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
