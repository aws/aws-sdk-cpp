/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies who can mount an OpenZFS file system and the options available
   * while mounting the file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OpenZFSClientConfiguration">AWS
   * API Reference</a></p>
   */
  class OpenZFSClientConfiguration
  {
  public:
    AWS_FSX_API OpenZFSClientConfiguration();
    AWS_FSX_API OpenZFSClientConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OpenZFSClientConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that specifies who can mount the file system. You can provide a
     * wildcard character (<code>*</code>), an IP address (<code>0.0.0.0</code>), or a
     * CIDR address (<code>192.0.2.0/24</code>). By default, Amazon FSx uses the
     * wildcard character when specifying the client. </p>
     */
    inline const Aws::String& GetClients() const{ return m_clients; }

    /**
     * <p>A value that specifies who can mount the file system. You can provide a
     * wildcard character (<code>*</code>), an IP address (<code>0.0.0.0</code>), or a
     * CIDR address (<code>192.0.2.0/24</code>). By default, Amazon FSx uses the
     * wildcard character when specifying the client. </p>
     */
    inline bool ClientsHasBeenSet() const { return m_clientsHasBeenSet; }

    /**
     * <p>A value that specifies who can mount the file system. You can provide a
     * wildcard character (<code>*</code>), an IP address (<code>0.0.0.0</code>), or a
     * CIDR address (<code>192.0.2.0/24</code>). By default, Amazon FSx uses the
     * wildcard character when specifying the client. </p>
     */
    inline void SetClients(const Aws::String& value) { m_clientsHasBeenSet = true; m_clients = value; }

    /**
     * <p>A value that specifies who can mount the file system. You can provide a
     * wildcard character (<code>*</code>), an IP address (<code>0.0.0.0</code>), or a
     * CIDR address (<code>192.0.2.0/24</code>). By default, Amazon FSx uses the
     * wildcard character when specifying the client. </p>
     */
    inline void SetClients(Aws::String&& value) { m_clientsHasBeenSet = true; m_clients = std::move(value); }

    /**
     * <p>A value that specifies who can mount the file system. You can provide a
     * wildcard character (<code>*</code>), an IP address (<code>0.0.0.0</code>), or a
     * CIDR address (<code>192.0.2.0/24</code>). By default, Amazon FSx uses the
     * wildcard character when specifying the client. </p>
     */
    inline void SetClients(const char* value) { m_clientsHasBeenSet = true; m_clients.assign(value); }

    /**
     * <p>A value that specifies who can mount the file system. You can provide a
     * wildcard character (<code>*</code>), an IP address (<code>0.0.0.0</code>), or a
     * CIDR address (<code>192.0.2.0/24</code>). By default, Amazon FSx uses the
     * wildcard character when specifying the client. </p>
     */
    inline OpenZFSClientConfiguration& WithClients(const Aws::String& value) { SetClients(value); return *this;}

    /**
     * <p>A value that specifies who can mount the file system. You can provide a
     * wildcard character (<code>*</code>), an IP address (<code>0.0.0.0</code>), or a
     * CIDR address (<code>192.0.2.0/24</code>). By default, Amazon FSx uses the
     * wildcard character when specifying the client. </p>
     */
    inline OpenZFSClientConfiguration& WithClients(Aws::String&& value) { SetClients(std::move(value)); return *this;}

    /**
     * <p>A value that specifies who can mount the file system. You can provide a
     * wildcard character (<code>*</code>), an IP address (<code>0.0.0.0</code>), or a
     * CIDR address (<code>192.0.2.0/24</code>). By default, Amazon FSx uses the
     * wildcard character when specifying the client. </p>
     */
    inline OpenZFSClientConfiguration& WithClients(const char* value) { SetClients(value); return *this;}


    /**
     * <p>The options to use when mounting the file system. For a list of options that
     * you can use with Network File System (NFS), see the <a
     * href="https://linux.die.net/man/5/exports">exports(5) - Linux man page</a>. When
     * choosing your options, consider the following:</p> <ul> <li> <p>
     * <code>crossmnt</code> is used by default. If you don't specify
     * <code>crossmnt</code> when changing the client configuration, you won't be able
     * to see or access snapshots in your file system's snapshot directory.</p> </li>
     * <li> <p> <code>sync</code> is used by default. If you instead specify
     * <code>async</code>, the system acknowledges writes before writing to disk. If
     * the system crashes before the writes are finished, you lose the unwritten data.
     * </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetOptions() const{ return m_options; }

    /**
     * <p>The options to use when mounting the file system. For a list of options that
     * you can use with Network File System (NFS), see the <a
     * href="https://linux.die.net/man/5/exports">exports(5) - Linux man page</a>. When
     * choosing your options, consider the following:</p> <ul> <li> <p>
     * <code>crossmnt</code> is used by default. If you don't specify
     * <code>crossmnt</code> when changing the client configuration, you won't be able
     * to see or access snapshots in your file system's snapshot directory.</p> </li>
     * <li> <p> <code>sync</code> is used by default. If you instead specify
     * <code>async</code>, the system acknowledges writes before writing to disk. If
     * the system crashes before the writes are finished, you lose the unwritten data.
     * </p> </li> </ul>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The options to use when mounting the file system. For a list of options that
     * you can use with Network File System (NFS), see the <a
     * href="https://linux.die.net/man/5/exports">exports(5) - Linux man page</a>. When
     * choosing your options, consider the following:</p> <ul> <li> <p>
     * <code>crossmnt</code> is used by default. If you don't specify
     * <code>crossmnt</code> when changing the client configuration, you won't be able
     * to see or access snapshots in your file system's snapshot directory.</p> </li>
     * <li> <p> <code>sync</code> is used by default. If you instead specify
     * <code>async</code>, the system acknowledges writes before writing to disk. If
     * the system crashes before the writes are finished, you lose the unwritten data.
     * </p> </li> </ul>
     */
    inline void SetOptions(const Aws::Vector<Aws::String>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The options to use when mounting the file system. For a list of options that
     * you can use with Network File System (NFS), see the <a
     * href="https://linux.die.net/man/5/exports">exports(5) - Linux man page</a>. When
     * choosing your options, consider the following:</p> <ul> <li> <p>
     * <code>crossmnt</code> is used by default. If you don't specify
     * <code>crossmnt</code> when changing the client configuration, you won't be able
     * to see or access snapshots in your file system's snapshot directory.</p> </li>
     * <li> <p> <code>sync</code> is used by default. If you instead specify
     * <code>async</code>, the system acknowledges writes before writing to disk. If
     * the system crashes before the writes are finished, you lose the unwritten data.
     * </p> </li> </ul>
     */
    inline void SetOptions(Aws::Vector<Aws::String>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The options to use when mounting the file system. For a list of options that
     * you can use with Network File System (NFS), see the <a
     * href="https://linux.die.net/man/5/exports">exports(5) - Linux man page</a>. When
     * choosing your options, consider the following:</p> <ul> <li> <p>
     * <code>crossmnt</code> is used by default. If you don't specify
     * <code>crossmnt</code> when changing the client configuration, you won't be able
     * to see or access snapshots in your file system's snapshot directory.</p> </li>
     * <li> <p> <code>sync</code> is used by default. If you instead specify
     * <code>async</code>, the system acknowledges writes before writing to disk. If
     * the system crashes before the writes are finished, you lose the unwritten data.
     * </p> </li> </ul>
     */
    inline OpenZFSClientConfiguration& WithOptions(const Aws::Vector<Aws::String>& value) { SetOptions(value); return *this;}

    /**
     * <p>The options to use when mounting the file system. For a list of options that
     * you can use with Network File System (NFS), see the <a
     * href="https://linux.die.net/man/5/exports">exports(5) - Linux man page</a>. When
     * choosing your options, consider the following:</p> <ul> <li> <p>
     * <code>crossmnt</code> is used by default. If you don't specify
     * <code>crossmnt</code> when changing the client configuration, you won't be able
     * to see or access snapshots in your file system's snapshot directory.</p> </li>
     * <li> <p> <code>sync</code> is used by default. If you instead specify
     * <code>async</code>, the system acknowledges writes before writing to disk. If
     * the system crashes before the writes are finished, you lose the unwritten data.
     * </p> </li> </ul>
     */
    inline OpenZFSClientConfiguration& WithOptions(Aws::Vector<Aws::String>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The options to use when mounting the file system. For a list of options that
     * you can use with Network File System (NFS), see the <a
     * href="https://linux.die.net/man/5/exports">exports(5) - Linux man page</a>. When
     * choosing your options, consider the following:</p> <ul> <li> <p>
     * <code>crossmnt</code> is used by default. If you don't specify
     * <code>crossmnt</code> when changing the client configuration, you won't be able
     * to see or access snapshots in your file system's snapshot directory.</p> </li>
     * <li> <p> <code>sync</code> is used by default. If you instead specify
     * <code>async</code>, the system acknowledges writes before writing to disk. If
     * the system crashes before the writes are finished, you lose the unwritten data.
     * </p> </li> </ul>
     */
    inline OpenZFSClientConfiguration& AddOptions(const Aws::String& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p>The options to use when mounting the file system. For a list of options that
     * you can use with Network File System (NFS), see the <a
     * href="https://linux.die.net/man/5/exports">exports(5) - Linux man page</a>. When
     * choosing your options, consider the following:</p> <ul> <li> <p>
     * <code>crossmnt</code> is used by default. If you don't specify
     * <code>crossmnt</code> when changing the client configuration, you won't be able
     * to see or access snapshots in your file system's snapshot directory.</p> </li>
     * <li> <p> <code>sync</code> is used by default. If you instead specify
     * <code>async</code>, the system acknowledges writes before writing to disk. If
     * the system crashes before the writes are finished, you lose the unwritten data.
     * </p> </li> </ul>
     */
    inline OpenZFSClientConfiguration& AddOptions(Aws::String&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }

    /**
     * <p>The options to use when mounting the file system. For a list of options that
     * you can use with Network File System (NFS), see the <a
     * href="https://linux.die.net/man/5/exports">exports(5) - Linux man page</a>. When
     * choosing your options, consider the following:</p> <ul> <li> <p>
     * <code>crossmnt</code> is used by default. If you don't specify
     * <code>crossmnt</code> when changing the client configuration, you won't be able
     * to see or access snapshots in your file system's snapshot directory.</p> </li>
     * <li> <p> <code>sync</code> is used by default. If you instead specify
     * <code>async</code>, the system acknowledges writes before writing to disk. If
     * the system crashes before the writes are finished, you lose the unwritten data.
     * </p> </li> </ul>
     */
    inline OpenZFSClientConfiguration& AddOptions(const char* value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

  private:

    Aws::String m_clients;
    bool m_clientsHasBeenSet = false;

    Aws::Vector<Aws::String> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
