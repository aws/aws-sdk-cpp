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
   * <p>Represents the mount options that are available for DataSync to access an SMB
   * location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/SmbMountOptions">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API SmbMountOptions
  {
  public:
    SmbMountOptions();
    SmbMountOptions(Aws::Utils::Json::JsonView jsonValue);
    SmbMountOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The specific SMB version that you want DataSync to use to mount your SMB
     * share. If you don't specify a version, DataSync defaults to
     * <code>AUTOMATIC</code>. That is, DataSync automatically selects a version based
     * on negotiation with the SMB server.</p>
     */
    inline const SmbVersion& GetVersion() const{ return m_version; }

    /**
     * <p>The specific SMB version that you want DataSync to use to mount your SMB
     * share. If you don't specify a version, DataSync defaults to
     * <code>AUTOMATIC</code>. That is, DataSync automatically selects a version based
     * on negotiation with the SMB server.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The specific SMB version that you want DataSync to use to mount your SMB
     * share. If you don't specify a version, DataSync defaults to
     * <code>AUTOMATIC</code>. That is, DataSync automatically selects a version based
     * on negotiation with the SMB server.</p>
     */
    inline void SetVersion(const SmbVersion& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The specific SMB version that you want DataSync to use to mount your SMB
     * share. If you don't specify a version, DataSync defaults to
     * <code>AUTOMATIC</code>. That is, DataSync automatically selects a version based
     * on negotiation with the SMB server.</p>
     */
    inline void SetVersion(SmbVersion&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The specific SMB version that you want DataSync to use to mount your SMB
     * share. If you don't specify a version, DataSync defaults to
     * <code>AUTOMATIC</code>. That is, DataSync automatically selects a version based
     * on negotiation with the SMB server.</p>
     */
    inline SmbMountOptions& WithVersion(const SmbVersion& value) { SetVersion(value); return *this;}

    /**
     * <p>The specific SMB version that you want DataSync to use to mount your SMB
     * share. If you don't specify a version, DataSync defaults to
     * <code>AUTOMATIC</code>. That is, DataSync automatically selects a version based
     * on negotiation with the SMB server.</p>
     */
    inline SmbMountOptions& WithVersion(SmbVersion&& value) { SetVersion(std::move(value)); return *this;}

  private:

    SmbVersion m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
