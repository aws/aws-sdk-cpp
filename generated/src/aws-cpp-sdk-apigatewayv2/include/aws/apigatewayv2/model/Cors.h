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


    ///@{
    /**
     * <p>Specifies whether credentials are included in the CORS request. Supported
     * only for HTTP APIs.</p>
     */
    inline bool GetAllowCredentials() const{ return m_allowCredentials; }
    inline bool AllowCredentialsHasBeenSet() const { return m_allowCredentialsHasBeenSet; }
    inline void SetAllowCredentials(bool value) { m_allowCredentialsHasBeenSet = true; m_allowCredentials = value; }
    inline Cors& WithAllowCredentials(bool value) { SetAllowCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a collection of allowed headers. Supported only for HTTP APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowHeaders() const{ return m_allowHeaders; }
    inline bool AllowHeadersHasBeenSet() const { return m_allowHeadersHasBeenSet; }
    inline void SetAllowHeaders(const Aws::Vector<Aws::String>& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders = value; }
    inline void SetAllowHeaders(Aws::Vector<Aws::String>&& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders = std::move(value); }
    inline Cors& WithAllowHeaders(const Aws::Vector<Aws::String>& value) { SetAllowHeaders(value); return *this;}
    inline Cors& WithAllowHeaders(Aws::Vector<Aws::String>&& value) { SetAllowHeaders(std::move(value)); return *this;}
    inline Cors& AddAllowHeaders(const Aws::String& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders.push_back(value); return *this; }
    inline Cors& AddAllowHeaders(Aws::String&& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders.push_back(std::move(value)); return *this; }
    inline Cors& AddAllowHeaders(const char* value) { m_allowHeadersHasBeenSet = true; m_allowHeaders.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a collection of allowed HTTP methods. Supported only for HTTP
     * APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowMethods() const{ return m_allowMethods; }
    inline bool AllowMethodsHasBeenSet() const { return m_allowMethodsHasBeenSet; }
    inline void SetAllowMethods(const Aws::Vector<Aws::String>& value) { m_allowMethodsHasBeenSet = true; m_allowMethods = value; }
    inline void SetAllowMethods(Aws::Vector<Aws::String>&& value) { m_allowMethodsHasBeenSet = true; m_allowMethods = std::move(value); }
    inline Cors& WithAllowMethods(const Aws::Vector<Aws::String>& value) { SetAllowMethods(value); return *this;}
    inline Cors& WithAllowMethods(Aws::Vector<Aws::String>&& value) { SetAllowMethods(std::move(value)); return *this;}
    inline Cors& AddAllowMethods(const Aws::String& value) { m_allowMethodsHasBeenSet = true; m_allowMethods.push_back(value); return *this; }
    inline Cors& AddAllowMethods(Aws::String&& value) { m_allowMethodsHasBeenSet = true; m_allowMethods.push_back(std::move(value)); return *this; }
    inline Cors& AddAllowMethods(const char* value) { m_allowMethodsHasBeenSet = true; m_allowMethods.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a collection of allowed origins. Supported only for HTTP APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowOrigins() const{ return m_allowOrigins; }
    inline bool AllowOriginsHasBeenSet() const { return m_allowOriginsHasBeenSet; }
    inline void SetAllowOrigins(const Aws::Vector<Aws::String>& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins = value; }
    inline void SetAllowOrigins(Aws::Vector<Aws::String>&& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins = std::move(value); }
    inline Cors& WithAllowOrigins(const Aws::Vector<Aws::String>& value) { SetAllowOrigins(value); return *this;}
    inline Cors& WithAllowOrigins(Aws::Vector<Aws::String>&& value) { SetAllowOrigins(std::move(value)); return *this;}
    inline Cors& AddAllowOrigins(const Aws::String& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins.push_back(value); return *this; }
    inline Cors& AddAllowOrigins(Aws::String&& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins.push_back(std::move(value)); return *this; }
    inline Cors& AddAllowOrigins(const char* value) { m_allowOriginsHasBeenSet = true; m_allowOrigins.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a collection of exposed headers. Supported only for HTTP APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExposeHeaders() const{ return m_exposeHeaders; }
    inline bool ExposeHeadersHasBeenSet() const { return m_exposeHeadersHasBeenSet; }
    inline void SetExposeHeaders(const Aws::Vector<Aws::String>& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders = value; }
    inline void SetExposeHeaders(Aws::Vector<Aws::String>&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders = std::move(value); }
    inline Cors& WithExposeHeaders(const Aws::Vector<Aws::String>& value) { SetExposeHeaders(value); return *this;}
    inline Cors& WithExposeHeaders(Aws::Vector<Aws::String>&& value) { SetExposeHeaders(std::move(value)); return *this;}
    inline Cors& AddExposeHeaders(const Aws::String& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.push_back(value); return *this; }
    inline Cors& AddExposeHeaders(Aws::String&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.push_back(std::move(value)); return *this; }
    inline Cors& AddExposeHeaders(const char* value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of seconds that the browser should cache preflight request
     * results. Supported only for HTTP APIs.</p>
     */
    inline int GetMaxAge() const{ return m_maxAge; }
    inline bool MaxAgeHasBeenSet() const { return m_maxAgeHasBeenSet; }
    inline void SetMaxAge(int value) { m_maxAgeHasBeenSet = true; m_maxAge = value; }
    inline Cors& WithMaxAge(int value) { SetMaxAge(value); return *this;}
    ///@}
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
