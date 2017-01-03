﻿/*
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
   * <p>Describes whether monitoring is enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotFleetMonitoring">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API SpotFleetMonitoring
  {
  public:
    SpotFleetMonitoring();
    SpotFleetMonitoring(const Aws::Utils::Xml::XmlNode& xmlNode);
    SpotFleetMonitoring& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>Enables monitoring for the instance.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Enables monitoring for the instance.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Enables monitoring for the instance.</p> <p>Default: <code>false</code> </p>
     */
    inline SpotFleetMonitoring& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:
    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
