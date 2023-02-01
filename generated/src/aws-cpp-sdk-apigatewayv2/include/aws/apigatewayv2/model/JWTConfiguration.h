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
   * <p>Represents the configuration of a JWT authorizer. Required for the JWT
   * authorizer type. Supported only for HTTP APIs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/JWTConfiguration">AWS
   * API Reference</a></p>
   */
  class JWTConfiguration
  {
  public:
    AWS_APIGATEWAYV2_API JWTConfiguration();
    AWS_APIGATEWAYV2_API JWTConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API JWTConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the intended recipients of the JWT. A valid JWT must provide an aud
     * that matches at least one entry in this list. See <a
     * href="https://tools.ietf.org/html/rfc7519#section-4.1.3">RFC 7519</a>. Supported
     * only for HTTP APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAudience() const{ return m_audience; }

    /**
     * <p>A list of the intended recipients of the JWT. A valid JWT must provide an aud
     * that matches at least one entry in this list. See <a
     * href="https://tools.ietf.org/html/rfc7519#section-4.1.3">RFC 7519</a>. Supported
     * only for HTTP APIs.</p>
     */
    inline bool AudienceHasBeenSet() const { return m_audienceHasBeenSet; }

    /**
     * <p>A list of the intended recipients of the JWT. A valid JWT must provide an aud
     * that matches at least one entry in this list. See <a
     * href="https://tools.ietf.org/html/rfc7519#section-4.1.3">RFC 7519</a>. Supported
     * only for HTTP APIs.</p>
     */
    inline void SetAudience(const Aws::Vector<Aws::String>& value) { m_audienceHasBeenSet = true; m_audience = value; }

    /**
     * <p>A list of the intended recipients of the JWT. A valid JWT must provide an aud
     * that matches at least one entry in this list. See <a
     * href="https://tools.ietf.org/html/rfc7519#section-4.1.3">RFC 7519</a>. Supported
     * only for HTTP APIs.</p>
     */
    inline void SetAudience(Aws::Vector<Aws::String>&& value) { m_audienceHasBeenSet = true; m_audience = std::move(value); }

    /**
     * <p>A list of the intended recipients of the JWT. A valid JWT must provide an aud
     * that matches at least one entry in this list. See <a
     * href="https://tools.ietf.org/html/rfc7519#section-4.1.3">RFC 7519</a>. Supported
     * only for HTTP APIs.</p>
     */
    inline JWTConfiguration& WithAudience(const Aws::Vector<Aws::String>& value) { SetAudience(value); return *this;}

    /**
     * <p>A list of the intended recipients of the JWT. A valid JWT must provide an aud
     * that matches at least one entry in this list. See <a
     * href="https://tools.ietf.org/html/rfc7519#section-4.1.3">RFC 7519</a>. Supported
     * only for HTTP APIs.</p>
     */
    inline JWTConfiguration& WithAudience(Aws::Vector<Aws::String>&& value) { SetAudience(std::move(value)); return *this;}

    /**
     * <p>A list of the intended recipients of the JWT. A valid JWT must provide an aud
     * that matches at least one entry in this list. See <a
     * href="https://tools.ietf.org/html/rfc7519#section-4.1.3">RFC 7519</a>. Supported
     * only for HTTP APIs.</p>
     */
    inline JWTConfiguration& AddAudience(const Aws::String& value) { m_audienceHasBeenSet = true; m_audience.push_back(value); return *this; }

    /**
     * <p>A list of the intended recipients of the JWT. A valid JWT must provide an aud
     * that matches at least one entry in this list. See <a
     * href="https://tools.ietf.org/html/rfc7519#section-4.1.3">RFC 7519</a>. Supported
     * only for HTTP APIs.</p>
     */
    inline JWTConfiguration& AddAudience(Aws::String&& value) { m_audienceHasBeenSet = true; m_audience.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the intended recipients of the JWT. A valid JWT must provide an aud
     * that matches at least one entry in this list. See <a
     * href="https://tools.ietf.org/html/rfc7519#section-4.1.3">RFC 7519</a>. Supported
     * only for HTTP APIs.</p>
     */
    inline JWTConfiguration& AddAudience(const char* value) { m_audienceHasBeenSet = true; m_audience.push_back(value); return *this; }


    /**
     * <p>The base domain of the identity provider that issues JSON Web Tokens. For
     * example, an Amazon Cognito user pool has the following format:
     * https://cognito-idp.<replaceable>{region}</replaceable>.amazonaws.com/<replaceable>{userPoolId}</replaceable>

     *        . Required for the JWT authorizer type. Supported only for HTTP APIs.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }

    /**
     * <p>The base domain of the identity provider that issues JSON Web Tokens. For
     * example, an Amazon Cognito user pool has the following format:
     * https://cognito-idp.<replaceable>{region}</replaceable>.amazonaws.com/<replaceable>{userPoolId}</replaceable>

     *        . Required for the JWT authorizer type. Supported only for HTTP APIs.</p>
     */
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }

    /**
     * <p>The base domain of the identity provider that issues JSON Web Tokens. For
     * example, an Amazon Cognito user pool has the following format:
     * https://cognito-idp.<replaceable>{region}</replaceable>.amazonaws.com/<replaceable>{userPoolId}</replaceable>

     *        . Required for the JWT authorizer type. Supported only for HTTP APIs.</p>
     */
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p>The base domain of the identity provider that issues JSON Web Tokens. For
     * example, an Amazon Cognito user pool has the following format:
     * https://cognito-idp.<replaceable>{region}</replaceable>.amazonaws.com/<replaceable>{userPoolId}</replaceable>

     *        . Required for the JWT authorizer type. Supported only for HTTP APIs.</p>
     */
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }

    /**
     * <p>The base domain of the identity provider that issues JSON Web Tokens. For
     * example, an Amazon Cognito user pool has the following format:
     * https://cognito-idp.<replaceable>{region}</replaceable>.amazonaws.com/<replaceable>{userPoolId}</replaceable>

     *        . Required for the JWT authorizer type. Supported only for HTTP APIs.</p>
     */
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }

    /**
     * <p>The base domain of the identity provider that issues JSON Web Tokens. For
     * example, an Amazon Cognito user pool has the following format:
     * https://cognito-idp.<replaceable>{region}</replaceable>.amazonaws.com/<replaceable>{userPoolId}</replaceable>

     *        . Required for the JWT authorizer type. Supported only for HTTP APIs.</p>
     */
    inline JWTConfiguration& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}

    /**
     * <p>The base domain of the identity provider that issues JSON Web Tokens. For
     * example, an Amazon Cognito user pool has the following format:
     * https://cognito-idp.<replaceable>{region}</replaceable>.amazonaws.com/<replaceable>{userPoolId}</replaceable>

     *        . Required for the JWT authorizer type. Supported only for HTTP APIs.</p>
     */
    inline JWTConfiguration& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}

    /**
     * <p>The base domain of the identity provider that issues JSON Web Tokens. For
     * example, an Amazon Cognito user pool has the following format:
     * https://cognito-idp.<replaceable>{region}</replaceable>.amazonaws.com/<replaceable>{userPoolId}</replaceable>

     *        . Required for the JWT authorizer type. Supported only for HTTP APIs.</p>
     */
    inline JWTConfiguration& WithIssuer(const char* value) { SetIssuer(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_audience;
    bool m_audienceHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
