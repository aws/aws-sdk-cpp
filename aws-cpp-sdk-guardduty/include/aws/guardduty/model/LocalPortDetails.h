﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains information about the port for the local connection.</p><p><h3>See
   * Also:</h3>   <a
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
     * <p>The port number of the local connection.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number of the local connection.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number of the local connection.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number of the local connection.</p>
     */
    inline LocalPortDetails& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The port name of the local connection.</p>
     */
    inline const Aws::String& GetPortName() const{ return m_portName; }

    /**
     * <p>The port name of the local connection.</p>
     */
    inline bool PortNameHasBeenSet() const { return m_portNameHasBeenSet; }

    /**
     * <p>The port name of the local connection.</p>
     */
    inline void SetPortName(const Aws::String& value) { m_portNameHasBeenSet = true; m_portName = value; }

    /**
     * <p>The port name of the local connection.</p>
     */
    inline void SetPortName(Aws::String&& value) { m_portNameHasBeenSet = true; m_portName = std::move(value); }

    /**
     * <p>The port name of the local connection.</p>
     */
    inline void SetPortName(const char* value) { m_portNameHasBeenSet = true; m_portName.assign(value); }

    /**
     * <p>The port name of the local connection.</p>
     */
    inline LocalPortDetails& WithPortName(const Aws::String& value) { SetPortName(value); return *this;}

    /**
     * <p>The port name of the local connection.</p>
     */
    inline LocalPortDetails& WithPortName(Aws::String&& value) { SetPortName(std::move(value)); return *this;}

    /**
     * <p>The port name of the local connection.</p>
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
