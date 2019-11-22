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
#include <aws/ec2/model/ArchitectureType.h>
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
   * <p>Describes the processor used by the instance type.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ProcessorInfo">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ProcessorInfo
  {
  public:
    ProcessorInfo();
    ProcessorInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    ProcessorInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A list of architectures supported by the instance type.</p>
     */
    inline const Aws::Vector<ArchitectureType>& GetSupportedArchitectures() const{ return m_supportedArchitectures; }

    /**
     * <p>A list of architectures supported by the instance type.</p>
     */
    inline bool SupportedArchitecturesHasBeenSet() const { return m_supportedArchitecturesHasBeenSet; }

    /**
     * <p>A list of architectures supported by the instance type.</p>
     */
    inline void SetSupportedArchitectures(const Aws::Vector<ArchitectureType>& value) { m_supportedArchitecturesHasBeenSet = true; m_supportedArchitectures = value; }

    /**
     * <p>A list of architectures supported by the instance type.</p>
     */
    inline void SetSupportedArchitectures(Aws::Vector<ArchitectureType>&& value) { m_supportedArchitecturesHasBeenSet = true; m_supportedArchitectures = std::move(value); }

    /**
     * <p>A list of architectures supported by the instance type.</p>
     */
    inline ProcessorInfo& WithSupportedArchitectures(const Aws::Vector<ArchitectureType>& value) { SetSupportedArchitectures(value); return *this;}

    /**
     * <p>A list of architectures supported by the instance type.</p>
     */
    inline ProcessorInfo& WithSupportedArchitectures(Aws::Vector<ArchitectureType>&& value) { SetSupportedArchitectures(std::move(value)); return *this;}

    /**
     * <p>A list of architectures supported by the instance type.</p>
     */
    inline ProcessorInfo& AddSupportedArchitectures(const ArchitectureType& value) { m_supportedArchitecturesHasBeenSet = true; m_supportedArchitectures.push_back(value); return *this; }

    /**
     * <p>A list of architectures supported by the instance type.</p>
     */
    inline ProcessorInfo& AddSupportedArchitectures(ArchitectureType&& value) { m_supportedArchitecturesHasBeenSet = true; m_supportedArchitectures.push_back(std::move(value)); return *this; }


    /**
     * <p>The speed of the processor, in GHz.</p>
     */
    inline double GetSustainedClockSpeedInGhz() const{ return m_sustainedClockSpeedInGhz; }

    /**
     * <p>The speed of the processor, in GHz.</p>
     */
    inline bool SustainedClockSpeedInGhzHasBeenSet() const { return m_sustainedClockSpeedInGhzHasBeenSet; }

    /**
     * <p>The speed of the processor, in GHz.</p>
     */
    inline void SetSustainedClockSpeedInGhz(double value) { m_sustainedClockSpeedInGhzHasBeenSet = true; m_sustainedClockSpeedInGhz = value; }

    /**
     * <p>The speed of the processor, in GHz.</p>
     */
    inline ProcessorInfo& WithSustainedClockSpeedInGhz(double value) { SetSustainedClockSpeedInGhz(value); return *this;}

  private:

    Aws::Vector<ArchitectureType> m_supportedArchitectures;
    bool m_supportedArchitecturesHasBeenSet;

    double m_sustainedClockSpeedInGhz;
    bool m_sustainedClockSpeedInGhzHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
