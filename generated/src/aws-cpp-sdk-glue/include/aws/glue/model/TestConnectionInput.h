/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ConnectionType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/AuthenticationConfigurationInput.h>
#include <aws/glue/model/ConnectionPropertyKey.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure that is used to specify testing a connection to a
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TestConnectionInput">AWS
   * API Reference</a></p>
   */
  class TestConnectionInput
  {
  public:
    AWS_GLUE_API TestConnectionInput() = default;
    AWS_GLUE_API TestConnectionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TestConnectionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of connection to test. This operation is only available for the
     * <code>JDBC</code> or <code>SALESFORCE</code> connection types.</p>
     */
    inline ConnectionType GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(ConnectionType value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline TestConnectionInput& WithConnectionType(ConnectionType value) { SetConnectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pairs that define parameters for the connection.</p> <p>JDBC
     * connections use the following connection properties:</p> <ul> <li> <p>Required:
     * All of (<code>HOST</code>, <code>PORT</code>, <code>JDBC_ENGINE</code>) or
     * <code>JDBC_CONNECTION_URL</code>.</p> </li> <li> <p>Required: All of
     * (<code>USERNAME</code>, <code>PASSWORD</code>) or <code>SECRET_ID</code>.</p>
     * </li> <li> <p>Optional: <code>JDBC_ENFORCE_SSL</code>,
     * <code>CUSTOM_JDBC_CERT</code>, <code>CUSTOM_JDBC_CERT_STRING</code>,
     * <code>SKIP_CUSTOM_JDBC_CERT_VALIDATION</code>. These parameters are used to
     * configure SSL with JDBC.</p> </li> </ul> <p>SALESFORCE connections require the
     * <code>AuthenticationConfiguration</code> member to be configured.</p>
     */
    inline const Aws::Map<ConnectionPropertyKey, Aws::String>& GetConnectionProperties() const { return m_connectionProperties; }
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
    template<typename ConnectionPropertiesT = Aws::Map<ConnectionPropertyKey, Aws::String>>
    void SetConnectionProperties(ConnectionPropertiesT&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::forward<ConnectionPropertiesT>(value); }
    template<typename ConnectionPropertiesT = Aws::Map<ConnectionPropertyKey, Aws::String>>
    TestConnectionInput& WithConnectionProperties(ConnectionPropertiesT&& value) { SetConnectionProperties(std::forward<ConnectionPropertiesT>(value)); return *this;}
    inline TestConnectionInput& AddConnectionProperties(ConnectionPropertyKey key, Aws::String value) {
      m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A structure containing the authentication configuration in the TestConnection
     * request. Required for a connection to Salesforce using OAuth authentication.</p>
     */
    inline const AuthenticationConfigurationInput& GetAuthenticationConfiguration() const { return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    template<typename AuthenticationConfigurationT = AuthenticationConfigurationInput>
    void SetAuthenticationConfiguration(AuthenticationConfigurationT&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::forward<AuthenticationConfigurationT>(value); }
    template<typename AuthenticationConfigurationT = AuthenticationConfigurationInput>
    TestConnectionInput& WithAuthenticationConfiguration(AuthenticationConfigurationT&& value) { SetAuthenticationConfiguration(std::forward<AuthenticationConfigurationT>(value)); return *this;}
    ///@}
  private:

    ConnectionType m_connectionType{ConnectionType::NOT_SET};
    bool m_connectionTypeHasBeenSet = false;

    Aws::Map<ConnectionPropertyKey, Aws::String> m_connectionProperties;
    bool m_connectionPropertiesHasBeenSet = false;

    AuthenticationConfigurationInput m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
