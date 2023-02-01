/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/FsxProtocolNfs.h>
#include <aws/datasync/model/FsxProtocolSmb.h>
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
   * FSx file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/FsxProtocol">AWS
   * API Reference</a></p>
   */
  class FsxProtocol
  {
  public:
    AWS_DATASYNC_API FsxProtocol();
    AWS_DATASYNC_API FsxProtocol(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API FsxProtocol& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the Network File System (NFS) protocol configuration that DataSync
     * uses to access your FSx for OpenZFS file system or FSx for ONTAP file system's
     * storage virtual machine (SVM).</p>
     */
    inline const FsxProtocolNfs& GetNFS() const{ return m_nFS; }

    /**
     * <p>Specifies the Network File System (NFS) protocol configuration that DataSync
     * uses to access your FSx for OpenZFS file system or FSx for ONTAP file system's
     * storage virtual machine (SVM).</p>
     */
    inline bool NFSHasBeenSet() const { return m_nFSHasBeenSet; }

    /**
     * <p>Specifies the Network File System (NFS) protocol configuration that DataSync
     * uses to access your FSx for OpenZFS file system or FSx for ONTAP file system's
     * storage virtual machine (SVM).</p>
     */
    inline void SetNFS(const FsxProtocolNfs& value) { m_nFSHasBeenSet = true; m_nFS = value; }

    /**
     * <p>Specifies the Network File System (NFS) protocol configuration that DataSync
     * uses to access your FSx for OpenZFS file system or FSx for ONTAP file system's
     * storage virtual machine (SVM).</p>
     */
    inline void SetNFS(FsxProtocolNfs&& value) { m_nFSHasBeenSet = true; m_nFS = std::move(value); }

    /**
     * <p>Specifies the Network File System (NFS) protocol configuration that DataSync
     * uses to access your FSx for OpenZFS file system or FSx for ONTAP file system's
     * storage virtual machine (SVM).</p>
     */
    inline FsxProtocol& WithNFS(const FsxProtocolNfs& value) { SetNFS(value); return *this;}

    /**
     * <p>Specifies the Network File System (NFS) protocol configuration that DataSync
     * uses to access your FSx for OpenZFS file system or FSx for ONTAP file system's
     * storage virtual machine (SVM).</p>
     */
    inline FsxProtocol& WithNFS(FsxProtocolNfs&& value) { SetNFS(std::move(value)); return *this;}


    /**
     * <p>Specifies the Server Message Block (SMB) protocol configuration that DataSync
     * uses to access your FSx for ONTAP file system's SVM.</p>
     */
    inline const FsxProtocolSmb& GetSMB() const{ return m_sMB; }

    /**
     * <p>Specifies the Server Message Block (SMB) protocol configuration that DataSync
     * uses to access your FSx for ONTAP file system's SVM.</p>
     */
    inline bool SMBHasBeenSet() const { return m_sMBHasBeenSet; }

    /**
     * <p>Specifies the Server Message Block (SMB) protocol configuration that DataSync
     * uses to access your FSx for ONTAP file system's SVM.</p>
     */
    inline void SetSMB(const FsxProtocolSmb& value) { m_sMBHasBeenSet = true; m_sMB = value; }

    /**
     * <p>Specifies the Server Message Block (SMB) protocol configuration that DataSync
     * uses to access your FSx for ONTAP file system's SVM.</p>
     */
    inline void SetSMB(FsxProtocolSmb&& value) { m_sMBHasBeenSet = true; m_sMB = std::move(value); }

    /**
     * <p>Specifies the Server Message Block (SMB) protocol configuration that DataSync
     * uses to access your FSx for ONTAP file system's SVM.</p>
     */
    inline FsxProtocol& WithSMB(const FsxProtocolSmb& value) { SetSMB(value); return *this;}

    /**
     * <p>Specifies the Server Message Block (SMB) protocol configuration that DataSync
     * uses to access your FSx for ONTAP file system's SVM.</p>
     */
    inline FsxProtocol& WithSMB(FsxProtocolSmb&& value) { SetSMB(std::move(value)); return *this;}

  private:

    FsxProtocolNfs m_nFS;
    bool m_nFSHasBeenSet = false;

    FsxProtocolSmb m_sMB;
    bool m_sMBHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
