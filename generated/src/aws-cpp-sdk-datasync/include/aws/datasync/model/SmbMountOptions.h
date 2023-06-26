/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/SmbVersion.h>
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
   * <p>Specifies the version of the Server Message Block (SMB) protocol that
   * DataSync uses to access an SMB file server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/SmbMountOptions">AWS
   * API Reference</a></p>
   */
  class SmbMountOptions
  {
  public:
    AWS_DATASYNC_API SmbMountOptions();
    AWS_DATASYNC_API SmbMountOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API SmbMountOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>By default, DataSync automatically chooses an SMB protocol version based on
     * negotiation with your SMB file server. You also can configure DataSync to use a
     * specific SMB version, but we recommend doing this only if DataSync has trouble
     * negotiating with the SMB file server automatically.</p> <p>These are the
     * following options for configuring the SMB version:</p> <ul> <li> <p>
     * <code>AUTOMATIC</code> (default): DataSync and the SMB file server negotiate the
     * highest version of SMB that they mutually support between 2.1 and 3.1.1.</p>
     * <p>This is the recommended option. If you instead choose a specific version that
     * your file server doesn't support, you may get an <code>Operation Not
     * Supported</code> error.</p> </li> <li> <p> <code>SMB3</code>: Restricts the
     * protocol negotiation to only SMB version 3.0.2.</p> </li> <li> <p>
     * <code>SMB2</code>: Restricts the protocol negotiation to only SMB version
     * 2.1.</p> </li> <li> <p> <code>SMB2_0</code>: Restricts the protocol negotiation
     * to only SMB version 2.0.</p> </li> <li> <p> <code>SMB1</code>: Restricts the
     * protocol negotiation to only SMB version 1.0.</p>  <p>The
     * <code>SMB1</code> option isn't available when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationFsxOntap.html">creating
     * an Amazon FSx for NetApp ONTAP location</a>.</p>  </li> </ul>
     */
    inline const SmbVersion& GetVersion() const{ return m_version; }

    /**
     * <p>By default, DataSync automatically chooses an SMB protocol version based on
     * negotiation with your SMB file server. You also can configure DataSync to use a
     * specific SMB version, but we recommend doing this only if DataSync has trouble
     * negotiating with the SMB file server automatically.</p> <p>These are the
     * following options for configuring the SMB version:</p> <ul> <li> <p>
     * <code>AUTOMATIC</code> (default): DataSync and the SMB file server negotiate the
     * highest version of SMB that they mutually support between 2.1 and 3.1.1.</p>
     * <p>This is the recommended option. If you instead choose a specific version that
     * your file server doesn't support, you may get an <code>Operation Not
     * Supported</code> error.</p> </li> <li> <p> <code>SMB3</code>: Restricts the
     * protocol negotiation to only SMB version 3.0.2.</p> </li> <li> <p>
     * <code>SMB2</code>: Restricts the protocol negotiation to only SMB version
     * 2.1.</p> </li> <li> <p> <code>SMB2_0</code>: Restricts the protocol negotiation
     * to only SMB version 2.0.</p> </li> <li> <p> <code>SMB1</code>: Restricts the
     * protocol negotiation to only SMB version 1.0.</p>  <p>The
     * <code>SMB1</code> option isn't available when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationFsxOntap.html">creating
     * an Amazon FSx for NetApp ONTAP location</a>.</p>  </li> </ul>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>By default, DataSync automatically chooses an SMB protocol version based on
     * negotiation with your SMB file server. You also can configure DataSync to use a
     * specific SMB version, but we recommend doing this only if DataSync has trouble
     * negotiating with the SMB file server automatically.</p> <p>These are the
     * following options for configuring the SMB version:</p> <ul> <li> <p>
     * <code>AUTOMATIC</code> (default): DataSync and the SMB file server negotiate the
     * highest version of SMB that they mutually support between 2.1 and 3.1.1.</p>
     * <p>This is the recommended option. If you instead choose a specific version that
     * your file server doesn't support, you may get an <code>Operation Not
     * Supported</code> error.</p> </li> <li> <p> <code>SMB3</code>: Restricts the
     * protocol negotiation to only SMB version 3.0.2.</p> </li> <li> <p>
     * <code>SMB2</code>: Restricts the protocol negotiation to only SMB version
     * 2.1.</p> </li> <li> <p> <code>SMB2_0</code>: Restricts the protocol negotiation
     * to only SMB version 2.0.</p> </li> <li> <p> <code>SMB1</code>: Restricts the
     * protocol negotiation to only SMB version 1.0.</p>  <p>The
     * <code>SMB1</code> option isn't available when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationFsxOntap.html">creating
     * an Amazon FSx for NetApp ONTAP location</a>.</p>  </li> </ul>
     */
    inline void SetVersion(const SmbVersion& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>By default, DataSync automatically chooses an SMB protocol version based on
     * negotiation with your SMB file server. You also can configure DataSync to use a
     * specific SMB version, but we recommend doing this only if DataSync has trouble
     * negotiating with the SMB file server automatically.</p> <p>These are the
     * following options for configuring the SMB version:</p> <ul> <li> <p>
     * <code>AUTOMATIC</code> (default): DataSync and the SMB file server negotiate the
     * highest version of SMB that they mutually support between 2.1 and 3.1.1.</p>
     * <p>This is the recommended option. If you instead choose a specific version that
     * your file server doesn't support, you may get an <code>Operation Not
     * Supported</code> error.</p> </li> <li> <p> <code>SMB3</code>: Restricts the
     * protocol negotiation to only SMB version 3.0.2.</p> </li> <li> <p>
     * <code>SMB2</code>: Restricts the protocol negotiation to only SMB version
     * 2.1.</p> </li> <li> <p> <code>SMB2_0</code>: Restricts the protocol negotiation
     * to only SMB version 2.0.</p> </li> <li> <p> <code>SMB1</code>: Restricts the
     * protocol negotiation to only SMB version 1.0.</p>  <p>The
     * <code>SMB1</code> option isn't available when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationFsxOntap.html">creating
     * an Amazon FSx for NetApp ONTAP location</a>.</p>  </li> </ul>
     */
    inline void SetVersion(SmbVersion&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>By default, DataSync automatically chooses an SMB protocol version based on
     * negotiation with your SMB file server. You also can configure DataSync to use a
     * specific SMB version, but we recommend doing this only if DataSync has trouble
     * negotiating with the SMB file server automatically.</p> <p>These are the
     * following options for configuring the SMB version:</p> <ul> <li> <p>
     * <code>AUTOMATIC</code> (default): DataSync and the SMB file server negotiate the
     * highest version of SMB that they mutually support between 2.1 and 3.1.1.</p>
     * <p>This is the recommended option. If you instead choose a specific version that
     * your file server doesn't support, you may get an <code>Operation Not
     * Supported</code> error.</p> </li> <li> <p> <code>SMB3</code>: Restricts the
     * protocol negotiation to only SMB version 3.0.2.</p> </li> <li> <p>
     * <code>SMB2</code>: Restricts the protocol negotiation to only SMB version
     * 2.1.</p> </li> <li> <p> <code>SMB2_0</code>: Restricts the protocol negotiation
     * to only SMB version 2.0.</p> </li> <li> <p> <code>SMB1</code>: Restricts the
     * protocol negotiation to only SMB version 1.0.</p>  <p>The
     * <code>SMB1</code> option isn't available when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationFsxOntap.html">creating
     * an Amazon FSx for NetApp ONTAP location</a>.</p>  </li> </ul>
     */
    inline SmbMountOptions& WithVersion(const SmbVersion& value) { SetVersion(value); return *this;}

    /**
     * <p>By default, DataSync automatically chooses an SMB protocol version based on
     * negotiation with your SMB file server. You also can configure DataSync to use a
     * specific SMB version, but we recommend doing this only if DataSync has trouble
     * negotiating with the SMB file server automatically.</p> <p>These are the
     * following options for configuring the SMB version:</p> <ul> <li> <p>
     * <code>AUTOMATIC</code> (default): DataSync and the SMB file server negotiate the
     * highest version of SMB that they mutually support between 2.1 and 3.1.1.</p>
     * <p>This is the recommended option. If you instead choose a specific version that
     * your file server doesn't support, you may get an <code>Operation Not
     * Supported</code> error.</p> </li> <li> <p> <code>SMB3</code>: Restricts the
     * protocol negotiation to only SMB version 3.0.2.</p> </li> <li> <p>
     * <code>SMB2</code>: Restricts the protocol negotiation to only SMB version
     * 2.1.</p> </li> <li> <p> <code>SMB2_0</code>: Restricts the protocol negotiation
     * to only SMB version 2.0.</p> </li> <li> <p> <code>SMB1</code>: Restricts the
     * protocol negotiation to only SMB version 1.0.</p>  <p>The
     * <code>SMB1</code> option isn't available when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationFsxOntap.html">creating
     * an Amazon FSx for NetApp ONTAP location</a>.</p>  </li> </ul>
     */
    inline SmbMountOptions& WithVersion(SmbVersion&& value) { SetVersion(std::move(value)); return *this;}

  private:

    SmbVersion m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
