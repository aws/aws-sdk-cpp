/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes the vCPU configurations for the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VCpuInfo">AWS API
   * Reference</a></p>
   */
  class VCpuInfo
  {
  public:
    AWS_EC2_API VCpuInfo() = default;
    AWS_EC2_API VCpuInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VCpuInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The default number of vCPUs for the instance type.</p>
     */
    inline int GetDefaultVCpus() const { return m_defaultVCpus; }
    inline bool DefaultVCpusHasBeenSet() const { return m_defaultVCpusHasBeenSet; }
    inline void SetDefaultVCpus(int value) { m_defaultVCpusHasBeenSet = true; m_defaultVCpus = value; }
    inline VCpuInfo& WithDefaultVCpus(int value) { SetDefaultVCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default number of cores for the instance type.</p>
     */
    inline int GetDefaultCores() const { return m_defaultCores; }
    inline bool DefaultCoresHasBeenSet() const { return m_defaultCoresHasBeenSet; }
    inline void SetDefaultCores(int value) { m_defaultCoresHasBeenSet = true; m_defaultCores = value; }
    inline VCpuInfo& WithDefaultCores(int value) { SetDefaultCores(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default number of threads per core for the instance type.</p>
     */
    inline int GetDefaultThreadsPerCore() const { return m_defaultThreadsPerCore; }
    inline bool DefaultThreadsPerCoreHasBeenSet() const { return m_defaultThreadsPerCoreHasBeenSet; }
    inline void SetDefaultThreadsPerCore(int value) { m_defaultThreadsPerCoreHasBeenSet = true; m_defaultThreadsPerCore = value; }
    inline VCpuInfo& WithDefaultThreadsPerCore(int value) { SetDefaultThreadsPerCore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid number of cores that can be configured for the instance type.</p>
     */
    inline const Aws::Vector<int>& GetValidCores() const { return m_validCores; }
    inline bool ValidCoresHasBeenSet() const { return m_validCoresHasBeenSet; }
    template<typename ValidCoresT = Aws::Vector<int>>
    void SetValidCores(ValidCoresT&& value) { m_validCoresHasBeenSet = true; m_validCores = std::forward<ValidCoresT>(value); }
    template<typename ValidCoresT = Aws::Vector<int>>
    VCpuInfo& WithValidCores(ValidCoresT&& value) { SetValidCores(std::forward<ValidCoresT>(value)); return *this;}
    inline VCpuInfo& AddValidCores(int value) { m_validCoresHasBeenSet = true; m_validCores.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The valid number of threads per core that can be configured for the instance
     * type.</p>
     */
    inline const Aws::Vector<int>& GetValidThreadsPerCore() const { return m_validThreadsPerCore; }
    inline bool ValidThreadsPerCoreHasBeenSet() const { return m_validThreadsPerCoreHasBeenSet; }
    template<typename ValidThreadsPerCoreT = Aws::Vector<int>>
    void SetValidThreadsPerCore(ValidThreadsPerCoreT&& value) { m_validThreadsPerCoreHasBeenSet = true; m_validThreadsPerCore = std::forward<ValidThreadsPerCoreT>(value); }
    template<typename ValidThreadsPerCoreT = Aws::Vector<int>>
    VCpuInfo& WithValidThreadsPerCore(ValidThreadsPerCoreT&& value) { SetValidThreadsPerCore(std::forward<ValidThreadsPerCoreT>(value)); return *this;}
    inline VCpuInfo& AddValidThreadsPerCore(int value) { m_validThreadsPerCoreHasBeenSet = true; m_validThreadsPerCore.push_back(value); return *this; }
    ///@}
  private:

    int m_defaultVCpus{0};
    bool m_defaultVCpusHasBeenSet = false;

    int m_defaultCores{0};
    bool m_defaultCoresHasBeenSet = false;

    int m_defaultThreadsPerCore{0};
    bool m_defaultThreadsPerCoreHasBeenSet = false;

    Aws::Vector<int> m_validCores;
    bool m_validCoresHasBeenSet = false;

    Aws::Vector<int> m_validThreadsPerCore;
    bool m_validThreadsPerCoreHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
