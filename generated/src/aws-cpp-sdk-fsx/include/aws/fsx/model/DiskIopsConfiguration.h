/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DiskIopsConfigurationMode.h>
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
   * <p>The SSD IOPS (input/output operations per second) configuration for an Amazon
   * FSx for NetApp ONTAP or Amazon FSx for OpenZFS file system. The default is 3
   * IOPS per GB of storage capacity, but you can provision additional IOPS per GB of
   * storage. The configuration consists of the total number of provisioned SSD IOPS
   * and how the amount was provisioned (by the customer or by the
   * system).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DiskIopsConfiguration">AWS
   * API Reference</a></p>
   */
  class DiskIopsConfiguration
  {
  public:
    AWS_FSX_API DiskIopsConfiguration();
    AWS_FSX_API DiskIopsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DiskIopsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the number of IOPS for the file system is using the system
     * default (<code>AUTOMATIC</code>) or was provisioned by the customer
     * (<code>USER_PROVISIONED</code>).</p>
     */
    inline const DiskIopsConfigurationMode& GetMode() const{ return m_mode; }

    /**
     * <p>Specifies whether the number of IOPS for the file system is using the system
     * default (<code>AUTOMATIC</code>) or was provisioned by the customer
     * (<code>USER_PROVISIONED</code>).</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Specifies whether the number of IOPS for the file system is using the system
     * default (<code>AUTOMATIC</code>) or was provisioned by the customer
     * (<code>USER_PROVISIONED</code>).</p>
     */
    inline void SetMode(const DiskIopsConfigurationMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Specifies whether the number of IOPS for the file system is using the system
     * default (<code>AUTOMATIC</code>) or was provisioned by the customer
     * (<code>USER_PROVISIONED</code>).</p>
     */
    inline void SetMode(DiskIopsConfigurationMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Specifies whether the number of IOPS for the file system is using the system
     * default (<code>AUTOMATIC</code>) or was provisioned by the customer
     * (<code>USER_PROVISIONED</code>).</p>
     */
    inline DiskIopsConfiguration& WithMode(const DiskIopsConfigurationMode& value) { SetMode(value); return *this;}

    /**
     * <p>Specifies whether the number of IOPS for the file system is using the system
     * default (<code>AUTOMATIC</code>) or was provisioned by the customer
     * (<code>USER_PROVISIONED</code>).</p>
     */
    inline DiskIopsConfiguration& WithMode(DiskIopsConfigurationMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The total number of SSD IOPS provisioned for the file system.</p>
     */
    inline long long GetIops() const{ return m_iops; }

    /**
     * <p>The total number of SSD IOPS provisioned for the file system.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The total number of SSD IOPS provisioned for the file system.</p>
     */
    inline void SetIops(long long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The total number of SSD IOPS provisioned for the file system.</p>
     */
    inline DiskIopsConfiguration& WithIops(long long value) { SetIops(value); return *this;}

  private:

    DiskIopsConfigurationMode m_mode;
    bool m_modeHasBeenSet = false;

    long long m_iops;
    bool m_iopsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
