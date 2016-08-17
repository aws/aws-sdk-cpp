/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/PasswordPolicy.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace IAM
{
namespace Model
{

PasswordPolicy::PasswordPolicy() : 
    m_minimumPasswordLength(0),
    m_minimumPasswordLengthHasBeenSet(false),
    m_requireSymbols(false),
    m_requireSymbolsHasBeenSet(false),
    m_requireNumbers(false),
    m_requireNumbersHasBeenSet(false),
    m_requireUppercaseCharacters(false),
    m_requireUppercaseCharactersHasBeenSet(false),
    m_requireLowercaseCharacters(false),
    m_requireLowercaseCharactersHasBeenSet(false),
    m_allowUsersToChangePassword(false),
    m_allowUsersToChangePasswordHasBeenSet(false),
    m_expirePasswords(false),
    m_expirePasswordsHasBeenSet(false),
    m_maxPasswordAge(0),
    m_maxPasswordAgeHasBeenSet(false),
    m_passwordReusePrevention(0),
    m_passwordReusePreventionHasBeenSet(false),
    m_hardExpiry(false),
    m_hardExpiryHasBeenSet(false)
{
}

PasswordPolicy::PasswordPolicy(const XmlNode& xmlNode) : 
    m_minimumPasswordLength(0),
    m_minimumPasswordLengthHasBeenSet(false),
    m_requireSymbols(false),
    m_requireSymbolsHasBeenSet(false),
    m_requireNumbers(false),
    m_requireNumbersHasBeenSet(false),
    m_requireUppercaseCharacters(false),
    m_requireUppercaseCharactersHasBeenSet(false),
    m_requireLowercaseCharacters(false),
    m_requireLowercaseCharactersHasBeenSet(false),
    m_allowUsersToChangePassword(false),
    m_allowUsersToChangePasswordHasBeenSet(false),
    m_expirePasswords(false),
    m_expirePasswordsHasBeenSet(false),
    m_maxPasswordAge(0),
    m_maxPasswordAgeHasBeenSet(false),
    m_passwordReusePrevention(0),
    m_passwordReusePreventionHasBeenSet(false),
    m_hardExpiry(false),
    m_hardExpiryHasBeenSet(false)
{
  *this = xmlNode;
}

PasswordPolicy& PasswordPolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode minimumPasswordLengthNode = resultNode.FirstChild("MinimumPasswordLength");
    if(!minimumPasswordLengthNode.IsNull())
    {
      m_minimumPasswordLength = StringUtils::ConvertToInt32(StringUtils::Trim(minimumPasswordLengthNode.GetText().c_str()).c_str());
      m_minimumPasswordLengthHasBeenSet = true;
    }
    XmlNode requireSymbolsNode = resultNode.FirstChild("RequireSymbols");
    if(!requireSymbolsNode.IsNull())
    {
      m_requireSymbols = StringUtils::ConvertToBool(StringUtils::Trim(requireSymbolsNode.GetText().c_str()).c_str());
      m_requireSymbolsHasBeenSet = true;
    }
    XmlNode requireNumbersNode = resultNode.FirstChild("RequireNumbers");
    if(!requireNumbersNode.IsNull())
    {
      m_requireNumbers = StringUtils::ConvertToBool(StringUtils::Trim(requireNumbersNode.GetText().c_str()).c_str());
      m_requireNumbersHasBeenSet = true;
    }
    XmlNode requireUppercaseCharactersNode = resultNode.FirstChild("RequireUppercaseCharacters");
    if(!requireUppercaseCharactersNode.IsNull())
    {
      m_requireUppercaseCharacters = StringUtils::ConvertToBool(StringUtils::Trim(requireUppercaseCharactersNode.GetText().c_str()).c_str());
      m_requireUppercaseCharactersHasBeenSet = true;
    }
    XmlNode requireLowercaseCharactersNode = resultNode.FirstChild("RequireLowercaseCharacters");
    if(!requireLowercaseCharactersNode.IsNull())
    {
      m_requireLowercaseCharacters = StringUtils::ConvertToBool(StringUtils::Trim(requireLowercaseCharactersNode.GetText().c_str()).c_str());
      m_requireLowercaseCharactersHasBeenSet = true;
    }
    XmlNode allowUsersToChangePasswordNode = resultNode.FirstChild("AllowUsersToChangePassword");
    if(!allowUsersToChangePasswordNode.IsNull())
    {
      m_allowUsersToChangePassword = StringUtils::ConvertToBool(StringUtils::Trim(allowUsersToChangePasswordNode.GetText().c_str()).c_str());
      m_allowUsersToChangePasswordHasBeenSet = true;
    }
    XmlNode expirePasswordsNode = resultNode.FirstChild("ExpirePasswords");
    if(!expirePasswordsNode.IsNull())
    {
      m_expirePasswords = StringUtils::ConvertToBool(StringUtils::Trim(expirePasswordsNode.GetText().c_str()).c_str());
      m_expirePasswordsHasBeenSet = true;
    }
    XmlNode maxPasswordAgeNode = resultNode.FirstChild("MaxPasswordAge");
    if(!maxPasswordAgeNode.IsNull())
    {
      m_maxPasswordAge = StringUtils::ConvertToInt32(StringUtils::Trim(maxPasswordAgeNode.GetText().c_str()).c_str());
      m_maxPasswordAgeHasBeenSet = true;
    }
    XmlNode passwordReusePreventionNode = resultNode.FirstChild("PasswordReusePrevention");
    if(!passwordReusePreventionNode.IsNull())
    {
      m_passwordReusePrevention = StringUtils::ConvertToInt32(StringUtils::Trim(passwordReusePreventionNode.GetText().c_str()).c_str());
      m_passwordReusePreventionHasBeenSet = true;
    }
    XmlNode hardExpiryNode = resultNode.FirstChild("HardExpiry");
    if(!hardExpiryNode.IsNull())
    {
      m_hardExpiry = StringUtils::ConvertToBool(StringUtils::Trim(hardExpiryNode.GetText().c_str()).c_str());
      m_hardExpiryHasBeenSet = true;
    }
  }

  return *this;
}

void PasswordPolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_minimumPasswordLengthHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinimumPasswordLength=" << m_minimumPasswordLength << "&";
  }

  if(m_requireSymbolsHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequireSymbols=" << m_requireSymbols << "&";
  }

  if(m_requireNumbersHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequireNumbers=" << m_requireNumbers << "&";
  }

  if(m_requireUppercaseCharactersHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequireUppercaseCharacters=" << m_requireUppercaseCharacters << "&";
  }

  if(m_requireLowercaseCharactersHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequireLowercaseCharacters=" << m_requireLowercaseCharacters << "&";
  }

  if(m_allowUsersToChangePasswordHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowUsersToChangePassword=" << m_allowUsersToChangePassword << "&";
  }

  if(m_expirePasswordsHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExpirePasswords=" << m_expirePasswords << "&";
  }

  if(m_maxPasswordAgeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxPasswordAge=" << m_maxPasswordAge << "&";
  }

  if(m_passwordReusePreventionHasBeenSet)
  {
      oStream << location << index << locationValue << ".PasswordReusePrevention=" << m_passwordReusePrevention << "&";
  }

  if(m_hardExpiryHasBeenSet)
  {
      oStream << location << index << locationValue << ".HardExpiry=" << m_hardExpiry << "&";
  }

}

void PasswordPolicy::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_minimumPasswordLengthHasBeenSet)
  {
      oStream << location << ".MinimumPasswordLength=" << m_minimumPasswordLength << "&";
  }
  if(m_requireSymbolsHasBeenSet)
  {
      oStream << location << ".RequireSymbols=" << m_requireSymbols << "&";
  }
  if(m_requireNumbersHasBeenSet)
  {
      oStream << location << ".RequireNumbers=" << m_requireNumbers << "&";
  }
  if(m_requireUppercaseCharactersHasBeenSet)
  {
      oStream << location << ".RequireUppercaseCharacters=" << m_requireUppercaseCharacters << "&";
  }
  if(m_requireLowercaseCharactersHasBeenSet)
  {
      oStream << location << ".RequireLowercaseCharacters=" << m_requireLowercaseCharacters << "&";
  }
  if(m_allowUsersToChangePasswordHasBeenSet)
  {
      oStream << location << ".AllowUsersToChangePassword=" << m_allowUsersToChangePassword << "&";
  }
  if(m_expirePasswordsHasBeenSet)
  {
      oStream << location << ".ExpirePasswords=" << m_expirePasswords << "&";
  }
  if(m_maxPasswordAgeHasBeenSet)
  {
      oStream << location << ".MaxPasswordAge=" << m_maxPasswordAge << "&";
  }
  if(m_passwordReusePreventionHasBeenSet)
  {
      oStream << location << ".PasswordReusePrevention=" << m_passwordReusePrevention << "&";
  }
  if(m_hardExpiryHasBeenSet)
  {
      oStream << location << ".HardExpiry=" << m_hardExpiry << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
