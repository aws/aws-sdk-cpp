/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>An object representing authorization data for an Amazon ECR
   * registry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/AuthorizationData">AWS
   * API Reference</a></p>
   */
  class AuthorizationData
  {
  public:
    AWS_ECR_API AuthorizationData() = default;
    AWS_ECR_API AuthorizationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API AuthorizationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A base64-encoded string that contains authorization data for the specified
     * Amazon ECR registry. When the string is decoded, it is presented in the format
     * <code>user:password</code> for private registry authentication using
     * <code>docker login</code>.</p>
     */
    inline const Aws::String& GetAuthorizationToken() const { return m_authorizationToken; }
    inline bool AuthorizationTokenHasBeenSet() const { return m_authorizationTokenHasBeenSet; }
    template<typename AuthorizationTokenT = Aws::String>
    void SetAuthorizationToken(AuthorizationTokenT&& value) { m_authorizationTokenHasBeenSet = true; m_authorizationToken = std::forward<AuthorizationTokenT>(value); }
    template<typename AuthorizationTokenT = Aws::String>
    AuthorizationData& WithAuthorizationToken(AuthorizationTokenT&& value) { SetAuthorizationToken(std::forward<AuthorizationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix time in seconds and milliseconds when the authorization token
     * expires. Authorization tokens are valid for 12 hours.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    void SetExpiresAt(ExpiresAtT&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::forward<ExpiresAtT>(value); }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    AuthorizationData& WithExpiresAt(ExpiresAtT&& value) { SetExpiresAt(std::forward<ExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry URL to use for this authorization token in a <code>docker
     * login</code> command. The Amazon ECR registry URL format is
     * <code>https://aws_account_id.dkr.ecr.region.amazonaws.com</code>. For example,
     * <code>https://012345678910.dkr.ecr.us-east-1.amazonaws.com</code>.. </p>
     */
    inline const Aws::String& GetProxyEndpoint() const { return m_proxyEndpoint; }
    inline bool ProxyEndpointHasBeenSet() const { return m_proxyEndpointHasBeenSet; }
    template<typename ProxyEndpointT = Aws::String>
    void SetProxyEndpoint(ProxyEndpointT&& value) { m_proxyEndpointHasBeenSet = true; m_proxyEndpoint = std::forward<ProxyEndpointT>(value); }
    template<typename ProxyEndpointT = Aws::String>
    AuthorizationData& WithProxyEndpoint(ProxyEndpointT&& value) { SetProxyEndpoint(std::forward<ProxyEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizationToken;
    bool m_authorizationTokenHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt{};
    bool m_expiresAtHasBeenSet = false;

    Aws::String m_proxyEndpoint;
    bool m_proxyEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
