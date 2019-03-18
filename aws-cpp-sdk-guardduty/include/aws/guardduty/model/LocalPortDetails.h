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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace GuardDuty
{
namespace Model
{

  /**
   * Local port information of the connection.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/LocalPortDetails">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API LocalPortDetails
  {
  public:
    LocalPortDetails();
    LocalPortDetails(Aws::Utils::Json::JsonView jsonValue);
    LocalPortDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Port number of the local connection.
     */
    inline int GetPort() const{ return m_port; }

    /**
     * Port number of the local connection.
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * Port number of the local connection.
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * Port number of the local connection.
     */
    inline LocalPortDetails& WithPort(int value) { SetPort(value); return *this;}


    /**
     * Port name of the local connection.
     */
    inline const Aws::String& GetPortName() const{ return m_portName; }

    /**
     * Port name of the local connection.
     */
    inline bool PortNameHasBeenSet() const { return m_portNameHasBeenSet; }

    /**
     * Port name of the local connection.
     */
    inline void SetPortName(const Aws::String& value) { m_portNameHasBeenSet = true; m_portName = value; }

    /**
     * Port name of the local connection.
     */
    inline void SetPortName(Aws::String&& value) { m_portNameHasBeenSet = true; m_portName = std::move(value); }

    /**
     * Port name of the local connection.
     */
    inline void SetPortName(const char* value) { m_portNameHasBeenSet = true; m_portName.assign(value); }

    /**
     * Port name of the local connection.
     */
    inline LocalPortDetails& WithPortName(const Aws::String& value) { SetPortName(value); return *this;}

    /**
     * Port name of the local connection.
     */
    inline LocalPortDetails& WithPortName(Aws::String&& value) { SetPortName(std::move(value)); return *this;}

    /**
     * Port name of the local connection.
     */
    inline LocalPortDetails& WithPortName(const char* value) { SetPortName(value); return *this;}

  private:

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_portName;
    bool m_portNameHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
