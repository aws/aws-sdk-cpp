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
    AWS_EC2_API NeuronInfo();
    AWS_EC2_API NeuronInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NeuronInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Describes the neuron accelerators for the instance type.</p>
     */
    inline const Aws::Vector<NeuronDeviceInfo>& GetNeuronDevices() const{ return m_neuronDevices; }

    /**
     * <p>Describes the neuron accelerators for the instance type.</p>
     */
    inline bool NeuronDevicesHasBeenSet() const { return m_neuronDevicesHasBeenSet; }

    /**
     * <p>Describes the neuron accelerators for the instance type.</p>
     */
    inline void SetNeuronDevices(const Aws::Vector<NeuronDeviceInfo>& value) { m_neuronDevicesHasBeenSet = true; m_neuronDevices = value; }

    /**
     * <p>Describes the neuron accelerators for the instance type.</p>
     */
    inline void SetNeuronDevices(Aws::Vector<NeuronDeviceInfo>&& value) { m_neuronDevicesHasBeenSet = true; m_neuronDevices = std::move(value); }

    /**
     * <p>Describes the neuron accelerators for the instance type.</p>
     */
    inline NeuronInfo& WithNeuronDevices(const Aws::Vector<NeuronDeviceInfo>& value) { SetNeuronDevices(value); return *this;}

    /**
     * <p>Describes the neuron accelerators for the instance type.</p>
     */
    inline NeuronInfo& WithNeuronDevices(Aws::Vector<NeuronDeviceInfo>&& value) { SetNeuronDevices(std::move(value)); return *this;}

    /**
     * <p>Describes the neuron accelerators for the instance type.</p>
     */
    inline NeuronInfo& AddNeuronDevices(const NeuronDeviceInfo& value) { m_neuronDevicesHasBeenSet = true; m_neuronDevices.push_back(value); return *this; }

    /**
     * <p>Describes the neuron accelerators for the instance type.</p>
     */
    inline NeuronInfo& AddNeuronDevices(NeuronDeviceInfo&& value) { m_neuronDevicesHasBeenSet = true; m_neuronDevices.push_back(std::move(value)); return *this; }


    /**
     * <p>The total size of the memory for the neuron accelerators for the instance
     * type, in MiB.</p>
     */
    inline int GetTotalNeuronDeviceMemoryInMiB() const{ return m_totalNeuronDeviceMemoryInMiB; }

    /**
     * <p>The total size of the memory for the neuron accelerators for the instance
     * type, in MiB.</p>
     */
    inline bool TotalNeuronDeviceMemoryInMiBHasBeenSet() const { return m_totalNeuronDeviceMemoryInMiBHasBeenSet; }

    /**
     * <p>The total size of the memory for the neuron accelerators for the instance
     * type, in MiB.</p>
     */
    inline void SetTotalNeuronDeviceMemoryInMiB(int value) { m_totalNeuronDeviceMemoryInMiBHasBeenSet = true; m_totalNeuronDeviceMemoryInMiB = value; }

    /**
     * <p>The total size of the memory for the neuron accelerators for the instance
     * type, in MiB.</p>
     */
    inline NeuronInfo& WithTotalNeuronDeviceMemoryInMiB(int value) { SetTotalNeuronDeviceMemoryInMiB(value); return *this;}

  private:

    Aws::Vector<NeuronDeviceInfo> m_neuronDevices;
    bool m_neuronDevicesHasBeenSet = false;

    int m_totalNeuronDeviceMemoryInMiB;
    bool m_totalNeuronDeviceMemoryInMiBHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
