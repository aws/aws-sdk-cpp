/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/MetadataConfigurationMode.h>
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
   * <p>The Lustre metadata performance configuration update for an Amazon FSx for
   * Lustre file system using a <code>PERSISTENT_2</code> deployment type. You can
   * request an increase in your file system's Metadata IOPS and/or switch your file
   * system's metadata configuration mode. For more information, see <a
   * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/managing-metadata-performance.html">Managing
   * metadata performance</a> in the <i>Amazon FSx for Lustre User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystemLustreMetadataConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateFileSystemLustreMetadataConfiguration
  {
  public:
    AWS_FSX_API UpdateFileSystemLustreMetadataConfiguration();
    AWS_FSX_API UpdateFileSystemLustreMetadataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API UpdateFileSystemLustreMetadataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>(USER_PROVISIONED mode only) Specifies the number of Metadata IOPS to
     * provision for your file system. Valid values are <code>1500</code>,
     * <code>3000</code>, <code>6000</code>, <code>12000</code>, and multiples of
     * <code>12000</code> up to a maximum of <code>192000</code>.</p> <p>The value you
     * provide must be greater than or equal to the current number of Metadata IOPS
     * provisioned for the file system.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline UpdateFileSystemLustreMetadataConfiguration& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata configuration mode for provisioning Metadata IOPS for an FSx for
     * Lustre file system using a <code>PERSISTENT_2</code> deployment type.</p> <ul>
     * <li> <p>To increase the Metadata IOPS or to switch from AUTOMATIC mode, specify
     * <code>USER_PROVISIONED</code> as the value for this parameter. Then use the Iops
     * parameter to provide a Metadata IOPS value that is greater than or equal to the
     * current number of Metadata IOPS provisioned for the file system.</p> </li> <li>
     * <p>To switch from USER_PROVISIONED mode, specify <code>AUTOMATIC</code> as the
     * value for this parameter, but do not input a value for Iops.</p>  <p>If
     * you request to switch from USER_PROVISIONED to AUTOMATIC mode and the current
     * Metadata IOPS value is greater than the automated default, FSx for Lustre
     * rejects the request because downscaling Metadata IOPS is not supported.</p>
     *  </li> </ul>
     */
    inline const MetadataConfigurationMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const MetadataConfigurationMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(MetadataConfigurationMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline UpdateFileSystemLustreMetadataConfiguration& WithMode(const MetadataConfigurationMode& value) { SetMode(value); return *this;}
    inline UpdateFileSystemLustreMetadataConfiguration& WithMode(MetadataConfigurationMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}
  private:

    int m_iops;
    bool m_iopsHasBeenSet = false;

    MetadataConfigurationMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
