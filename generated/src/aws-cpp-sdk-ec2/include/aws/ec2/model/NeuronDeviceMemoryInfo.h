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
   * <p>Describes the memory available to the neuron accelerator.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NeuronDeviceMemoryInfo">AWS
   * API Reference</a></p>
   */
  class NeuronDeviceMemoryInfo
  {
  public:
    AWS_EC2_API NeuronDeviceMemoryInfo() = default;
    AWS_EC2_API NeuronDeviceMemoryInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NeuronDeviceMemoryInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The size of the memory available to the neuron accelerator, in MiB.</p>
     */
    inline int GetSizeInMiB() const { return m_sizeInMiB; }
    inline bool SizeInMiBHasBeenSet() const { return m_sizeInMiBHasBeenSet; }
    inline void SetSizeInMiB(int value) { m_sizeInMiBHasBeenSet = true; m_sizeInMiB = value; }
    inline NeuronDeviceMemoryInfo& WithSizeInMiB(int value) { SetSizeInMiB(value); return *this;}
    ///@}
  private:

    int m_sizeInMiB{0};
    bool m_sizeInMiBHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
