/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/FsxProtocolNfs.h>
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
   * <p>Represents the protocol that DataSync uses to access your Amazon FSx for
   * OpenZFS file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/FsxProtocol">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API FsxProtocol
  {
  public:
    FsxProtocol();
    FsxProtocol(Aws::Utils::Json::JsonView jsonValue);
    FsxProtocol& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents the Network File System (NFS) protocol that DataSync uses to
     * access your FSx for OpenZFS file system.</p>
     */
    inline const FsxProtocolNfs& GetNFS() const{ return m_nFS; }

    /**
     * <p>Represents the Network File System (NFS) protocol that DataSync uses to
     * access your FSx for OpenZFS file system.</p>
     */
    inline bool NFSHasBeenSet() const { return m_nFSHasBeenSet; }

    /**
     * <p>Represents the Network File System (NFS) protocol that DataSync uses to
     * access your FSx for OpenZFS file system.</p>
     */
    inline void SetNFS(const FsxProtocolNfs& value) { m_nFSHasBeenSet = true; m_nFS = value; }

    /**
     * <p>Represents the Network File System (NFS) protocol that DataSync uses to
     * access your FSx for OpenZFS file system.</p>
     */
    inline void SetNFS(FsxProtocolNfs&& value) { m_nFSHasBeenSet = true; m_nFS = std::move(value); }

    /**
     * <p>Represents the Network File System (NFS) protocol that DataSync uses to
     * access your FSx for OpenZFS file system.</p>
     */
    inline FsxProtocol& WithNFS(const FsxProtocolNfs& value) { SetNFS(value); return *this;}

    /**
     * <p>Represents the Network File System (NFS) protocol that DataSync uses to
     * access your FSx for OpenZFS file system.</p>
     */
    inline FsxProtocol& WithNFS(FsxProtocolNfs&& value) { SetNFS(std::move(value)); return *this;}

  private:

    FsxProtocolNfs m_nFS;
    bool m_nFSHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
