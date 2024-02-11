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
    AWS_EC2_API LaunchTemplateCpuOptions();
    AWS_EC2_API LaunchTemplateCpuOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateCpuOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of CPU cores for the instance.</p>
     */
    inline int GetCoreCount() const{ return m_coreCount; }

    /**
     * <p>The number of CPU cores for the instance.</p>
     */
    inline bool CoreCountHasBeenSet() const { return m_coreCountHasBeenSet; }

    /**
     * <p>The number of CPU cores for the instance.</p>
     */
    inline void SetCoreCount(int value) { m_coreCountHasBeenSet = true; m_coreCount = value; }

    /**
     * <p>The number of CPU cores for the instance.</p>
     */
    inline LaunchTemplateCpuOptions& WithCoreCount(int value) { SetCoreCount(value); return *this;}


    /**
     * <p>The number of threads per CPU core.</p>
     */
    inline int GetThreadsPerCore() const{ return m_threadsPerCore; }

    /**
     * <p>The number of threads per CPU core.</p>
     */
    inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }

    /**
     * <p>The number of threads per CPU core.</p>
     */
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }

    /**
     * <p>The number of threads per CPU core.</p>
     */
    inline LaunchTemplateCpuOptions& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}


    /**
     * <p>Indicates whether the instance is enabled for AMD SEV-SNP. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html">AMD
     * SEV-SNP</a>.</p>
     */
    inline const AmdSevSnpSpecification& GetAmdSevSnp() const{ return m_amdSevSnp; }

    /**
     * <p>Indicates whether the instance is enabled for AMD SEV-SNP. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html">AMD
     * SEV-SNP</a>.</p>
     */
    inline bool AmdSevSnpHasBeenSet() const { return m_amdSevSnpHasBeenSet; }

    /**
     * <p>Indicates whether the instance is enabled for AMD SEV-SNP. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html">AMD
     * SEV-SNP</a>.</p>
     */
    inline void SetAmdSevSnp(const AmdSevSnpSpecification& value) { m_amdSevSnpHasBeenSet = true; m_amdSevSnp = value; }

    /**
     * <p>Indicates whether the instance is enabled for AMD SEV-SNP. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html">AMD
     * SEV-SNP</a>.</p>
     */
    inline void SetAmdSevSnp(AmdSevSnpSpecification&& value) { m_amdSevSnpHasBeenSet = true; m_amdSevSnp = std::move(value); }

    /**
     * <p>Indicates whether the instance is enabled for AMD SEV-SNP. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html">AMD
     * SEV-SNP</a>.</p>
     */
    inline LaunchTemplateCpuOptions& WithAmdSevSnp(const AmdSevSnpSpecification& value) { SetAmdSevSnp(value); return *this;}

    /**
     * <p>Indicates whether the instance is enabled for AMD SEV-SNP. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html">AMD
     * SEV-SNP</a>.</p>
     */
    inline LaunchTemplateCpuOptions& WithAmdSevSnp(AmdSevSnpSpecification&& value) { SetAmdSevSnp(std::move(value)); return *this;}

  private:

    int m_coreCount;
    bool m_coreCountHasBeenSet = false;

    int m_threadsPerCore;
    bool m_threadsPerCoreHasBeenSet = false;

    AmdSevSnpSpecification m_amdSevSnp;
    bool m_amdSevSnpHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
