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
    AWS_EC2_API NeuronDeviceInfo();
    AWS_EC2_API NeuronDeviceInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NeuronDeviceInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of neuron accelerators for the instance type.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of neuron accelerators for the instance type.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of neuron accelerators for the instance type.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of neuron accelerators for the instance type.</p>
     */
    inline NeuronDeviceInfo& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The name of the neuron accelerator.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the neuron accelerator.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the neuron accelerator.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the neuron accelerator.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the neuron accelerator.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the neuron accelerator.</p>
     */
    inline NeuronDeviceInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the neuron accelerator.</p>
     */
    inline NeuronDeviceInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the neuron accelerator.</p>
     */
    inline NeuronDeviceInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Describes the cores available to each neuron accelerator.</p>
     */
    inline const NeuronDeviceCoreInfo& GetCoreInfo() const{ return m_coreInfo; }

    /**
     * <p>Describes the cores available to each neuron accelerator.</p>
     */
    inline bool CoreInfoHasBeenSet() const { return m_coreInfoHasBeenSet; }

    /**
     * <p>Describes the cores available to each neuron accelerator.</p>
     */
    inline void SetCoreInfo(const NeuronDeviceCoreInfo& value) { m_coreInfoHasBeenSet = true; m_coreInfo = value; }

    /**
     * <p>Describes the cores available to each neuron accelerator.</p>
     */
    inline void SetCoreInfo(NeuronDeviceCoreInfo&& value) { m_coreInfoHasBeenSet = true; m_coreInfo = std::move(value); }

    /**
     * <p>Describes the cores available to each neuron accelerator.</p>
     */
    inline NeuronDeviceInfo& WithCoreInfo(const NeuronDeviceCoreInfo& value) { SetCoreInfo(value); return *this;}

    /**
     * <p>Describes the cores available to each neuron accelerator.</p>
     */
    inline NeuronDeviceInfo& WithCoreInfo(NeuronDeviceCoreInfo&& value) { SetCoreInfo(std::move(value)); return *this;}


    /**
     * <p>Describes the memory available to each neuron accelerator.</p>
     */
    inline const NeuronDeviceMemoryInfo& GetMemoryInfo() const{ return m_memoryInfo; }

    /**
     * <p>Describes the memory available to each neuron accelerator.</p>
     */
    inline bool MemoryInfoHasBeenSet() const { return m_memoryInfoHasBeenSet; }

    /**
     * <p>Describes the memory available to each neuron accelerator.</p>
     */
    inline void SetMemoryInfo(const NeuronDeviceMemoryInfo& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = value; }

    /**
     * <p>Describes the memory available to each neuron accelerator.</p>
     */
    inline void SetMemoryInfo(NeuronDeviceMemoryInfo&& value) { m_memoryInfoHasBeenSet = true; m_memoryInfo = std::move(value); }

    /**
     * <p>Describes the memory available to each neuron accelerator.</p>
     */
    inline NeuronDeviceInfo& WithMemoryInfo(const NeuronDeviceMemoryInfo& value) { SetMemoryInfo(value); return *this;}

    /**
     * <p>Describes the memory available to each neuron accelerator.</p>
     */
    inline NeuronDeviceInfo& WithMemoryInfo(NeuronDeviceMemoryInfo&& value) { SetMemoryInfo(std::move(value)); return *this;}

  private:

    int m_count;
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
