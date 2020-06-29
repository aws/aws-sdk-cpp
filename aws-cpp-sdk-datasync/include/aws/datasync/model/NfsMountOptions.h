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
   * <p>Represents the mount options that are available for DataSync to access an NFS
   * location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/NfsMountOptions">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API NfsMountOptions
  {
  public:
    NfsMountOptions();
    NfsMountOptions(Aws::Utils::Json::JsonView jsonValue);
    NfsMountOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The specific NFS version that you want DataSync to use to mount your NFS
     * share. If the server refuses to use the version specified, the sync will fail.
     * If you don't specify a version, DataSync defaults to <code>AUTOMATIC</code>.
     * That is, DataSync automatically selects a version based on negotiation with the
     * NFS server.</p> <p>You can specify the following NFS versions:</p> <ul> <li> <p>
     * <b> <a href="https://tools.ietf.org/html/rfc1813">NFSv3</a> </b> - stateless
     * protocol version that allows for asynchronous writes on the server.</p> </li>
     * <li> <p> <b> <a href="https://tools.ietf.org/html/rfc3530">NFSv4.0</a> </b> -
     * stateful, firewall-friendly protocol version that supports delegations and
     * pseudo filesystems.</p> </li> <li> <p> <b> <a
     * href="https://tools.ietf.org/html/rfc5661">NFSv4.1</a> </b> - stateful protocol
     * version that supports sessions, directory delegations, and parallel data
     * processing. Version 4.1 also includes all features available in version 4.0.</p>
     * </li> </ul>
     */
    inline const NfsVersion& GetVersion() const{ return m_version; }

    /**
     * <p>The specific NFS version that you want DataSync to use to mount your NFS
     * share. If the server refuses to use the version specified, the sync will fail.
     * If you don't specify a version, DataSync defaults to <code>AUTOMATIC</code>.
     * That is, DataSync automatically selects a version based on negotiation with the
     * NFS server.</p> <p>You can specify the following NFS versions:</p> <ul> <li> <p>
     * <b> <a href="https://tools.ietf.org/html/rfc1813">NFSv3</a> </b> - stateless
     * protocol version that allows for asynchronous writes on the server.</p> </li>
     * <li> <p> <b> <a href="https://tools.ietf.org/html/rfc3530">NFSv4.0</a> </b> -
     * stateful, firewall-friendly protocol version that supports delegations and
     * pseudo filesystems.</p> </li> <li> <p> <b> <a
     * href="https://tools.ietf.org/html/rfc5661">NFSv4.1</a> </b> - stateful protocol
     * version that supports sessions, directory delegations, and parallel data
     * processing. Version 4.1 also includes all features available in version 4.0.</p>
     * </li> </ul>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The specific NFS version that you want DataSync to use to mount your NFS
     * share. If the server refuses to use the version specified, the sync will fail.
     * If you don't specify a version, DataSync defaults to <code>AUTOMATIC</code>.
     * That is, DataSync automatically selects a version based on negotiation with the
     * NFS server.</p> <p>You can specify the following NFS versions:</p> <ul> <li> <p>
     * <b> <a href="https://tools.ietf.org/html/rfc1813">NFSv3</a> </b> - stateless
     * protocol version that allows for asynchronous writes on the server.</p> </li>
     * <li> <p> <b> <a href="https://tools.ietf.org/html/rfc3530">NFSv4.0</a> </b> -
     * stateful, firewall-friendly protocol version that supports delegations and
     * pseudo filesystems.</p> </li> <li> <p> <b> <a
     * href="https://tools.ietf.org/html/rfc5661">NFSv4.1</a> </b> - stateful protocol
     * version that supports sessions, directory delegations, and parallel data
     * processing. Version 4.1 also includes all features available in version 4.0.</p>
     * </li> </ul>
     */
    inline void SetVersion(const NfsVersion& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The specific NFS version that you want DataSync to use to mount your NFS
     * share. If the server refuses to use the version specified, the sync will fail.
     * If you don't specify a version, DataSync defaults to <code>AUTOMATIC</code>.
     * That is, DataSync automatically selects a version based on negotiation with the
     * NFS server.</p> <p>You can specify the following NFS versions:</p> <ul> <li> <p>
     * <b> <a href="https://tools.ietf.org/html/rfc1813">NFSv3</a> </b> - stateless
     * protocol version that allows for asynchronous writes on the server.</p> </li>
     * <li> <p> <b> <a href="https://tools.ietf.org/html/rfc3530">NFSv4.0</a> </b> -
     * stateful, firewall-friendly protocol version that supports delegations and
     * pseudo filesystems.</p> </li> <li> <p> <b> <a
     * href="https://tools.ietf.org/html/rfc5661">NFSv4.1</a> </b> - stateful protocol
     * version that supports sessions, directory delegations, and parallel data
     * processing. Version 4.1 also includes all features available in version 4.0.</p>
     * </li> </ul>
     */
    inline void SetVersion(NfsVersion&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The specific NFS version that you want DataSync to use to mount your NFS
     * share. If the server refuses to use the version specified, the sync will fail.
     * If you don't specify a version, DataSync defaults to <code>AUTOMATIC</code>.
     * That is, DataSync automatically selects a version based on negotiation with the
     * NFS server.</p> <p>You can specify the following NFS versions:</p> <ul> <li> <p>
     * <b> <a href="https://tools.ietf.org/html/rfc1813">NFSv3</a> </b> - stateless
     * protocol version that allows for asynchronous writes on the server.</p> </li>
     * <li> <p> <b> <a href="https://tools.ietf.org/html/rfc3530">NFSv4.0</a> </b> -
     * stateful, firewall-friendly protocol version that supports delegations and
     * pseudo filesystems.</p> </li> <li> <p> <b> <a
     * href="https://tools.ietf.org/html/rfc5661">NFSv4.1</a> </b> - stateful protocol
     * version that supports sessions, directory delegations, and parallel data
     * processing. Version 4.1 also includes all features available in version 4.0.</p>
     * </li> </ul>
     */
    inline NfsMountOptions& WithVersion(const NfsVersion& value) { SetVersion(value); return *this;}

    /**
     * <p>The specific NFS version that you want DataSync to use to mount your NFS
     * share. If the server refuses to use the version specified, the sync will fail.
     * If you don't specify a version, DataSync defaults to <code>AUTOMATIC</code>.
     * That is, DataSync automatically selects a version based on negotiation with the
     * NFS server.</p> <p>You can specify the following NFS versions:</p> <ul> <li> <p>
     * <b> <a href="https://tools.ietf.org/html/rfc1813">NFSv3</a> </b> - stateless
     * protocol version that allows for asynchronous writes on the server.</p> </li>
     * <li> <p> <b> <a href="https://tools.ietf.org/html/rfc3530">NFSv4.0</a> </b> -
     * stateful, firewall-friendly protocol version that supports delegations and
     * pseudo filesystems.</p> </li> <li> <p> <b> <a
     * href="https://tools.ietf.org/html/rfc5661">NFSv4.1</a> </b> - stateful protocol
     * version that supports sessions, directory delegations, and parallel data
     * processing. Version 4.1 also includes all features available in version 4.0.</p>
     * </li> </ul>
     */
    inline NfsMountOptions& WithVersion(NfsVersion&& value) { SetVersion(std::move(value)); return *this;}

  private:

    NfsVersion m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
