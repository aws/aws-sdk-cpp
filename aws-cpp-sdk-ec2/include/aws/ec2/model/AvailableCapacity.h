/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The capacity information for instances launched onto the Dedicated
   * Host.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AvailableCapacity">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AvailableCapacity
  {
  public:
    AvailableCapacity();
    AvailableCapacity(const Aws::Utils::Xml::XmlNode& xmlNode);
    AvailableCapacity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The total number of instances that the Dedicated Host supports.</p>
     */
    inline const Aws::Vector<InstanceCapacity>& GetAvailableInstanceCapacity() const{ return m_availableInstanceCapacity; }

    /**
     * <p>The total number of instances that the Dedicated Host supports.</p>
     */
    inline void SetAvailableInstanceCapacity(const Aws::Vector<InstanceCapacity>& value) { m_availableInstanceCapacityHasBeenSet = true; m_availableInstanceCapacity = value; }

    /**
     * <p>The total number of instances that the Dedicated Host supports.</p>
     */
    inline void SetAvailableInstanceCapacity(Aws::Vector<InstanceCapacity>&& value) { m_availableInstanceCapacityHasBeenSet = true; m_availableInstanceCapacity = std::move(value); }

    /**
     * <p>The total number of instances that the Dedicated Host supports.</p>
     */
    inline AvailableCapacity& WithAvailableInstanceCapacity(const Aws::Vector<InstanceCapacity>& value) { SetAvailableInstanceCapacity(value); return *this;}

    /**
     * <p>The total number of instances that the Dedicated Host supports.</p>
     */
    inline AvailableCapacity& WithAvailableInstanceCapacity(Aws::Vector<InstanceCapacity>&& value) { SetAvailableInstanceCapacity(std::move(value)); return *this;}

    /**
     * <p>The total number of instances that the Dedicated Host supports.</p>
     */
    inline AvailableCapacity& AddAvailableInstanceCapacity(const InstanceCapacity& value) { m_availableInstanceCapacityHasBeenSet = true; m_availableInstanceCapacity.push_back(value); return *this; }

    /**
     * <p>The total number of instances that the Dedicated Host supports.</p>
     */
    inline AvailableCapacity& AddAvailableInstanceCapacity(InstanceCapacity&& value) { m_availableInstanceCapacityHasBeenSet = true; m_availableInstanceCapacity.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of vCPUs available on the Dedicated Host.</p>
     */
    inline int GetAvailableVCpus() const{ return m_availableVCpus; }

    /**
     * <p>The number of vCPUs available on the Dedicated Host.</p>
     */
    inline void SetAvailableVCpus(int value) { m_availableVCpusHasBeenSet = true; m_availableVCpus = value; }

    /**
     * <p>The number of vCPUs available on the Dedicated Host.</p>
     */
    inline AvailableCapacity& WithAvailableVCpus(int value) { SetAvailableVCpus(value); return *this;}

  private:

    Aws::Vector<InstanceCapacity> m_availableInstanceCapacity;
    bool m_availableInstanceCapacityHasBeenSet;

    int m_availableVCpus;
    bool m_availableVCpusHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
