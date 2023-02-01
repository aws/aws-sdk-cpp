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
    AWS_FMS_API App();
    AWS_FMS_API App(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API App& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application's name.</p>
     */
    inline const Aws::String& GetAppName() const{ return m_appName; }

    /**
     * <p>The application's name.</p>
     */
    inline bool AppNameHasBeenSet() const { return m_appNameHasBeenSet; }

    /**
     * <p>The application's name.</p>
     */
    inline void SetAppName(const Aws::String& value) { m_appNameHasBeenSet = true; m_appName = value; }

    /**
     * <p>The application's name.</p>
     */
    inline void SetAppName(Aws::String&& value) { m_appNameHasBeenSet = true; m_appName = std::move(value); }

    /**
     * <p>The application's name.</p>
     */
    inline void SetAppName(const char* value) { m_appNameHasBeenSet = true; m_appName.assign(value); }

    /**
     * <p>The application's name.</p>
     */
    inline App& WithAppName(const Aws::String& value) { SetAppName(value); return *this;}

    /**
     * <p>The application's name.</p>
     */
    inline App& WithAppName(Aws::String&& value) { SetAppName(std::move(value)); return *this;}

    /**
     * <p>The application's name.</p>
     */
    inline App& WithAppName(const char* value) { SetAppName(value); return *this;}


    /**
     * <p>The IP protocol name or number. The name can be one of <code>tcp</code>,
     * <code>udp</code>, or <code>icmp</code>. For information on possible numbers, see
     * <a
     * href="https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The IP protocol name or number. The name can be one of <code>tcp</code>,
     * <code>udp</code>, or <code>icmp</code>. For information on possible numbers, see
     * <a
     * href="https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The IP protocol name or number. The name can be one of <code>tcp</code>,
     * <code>udp</code>, or <code>icmp</code>. For information on possible numbers, see
     * <a
     * href="https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The IP protocol name or number. The name can be one of <code>tcp</code>,
     * <code>udp</code>, or <code>icmp</code>. For information on possible numbers, see
     * <a
     * href="https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The IP protocol name or number. The name can be one of <code>tcp</code>,
     * <code>udp</code>, or <code>icmp</code>. For information on possible numbers, see
     * <a
     * href="https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The IP protocol name or number. The name can be one of <code>tcp</code>,
     * <code>udp</code>, or <code>icmp</code>. For information on possible numbers, see
     * <a
     * href="https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>.</p>
     */
    inline App& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The IP protocol name or number. The name can be one of <code>tcp</code>,
     * <code>udp</code>, or <code>icmp</code>. For information on possible numbers, see
     * <a
     * href="https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>.</p>
     */
    inline App& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The IP protocol name or number. The name can be one of <code>tcp</code>,
     * <code>udp</code>, or <code>icmp</code>. For information on possible numbers, see
     * <a
     * href="https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>.</p>
     */
    inline App& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>The application's port number, for example <code>80</code>.</p>
     */
    inline long long GetPort() const{ return m_port; }

    /**
     * <p>The application's port number, for example <code>80</code>.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The application's port number, for example <code>80</code>.</p>
     */
    inline void SetPort(long long value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The application's port number, for example <code>80</code>.</p>
     */
    inline App& WithPort(long long value) { SetPort(value); return *this;}

  private:

    Aws::String m_appName;
    bool m_appNameHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    long long m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
