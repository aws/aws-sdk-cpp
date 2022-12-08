/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/FpgaDeviceInfo.h>
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
   * <p>Describes the FPGAs for the instance type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FpgaInfo">AWS API
   * Reference</a></p>
   */
  class FpgaInfo
  {
  public:
    AWS_EC2_API FpgaInfo();
    AWS_EC2_API FpgaInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FpgaInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Describes the FPGAs for the instance type.</p>
     */
    inline const Aws::Vector<FpgaDeviceInfo>& GetFpgas() const{ return m_fpgas; }

    /**
     * <p>Describes the FPGAs for the instance type.</p>
     */
    inline bool FpgasHasBeenSet() const { return m_fpgasHasBeenSet; }

    /**
     * <p>Describes the FPGAs for the instance type.</p>
     */
    inline void SetFpgas(const Aws::Vector<FpgaDeviceInfo>& value) { m_fpgasHasBeenSet = true; m_fpgas = value; }

    /**
     * <p>Describes the FPGAs for the instance type.</p>
     */
    inline void SetFpgas(Aws::Vector<FpgaDeviceInfo>&& value) { m_fpgasHasBeenSet = true; m_fpgas = std::move(value); }

    /**
     * <p>Describes the FPGAs for the instance type.</p>
     */
    inline FpgaInfo& WithFpgas(const Aws::Vector<FpgaDeviceInfo>& value) { SetFpgas(value); return *this;}

    /**
     * <p>Describes the FPGAs for the instance type.</p>
     */
    inline FpgaInfo& WithFpgas(Aws::Vector<FpgaDeviceInfo>&& value) { SetFpgas(std::move(value)); return *this;}

    /**
     * <p>Describes the FPGAs for the instance type.</p>
     */
    inline FpgaInfo& AddFpgas(const FpgaDeviceInfo& value) { m_fpgasHasBeenSet = true; m_fpgas.push_back(value); return *this; }

    /**
     * <p>Describes the FPGAs for the instance type.</p>
     */
    inline FpgaInfo& AddFpgas(FpgaDeviceInfo&& value) { m_fpgasHasBeenSet = true; m_fpgas.push_back(std::move(value)); return *this; }


    /**
     * <p>The total memory of all FPGA accelerators for the instance type.</p>
     */
    inline int GetTotalFpgaMemoryInMiB() const{ return m_totalFpgaMemoryInMiB; }

    /**
     * <p>The total memory of all FPGA accelerators for the instance type.</p>
     */
    inline bool TotalFpgaMemoryInMiBHasBeenSet() const { return m_totalFpgaMemoryInMiBHasBeenSet; }

    /**
     * <p>The total memory of all FPGA accelerators for the instance type.</p>
     */
    inline void SetTotalFpgaMemoryInMiB(int value) { m_totalFpgaMemoryInMiBHasBeenSet = true; m_totalFpgaMemoryInMiB = value; }

    /**
     * <p>The total memory of all FPGA accelerators for the instance type.</p>
     */
    inline FpgaInfo& WithTotalFpgaMemoryInMiB(int value) { SetTotalFpgaMemoryInMiB(value); return *this;}

  private:

    Aws::Vector<FpgaDeviceInfo> m_fpgas;
    bool m_fpgasHasBeenSet = false;

    int m_totalFpgaMemoryInMiB;
    bool m_totalFpgaMemoryInMiBHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
