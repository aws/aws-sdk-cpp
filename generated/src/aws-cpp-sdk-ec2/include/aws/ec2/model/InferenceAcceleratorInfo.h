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
   * <p>Describes the Inference accelerators for the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InferenceAcceleratorInfo">AWS
   * API Reference</a></p>
   */
  class InferenceAcceleratorInfo
  {
  public:
    AWS_EC2_API InferenceAcceleratorInfo();
    AWS_EC2_API InferenceAcceleratorInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InferenceAcceleratorInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline const Aws::Vector<InferenceDeviceInfo>& GetAccelerators() const{ return m_accelerators; }

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline bool AcceleratorsHasBeenSet() const { return m_acceleratorsHasBeenSet; }

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline void SetAccelerators(const Aws::Vector<InferenceDeviceInfo>& value) { m_acceleratorsHasBeenSet = true; m_accelerators = value; }

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline void SetAccelerators(Aws::Vector<InferenceDeviceInfo>&& value) { m_acceleratorsHasBeenSet = true; m_accelerators = std::move(value); }

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline InferenceAcceleratorInfo& WithAccelerators(const Aws::Vector<InferenceDeviceInfo>& value) { SetAccelerators(value); return *this;}

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline InferenceAcceleratorInfo& WithAccelerators(Aws::Vector<InferenceDeviceInfo>&& value) { SetAccelerators(std::move(value)); return *this;}

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline InferenceAcceleratorInfo& AddAccelerators(const InferenceDeviceInfo& value) { m_acceleratorsHasBeenSet = true; m_accelerators.push_back(value); return *this; }

    /**
     * <p>Describes the Inference accelerators for the instance type.</p>
     */
    inline InferenceAcceleratorInfo& AddAccelerators(InferenceDeviceInfo&& value) { m_acceleratorsHasBeenSet = true; m_accelerators.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InferenceDeviceInfo> m_accelerators;
    bool m_acceleratorsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
