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
    AWS_FSX_API UpdateFileSystemLustreMetadataConfiguration() = default;
    AWS_FSX_API UpdateFileSystemLustreMetadataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API UpdateFileSystemLustreMetadataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>(USER_PROVISIONED mode only) Specifies the number of Metadata IOPS to
     * provision for your file system.</p> <ul> <li> <p>For SSD file systems, valid
     * values are <code>1500</code>, <code>3000</code>, <code>6000</code>,
     * <code>12000</code>, and multiples of <code>12000</code> up to a maximum of
     * <code>192000</code>.</p> </li> <li> <p>For Intelligent-Tiering file systems,
     * valid values are <code>6000</code> and <code>12000</code>.</p> </li> </ul>
     * <p>The value you provide must be greater than or equal to the current number of
     * Metadata IOPS provisioned for the file system.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline UpdateFileSystemLustreMetadataConfiguration& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata configuration mode for provisioning Metadata IOPS for an FSx for
     * Lustre file system using a <code>PERSISTENT_2</code> deployment type.</p> <ul>
     * <li> <p>To increase the Metadata IOPS or to switch an SSD file system from
     * AUTOMATIC, specify <code>USER_PROVISIONED</code> as the value for this
     * parameter. Then use the Iops parameter to provide a Metadata IOPS value that is
     * greater than or equal to the current number of Metadata IOPS provisioned for the
     * file system.</p> </li> <li> <p>To switch from USER_PROVISIONED mode on an SSD
     * file system, specify <code>AUTOMATIC</code> as the value for this parameter, but
     * do not input a value for Iops.</p>  <ul> <li> <p>If you request to switch
     * from USER_PROVISIONED to AUTOMATIC mode and the current Metadata IOPS value is
     * greater than the automated default, FSx for Lustre rejects the request because
     * downscaling Metadata IOPS is not supported.</p> </li> <li> <p>AUTOMATIC mode is
     * not supported on Intelligent-Tiering file systems. For Intelligent-Tiering file
     * systems, use USER_PROVISIONED mode.</p> </li> </ul>  </li> </ul>
     */
    inline MetadataConfigurationMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(MetadataConfigurationMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline UpdateFileSystemLustreMetadataConfiguration& WithMode(MetadataConfigurationMode value) { SetMode(value); return *this;}
    ///@}
  private:

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    MetadataConfigurationMode m_mode{MetadataConfigurationMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
