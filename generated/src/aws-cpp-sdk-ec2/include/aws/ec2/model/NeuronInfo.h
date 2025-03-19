/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/NeuronDeviceInfo.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NeuronInfo">AWS API
   * Reference</a></p>
   */
  class NeuronInfo
  {
  public:
    AWS_EC2_API NeuronInfo() = default;
    AWS_EC2_API NeuronInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NeuronInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Describes the neuron accelerators for the instance type.</p>
     */
    inline const Aws::Vector<NeuronDeviceInfo>& GetNeuronDevices() const { return m_neuronDevices; }
    inline bool NeuronDevicesHasBeenSet() const { return m_neuronDevicesHasBeenSet; }
    template<typename NeuronDevicesT = Aws::Vector<NeuronDeviceInfo>>
    void SetNeuronDevices(NeuronDevicesT&& value) { m_neuronDevicesHasBeenSet = true; m_neuronDevices = std::forward<NeuronDevicesT>(value); }
    template<typename NeuronDevicesT = Aws::Vector<NeuronDeviceInfo>>
    NeuronInfo& WithNeuronDevices(NeuronDevicesT&& value) { SetNeuronDevices(std::forward<NeuronDevicesT>(value)); return *this;}
    template<typename NeuronDevicesT = NeuronDeviceInfo>
    NeuronInfo& AddNeuronDevices(NeuronDevicesT&& value) { m_neuronDevicesHasBeenSet = true; m_neuronDevices.emplace_back(std::forward<NeuronDevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total size of the memory for the neuron accelerators for the instance
     * type, in MiB.</p>
     */
    inline int GetTotalNeuronDeviceMemoryInMiB() const { return m_totalNeuronDeviceMemoryInMiB; }
    inline bool TotalNeuronDeviceMemoryInMiBHasBeenSet() const { return m_totalNeuronDeviceMemoryInMiBHasBeenSet; }
    inline void SetTotalNeuronDeviceMemoryInMiB(int value) { m_totalNeuronDeviceMemoryInMiBHasBeenSet = true; m_totalNeuronDeviceMemoryInMiB = value; }
    inline NeuronInfo& WithTotalNeuronDeviceMemoryInMiB(int value) { SetTotalNeuronDeviceMemoryInMiB(value); return *this;}
    ///@}
  private:

    Aws::Vector<NeuronDeviceInfo> m_neuronDevices;
    bool m_neuronDevicesHasBeenSet = false;

    int m_totalNeuronDeviceMemoryInMiB{0};
    bool m_totalNeuronDeviceMemoryInMiBHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
