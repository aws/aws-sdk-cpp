/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>The <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/CORS">cross-origin
   * resource sharing (CORS)</a> settings for your Lambda function URL. Use CORS to
   * grant access to your function URL from any origin. You can also use CORS to
   * control access for specific HTTP headers and methods in requests to your
   * function URL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Cors">AWS API
   * Reference</a></p>
   */
  class Cors
  {
  public:
    AWS_LAMBDA_API Cors() = default;
    AWS_LAMBDA_API Cors(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Cors& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to allow cookies or other credentials in requests to your function
     * URL. The default is <code>false</code>.</p>
     */
    inline bool GetAllowCredentials() const { return m_allowCredentials; }
    inline bool AllowCredentialsHasBeenSet() const { return m_allowCredentialsHasBeenSet; }
    inline void SetAllowCredentials(bool value) { m_allowCredentialsHasBeenSet = true; m_allowCredentials = value; }
    inline Cors& WithAllowCredentials(bool value) { SetAllowCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP headers that origins can include in requests to your function URL.
     * For example: <code>Date</code>, <code>Keep-Alive</code>,
     * <code>X-Custom-Header</code>.</p>
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
     * <p>The HTTP methods that are allowed when calling your function URL. For
     * example: <code>GET</code>, <code>POST</code>, <code>DELETE</code>, or the
     * wildcard character (<code>*</code>).</p>
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
     * <p>The origins that can access your function URL. You can list any number of
     * specific origins, separated by a comma. For example:
     * <code>https://www.example.com</code>, <code>http://localhost:60905</code>.</p>
     * <p>Alternatively, you can grant access to all origins using the wildcard
     * character (<code>*</code>).</p>
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
     * <p>The HTTP headers in your function response that you want to expose to origins
     * that call your function URL. For example: <code>Date</code>,
     * <code>Keep-Alive</code>, <code>X-Custom-Header</code>.</p>
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
     * <p>The maximum amount of time, in seconds, that web browsers can cache results
     * of a preflight request. By default, this is set to <code>0</code>, which means
     * that the browser doesn't cache results.</p>
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
} // namespace Lambda
} // namespace Aws
