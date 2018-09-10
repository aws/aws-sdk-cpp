/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a Http data source configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/HttpDataSourceConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPSYNC_API HttpDataSourceConfig
  {
  public:
    HttpDataSourceConfig();
    HttpDataSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    HttpDataSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Http url endpoint. You can either specify the domain name or ip and port
     * combination and the url scheme must be http(s). If the port is not specified,
     * AWS AppSync will use the default port 80 for http endpoint and port 443 for
     * https endpoints.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The Http url endpoint. You can either specify the domain name or ip and port
     * combination and the url scheme must be http(s). If the port is not specified,
     * AWS AppSync will use the default port 80 for http endpoint and port 443 for
     * https endpoints.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The Http url endpoint. You can either specify the domain name or ip and port
     * combination and the url scheme must be http(s). If the port is not specified,
     * AWS AppSync will use the default port 80 for http endpoint and port 443 for
     * https endpoints.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The Http url endpoint. You can either specify the domain name or ip and port
     * combination and the url scheme must be http(s). If the port is not specified,
     * AWS AppSync will use the default port 80 for http endpoint and port 443 for
     * https endpoints.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The Http url endpoint. You can either specify the domain name or ip and port
     * combination and the url scheme must be http(s). If the port is not specified,
     * AWS AppSync will use the default port 80 for http endpoint and port 443 for
     * https endpoints.</p>
     */
    inline HttpDataSourceConfig& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The Http url endpoint. You can either specify the domain name or ip and port
     * combination and the url scheme must be http(s). If the port is not specified,
     * AWS AppSync will use the default port 80 for http endpoint and port 443 for
     * https endpoints.</p>
     */
    inline HttpDataSourceConfig& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The Http url endpoint. You can either specify the domain name or ip and port
     * combination and the url scheme must be http(s). If the port is not specified,
     * AWS AppSync will use the default port 80 for http endpoint and port 443 for
     * https endpoints.</p>
     */
    inline HttpDataSourceConfig& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}

  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
