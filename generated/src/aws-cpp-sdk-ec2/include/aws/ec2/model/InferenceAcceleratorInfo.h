/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InferenceDeviceInfo.h>
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
   *  <p>Amazon Elastic Inference is no longer available.</p> 
   * <p>Describes the Inference accelerators for the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InferenceAcceleratorInfo">AWS
   * API Reference</a></p>
   */
  class InferenceAcceleratorInfo
  {
  public:
    AWS_EC2_API InferenceAcceleratorInfo() = default;
    AWS_EC2_API InferenceAcceleratorInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InferenceAcceleratorInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline const Aws::Vector<InferenceDeviceInfo>& GetAccelerators() const { return m_accelerators; }
    inline bool AcceleratorsHasBeenSet() const { return m_acceleratorsHasBeenSet; }
    template<typename AcceleratorsT = Aws::Vector<InferenceDeviceInfo>>
    void SetAccelerators(AcceleratorsT&& value) { m_acceleratorsHasBeenSet = true; m_accelerators = std::forward<AcceleratorsT>(value); }
    template<typename AcceleratorsT = Aws::Vector<InferenceDeviceInfo>>
    InferenceAcceleratorInfo& WithAccelerators(AcceleratorsT&& value) { SetAccelerators(std::forward<AcceleratorsT>(value)); return *this;}
    template<typename AcceleratorsT = InferenceDeviceInfo>
    InferenceAcceleratorInfo& AddAccelerators(AcceleratorsT&& value) { m_acceleratorsHasBeenSet = true; m_accelerators.emplace_back(std::forward<AcceleratorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total size of the memory for the inference accelerators for the instance
     * type, in MiB.</p>
     */
    inline int GetTotalInferenceMemoryInMiB() const { return m_totalInferenceMemoryInMiB; }
    inline bool TotalInferenceMemoryInMiBHasBeenSet() const { return m_totalInferenceMemoryInMiBHasBeenSet; }
    inline void SetTotalInferenceMemoryInMiB(int value) { m_totalInferenceMemoryInMiBHasBeenSet = true; m_totalInferenceMemoryInMiB = value; }
    inline InferenceAcceleratorInfo& WithTotalInferenceMemoryInMiB(int value) { SetTotalInferenceMemoryInMiB(value); return *this;}
    ///@}
  private:

    Aws::Vector<InferenceDeviceInfo> m_accelerators;
    bool m_acceleratorsHasBeenSet = false;

    int m_totalInferenceMemoryInMiB{0};
    bool m_totalInferenceMemoryInMiBHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
