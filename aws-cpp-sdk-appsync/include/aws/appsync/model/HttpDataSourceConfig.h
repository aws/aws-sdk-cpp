/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/AuthorizationConfig.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes an HTTP data source configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/HttpDataSourceConfig">AWS
   * API Reference</a></p>
   */
  class HttpDataSourceConfig
  {
  public:
    AWS_APPSYNC_API HttpDataSourceConfig();
    AWS_APPSYNC_API HttpDataSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API HttpDataSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The HTTP URL endpoint. You can specify either the domain name or IP, and port
     * combination, and the URL scheme must be HTTP or HTTPS. If you don't specify the
     * port, AppSync uses the default port 80 for the HTTP endpoint and port 443 for
     * HTTPS endpoints.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The HTTP URL endpoint. You can specify either the domain name or IP, and port
     * combination, and the URL scheme must be HTTP or HTTPS. If you don't specify the
     * port, AppSync uses the default port 80 for the HTTP endpoint and port 443 for
     * HTTPS endpoints.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The HTTP URL endpoint. You can specify either the domain name or IP, and port
     * combination, and the URL scheme must be HTTP or HTTPS. If you don't specify the
     * port, AppSync uses the default port 80 for the HTTP endpoint and port 443 for
     * HTTPS endpoints.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The HTTP URL endpoint. You can specify either the domain name or IP, and port
     * combination, and the URL scheme must be HTTP or HTTPS. If you don't specify the
     * port, AppSync uses the default port 80 for the HTTP endpoint and port 443 for
     * HTTPS endpoints.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The HTTP URL endpoint. You can specify either the domain name or IP, and port
     * combination, and the URL scheme must be HTTP or HTTPS. If you don't specify the
     * port, AppSync uses the default port 80 for the HTTP endpoint and port 443 for
     * HTTPS endpoints.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The HTTP URL endpoint. You can specify either the domain name or IP, and port
     * combination, and the URL scheme must be HTTP or HTTPS. If you don't specify the
     * port, AppSync uses the default port 80 for the HTTP endpoint and port 443 for
     * HTTPS endpoints.</p>
     */
    inline HttpDataSourceConfig& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The HTTP URL endpoint. You can specify either the domain name or IP, and port
     * combination, and the URL scheme must be HTTP or HTTPS. If you don't specify the
     * port, AppSync uses the default port 80 for the HTTP endpoint and port 443 for
     * HTTPS endpoints.</p>
     */
    inline HttpDataSourceConfig& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The HTTP URL endpoint. You can specify either the domain name or IP, and port
     * combination, and the URL scheme must be HTTP or HTTPS. If you don't specify the
     * port, AppSync uses the default port 80 for the HTTP endpoint and port 443 for
     * HTTPS endpoints.</p>
     */
    inline HttpDataSourceConfig& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The authorization configuration in case the HTTP endpoint requires
     * authorization.</p>
     */
    inline const AuthorizationConfig& GetAuthorizationConfig() const{ return m_authorizationConfig; }

    /**
     * <p>The authorization configuration in case the HTTP endpoint requires
     * authorization.</p>
     */
    inline bool AuthorizationConfigHasBeenSet() const { return m_authorizationConfigHasBeenSet; }

    /**
     * <p>The authorization configuration in case the HTTP endpoint requires
     * authorization.</p>
     */
    inline void SetAuthorizationConfig(const AuthorizationConfig& value) { m_authorizationConfigHasBeenSet = true; m_authorizationConfig = value; }

    /**
     * <p>The authorization configuration in case the HTTP endpoint requires
     * authorization.</p>
     */
    inline void SetAuthorizationConfig(AuthorizationConfig&& value) { m_authorizationConfigHasBeenSet = true; m_authorizationConfig = std::move(value); }

    /**
     * <p>The authorization configuration in case the HTTP endpoint requires
     * authorization.</p>
     */
    inline HttpDataSourceConfig& WithAuthorizationConfig(const AuthorizationConfig& value) { SetAuthorizationConfig(value); return *this;}

    /**
     * <p>The authorization configuration in case the HTTP endpoint requires
     * authorization.</p>
     */
    inline HttpDataSourceConfig& WithAuthorizationConfig(AuthorizationConfig&& value) { SetAuthorizationConfig(std::move(value)); return *this;}

  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    AuthorizationConfig m_authorizationConfig;
    bool m_authorizationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
