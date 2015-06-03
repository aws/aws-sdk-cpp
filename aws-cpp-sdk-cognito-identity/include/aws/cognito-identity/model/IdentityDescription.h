/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentity
{
namespace Model
{
  /*
    A description of the identity.
  */
  class AWS_COGNITOIDENTITY_API IdentityDescription
  {
  public:
    IdentityDescription();
    IdentityDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    IdentityDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     A unique identifier in the format REGION:GUID.
    */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }
    /*
     A unique identifier in the format REGION:GUID.
    */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /*
     A unique identifier in the format REGION:GUID.
    */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /*
     A unique identifier in the format REGION:GUID.
    */
    inline IdentityDescription&  WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /*
     A unique identifier in the format REGION:GUID.
    */
    inline IdentityDescription& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /*
     A set of optional name-value pairs that map provider names to provider tokens.
    */
    inline const Aws::Vector<Aws::String>& GetLogins() const{ return m_logins; }
    /*
     A set of optional name-value pairs that map provider names to provider tokens.
    */
    inline void SetLogins(const Aws::Vector<Aws::String>& value) { m_loginsHasBeenSet = true; m_logins = value; }

    /*
     A set of optional name-value pairs that map provider names to provider tokens.
    */
    inline IdentityDescription&  WithLogins(const Aws::Vector<Aws::String>& value) { SetLogins(value); return *this;}

    /*
     A set of optional name-value pairs that map provider names to provider tokens.
    */
    inline IdentityDescription& AddLogins(const Aws::String& value) { m_loginsHasBeenSet = true; m_logins.push_back(value); return *this; }

    /*
     A set of optional name-value pairs that map provider names to provider tokens.
    */
    inline IdentityDescription& AddLogins(const char* value) { m_loginsHasBeenSet = true; m_logins.push_back(value); return *this; }

    /*
     <p>Date on which the identity was created.</p>
    */
    inline double GetCreationDate() const{ return m_creationDate; }
    /*
     <p>Date on which the identity was created.</p>
    */
    inline void SetCreationDate(double value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /*
     <p>Date on which the identity was created.</p>
    */
    inline IdentityDescription&  WithCreationDate(double value) { SetCreationDate(value); return *this;}

    /*
     <p>Date on which the identity was last modified.</p>
    */
    inline double GetLastModifiedDate() const{ return m_lastModifiedDate; }
    /*
     <p>Date on which the identity was last modified.</p>
    */
    inline void SetLastModifiedDate(double value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /*
     <p>Date on which the identity was last modified.</p>
    */
    inline IdentityDescription&  WithLastModifiedDate(double value) { SetLastModifiedDate(value); return *this;}

  private:
    Aws::String m_identityId;
    bool m_identityIdHasBeenSet;
    Aws::Vector<Aws::String> m_logins;
    bool m_loginsHasBeenSet;
    double m_creationDate;
    bool m_creationDateHasBeenSet;
    double m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
