/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceCapacity.h>
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
   * <p>The capacity information for instances that can be launched onto the
   * Dedicated Host. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AvailableCapacity">AWS
   * API Reference</a></p>
   */
  class AvailableCapacity
  {
  public:
    AWS_EC2_API AvailableCapacity() = default;
    AWS_EC2_API AvailableCapacity(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AvailableCapacity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of instances that can be launched onto the Dedicated Host
     * depending on the host's available capacity. For Dedicated Hosts that support
     * multiple instance types, this parameter represents the number of instances for
     * each instance size that is supported on the host.</p>
     */
    inline const Aws::Vector<InstanceCapacity>& GetAvailableInstanceCapacity() const { return m_availableInstanceCapacity; }
    inline bool AvailableInstanceCapacityHasBeenSet() const { return m_availableInstanceCapacityHasBeenSet; }
    template<typename AvailableInstanceCapacityT = Aws::Vector<InstanceCapacity>>
    void SetAvailableInstanceCapacity(AvailableInstanceCapacityT&& value) { m_availableInstanceCapacityHasBeenSet = true; m_availableInstanceCapacity = std::forward<AvailableInstanceCapacityT>(value); }
    template<typename AvailableInstanceCapacityT = Aws::Vector<InstanceCapacity>>
    AvailableCapacity& WithAvailableInstanceCapacity(AvailableInstanceCapacityT&& value) { SetAvailableInstanceCapacity(std::forward<AvailableInstanceCapacityT>(value)); return *this;}
    template<typename AvailableInstanceCapacityT = InstanceCapacity>
    AvailableCapacity& AddAvailableInstanceCapacity(AvailableInstanceCapacityT&& value) { m_availableInstanceCapacityHasBeenSet = true; m_availableInstanceCapacity.emplace_back(std::forward<AvailableInstanceCapacityT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of vCPUs available for launching instances onto the Dedicated
     * Host.</p>
     */
    inline int GetAvailableVCpus() const { return m_availableVCpus; }
    inline bool AvailableVCpusHasBeenSet() const { return m_availableVCpusHasBeenSet; }
    inline void SetAvailableVCpus(int value) { m_availableVCpusHasBeenSet = true; m_availableVCpus = value; }
    inline AvailableCapacity& WithAvailableVCpus(int value) { SetAvailableVCpus(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceCapacity> m_availableInstanceCapacity;
    bool m_availableInstanceCapacityHasBeenSet = false;

    int m_availableVCpus{0};
    bool m_availableVCpusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
