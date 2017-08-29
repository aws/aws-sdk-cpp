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
   * <p>Information about the instance type that the Dedicated Host
   * supports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceCapacity">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InstanceCapacity
  {
  public:
    InstanceCapacity();
    InstanceCapacity(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceCapacity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of instances that can still be launched onto the Dedicated
     * Host.</p>
     */
    inline int GetAvailableCapacity() const{ return m_availableCapacity; }

    /**
     * <p>The number of instances that can still be launched onto the Dedicated
     * Host.</p>
     */
    inline void SetAvailableCapacity(int value) { m_availableCapacityHasBeenSet = true; m_availableCapacity = value; }

    /**
     * <p>The number of instances that can still be launched onto the Dedicated
     * Host.</p>
     */
    inline InstanceCapacity& WithAvailableCapacity(int value) { SetAvailableCapacity(value); return *this;}


    /**
     * <p>The instance type size supported by the Dedicated Host.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type size supported by the Dedicated Host.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type size supported by the Dedicated Host.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type size supported by the Dedicated Host.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type size supported by the Dedicated Host.</p>
     */
    inline InstanceCapacity& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type size supported by the Dedicated Host.</p>
     */
    inline InstanceCapacity& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type size supported by the Dedicated Host.</p>
     */
    inline InstanceCapacity& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The total number of instances that can be launched onto the Dedicated
     * Host.</p>
     */
    inline int GetTotalCapacity() const{ return m_totalCapacity; }

    /**
     * <p>The total number of instances that can be launched onto the Dedicated
     * Host.</p>
     */
    inline void SetTotalCapacity(int value) { m_totalCapacityHasBeenSet = true; m_totalCapacity = value; }

    /**
     * <p>The total number of instances that can be launched onto the Dedicated
     * Host.</p>
     */
    inline InstanceCapacity& WithTotalCapacity(int value) { SetTotalCapacity(value); return *this;}

  private:

    int m_availableCapacity;
    bool m_availableCapacityHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_totalCapacity;
    bool m_totalCapacityHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
