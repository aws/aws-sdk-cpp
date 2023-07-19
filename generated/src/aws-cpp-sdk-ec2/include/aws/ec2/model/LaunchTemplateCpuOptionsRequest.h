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
   * <p>The CPU options for the instance. Both the core count and threads per core
   * must be specified in the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateCpuOptionsRequest">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateCpuOptionsRequest
  {
  public:
    AWS_EC2_API LaunchTemplateCpuOptionsRequest();
    AWS_EC2_API LaunchTemplateCpuOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateCpuOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline LaunchTemplateCpuOptionsRequest& WithCoreCount(int value) { SetCoreCount(value); return *this;}


    /**
     * <p>The number of threads per CPU core. To disable multithreading for the
     * instance, specify a value of <code>1</code>. Otherwise, specify the default
     * value of <code>2</code>.</p>
     */
    inline int GetThreadsPerCore() const{ return m_threadsPerCore; }

    /**
     * <p>The number of threads per CPU core. To disable multithreading for the
     * instance, specify a value of <code>1</code>. Otherwise, specify the default
     * value of <code>2</code>.</p>
     */
    inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }

    /**
     * <p>The number of threads per CPU core. To disable multithreading for the
     * instance, specify a value of <code>1</code>. Otherwise, specify the default
     * value of <code>2</code>.</p>
     */
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }

    /**
     * <p>The number of threads per CPU core. To disable multithreading for the
     * instance, specify a value of <code>1</code>. Otherwise, specify the default
     * value of <code>2</code>.</p>
     */
    inline LaunchTemplateCpuOptionsRequest& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}


    /**
     * <p>Indicates whether to enable the instance for AMD SEV-SNP. AMD SEV-SNP is
     * supported with M6a, R6a, and C6a instance types only. For more information, see
     * <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html">AMD
     * SEV-SNP</a>.</p>
     */
    inline const AmdSevSnpSpecification& GetAmdSevSnp() const{ return m_amdSevSnp; }

    /**
     * <p>Indicates whether to enable the instance for AMD SEV-SNP. AMD SEV-SNP is
     * supported with M6a, R6a, and C6a instance types only. For more information, see
     * <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html">AMD
     * SEV-SNP</a>.</p>
     */
    inline bool AmdSevSnpHasBeenSet() const { return m_amdSevSnpHasBeenSet; }

    /**
     * <p>Indicates whether to enable the instance for AMD SEV-SNP. AMD SEV-SNP is
     * supported with M6a, R6a, and C6a instance types only. For more information, see
     * <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html">AMD
     * SEV-SNP</a>.</p>
     */
    inline void SetAmdSevSnp(const AmdSevSnpSpecification& value) { m_amdSevSnpHasBeenSet = true; m_amdSevSnp = value; }

    /**
     * <p>Indicates whether to enable the instance for AMD SEV-SNP. AMD SEV-SNP is
     * supported with M6a, R6a, and C6a instance types only. For more information, see
     * <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html">AMD
     * SEV-SNP</a>.</p>
     */
    inline void SetAmdSevSnp(AmdSevSnpSpecification&& value) { m_amdSevSnpHasBeenSet = true; m_amdSevSnp = std::move(value); }

    /**
     * <p>Indicates whether to enable the instance for AMD SEV-SNP. AMD SEV-SNP is
     * supported with M6a, R6a, and C6a instance types only. For more information, see
     * <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html">AMD
     * SEV-SNP</a>.</p>
     */
    inline LaunchTemplateCpuOptionsRequest& WithAmdSevSnp(const AmdSevSnpSpecification& value) { SetAmdSevSnp(value); return *this;}

    /**
     * <p>Indicates whether to enable the instance for AMD SEV-SNP. AMD SEV-SNP is
     * supported with M6a, R6a, and C6a instance types only. For more information, see
     * <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html">AMD
     * SEV-SNP</a>.</p>
     */
    inline LaunchTemplateCpuOptionsRequest& WithAmdSevSnp(AmdSevSnpSpecification&& value) { SetAmdSevSnp(std::move(value)); return *this;}

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
