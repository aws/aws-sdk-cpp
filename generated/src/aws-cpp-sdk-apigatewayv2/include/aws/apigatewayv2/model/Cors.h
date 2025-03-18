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
    AWS_APIGATEWAYV2_API Cors() = default;
    AWS_APIGATEWAYV2_API Cors(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Cors& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether credentials are included in the CORS request. Supported
     * only for HTTP APIs.</p>
     */
    inline bool GetAllowCredentials() const { return m_allowCredentials; }
    inline bool AllowCredentialsHasBeenSet() const { return m_allowCredentialsHasBeenSet; }
    inline void SetAllowCredentials(bool value) { m_allowCredentialsHasBeenSet = true; m_allowCredentials = value; }
    inline Cors& WithAllowCredentials(bool value) { SetAllowCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a collection of allowed headers. Supported only for HTTP APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowHeaders() const { return m_allowHeaders; }
    inline bool AllowHeadersHasBeenSet() const { return m_allowHeadersHasBeenSet; }
    template<typename AllowHeadersT = Aws::Vector<Aws::String>>
    void SetAllowHeaders(AllowHeadersT&& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders = std::forward<AllowHeadersT>(value); }
    template<typename AllowHeadersT = Aws::Vector<Aws::String>>
    Cors& WithAllowHeaders(AllowHeadersT&& value) { SetAllowHeaders(std::forward<AllowHeadersT>(value)); return *this;}
    template<typename AllowHeadersT = Aws::String>
    Cors& AddAllowHeaders(AllowHeadersT&& value) { m_allowHeadersHasBeenSet = true; m_allowHeaders.emplace_back(std::forward<AllowHeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a collection of allowed HTTP methods. Supported only for HTTP
     * APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowMethods() const { return m_allowMethods; }
    inline bool AllowMethodsHasBeenSet() const { return m_allowMethodsHasBeenSet; }
    template<typename AllowMethodsT = Aws::Vector<Aws::String>>
    void SetAllowMethods(AllowMethodsT&& value) { m_allowMethodsHasBeenSet = true; m_allowMethods = std::forward<AllowMethodsT>(value); }
    template<typename AllowMethodsT = Aws::Vector<Aws::String>>
    Cors& WithAllowMethods(AllowMethodsT&& value) { SetAllowMethods(std::forward<AllowMethodsT>(value)); return *this;}
    template<typename AllowMethodsT = Aws::String>
    Cors& AddAllowMethods(AllowMethodsT&& value) { m_allowMethodsHasBeenSet = true; m_allowMethods.emplace_back(std::forward<AllowMethodsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a collection of allowed origins. Supported only for HTTP APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowOrigins() const { return m_allowOrigins; }
    inline bool AllowOriginsHasBeenSet() const { return m_allowOriginsHasBeenSet; }
    template<typename AllowOriginsT = Aws::Vector<Aws::String>>
    void SetAllowOrigins(AllowOriginsT&& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins = std::forward<AllowOriginsT>(value); }
    template<typename AllowOriginsT = Aws::Vector<Aws::String>>
    Cors& WithAllowOrigins(AllowOriginsT&& value) { SetAllowOrigins(std::forward<AllowOriginsT>(value)); return *this;}
    template<typename AllowOriginsT = Aws::String>
    Cors& AddAllowOrigins(AllowOriginsT&& value) { m_allowOriginsHasBeenSet = true; m_allowOrigins.emplace_back(std::forward<AllowOriginsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a collection of exposed headers. Supported only for HTTP APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExposeHeaders() const { return m_exposeHeaders; }
    inline bool ExposeHeadersHasBeenSet() const { return m_exposeHeadersHasBeenSet; }
    template<typename ExposeHeadersT = Aws::Vector<Aws::String>>
    void SetExposeHeaders(ExposeHeadersT&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders = std::forward<ExposeHeadersT>(value); }
    template<typename ExposeHeadersT = Aws::Vector<Aws::String>>
    Cors& WithExposeHeaders(ExposeHeadersT&& value) { SetExposeHeaders(std::forward<ExposeHeadersT>(value)); return *this;}
    template<typename ExposeHeadersT = Aws::String>
    Cors& AddExposeHeaders(ExposeHeadersT&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.emplace_back(std::forward<ExposeHeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of seconds that the browser should cache preflight request
     * results. Supported only for HTTP APIs.</p>
     */
    inline int GetMaxAge() const { return m_maxAge; }
    inline bool MaxAgeHasBeenSet() const { return m_maxAgeHasBeenSet; }
    inline void SetMaxAge(int value) { m_maxAgeHasBeenSet = true; m_maxAge = value; }
    inline Cors& WithMaxAge(int value) { SetMaxAge(value); return *this;}
    ///@}
  private:

    bool m_allowCredentials{false};
    bool m_allowCredentialsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowHeaders;
    bool m_allowHeadersHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowMethods;
    bool m_allowMethodsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowOrigins;
    bool m_allowOriginsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exposeHeaders;
    bool m_exposeHeadersHasBeenSet = false;

    int m_maxAge{0};
    bool m_maxAgeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
