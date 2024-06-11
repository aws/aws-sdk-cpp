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
   * <p>Contains information about the remote port.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RemotePortDetails">AWS
   * API Reference</a></p>
   */
  class RemotePortDetails
  {
  public:
    AWS_GUARDDUTY_API RemotePortDetails();
    AWS_GUARDDUTY_API RemotePortDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RemotePortDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The port number of the remote connection.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RemotePortDetails& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port name of the remote connection.</p>
     */
    inline const Aws::String& GetPortName() const{ return m_portName; }
    inline bool PortNameHasBeenSet() const { return m_portNameHasBeenSet; }
    inline void SetPortName(const Aws::String& value) { m_portNameHasBeenSet = true; m_portName = value; }
    inline void SetPortName(Aws::String&& value) { m_portNameHasBeenSet = true; m_portName = std::move(value); }
    inline void SetPortName(const char* value) { m_portNameHasBeenSet = true; m_portName.assign(value); }
    inline RemotePortDetails& WithPortName(const Aws::String& value) { SetPortName(value); return *this;}
    inline RemotePortDetails& WithPortName(Aws::String&& value) { SetPortName(std::move(value)); return *this;}
    inline RemotePortDetails& WithPortName(const char* value) { SetPortName(value); return *this;}
    ///@}
  private:

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_portName;
    bool m_portNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
