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

  class AWS_GUARDDUTY_API LocalPortDetails
  {
  public:
    LocalPortDetails();
    LocalPortDetails(Aws::Utils::Json::JsonView jsonValue);
    LocalPortDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Port number of the local connection.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Port number of the local connection.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Port number of the local connection.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Port number of the local connection.</p>
     */
    inline LocalPortDetails& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Port name of the local connection.</p>
     */
    inline const Aws::String& GetPortName() const{ return m_portName; }

    /**
     * <p>Port name of the local connection.</p>
     */
    inline bool PortNameHasBeenSet() const { return m_portNameHasBeenSet; }

    /**
     * <p>Port name of the local connection.</p>
     */
    inline void SetPortName(const Aws::String& value) { m_portNameHasBeenSet = true; m_portName = value; }

    /**
     * <p>Port name of the local connection.</p>
     */
    inline void SetPortName(Aws::String&& value) { m_portNameHasBeenSet = true; m_portName = std::move(value); }

    /**
     * <p>Port name of the local connection.</p>
     */
    inline void SetPortName(const char* value) { m_portNameHasBeenSet = true; m_portName.assign(value); }

    /**
     * <p>Port name of the local connection.</p>
     */
    inline LocalPortDetails& WithPortName(const Aws::String& value) { SetPortName(value); return *this;}

    /**
     * <p>Port name of the local connection.</p>
     */
    inline LocalPortDetails& WithPortName(Aws::String&& value) { SetPortName(std::move(value)); return *this;}

    /**
     * <p>Port name of the local connection.</p>
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
