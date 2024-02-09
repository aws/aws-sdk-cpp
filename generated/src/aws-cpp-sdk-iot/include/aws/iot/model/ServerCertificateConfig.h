/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

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
namespace IoT
{
namespace Model
{

  /**
   * <p>The server certificate configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ServerCertificateConfig">AWS
   * API Reference</a></p>
   */
  class ServerCertificateConfig
  {
  public:
    AWS_IOT_API ServerCertificateConfig();
    AWS_IOT_API ServerCertificateConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ServerCertificateConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean value that indicates whether Online Certificate Status Protocol
     * (OCSP) server certificate check is enabled or not.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-custom-domain-ocsp-config.html">Configuring
     * OCSP server-certificate stapling in domain configuration</a> from Amazon Web
     * Services IoT Core Developer Guide.</p>
     */
    inline bool GetEnableOCSPCheck() const{ return m_enableOCSPCheck; }

    /**
     * <p>A Boolean value that indicates whether Online Certificate Status Protocol
     * (OCSP) server certificate check is enabled or not.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-custom-domain-ocsp-config.html">Configuring
     * OCSP server-certificate stapling in domain configuration</a> from Amazon Web
     * Services IoT Core Developer Guide.</p>
     */
    inline bool EnableOCSPCheckHasBeenSet() const { return m_enableOCSPCheckHasBeenSet; }

    /**
     * <p>A Boolean value that indicates whether Online Certificate Status Protocol
     * (OCSP) server certificate check is enabled or not.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-custom-domain-ocsp-config.html">Configuring
     * OCSP server-certificate stapling in domain configuration</a> from Amazon Web
     * Services IoT Core Developer Guide.</p>
     */
    inline void SetEnableOCSPCheck(bool value) { m_enableOCSPCheckHasBeenSet = true; m_enableOCSPCheck = value; }

    /**
     * <p>A Boolean value that indicates whether Online Certificate Status Protocol
     * (OCSP) server certificate check is enabled or not.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-custom-domain-ocsp-config.html">Configuring
     * OCSP server-certificate stapling in domain configuration</a> from Amazon Web
     * Services IoT Core Developer Guide.</p>
     */
    inline ServerCertificateConfig& WithEnableOCSPCheck(bool value) { SetEnableOCSPCheck(value); return *this;}

  private:

    bool m_enableOCSPCheck;
    bool m_enableOCSPCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
