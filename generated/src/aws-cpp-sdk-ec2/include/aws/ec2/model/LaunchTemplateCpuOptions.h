/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AmdSevSnpSpecification.h>
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
   * <p>The CPU options for the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateCpuOptions">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateCpuOptions
  {
  public:
    AWS_EC2_API LaunchTemplateCpuOptions() = default;
    AWS_EC2_API LaunchTemplateCpuOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateCpuOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of CPU cores for the instance.</p>
     */
    inline int GetCoreCount() const { return m_coreCount; }
    inline bool CoreCountHasBeenSet() const { return m_coreCountHasBeenSet; }
    inline void SetCoreCount(int value) { m_coreCountHasBeenSet = true; m_coreCount = value; }
    inline LaunchTemplateCpuOptions& WithCoreCount(int value) { SetCoreCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of threads per CPU core.</p>
     */
    inline int GetThreadsPerCore() const { return m_threadsPerCore; }
    inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }
    inline LaunchTemplateCpuOptions& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is enabled for AMD SEV-SNP. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html">AMD
     * SEV-SNP for Amazon EC2 instances</a>.</p>
     */
    inline AmdSevSnpSpecification GetAmdSevSnp() const { return m_amdSevSnp; }
    inline bool AmdSevSnpHasBeenSet() const { return m_amdSevSnpHasBeenSet; }
    inline void SetAmdSevSnp(AmdSevSnpSpecification value) { m_amdSevSnpHasBeenSet = true; m_amdSevSnp = value; }
    inline LaunchTemplateCpuOptions& WithAmdSevSnp(AmdSevSnpSpecification value) { SetAmdSevSnp(value); return *this;}
    ///@}
  private:

    int m_coreCount{0};
    bool m_coreCountHasBeenSet = false;

    int m_threadsPerCore{0};
    bool m_threadsPerCoreHasBeenSet = false;

    AmdSevSnpSpecification m_amdSevSnp{AmdSevSnpSpecification::NOT_SET};
    bool m_amdSevSnpHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
