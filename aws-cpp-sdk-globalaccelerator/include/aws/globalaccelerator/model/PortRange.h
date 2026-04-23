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
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>A complex type for a range of ports for a listener.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/PortRange">AWS
   * API Reference</a></p>
   */
  class AWS_GLOBALACCELERATOR_API PortRange
  {
  public:
    PortRange();
    PortRange(Aws::Utils::Json::JsonView jsonValue);
    PortRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The first port in the range of ports, inclusive.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>The first port in the range of ports, inclusive.</p>
     */
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }

    /**
     * <p>The first port in the range of ports, inclusive.</p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>The first port in the range of ports, inclusive.</p>
     */
    inline PortRange& WithFromPort(int value) { SetFromPort(value); return *this;}


    /**
     * <p>The last port in the range of ports, inclusive.</p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>The last port in the range of ports, inclusive.</p>
     */
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }

    /**
     * <p>The last port in the range of ports, inclusive.</p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>The last port in the range of ports, inclusive.</p>
     */
    inline PortRange& WithToPort(int value) { SetToPort(value); return *this;}

  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet;

    int m_toPort;
    bool m_toPortHasBeenSet;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
