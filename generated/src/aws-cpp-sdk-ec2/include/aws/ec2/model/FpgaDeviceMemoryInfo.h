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
   * <p>Describes the memory for the FPGA accelerator for the instance
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FpgaDeviceMemoryInfo">AWS
   * API Reference</a></p>
   */
  class FpgaDeviceMemoryInfo
  {
  public:
    AWS_EC2_API FpgaDeviceMemoryInfo();
    AWS_EC2_API FpgaDeviceMemoryInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FpgaDeviceMemoryInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The size of the memory available to the FPGA accelerator, in MiB.</p>
     */
    inline int GetSizeInMiB() const{ return m_sizeInMiB; }

    /**
     * <p>The size of the memory available to the FPGA accelerator, in MiB.</p>
     */
    inline bool SizeInMiBHasBeenSet() const { return m_sizeInMiBHasBeenSet; }

    /**
     * <p>The size of the memory available to the FPGA accelerator, in MiB.</p>
     */
    inline void SetSizeInMiB(int value) { m_sizeInMiBHasBeenSet = true; m_sizeInMiB = value; }

    /**
     * <p>The size of the memory available to the FPGA accelerator, in MiB.</p>
     */
    inline FpgaDeviceMemoryInfo& WithSizeInMiB(int value) { SetSizeInMiB(value); return *this;}

  private:

    int m_sizeInMiB;
    bool m_sizeInMiBHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
