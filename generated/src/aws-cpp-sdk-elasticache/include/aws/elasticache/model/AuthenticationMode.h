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
    AWS_ELASTICACHE_API AuthenticationMode() = default;
    AWS_ELASTICACHE_API AuthenticationMode(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API AuthenticationMode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies the authentication type. Possible options are IAM authentication,
     * password and no password.</p>
     */
    inline InputAuthenticationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InputAuthenticationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AuthenticationMode& WithType(InputAuthenticationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the passwords to use for authentication if <code>Type</code> is set
     * to <code>password</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPasswords() const { return m_passwords; }
    inline bool PasswordsHasBeenSet() const { return m_passwordsHasBeenSet; }
    template<typename PasswordsT = Aws::Vector<Aws::String>>
    void SetPasswords(PasswordsT&& value) { m_passwordsHasBeenSet = true; m_passwords = std::forward<PasswordsT>(value); }
    template<typename PasswordsT = Aws::Vector<Aws::String>>
    AuthenticationMode& WithPasswords(PasswordsT&& value) { SetPasswords(std::forward<PasswordsT>(value)); return *this;}
    template<typename PasswordsT = Aws::String>
    AuthenticationMode& AddPasswords(PasswordsT&& value) { m_passwordsHasBeenSet = true; m_passwords.emplace_back(std::forward<PasswordsT>(value)); return *this; }
    ///@}
  private:

    InputAuthenticationType m_type{InputAuthenticationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_passwords;
    bool m_passwordsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
