/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticache/model/InputAuthenticationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Specifies the authentication mode to use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/AuthenticationMode">AWS
   * API Reference</a></p>
   */
  class AuthenticationMode
  {
  public:
    AWS_ELASTICACHE_API AuthenticationMode();
    AWS_ELASTICACHE_API AuthenticationMode(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API AuthenticationMode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies the authentication type. Possible options are IAM authentication,
     * password and no password.</p>
     */
    inline const InputAuthenticationType& GetType() const{ return m_type; }

    /**
     * <p>Specifies the authentication type. Possible options are IAM authentication,
     * password and no password.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies the authentication type. Possible options are IAM authentication,
     * password and no password.</p>
     */
    inline void SetType(const InputAuthenticationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the authentication type. Possible options are IAM authentication,
     * password and no password.</p>
     */
    inline void SetType(InputAuthenticationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies the authentication type. Possible options are IAM authentication,
     * password and no password.</p>
     */
    inline AuthenticationMode& WithType(const InputAuthenticationType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the authentication type. Possible options are IAM authentication,
     * password and no password.</p>
     */
    inline AuthenticationMode& WithType(InputAuthenticationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Specifies the passwords to use for authentication if <code>Type</code> is set
     * to <code>password</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPasswords() const{ return m_passwords; }

    /**
     * <p>Specifies the passwords to use for authentication if <code>Type</code> is set
     * to <code>password</code>.</p>
     */
    inline bool PasswordsHasBeenSet() const { return m_passwordsHasBeenSet; }

    /**
     * <p>Specifies the passwords to use for authentication if <code>Type</code> is set
     * to <code>password</code>.</p>
     */
    inline void SetPasswords(const Aws::Vector<Aws::String>& value) { m_passwordsHasBeenSet = true; m_passwords = value; }

    /**
     * <p>Specifies the passwords to use for authentication if <code>Type</code> is set
     * to <code>password</code>.</p>
     */
    inline void SetPasswords(Aws::Vector<Aws::String>&& value) { m_passwordsHasBeenSet = true; m_passwords = std::move(value); }

    /**
     * <p>Specifies the passwords to use for authentication if <code>Type</code> is set
     * to <code>password</code>.</p>
     */
    inline AuthenticationMode& WithPasswords(const Aws::Vector<Aws::String>& value) { SetPasswords(value); return *this;}

    /**
     * <p>Specifies the passwords to use for authentication if <code>Type</code> is set
     * to <code>password</code>.</p>
     */
    inline AuthenticationMode& WithPasswords(Aws::Vector<Aws::String>&& value) { SetPasswords(std::move(value)); return *this;}

    /**
     * <p>Specifies the passwords to use for authentication if <code>Type</code> is set
     * to <code>password</code>.</p>
     */
    inline AuthenticationMode& AddPasswords(const Aws::String& value) { m_passwordsHasBeenSet = true; m_passwords.push_back(value); return *this; }

    /**
     * <p>Specifies the passwords to use for authentication if <code>Type</code> is set
     * to <code>password</code>.</p>
     */
    inline AuthenticationMode& AddPasswords(Aws::String&& value) { m_passwordsHasBeenSet = true; m_passwords.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the passwords to use for authentication if <code>Type</code> is set
     * to <code>password</code>.</p>
     */
    inline AuthenticationMode& AddPasswords(const char* value) { m_passwordsHasBeenSet = true; m_passwords.push_back(value); return *this; }

  private:

    InputAuthenticationType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_passwords;
    bool m_passwordsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
