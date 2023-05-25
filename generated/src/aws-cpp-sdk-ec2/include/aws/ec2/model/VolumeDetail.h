/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>Describes an EBS volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeDetail">AWS
   * API Reference</a></p>
   */
  class VolumeDetail
  {
  public:
    AWS_EC2_API VolumeDetail();
    AWS_EC2_API VolumeDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VolumeDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline VolumeDetail& WithSize(long long value) { SetSize(value); return *this;}

  private:

    long long m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
