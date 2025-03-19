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
    AWS_APIGATEWAYV2_API JWTConfiguration() = default;
    AWS_APIGATEWAYV2_API JWTConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API JWTConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the intended recipients of the JWT. A valid JWT must provide an aud
     * that matches at least one entry in this list. See <a
     * href="https://tools.ietf.org/html/rfc7519#section-4.1.3">RFC 7519</a>. Supported
     * only for HTTP APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAudience() const { return m_audience; }
    inline bool AudienceHasBeenSet() const { return m_audienceHasBeenSet; }
    template<typename AudienceT = Aws::Vector<Aws::String>>
    void SetAudience(AudienceT&& value) { m_audienceHasBeenSet = true; m_audience = std::forward<AudienceT>(value); }
    template<typename AudienceT = Aws::Vector<Aws::String>>
    JWTConfiguration& WithAudience(AudienceT&& value) { SetAudience(std::forward<AudienceT>(value)); return *this;}
    template<typename AudienceT = Aws::String>
    JWTConfiguration& AddAudience(AudienceT&& value) { m_audienceHasBeenSet = true; m_audience.emplace_back(std::forward<AudienceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The base domain of the identity provider that issues JSON Web Tokens. For
     * example, an Amazon Cognito user pool has the following format:
     * https://cognito-idp.<replaceable>{region}</replaceable>.amazonaws.com/<replaceable>{userPoolId}</replaceable>

     *        . Required for the JWT authorizer type. Supported only for HTTP APIs.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    JWTConfiguration& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_audience;
    bool m_audienceHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
