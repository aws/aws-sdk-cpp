/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/NeuronDeviceCoreInfo.h>
#include <aws/ec2/model/NeuronDeviceMemoryInfo.h>
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
   * <p>Describes the neuron accelerators for the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NeuronDeviceInfo">AWS
   * API Reference</a></p>
   */
  class NeuronDeviceInfo
  {
  public:
    AWS_EC2_API NeuronDeviceInfo() = default;
    AWS_EC2_API NeuronDeviceInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NeuronDeviceInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of neuron accelerators for the instance type.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline NeuronDeviceInfo& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the neuron accelerator.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    NeuronDeviceInfo& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the cores available to each neuron accelerator.</p>
     */
    inline const NeuronDeviceCoreInfo& GetCoreInfo() const { return m_coreInfo; }
    inline bool CoreInfoHasBeenSet() const { return m_coreInfoHasBeenSet; }
    template<typename CoreInfoT = NeuronDeviceCoreInfo>
    void SetCoreInfo(CoreInfoT&& value) { m_coreInfoHasBeenSet = true; m_coreInfo = std::forward<CoreInfoT>(value); }
    template<typename CoreInfoT = NeuronDeviceCoreInfo>
    NeuronDeviceInfo& WithCoreInfo(CoreInfoT&& value) { SetCoreInfo(std::forward<CoreInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the memory available to each neuron accelerator.</p>
     */
    inline const NeuronDeviceMemoryInfo& GetMemoryInfo() const { return m_memoryInfo; }
    inline bool MemoryInfoHasBeenSet() const { return m_memoryInfoHasBeenSet; }
    template<typename MemoryInfoT = NeuronDeviceMemoryInfo>
    void SetMemoryInfo(MemoryInfoT&& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = std::forward<MemoryInfoT>(value); }
    template<typename MemoryInfoT = NeuronDeviceMemoryInfo>
    NeuronDeviceInfo& WithMemoryInfo(MemoryInfoT&& value) { SetMemoryInfo(std::forward<MemoryInfoT>(value)); return *this;}
    ///@}
  private:

    int m_count{0};
    bool m_countHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NeuronDeviceCoreInfo m_coreInfo;
    bool m_coreInfoHasBeenSet = false;

    NeuronDeviceMemoryInfo m_memoryInfo;
    bool m_memoryInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
