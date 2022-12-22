/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/AuthScheme.h>
#include <aws/rds/model/IAMAuthMode.h>
#include <aws/rds/model/ClientPasswordAuthType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Specifies the details of authentication used by a proxy to log in as a
   * specific database user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/UserAuthConfig">AWS
   * API Reference</a></p>
   */
  class UserAuthConfig
  {
  public:
    AWS_RDS_API UserAuthConfig();
    AWS_RDS_API UserAuthConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API UserAuthConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A user-specified description about the authentication used by a proxy to log
     * in as a specific database user.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A user-specified description about the authentication used by a proxy to log
     * in as a specific database user.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A user-specified description about the authentication used by a proxy to log
     * in as a specific database user.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-specified description about the authentication used by a proxy to log
     * in as a specific database user.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A user-specified description about the authentication used by a proxy to log
     * in as a specific database user.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A user-specified description about the authentication used by a proxy to log
     * in as a specific database user.</p>
     */
    inline UserAuthConfig& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A user-specified description about the authentication used by a proxy to log
     * in as a specific database user.</p>
     */
    inline UserAuthConfig& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A user-specified description about the authentication used by a proxy to log
     * in as a specific database user.</p>
     */
    inline UserAuthConfig& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the database user to which the proxy connects.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the database user to which the proxy connects.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name of the database user to which the proxy connects.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the database user to which the proxy connects.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the database user to which the proxy connects.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the database user to which the proxy connects.</p>
     */
    inline UserAuthConfig& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the database user to which the proxy connects.</p>
     */
    inline UserAuthConfig& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the database user to which the proxy connects.</p>
     */
    inline UserAuthConfig& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The type of authentication that the proxy uses for connections from the proxy
     * to the underlying database.</p>
     */
    inline const AuthScheme& GetAuthScheme() const{ return m_authScheme; }

    /**
     * <p>The type of authentication that the proxy uses for connections from the proxy
     * to the underlying database.</p>
     */
    inline bool AuthSchemeHasBeenSet() const { return m_authSchemeHasBeenSet; }

    /**
     * <p>The type of authentication that the proxy uses for connections from the proxy
     * to the underlying database.</p>
     */
    inline void SetAuthScheme(const AuthScheme& value) { m_authSchemeHasBeenSet = true; m_authScheme = value; }

    /**
     * <p>The type of authentication that the proxy uses for connections from the proxy
     * to the underlying database.</p>
     */
    inline void SetAuthScheme(AuthScheme&& value) { m_authSchemeHasBeenSet = true; m_authScheme = std::move(value); }

    /**
     * <p>The type of authentication that the proxy uses for connections from the proxy
     * to the underlying database.</p>
     */
    inline UserAuthConfig& WithAuthScheme(const AuthScheme& value) { SetAuthScheme(value); return *this;}

    /**
     * <p>The type of authentication that the proxy uses for connections from the proxy
     * to the underlying database.</p>
     */
    inline UserAuthConfig& WithAuthScheme(AuthScheme&& value) { SetAuthScheme(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) representing the secret that the proxy uses to
     * authenticate to the RDS DB instance or Aurora DB cluster. These secrets are
     * stored within Amazon Secrets Manager.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) representing the secret that the proxy uses to
     * authenticate to the RDS DB instance or Aurora DB cluster. These secrets are
     * stored within Amazon Secrets Manager.</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) representing the secret that the proxy uses to
     * authenticate to the RDS DB instance or Aurora DB cluster. These secrets are
     * stored within Amazon Secrets Manager.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) representing the secret that the proxy uses to
     * authenticate to the RDS DB instance or Aurora DB cluster. These secrets are
     * stored within Amazon Secrets Manager.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) representing the secret that the proxy uses to
     * authenticate to the RDS DB instance or Aurora DB cluster. These secrets are
     * stored within Amazon Secrets Manager.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) representing the secret that the proxy uses to
     * authenticate to the RDS DB instance or Aurora DB cluster. These secrets are
     * stored within Amazon Secrets Manager.</p>
     */
    inline UserAuthConfig& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) representing the secret that the proxy uses to
     * authenticate to the RDS DB instance or Aurora DB cluster. These secrets are
     * stored within Amazon Secrets Manager.</p>
     */
    inline UserAuthConfig& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) representing the secret that the proxy uses to
     * authenticate to the RDS DB instance or Aurora DB cluster. These secrets are
     * stored within Amazon Secrets Manager.</p>
     */
    inline UserAuthConfig& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>Whether to require or disallow Amazon Web Services Identity and Access
     * Management (IAM) authentication for connections to the proxy. The
     * <code>ENABLED</code> value is valid only for proxies with RDS for Microsoft SQL
     * Server.</p>
     */
    inline const IAMAuthMode& GetIAMAuth() const{ return m_iAMAuth; }

    /**
     * <p>Whether to require or disallow Amazon Web Services Identity and Access
     * Management (IAM) authentication for connections to the proxy. The
     * <code>ENABLED</code> value is valid only for proxies with RDS for Microsoft SQL
     * Server.</p>
     */
    inline bool IAMAuthHasBeenSet() const { return m_iAMAuthHasBeenSet; }

    /**
     * <p>Whether to require or disallow Amazon Web Services Identity and Access
     * Management (IAM) authentication for connections to the proxy. The
     * <code>ENABLED</code> value is valid only for proxies with RDS for Microsoft SQL
     * Server.</p>
     */
    inline void SetIAMAuth(const IAMAuthMode& value) { m_iAMAuthHasBeenSet = true; m_iAMAuth = value; }

    /**
     * <p>Whether to require or disallow Amazon Web Services Identity and Access
     * Management (IAM) authentication for connections to the proxy. The
     * <code>ENABLED</code> value is valid only for proxies with RDS for Microsoft SQL
     * Server.</p>
     */
    inline void SetIAMAuth(IAMAuthMode&& value) { m_iAMAuthHasBeenSet = true; m_iAMAuth = std::move(value); }

    /**
     * <p>Whether to require or disallow Amazon Web Services Identity and Access
     * Management (IAM) authentication for connections to the proxy. The
     * <code>ENABLED</code> value is valid only for proxies with RDS for Microsoft SQL
     * Server.</p>
     */
    inline UserAuthConfig& WithIAMAuth(const IAMAuthMode& value) { SetIAMAuth(value); return *this;}

    /**
     * <p>Whether to require or disallow Amazon Web Services Identity and Access
     * Management (IAM) authentication for connections to the proxy. The
     * <code>ENABLED</code> value is valid only for proxies with RDS for Microsoft SQL
     * Server.</p>
     */
    inline UserAuthConfig& WithIAMAuth(IAMAuthMode&& value) { SetIAMAuth(std::move(value)); return *this;}


    /**
     * <p>The type of authentication the proxy uses for connections from clients.</p>
     */
    inline const ClientPasswordAuthType& GetClientPasswordAuthType() const{ return m_clientPasswordAuthType; }

    /**
     * <p>The type of authentication the proxy uses for connections from clients.</p>
     */
    inline bool ClientPasswordAuthTypeHasBeenSet() const { return m_clientPasswordAuthTypeHasBeenSet; }

    /**
     * <p>The type of authentication the proxy uses for connections from clients.</p>
     */
    inline void SetClientPasswordAuthType(const ClientPasswordAuthType& value) { m_clientPasswordAuthTypeHasBeenSet = true; m_clientPasswordAuthType = value; }

    /**
     * <p>The type of authentication the proxy uses for connections from clients.</p>
     */
    inline void SetClientPasswordAuthType(ClientPasswordAuthType&& value) { m_clientPasswordAuthTypeHasBeenSet = true; m_clientPasswordAuthType = std::move(value); }

    /**
     * <p>The type of authentication the proxy uses for connections from clients.</p>
     */
    inline UserAuthConfig& WithClientPasswordAuthType(const ClientPasswordAuthType& value) { SetClientPasswordAuthType(value); return *this;}

    /**
     * <p>The type of authentication the proxy uses for connections from clients.</p>
     */
    inline UserAuthConfig& WithClientPasswordAuthType(ClientPasswordAuthType&& value) { SetClientPasswordAuthType(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    AuthScheme m_authScheme;
    bool m_authSchemeHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    IAMAuthMode m_iAMAuth;
    bool m_iAMAuthHasBeenSet = false;

    ClientPasswordAuthType m_clientPasswordAuthType;
    bool m_clientPasswordAuthTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
