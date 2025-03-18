/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>An object that specifies the TLS configuration for a domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TlsConfig">AWS API
   * Reference</a></p>
   */
  class TlsConfig
  {
  public:
    AWS_IOT_API TlsConfig() = default;
    AWS_IOT_API TlsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TlsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The security policy for a domain configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/transport-security.html#tls-policy-table">Security
     * policies </a> in the <i>Amazon Web Services IoT Core developer guide</i>.</p>
     */
    inline const Aws::String& GetSecurityPolicy() const { return m_securityPolicy; }
    inline bool SecurityPolicyHasBeenSet() const { return m_securityPolicyHasBeenSet; }
    template<typename SecurityPolicyT = Aws::String>
    void SetSecurityPolicy(SecurityPolicyT&& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = std::forward<SecurityPolicyT>(value); }
    template<typename SecurityPolicyT = Aws::String>
    TlsConfig& WithSecurityPolicy(SecurityPolicyT&& value) { SetSecurityPolicy(std::forward<SecurityPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityPolicy;
    bool m_securityPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
