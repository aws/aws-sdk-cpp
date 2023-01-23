/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>A description of the identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/IdentityDescription">AWS
   * API Reference</a></p>
   */
  class IdentityDescription
  {
  public:
    AWS_COGNITOIDENTITY_API IdentityDescription();
    AWS_COGNITOIDENTITY_API IdentityDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITY_API IdentityDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline IdentityDescription& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline IdentityDescription& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline IdentityDescription& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}


    /**
     * <p>The provider names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogins() const{ return m_logins; }

    /**
     * <p>The provider names.</p>
     */
    inline bool LoginsHasBeenSet() const { return m_loginsHasBeenSet; }

    /**
     * <p>The provider names.</p>
     */
    inline void SetLogins(const Aws::Vector<Aws::String>& value) { m_loginsHasBeenSet = true; m_logins = value; }

    /**
     * <p>The provider names.</p>
     */
    inline void SetLogins(Aws::Vector<Aws::String>&& value) { m_loginsHasBeenSet = true; m_logins = std::move(value); }

    /**
     * <p>The provider names.</p>
     */
    inline IdentityDescription& WithLogins(const Aws::Vector<Aws::String>& value) { SetLogins(value); return *this;}

    /**
     * <p>The provider names.</p>
     */
    inline IdentityDescription& WithLogins(Aws::Vector<Aws::String>&& value) { SetLogins(std::move(value)); return *this;}

    /**
     * <p>The provider names.</p>
     */
    inline IdentityDescription& AddLogins(const Aws::String& value) { m_loginsHasBeenSet = true; m_logins.push_back(value); return *this; }

    /**
     * <p>The provider names.</p>
     */
    inline IdentityDescription& AddLogins(Aws::String&& value) { m_loginsHasBeenSet = true; m_logins.push_back(std::move(value)); return *this; }

    /**
     * <p>The provider names.</p>
     */
    inline IdentityDescription& AddLogins(const char* value) { m_loginsHasBeenSet = true; m_logins.push_back(value); return *this; }


    /**
     * <p>Date on which the identity was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>Date on which the identity was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>Date on which the identity was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>Date on which the identity was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>Date on which the identity was created.</p>
     */
    inline IdentityDescription& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>Date on which the identity was created.</p>
     */
    inline IdentityDescription& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline IdentityDescription& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>Date on which the identity was last modified.</p>
     */
    inline IdentityDescription& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_logins;
    bool m_loginsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
