/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/MonitoringState.h>

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
   * <p>Describes the monitoring for the instance.</p>
   */
  class AWS_EC2_API Monitoring
  {
  public:
    Monitoring();
    Monitoring(const Aws::Utils::Xml::XmlNode& xmlNode);
    Monitoring& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>Indicates whether monitoring is enabled for the instance.</p>
     */
    inline const MonitoringState& GetState() const{ return m_state; }

    /**
     * <p>Indicates whether monitoring is enabled for the instance.</p>
     */
    inline void SetState(const MonitoringState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Indicates whether monitoring is enabled for the instance.</p>
     */
    inline void SetState(MonitoringState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Indicates whether monitoring is enabled for the instance.</p>
     */
    inline Monitoring& WithState(const MonitoringState& value) { SetState(value); return *this;}

    /**
     * <p>Indicates whether monitoring is enabled for the instance.</p>
     */
    inline Monitoring& WithState(MonitoringState&& value) { SetState(value); return *this;}

  private:
    MonitoringState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
