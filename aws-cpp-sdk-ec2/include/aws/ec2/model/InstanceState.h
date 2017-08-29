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
#include <aws/ec2/model/InstanceStateName.h>
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
   * <p>Describes the current state of an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceState">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InstanceState
  {
  public:
    InstanceState();
    InstanceState(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The low byte represents the state. The high byte is an opaque internal value
     * and should be ignored.</p> <ul> <li> <p> <code>0</code> : <code>pending</code>
     * </p> </li> <li> <p> <code>16</code> : <code>running</code> </p> </li> <li> <p>
     * <code>32</code> : <code>shutting-down</code> </p> </li> <li> <p> <code>48</code>
     * : <code>terminated</code> </p> </li> <li> <p> <code>64</code> :
     * <code>stopping</code> </p> </li> <li> <p> <code>80</code> : <code>stopped</code>
     * </p> </li> </ul>
     */
    inline int GetCode() const{ return m_code; }

    /**
     * <p>The low byte represents the state. The high byte is an opaque internal value
     * and should be ignored.</p> <ul> <li> <p> <code>0</code> : <code>pending</code>
     * </p> </li> <li> <p> <code>16</code> : <code>running</code> </p> </li> <li> <p>
     * <code>32</code> : <code>shutting-down</code> </p> </li> <li> <p> <code>48</code>
     * : <code>terminated</code> </p> </li> <li> <p> <code>64</code> :
     * <code>stopping</code> </p> </li> <li> <p> <code>80</code> : <code>stopped</code>
     * </p> </li> </ul>
     */
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The low byte represents the state. The high byte is an opaque internal value
     * and should be ignored.</p> <ul> <li> <p> <code>0</code> : <code>pending</code>
     * </p> </li> <li> <p> <code>16</code> : <code>running</code> </p> </li> <li> <p>
     * <code>32</code> : <code>shutting-down</code> </p> </li> <li> <p> <code>48</code>
     * : <code>terminated</code> </p> </li> <li> <p> <code>64</code> :
     * <code>stopping</code> </p> </li> <li> <p> <code>80</code> : <code>stopped</code>
     * </p> </li> </ul>
     */
    inline InstanceState& WithCode(int value) { SetCode(value); return *this;}


    /**
     * <p>The current state of the instance.</p>
     */
    inline const InstanceStateName& GetName() const{ return m_name; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline void SetName(const InstanceStateName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline void SetName(InstanceStateName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The current state of the instance.</p>
     */
    inline InstanceState& WithName(const InstanceStateName& value) { SetName(value); return *this;}

    /**
     * <p>The current state of the instance.</p>
     */
    inline InstanceState& WithName(InstanceStateName&& value) { SetName(std::move(value)); return *this;}

  private:

    int m_code;
    bool m_codeHasBeenSet;

    InstanceStateName m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
