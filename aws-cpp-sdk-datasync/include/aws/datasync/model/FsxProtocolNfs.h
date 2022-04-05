/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/NfsMountOptions.h>
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
   * <p>Represents the Network File System (NFS) protocol that DataSync uses to
   * access your Amazon FSx for OpenZFS file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/FsxProtocolNfs">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API FsxProtocolNfs
  {
  public:
    FsxProtocolNfs();
    FsxProtocolNfs(Aws::Utils::Json::JsonView jsonValue);
    FsxProtocolNfs& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const NfsMountOptions& GetMountOptions() const{ return m_mountOptions; }

    
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }

    
    inline void SetMountOptions(const NfsMountOptions& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }

    
    inline void SetMountOptions(NfsMountOptions&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }

    
    inline FsxProtocolNfs& WithMountOptions(const NfsMountOptions& value) { SetMountOptions(value); return *this;}

    
    inline FsxProtocolNfs& WithMountOptions(NfsMountOptions&& value) { SetMountOptions(std::move(value)); return *this;}

  private:

    NfsMountOptions m_mountOptions;
    bool m_mountOptionsHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
