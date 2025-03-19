/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DiskType.h>
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
   * <p>Describes a disk.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DiskInfo">AWS API
   * Reference</a></p>
   */
  class DiskInfo
  {
  public:
    AWS_EC2_API DiskInfo() = default;
    AWS_EC2_API DiskInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DiskInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The size of the disk in GB.</p>
     */
    inline long long GetSizeInGB() const { return m_sizeInGB; }
    inline bool SizeInGBHasBeenSet() const { return m_sizeInGBHasBeenSet; }
    inline void SetSizeInGB(long long value) { m_sizeInGBHasBeenSet = true; m_sizeInGB = value; }
    inline DiskInfo& WithSizeInGB(long long value) { SetSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of disks with this configuration.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline DiskInfo& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of disk.</p>
     */
    inline DiskType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DiskType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DiskInfo& WithType(DiskType value) { SetType(value); return *this;}
    ///@}
  private:

    long long m_sizeInGB{0};
    bool m_sizeInGBHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    DiskType m_type{DiskType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
