/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/NfsVersion.h>
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
   * <p>Specifies how DataSync can access a location using the NFS
   * protocol.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/NfsMountOptions">AWS
   * API Reference</a></p>
   */
  class NfsMountOptions
  {
  public:
    AWS_DATASYNC_API NfsMountOptions();
    AWS_DATASYNC_API NfsMountOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API NfsMountOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the NFS version that you want DataSync to use when mounting your
     * NFS share. If the server refuses to use the version specified, the task
     * fails.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>AUTOMATIC</code> (default): DataSync chooses NFS version 4.1.</p> </li>
     * <li> <p> <code>NFS3</code>: Stateless protocol version that allows for
     * asynchronous writes on the server.</p> </li> <li> <p> <code>NFSv4_0</code>:
     * Stateful, firewall-friendly protocol version that supports delegations and
     * pseudo file systems.</p> </li> <li> <p> <code>NFSv4_1</code>: Stateful protocol
     * version that supports sessions, directory delegations, and parallel data
     * processing. NFS version 4.1 also includes all features available in version
     * 4.0.</p> </li> </ul>  <p>DataSync currently only supports NFS version 3
     * with Amazon FSx for NetApp ONTAP locations.</p> 
     */
    inline const NfsVersion& GetVersion() const{ return m_version; }

    /**
     * <p>Specifies the NFS version that you want DataSync to use when mounting your
     * NFS share. If the server refuses to use the version specified, the task
     * fails.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>AUTOMATIC</code> (default): DataSync chooses NFS version 4.1.</p> </li>
     * <li> <p> <code>NFS3</code>: Stateless protocol version that allows for
     * asynchronous writes on the server.</p> </li> <li> <p> <code>NFSv4_0</code>:
     * Stateful, firewall-friendly protocol version that supports delegations and
     * pseudo file systems.</p> </li> <li> <p> <code>NFSv4_1</code>: Stateful protocol
     * version that supports sessions, directory delegations, and parallel data
     * processing. NFS version 4.1 also includes all features available in version
     * 4.0.</p> </li> </ul>  <p>DataSync currently only supports NFS version 3
     * with Amazon FSx for NetApp ONTAP locations.</p> 
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Specifies the NFS version that you want DataSync to use when mounting your
     * NFS share. If the server refuses to use the version specified, the task
     * fails.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>AUTOMATIC</code> (default): DataSync chooses NFS version 4.1.</p> </li>
     * <li> <p> <code>NFS3</code>: Stateless protocol version that allows for
     * asynchronous writes on the server.</p> </li> <li> <p> <code>NFSv4_0</code>:
     * Stateful, firewall-friendly protocol version that supports delegations and
     * pseudo file systems.</p> </li> <li> <p> <code>NFSv4_1</code>: Stateful protocol
     * version that supports sessions, directory delegations, and parallel data
     * processing. NFS version 4.1 also includes all features available in version
     * 4.0.</p> </li> </ul>  <p>DataSync currently only supports NFS version 3
     * with Amazon FSx for NetApp ONTAP locations.</p> 
     */
    inline void SetVersion(const NfsVersion& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Specifies the NFS version that you want DataSync to use when mounting your
     * NFS share. If the server refuses to use the version specified, the task
     * fails.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>AUTOMATIC</code> (default): DataSync chooses NFS version 4.1.</p> </li>
     * <li> <p> <code>NFS3</code>: Stateless protocol version that allows for
     * asynchronous writes on the server.</p> </li> <li> <p> <code>NFSv4_0</code>:
     * Stateful, firewall-friendly protocol version that supports delegations and
     * pseudo file systems.</p> </li> <li> <p> <code>NFSv4_1</code>: Stateful protocol
     * version that supports sessions, directory delegations, and parallel data
     * processing. NFS version 4.1 also includes all features available in version
     * 4.0.</p> </li> </ul>  <p>DataSync currently only supports NFS version 3
     * with Amazon FSx for NetApp ONTAP locations.</p> 
     */
    inline void SetVersion(NfsVersion&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Specifies the NFS version that you want DataSync to use when mounting your
     * NFS share. If the server refuses to use the version specified, the task
     * fails.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>AUTOMATIC</code> (default): DataSync chooses NFS version 4.1.</p> </li>
     * <li> <p> <code>NFS3</code>: Stateless protocol version that allows for
     * asynchronous writes on the server.</p> </li> <li> <p> <code>NFSv4_0</code>:
     * Stateful, firewall-friendly protocol version that supports delegations and
     * pseudo file systems.</p> </li> <li> <p> <code>NFSv4_1</code>: Stateful protocol
     * version that supports sessions, directory delegations, and parallel data
     * processing. NFS version 4.1 also includes all features available in version
     * 4.0.</p> </li> </ul>  <p>DataSync currently only supports NFS version 3
     * with Amazon FSx for NetApp ONTAP locations.</p> 
     */
    inline NfsMountOptions& WithVersion(const NfsVersion& value) { SetVersion(value); return *this;}

    /**
     * <p>Specifies the NFS version that you want DataSync to use when mounting your
     * NFS share. If the server refuses to use the version specified, the task
     * fails.</p> <p>You can specify the following options:</p> <ul> <li> <p>
     * <code>AUTOMATIC</code> (default): DataSync chooses NFS version 4.1.</p> </li>
     * <li> <p> <code>NFS3</code>: Stateless protocol version that allows for
     * asynchronous writes on the server.</p> </li> <li> <p> <code>NFSv4_0</code>:
     * Stateful, firewall-friendly protocol version that supports delegations and
     * pseudo file systems.</p> </li> <li> <p> <code>NFSv4_1</code>: Stateful protocol
     * version that supports sessions, directory delegations, and parallel data
     * processing. NFS version 4.1 also includes all features available in version
     * 4.0.</p> </li> </ul>  <p>DataSync currently only supports NFS version 3
     * with Amazon FSx for NetApp ONTAP locations.</p> 
     */
    inline NfsMountOptions& WithVersion(NfsVersion&& value) { SetVersion(std::move(value)); return *this;}

  private:

    NfsVersion m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
