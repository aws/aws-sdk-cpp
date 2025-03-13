/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about the number of instances that can be launched onto the
   * Dedicated Host.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceCapacity">AWS
   * API Reference</a></p>
   */
  class InstanceCapacity
  {
  public:
    AWS_EC2_API InstanceCapacity() = default;
    AWS_EC2_API InstanceCapacity(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceCapacity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of instances that can be launched onto the Dedicated Host based on
     * the host's available capacity.</p>
     */
    inline int GetAvailableCapacity() const { return m_availableCapacity; }
    inline bool AvailableCapacityHasBeenSet() const { return m_availableCapacityHasBeenSet; }
    inline void SetAvailableCapacity(int value) { m_availableCapacityHasBeenSet = true; m_availableCapacity = value; }
    inline InstanceCapacity& WithAvailableCapacity(int value) { SetAvailableCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type supported by the Dedicated Host.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    InstanceCapacity& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances that can be launched onto the Dedicated Host if
     * there are no instances running on it.</p>
     */
    inline int GetTotalCapacity() const { return m_totalCapacity; }
    inline bool TotalCapacityHasBeenSet() const { return m_totalCapacityHasBeenSet; }
    inline void SetTotalCapacity(int value) { m_totalCapacityHasBeenSet = true; m_totalCapacity = value; }
    inline InstanceCapacity& WithTotalCapacity(int value) { SetTotalCapacity(value); return *this;}
    ///@}
  private:

    int m_availableCapacity{0};
    bool m_availableCapacityHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_totalCapacity{0};
    bool m_totalCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
