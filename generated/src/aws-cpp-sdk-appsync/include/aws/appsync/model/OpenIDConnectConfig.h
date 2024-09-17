/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes an OpenID Connect (OIDC) configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/OpenIDConnectConfig">AWS
   * API Reference</a></p>
   */
  class OpenIDConnectConfig
  {
  public:
    AWS_APPSYNC_API OpenIDConnectConfig();
    AWS_APPSYNC_API OpenIDConnectConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API OpenIDConnectConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The issuer for the OIDC configuration. The issuer returned by discovery must
     * exactly match the value of <code>iss</code> in the ID token.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }
    inline OpenIDConnectConfig& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}
    inline OpenIDConnectConfig& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}
    inline OpenIDConnectConfig& WithIssuer(const char* value) { SetIssuer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client identifier of the relying party at the OpenID identity provider.
     * This identifier is typically obtained when the relying party is registered with
     * the OpenID identity provider. You can specify a regular expression so that
     * AppSync can validate against multiple client identifiers at a time.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline OpenIDConnectConfig& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline OpenIDConnectConfig& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline OpenIDConnectConfig& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of milliseconds that a token is valid after it's issued to a
     * user.</p>
     */
    inline long long GetIatTTL() const{ return m_iatTTL; }
    inline bool IatTTLHasBeenSet() const { return m_iatTTLHasBeenSet; }
    inline void SetIatTTL(long long value) { m_iatTTLHasBeenSet = true; m_iatTTL = value; }
    inline OpenIDConnectConfig& WithIatTTL(long long value) { SetIatTTL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of milliseconds that a token is valid after being
     * authenticated.</p>
     */
    inline long long GetAuthTTL() const{ return m_authTTL; }
    inline bool AuthTTLHasBeenSet() const { return m_authTTLHasBeenSet; }
    inline void SetAuthTTL(long long value) { m_authTTLHasBeenSet = true; m_authTTL = value; }
    inline OpenIDConnectConfig& WithAuthTTL(long long value) { SetAuthTTL(value); return *this;}
    ///@}
  private:

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    long long m_iatTTL;
    bool m_iatTTLHasBeenSet = false;

    long long m_authTTL;
    bool m_authTTLHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
