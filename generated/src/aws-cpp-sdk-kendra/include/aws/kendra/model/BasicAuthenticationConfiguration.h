/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information to connect to websites that require
   * basic user authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BasicAuthenticationConfiguration">AWS
   * API Reference</a></p>
   */
  class BasicAuthenticationConfiguration
  {
  public:
    AWS_KENDRA_API BasicAuthenticationConfiguration();
    AWS_KENDRA_API BasicAuthenticationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API BasicAuthenticationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the website host you want to connect to using authentication
     * credentials.</p> <p>For example, the host name of
     * https://a.example.com/page1.html is "a.example.com".</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }
    inline BasicAuthenticationConfiguration& WithHost(const Aws::String& value) { SetHost(value); return *this;}
    inline BasicAuthenticationConfiguration& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}
    inline BasicAuthenticationConfiguration& WithHost(const char* value) { SetHost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number of the website host you want to connect to using
     * authentication credentials.</p> <p>For example, the port for
     * https://a.example.com/page1.html is 443, the standard port for HTTPS.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline BasicAuthenticationConfiguration& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret. You create a
     * secret to store your credentials in <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">Secrets
     * Manager</a> </p> <p>You use a secret if basic authentication credentials are
     * required to connect to a website. The secret stores your credentials of user
     * name and password.</p>
     */
    inline const Aws::String& GetCredentials() const{ return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    inline void SetCredentials(const Aws::String& value) { m_credentialsHasBeenSet = true; m_credentials = value; }
    inline void SetCredentials(Aws::String&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }
    inline void SetCredentials(const char* value) { m_credentialsHasBeenSet = true; m_credentials.assign(value); }
    inline BasicAuthenticationConfiguration& WithCredentials(const Aws::String& value) { SetCredentials(value); return *this;}
    inline BasicAuthenticationConfiguration& WithCredentials(Aws::String&& value) { SetCredentials(std::move(value)); return *this;}
    inline BasicAuthenticationConfiguration& WithCredentials(const char* value) { SetCredentials(value); return *this;}
    ///@}
  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_credentials;
    bool m_credentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
