/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/EphemeralNvmeSupport.h>
#include <aws/ec2/model/InstanceStorageEncryptionSupport.h>
#include <aws/ec2/model/DiskInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the instance store features that are supported by the instance
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceStorageInfo">AWS
   * API Reference</a></p>
   */
  class InstanceStorageInfo
  {
  public:
    AWS_EC2_API InstanceStorageInfo() = default;
    AWS_EC2_API InstanceStorageInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceStorageInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The total size of the disks, in GB.</p>
     */
    inline long long GetTotalSizeInGB() const { return m_totalSizeInGB; }
    inline bool TotalSizeInGBHasBeenSet() const { return m_totalSizeInGBHasBeenSet; }
    inline void SetTotalSizeInGB(long long value) { m_totalSizeInGBHasBeenSet = true; m_totalSizeInGB = value; }
    inline InstanceStorageInfo& WithTotalSizeInGB(long long value) { SetTotalSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the disks that are available for the instance type.</p>
     */
    inline const Aws::Vector<DiskInfo>& GetDisks() const { return m_disks; }
    inline bool DisksHasBeenSet() const { return m_disksHasBeenSet; }
    template<typename DisksT = Aws::Vector<DiskInfo>>
    void SetDisks(DisksT&& value) { m_disksHasBeenSet = true; m_disks = std::forward<DisksT>(value); }
    template<typename DisksT = Aws::Vector<DiskInfo>>
    InstanceStorageInfo& WithDisks(DisksT&& value) { SetDisks(std::forward<DisksT>(value)); return *this;}
    template<typename DisksT = DiskInfo>
    InstanceStorageInfo& AddDisks(DisksT&& value) { m_disksHasBeenSet = true; m_disks.emplace_back(std::forward<DisksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether non-volatile memory express (NVMe) is supported.</p>
     */
    inline EphemeralNvmeSupport GetNvmeSupport() const { return m_nvmeSupport; }
    inline bool NvmeSupportHasBeenSet() const { return m_nvmeSupportHasBeenSet; }
    inline void SetNvmeSupport(EphemeralNvmeSupport value) { m_nvmeSupportHasBeenSet = true; m_nvmeSupport = value; }
    inline InstanceStorageInfo& WithNvmeSupport(EphemeralNvmeSupport value) { SetNvmeSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether data is encrypted at rest.</p>
     */
    inline InstanceStorageEncryptionSupport GetEncryptionSupport() const { return m_encryptionSupport; }
    inline bool EncryptionSupportHasBeenSet() const { return m_encryptionSupportHasBeenSet; }
    inline void SetEncryptionSupport(InstanceStorageEncryptionSupport value) { m_encryptionSupportHasBeenSet = true; m_encryptionSupport = value; }
    inline InstanceStorageInfo& WithEncryptionSupport(InstanceStorageEncryptionSupport value) { SetEncryptionSupport(value); return *this;}
    ///@}
  private:

    long long m_totalSizeInGB{0};
    bool m_totalSizeInGBHasBeenSet = false;

    Aws::Vector<DiskInfo> m_disks;
    bool m_disksHasBeenSet = false;

    EphemeralNvmeSupport m_nvmeSupport{EphemeralNvmeSupport::NOT_SET};
    bool m_nvmeSupportHasBeenSet = false;

    InstanceStorageEncryptionSupport m_encryptionSupport{InstanceStorageEncryptionSupport::NOT_SET};
    bool m_encryptionSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
