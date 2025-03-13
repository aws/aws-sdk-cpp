/**
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
  class LocalPortDetails
  {
  public:
    AWS_GUARDDUTY_API LocalPortDetails() = default;
    AWS_GUARDDUTY_API LocalPortDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API LocalPortDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The port number of the local connection.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline LocalPortDetails& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port name of the local connection.</p>
     */
    inline const Aws::String& GetPortName() const { return m_portName; }
    inline bool PortNameHasBeenSet() const { return m_portNameHasBeenSet; }
    template<typename PortNameT = Aws::String>
    void SetPortName(PortNameT&& value) { m_portNameHasBeenSet = true; m_portName = std::forward<PortNameT>(value); }
    template<typename PortNameT = Aws::String>
    LocalPortDetails& WithPortName(PortNameT&& value) { SetPortName(std::forward<PortNameT>(value)); return *this;}
    ///@}
  private:

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_portName;
    bool m_portNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
