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
#include <aws/iam/model/UpdateAccountPasswordPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

UpdateAccountPasswordPolicyRequest::UpdateAccountPasswordPolicyRequest() : 
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
    m_maxPasswordAge(0),
    m_maxPasswordAgeHasBeenSet(false),
    m_passwordReusePrevention(0),
    m_passwordReusePreventionHasBeenSet(false),
    m_hardExpiry(false),
    m_hardExpiryHasBeenSet(false)
{
}

Aws::String UpdateAccountPasswordPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateAccountPasswordPolicy&";
  if(m_minimumPasswordLengthHasBeenSet)
  {
    ss << "MinimumPasswordLength=" << m_minimumPasswordLength << "&";
  }

  if(m_requireSymbolsHasBeenSet)
  {
    ss << "RequireSymbols=" << m_requireSymbols << "&";
  }

  if(m_requireNumbersHasBeenSet)
  {
    ss << "RequireNumbers=" << m_requireNumbers << "&";
  }

  if(m_requireUppercaseCharactersHasBeenSet)
  {
    ss << "RequireUppercaseCharacters=" << m_requireUppercaseCharacters << "&";
  }

  if(m_requireLowercaseCharactersHasBeenSet)
  {
    ss << "RequireLowercaseCharacters=" << m_requireLowercaseCharacters << "&";
  }

  if(m_allowUsersToChangePasswordHasBeenSet)
  {
    ss << "AllowUsersToChangePassword=" << m_allowUsersToChangePassword << "&";
  }

  if(m_maxPasswordAgeHasBeenSet)
  {
    ss << "MaxPasswordAge=" << m_maxPasswordAge << "&";
  }

  if(m_passwordReusePreventionHasBeenSet)
  {
    ss << "PasswordReusePrevention=" << m_passwordReusePrevention << "&";
  }

  if(m_hardExpiryHasBeenSet)
  {
    ss << "HardExpiry=" << m_hardExpiry << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

