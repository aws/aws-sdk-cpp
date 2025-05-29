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
   * <p>The Lustre metadata performance configuration for the creation of an Amazon
   * FSx for Lustre file system using a <code>PERSISTENT_2</code> deployment type.
   * The configuration uses a Metadata IOPS value to set the maximum rate of metadata
   * disk IOPS supported by the file system.</p> <p>After creation, the file system
   * supports increasing metadata performance. For more information on Metadata IOPS,
   * see <a
   * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/managing-metadata-performance.html#metadata-configuration">Lustre
   * metadata performance configuration</a> in the <i>Amazon FSx for Lustre User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemLustreMetadataConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateFileSystemLustreMetadataConfiguration
  {
  public:
    AWS_FSX_API CreateFileSystemLustreMetadataConfiguration() = default;
    AWS_FSX_API CreateFileSystemLustreMetadataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateFileSystemLustreMetadataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>(USER_PROVISIONED mode only) Specifies the number of Metadata IOPS to
     * provision for the file system. This parameter sets the maximum rate of metadata
     * disk IOPS supported by the file system.</p> <ul> <li> <p>For SSD file systems,
     * valid values are <code>1500</code>, <code>3000</code>, <code>6000</code>,
     * <code>12000</code>, and multiples of <code>12000</code> up to a maximum of
     * <code>192000</code>.</p> </li> <li> <p>For Intelligent-Tiering file systems,
     * valid values are <code>6000</code> and <code>12000</code>.</p> </li> </ul>
     *  <p> <code>Iops</code> doesn’t have a default value. If you're using
     * USER_PROVISIONED mode, you can choose to specify a valid value. If you're using
     * AUTOMATIC mode, you cannot specify a value because FSx for Lustre automatically
     * sets the value based on your file system storage capacity. </p> 
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline CreateFileSystemLustreMetadataConfiguration& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata configuration mode for provisioning Metadata IOPS for an FSx for
     * Lustre file system using a <code>PERSISTENT_2</code> deployment type.</p> <ul>
     * <li> <p>In AUTOMATIC mode (supported only on SSD file systems), FSx for Lustre
     * automatically provisions and scales the number of Metadata IOPS for your file
     * system based on your file system storage capacity.</p> </li> <li> <p>In
     * USER_PROVISIONED mode, you specify the number of Metadata IOPS to provision for
     * your file system.</p> </li> </ul>
     */
    inline MetadataConfigurationMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(MetadataConfigurationMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline CreateFileSystemLustreMetadataConfiguration& WithMode(MetadataConfigurationMode value) { SetMode(value); return *this;}
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
