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
    AWS_ECR_API AuthorizationData();
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
    inline const Aws::String& GetAuthorizationToken() const{ return m_authorizationToken; }
    inline bool AuthorizationTokenHasBeenSet() const { return m_authorizationTokenHasBeenSet; }
    inline void SetAuthorizationToken(const Aws::String& value) { m_authorizationTokenHasBeenSet = true; m_authorizationToken = value; }
    inline void SetAuthorizationToken(Aws::String&& value) { m_authorizationTokenHasBeenSet = true; m_authorizationToken = std::move(value); }
    inline void SetAuthorizationToken(const char* value) { m_authorizationTokenHasBeenSet = true; m_authorizationToken.assign(value); }
    inline AuthorizationData& WithAuthorizationToken(const Aws::String& value) { SetAuthorizationToken(value); return *this;}
    inline AuthorizationData& WithAuthorizationToken(Aws::String&& value) { SetAuthorizationToken(std::move(value)); return *this;}
    inline AuthorizationData& WithAuthorizationToken(const char* value) { SetAuthorizationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix time in seconds and milliseconds when the authorization token
     * expires. Authorization tokens are valid for 12 hours.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAtHasBeenSet = true; m_expiresAt = value; }
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::move(value); }
    inline AuthorizationData& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}
    inline AuthorizationData& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry URL to use for this authorization token in a <code>docker
     * login</code> command. The Amazon ECR registry URL format is
     * <code>https://aws_account_id.dkr.ecr.region.amazonaws.com</code>. For example,
     * <code>https://012345678910.dkr.ecr.us-east-1.amazonaws.com</code>.. </p>
     */
    inline const Aws::String& GetProxyEndpoint() const{ return m_proxyEndpoint; }
    inline bool ProxyEndpointHasBeenSet() const { return m_proxyEndpointHasBeenSet; }
    inline void SetProxyEndpoint(const Aws::String& value) { m_proxyEndpointHasBeenSet = true; m_proxyEndpoint = value; }
    inline void SetProxyEndpoint(Aws::String&& value) { m_proxyEndpointHasBeenSet = true; m_proxyEndpoint = std::move(value); }
    inline void SetProxyEndpoint(const char* value) { m_proxyEndpointHasBeenSet = true; m_proxyEndpoint.assign(value); }
    inline AuthorizationData& WithProxyEndpoint(const Aws::String& value) { SetProxyEndpoint(value); return *this;}
    inline AuthorizationData& WithProxyEndpoint(Aws::String&& value) { SetProxyEndpoint(std::move(value)); return *this;}
    inline AuthorizationData& WithProxyEndpoint(const char* value) { SetProxyEndpoint(value); return *this;}
    ///@}
  private:

    Aws::String m_authorizationToken;
    bool m_authorizationTokenHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt;
    bool m_expiresAtHasBeenSet = false;

    Aws::String m_proxyEndpoint;
    bool m_proxyEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
