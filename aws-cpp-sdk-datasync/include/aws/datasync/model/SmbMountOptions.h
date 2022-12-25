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
   * <p>Specifies how DataSync can access a location using the SMB
   * protocol.</p><p><h3>See Also:</h3>   <a
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
     * <p>Specifies the SMB version that you want DataSync to use when mounting your
     * SMB share. If you don't specify a version, DataSync defaults to
     * <code>AUTOMATIC</code> and chooses a version based on negotiation with the SMB
     * server.</p>
     */
    inline const SmbVersion& GetVersion() const{ return m_version; }

    /**
     * <p>Specifies the SMB version that you want DataSync to use when mounting your
     * SMB share. If you don't specify a version, DataSync defaults to
     * <code>AUTOMATIC</code> and chooses a version based on negotiation with the SMB
     * server.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Specifies the SMB version that you want DataSync to use when mounting your
     * SMB share. If you don't specify a version, DataSync defaults to
     * <code>AUTOMATIC</code> and chooses a version based on negotiation with the SMB
     * server.</p>
     */
    inline void SetVersion(const SmbVersion& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Specifies the SMB version that you want DataSync to use when mounting your
     * SMB share. If you don't specify a version, DataSync defaults to
     * <code>AUTOMATIC</code> and chooses a version based on negotiation with the SMB
     * server.</p>
     */
    inline void SetVersion(SmbVersion&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Specifies the SMB version that you want DataSync to use when mounting your
     * SMB share. If you don't specify a version, DataSync defaults to
     * <code>AUTOMATIC</code> and chooses a version based on negotiation with the SMB
     * server.</p>
     */
    inline SmbMountOptions& WithVersion(const SmbVersion& value) { SetVersion(value); return *this;}

    /**
     * <p>Specifies the SMB version that you want DataSync to use when mounting your
     * SMB share. If you don't specify a version, DataSync defaults to
     * <code>AUTOMATIC</code> and chooses a version based on negotiation with the SMB
     * server.</p>
     */
    inline SmbMountOptions& WithVersion(SmbVersion&& value) { SetVersion(std::move(value)); return *this;}

  private:

    SmbVersion m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
