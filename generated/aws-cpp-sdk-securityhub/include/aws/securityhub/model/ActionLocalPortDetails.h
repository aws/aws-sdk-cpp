﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>For <code>NetworkConnectionAction</code> and <code>PortProbeDetails</code>,
   * <code>LocalPortDetails</code> provides information about the local port that was
   * involved in the action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ActionLocalPortDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API ActionLocalPortDetails
  {
  public:
    ActionLocalPortDetails();
    ActionLocalPortDetails(Aws::Utils::Json::JsonView jsonValue);
    ActionLocalPortDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of the port.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The number of the port.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The number of the port.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The number of the port.</p>
     */
    inline ActionLocalPortDetails& WithPort(int value) { SetPort(value); return *this;}


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
    inline ActionLocalPortDetails& WithPortName(const Aws::String& value) { SetPortName(value); return *this;}

    /**
     * <p>The port name of the local connection.</p>
     */
    inline ActionLocalPortDetails& WithPortName(Aws::String&& value) { SetPortName(std::move(value)); return *this;}

    /**
     * <p>The port name of the local connection.</p>
     */
    inline ActionLocalPortDetails& WithPortName(const char* value) { SetPortName(value); return *this;}

  private:

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_portName;
    bool m_portNameHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
