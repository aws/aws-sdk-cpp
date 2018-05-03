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
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes an Open Id Connect configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/OpenIDConnectConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPSYNC_API OpenIDConnectConfig
  {
  public:
    OpenIDConnectConfig();
    OpenIDConnectConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    OpenIDConnectConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The issuer for the open id connect configuration. The issuer returned by
     * discovery MUST exactly match the value of iss in the ID Token.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }

    /**
     * <p>The issuer for the open id connect configuration. The issuer returned by
     * discovery MUST exactly match the value of iss in the ID Token.</p>
     */
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p>The issuer for the open id connect configuration. The issuer returned by
     * discovery MUST exactly match the value of iss in the ID Token.</p>
     */
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }

    /**
     * <p>The issuer for the open id connect configuration. The issuer returned by
     * discovery MUST exactly match the value of iss in the ID Token.</p>
     */
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }

    /**
     * <p>The issuer for the open id connect configuration. The issuer returned by
     * discovery MUST exactly match the value of iss in the ID Token.</p>
     */
    inline OpenIDConnectConfig& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}

    /**
     * <p>The issuer for the open id connect configuration. The issuer returned by
     * discovery MUST exactly match the value of iss in the ID Token.</p>
     */
    inline OpenIDConnectConfig& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}

    /**
     * <p>The issuer for the open id connect configuration. The issuer returned by
     * discovery MUST exactly match the value of iss in the ID Token.</p>
     */
    inline OpenIDConnectConfig& WithIssuer(const char* value) { SetIssuer(value); return *this;}


    /**
     * <p>The client identifier of the Relying party at the OpenID Provider. This
     * identifier is typically obtained when the Relying party is registered with the
     * OpenID Provider. You can specify a regular expression so the AWS AppSync can
     * validate against multiple client identifiers at a time</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The client identifier of the Relying party at the OpenID Provider. This
     * identifier is typically obtained when the Relying party is registered with the
     * OpenID Provider. You can specify a regular expression so the AWS AppSync can
     * validate against multiple client identifiers at a time</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The client identifier of the Relying party at the OpenID Provider. This
     * identifier is typically obtained when the Relying party is registered with the
     * OpenID Provider. You can specify a regular expression so the AWS AppSync can
     * validate against multiple client identifiers at a time</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The client identifier of the Relying party at the OpenID Provider. This
     * identifier is typically obtained when the Relying party is registered with the
     * OpenID Provider. You can specify a regular expression so the AWS AppSync can
     * validate against multiple client identifiers at a time</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The client identifier of the Relying party at the OpenID Provider. This
     * identifier is typically obtained when the Relying party is registered with the
     * OpenID Provider. You can specify a regular expression so the AWS AppSync can
     * validate against multiple client identifiers at a time</p>
     */
    inline OpenIDConnectConfig& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The client identifier of the Relying party at the OpenID Provider. This
     * identifier is typically obtained when the Relying party is registered with the
     * OpenID Provider. You can specify a regular expression so the AWS AppSync can
     * validate against multiple client identifiers at a time</p>
     */
    inline OpenIDConnectConfig& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The client identifier of the Relying party at the OpenID Provider. This
     * identifier is typically obtained when the Relying party is registered with the
     * OpenID Provider. You can specify a regular expression so the AWS AppSync can
     * validate against multiple client identifiers at a time</p>
     */
    inline OpenIDConnectConfig& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The number of milliseconds a token is valid after being issued to a user.</p>
     */
    inline long long GetIatTTL() const{ return m_iatTTL; }

    /**
     * <p>The number of milliseconds a token is valid after being issued to a user.</p>
     */
    inline void SetIatTTL(long long value) { m_iatTTLHasBeenSet = true; m_iatTTL = value; }

    /**
     * <p>The number of milliseconds a token is valid after being issued to a user.</p>
     */
    inline OpenIDConnectConfig& WithIatTTL(long long value) { SetIatTTL(value); return *this;}


    /**
     * <p>The number of milliseconds a token is valid after being authenticated.</p>
     */
    inline long long GetAuthTTL() const{ return m_authTTL; }

    /**
     * <p>The number of milliseconds a token is valid after being authenticated.</p>
     */
    inline void SetAuthTTL(long long value) { m_authTTLHasBeenSet = true; m_authTTL = value; }

    /**
     * <p>The number of milliseconds a token is valid after being authenticated.</p>
     */
    inline OpenIDConnectConfig& WithAuthTTL(long long value) { SetAuthTTL(value); return *this;}

  private:

    Aws::String m_issuer;
    bool m_issuerHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    long long m_iatTTL;
    bool m_iatTTLHasBeenSet;

    long long m_authTTL;
    bool m_authTTLHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
