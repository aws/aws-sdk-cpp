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
   * <p>Describes the memory for the instance type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MemoryInfo">AWS API
   * Reference</a></p>
   */
  class MemoryInfo
  {
  public:
    AWS_EC2_API MemoryInfo();
    AWS_EC2_API MemoryInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API MemoryInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The size of the memory, in MiB.</p>
     */
    inline long long GetSizeInMiB() const{ return m_sizeInMiB; }

    /**
     * <p>The size of the memory, in MiB.</p>
     */
    inline bool SizeInMiBHasBeenSet() const { return m_sizeInMiBHasBeenSet; }

    /**
     * <p>The size of the memory, in MiB.</p>
     */
    inline void SetSizeInMiB(long long value) { m_sizeInMiBHasBeenSet = true; m_sizeInMiB = value; }

    /**
     * <p>The size of the memory, in MiB.</p>
     */
    inline MemoryInfo& WithSizeInMiB(long long value) { SetSizeInMiB(value); return *this;}

  private:

    long long m_sizeInMiB;
    bool m_sizeInMiBHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
