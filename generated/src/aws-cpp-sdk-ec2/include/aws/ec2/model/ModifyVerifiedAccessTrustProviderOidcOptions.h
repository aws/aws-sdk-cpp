/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>OpenID Connect options for an <code>oidc</code>-type, user-identity based
   * trust provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVerifiedAccessTrustProviderOidcOptions">AWS
   * API Reference</a></p>
   */
  class ModifyVerifiedAccessTrustProviderOidcOptions
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessTrustProviderOidcOptions();
    AWS_EC2_API ModifyVerifiedAccessTrustProviderOidcOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ModifyVerifiedAccessTrustProviderOidcOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>OpenID Connect (OIDC) scopes are used by an application during authentication
     * to authorize access to a user's details. Each scope returns a specific set of
     * user attributes.</p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }

    /**
     * <p>OpenID Connect (OIDC) scopes are used by an application during authentication
     * to authorize access to a user's details. Each scope returns a specific set of
     * user attributes.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>OpenID Connect (OIDC) scopes are used by an application during authentication
     * to authorize access to a user's details. Each scope returns a specific set of
     * user attributes.</p>
     */
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>OpenID Connect (OIDC) scopes are used by an application during authentication
     * to authorize access to a user's details. Each scope returns a specific set of
     * user attributes.</p>
     */
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>OpenID Connect (OIDC) scopes are used by an application during authentication
     * to authorize access to a user's details. Each scope returns a specific set of
     * user attributes.</p>
     */
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }

    /**
     * <p>OpenID Connect (OIDC) scopes are used by an application during authentication
     * to authorize access to a user's details. Each scope returns a specific set of
     * user attributes.</p>
     */
    inline ModifyVerifiedAccessTrustProviderOidcOptions& WithScope(const Aws::String& value) { SetScope(value); return *this;}

    /**
     * <p>OpenID Connect (OIDC) scopes are used by an application during authentication
     * to authorize access to a user's details. Each scope returns a specific set of
     * user attributes.</p>
     */
    inline ModifyVerifiedAccessTrustProviderOidcOptions& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}

    /**
     * <p>OpenID Connect (OIDC) scopes are used by an application during authentication
     * to authorize access to a user's details. Each scope returns a specific set of
     * user attributes.</p>
     */
    inline ModifyVerifiedAccessTrustProviderOidcOptions& WithScope(const char* value) { SetScope(value); return *this;}

  private:

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
