/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Represents a CORS configuration. Supported only for HTTP APIs. See <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-cors.html">Configuring
   * CORS</a> for more information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/Cors">AWS
   * API Reference</a></p>
   */
  class Cors
  {
  public:
    AWS_APIGATEWAYV2_API Cors();
    AWS_APIGATEWAYV2_API Cors(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Cors& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether credentials are included in the CORS request. Supported
     * only for HTTP APIs.</p>
     */
    inline bool GetAllowCredentials() const{ return m_allowCredentials; }

    /**
     * <p>Specifies whether credentials are included in the CORS request. Supported
     * only for HTTP APIs.</p>
     */
    inline bool AllowCredentialsHasBeenSet() const { return m_allowCredentialsHasBeenSet; }

    /**
     * <p>Specifies whether credentials are included in the CORS request. Supported
     * only for HTTP APIs.</p>
     */
    inline void SetAllowCredentials(bool value) { m_allowCredentialsHasBeenSet = true; m_allowCredentials = value; }

    /**
     * <p>Specifies whether credentials are included in the CORS request. Supported
     * only for HTTP APIs.</p>
     */
    inline Cors& WithAllowCredentials(bool value) { SetAllowCredentials(value); return *this;}


    /**
     * <p>Represents a collection of allowed headers. Supported only for HTTP APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowHeaders() const{ return m_allowHeaders; }

    /**
     * <p>Represents a collection of allowed headers. Supported only for HTTP APIs.</p>
     */
    inline bool AllowHeadersHasBeenSet() const { return m_allowHeadersHasBeenSet; }

    /**
     * <p>Represents a collection of allowed headers. Supported only for HTTP APIs.</p>
     */
    inline void SetAllowHeaders(const Aws::Vector<Aws::String>& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders = value; }

    /**
     * <p>Represents a collection of allowed headers. Supported only for HTTP APIs.</p>
     */
    inline void SetAllowHeaders(Aws::Vector<Aws::String>&& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders = std::move(value); }

    /**
     * <p>Represents a collection of allowed headers. Supported only for HTTP APIs.</p>
     */
    inline Cors& WithAllowHeaders(const Aws::Vector<Aws::String>& value) { SetAllowHeaders(value); return *this;}

    /**
     * <p>Represents a collection of allowed headers. Supported only for HTTP APIs.</p>
     */
    inline Cors& WithAllowHeaders(Aws::Vector<Aws::String>&& value) { SetAllowHeaders(std::move(value)); return *this;}

    /**
     * <p>Represents a collection of allowed headers. Supported only for HTTP APIs.</p>
     */
    inline Cors& AddAllowHeaders(const Aws::String& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders.push_back(value); return *this; }

    /**
     * <p>Represents a collection of allowed headers. Supported only for HTTP APIs.</p>
     */
    inline Cors& AddAllowHeaders(Aws::String&& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders.push_back(std::move(value)); return *this; }

    /**
     * <p>Represents a collection of allowed headers. Supported only for HTTP APIs.</p>
     */
    inline Cors& AddAllowHeaders(const char* value) { m_allowHeadersHasBeenSet = true; m_allowHeaders.push_back(value); return *this; }


    /**
     * <p>Represents a collection of allowed HTTP methods. Supported only for HTTP
     * APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowMethods() const{ return m_allowMethods; }

    /**
     * <p>Represents a collection of allowed HTTP methods. Supported only for HTTP
     * APIs.</p>
     */
    inline bool AllowMethodsHasBeenSet() const { return m_allowMethodsHasBeenSet; }

    /**
     * <p>Represents a collection of allowed HTTP methods. Supported only for HTTP
     * APIs.</p>
     */
    inline void SetAllowMethods(const Aws::Vector<Aws::String>& value) { m_allowMethodsHasBeenSet = true; m_allowMethods = value; }

    /**
     * <p>Represents a collection of allowed HTTP methods. Supported only for HTTP
     * APIs.</p>
     */
    inline void SetAllowMethods(Aws::Vector<Aws::String>&& value) { m_allowMethodsHasBeenSet = true; m_allowMethods = std::move(value); }

    /**
     * <p>Represents a collection of allowed HTTP methods. Supported only for HTTP
     * APIs.</p>
     */
    inline Cors& WithAllowMethods(const Aws::Vector<Aws::String>& value) { SetAllowMethods(value); return *this;}

    /**
     * <p>Represents a collection of allowed HTTP methods. Supported only for HTTP
     * APIs.</p>
     */
    inline Cors& WithAllowMethods(Aws::Vector<Aws::String>&& value) { SetAllowMethods(std::move(value)); return *this;}

    /**
     * <p>Represents a collection of allowed HTTP methods. Supported only for HTTP
     * APIs.</p>
     */
    inline Cors& AddAllowMethods(const Aws::String& value) { m_allowMethodsHasBeenSet = true; m_allowMethods.push_back(value); return *this; }

    /**
     * <p>Represents a collection of allowed HTTP methods. Supported only for HTTP
     * APIs.</p>
     */
    inline Cors& AddAllowMethods(Aws::String&& value) { m_allowMethodsHasBeenSet = true; m_allowMethods.push_back(std::move(value)); return *this; }

    /**
     * <p>Represents a collection of allowed HTTP methods. Supported only for HTTP
     * APIs.</p>
     */
    inline Cors& AddAllowMethods(const char* value) { m_allowMethodsHasBeenSet = true; m_allowMethods.push_back(value); return *this; }


    /**
     * <p>Represents a collection of allowed origins. Supported only for HTTP APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowOrigins() const{ return m_allowOrigins; }

    /**
     * <p>Represents a collection of allowed origins. Supported only for HTTP APIs.</p>
     */
    inline bool AllowOriginsHasBeenSet() const { return m_allowOriginsHasBeenSet; }

    /**
     * <p>Represents a collection of allowed origins. Supported only for HTTP APIs.</p>
     */
    inline void SetAllowOrigins(const Aws::Vector<Aws::String>& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins = value; }

    /**
     * <p>Represents a collection of allowed origins. Supported only for HTTP APIs.</p>
     */
    inline void SetAllowOrigins(Aws::Vector<Aws::String>&& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins = std::move(value); }

    /**
     * <p>Represents a collection of allowed origins. Supported only for HTTP APIs.</p>
     */
    inline Cors& WithAllowOrigins(const Aws::Vector<Aws::String>& value) { SetAllowOrigins(value); return *this;}

    /**
     * <p>Represents a collection of allowed origins. Supported only for HTTP APIs.</p>
     */
    inline Cors& WithAllowOrigins(Aws::Vector<Aws::String>&& value) { SetAllowOrigins(std::move(value)); return *this;}

    /**
     * <p>Represents a collection of allowed origins. Supported only for HTTP APIs.</p>
     */
    inline Cors& AddAllowOrigins(const Aws::String& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins.push_back(value); return *this; }

    /**
     * <p>Represents a collection of allowed origins. Supported only for HTTP APIs.</p>
     */
    inline Cors& AddAllowOrigins(Aws::String&& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins.push_back(std::move(value)); return *this; }

    /**
     * <p>Represents a collection of allowed origins. Supported only for HTTP APIs.</p>
     */
    inline Cors& AddAllowOrigins(const char* value) { m_allowOriginsHasBeenSet = true; m_allowOrigins.push_back(value); return *this; }


    /**
     * <p>Represents a collection of exposed headers. Supported only for HTTP APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExposeHeaders() const{ return m_exposeHeaders; }

    /**
     * <p>Represents a collection of exposed headers. Supported only for HTTP APIs.</p>
     */
    inline bool ExposeHeadersHasBeenSet() const { return m_exposeHeadersHasBeenSet; }

    /**
     * <p>Represents a collection of exposed headers. Supported only for HTTP APIs.</p>
     */
    inline void SetExposeHeaders(const Aws::Vector<Aws::String>& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders = value; }

    /**
     * <p>Represents a collection of exposed headers. Supported only for HTTP APIs.</p>
     */
    inline void SetExposeHeaders(Aws::Vector<Aws::String>&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders = std::move(value); }

    /**
     * <p>Represents a collection of exposed headers. Supported only for HTTP APIs.</p>
     */
    inline Cors& WithExposeHeaders(const Aws::Vector<Aws::String>& value) { SetExposeHeaders(value); return *this;}

    /**
     * <p>Represents a collection of exposed headers. Supported only for HTTP APIs.</p>
     */
    inline Cors& WithExposeHeaders(Aws::Vector<Aws::String>&& value) { SetExposeHeaders(std::move(value)); return *this;}

    /**
     * <p>Represents a collection of exposed headers. Supported only for HTTP APIs.</p>
     */
    inline Cors& AddExposeHeaders(const Aws::String& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.push_back(value); return *this; }

    /**
     * <p>Represents a collection of exposed headers. Supported only for HTTP APIs.</p>
     */
    inline Cors& AddExposeHeaders(Aws::String&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.push_back(std::move(value)); return *this; }

    /**
     * <p>Represents a collection of exposed headers. Supported only for HTTP APIs.</p>
     */
    inline Cors& AddExposeHeaders(const char* value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.push_back(value); return *this; }


    /**
     * <p>The number of seconds that the browser should cache preflight request
     * results. Supported only for HTTP APIs.</p>
     */
    inline int GetMaxAge() const{ return m_maxAge; }

    /**
     * <p>The number of seconds that the browser should cache preflight request
     * results. Supported only for HTTP APIs.</p>
     */
    inline bool MaxAgeHasBeenSet() const { return m_maxAgeHasBeenSet; }

    /**
     * <p>The number of seconds that the browser should cache preflight request
     * results. Supported only for HTTP APIs.</p>
     */
    inline void SetMaxAge(int value) { m_maxAgeHasBeenSet = true; m_maxAge = value; }

    /**
     * <p>The number of seconds that the browser should cache preflight request
     * results. Supported only for HTTP APIs.</p>
     */
    inline Cors& WithMaxAge(int value) { SetMaxAge(value); return *this;}

  private:

    bool m_allowCredentials;
    bool m_allowCredentialsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowHeaders;
    bool m_allowHeadersHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowMethods;
    bool m_allowMethodsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowOrigins;
    bool m_allowOriginsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exposeHeaders;
    bool m_exposeHeadersHasBeenSet = false;

    int m_maxAge;
    bool m_maxAgeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
