/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>An individual Firewall Manager application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/App">AWS API
   * Reference</a></p>
   */
  class App
  {
  public:
    AWS_FMS_API App() = default;
    AWS_FMS_API App(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API App& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application's name.</p>
     */
    inline const Aws::String& GetAppName() const { return m_appName; }
    inline bool AppNameHasBeenSet() const { return m_appNameHasBeenSet; }
    template<typename AppNameT = Aws::String>
    void SetAppName(AppNameT&& value) { m_appNameHasBeenSet = true; m_appName = std::forward<AppNameT>(value); }
    template<typename AppNameT = Aws::String>
    App& WithAppName(AppNameT&& value) { SetAppName(std::forward<AppNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP protocol name or number. The name can be one of <code>tcp</code>,
     * <code>udp</code>, or <code>icmp</code>. For information on possible numbers, see
     * <a
     * href="https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    App& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application's port number, for example <code>80</code>.</p>
     */
    inline long long GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(long long value) { m_portHasBeenSet = true; m_port = value; }
    inline App& WithPort(long long value) { SetPort(value); return *this;}
    ///@}
  private:

    Aws::String m_appName;
    bool m_appNameHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    long long m_port{0};
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
