/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/UserType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateUserProfileRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateUserProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserProfile"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateUserProfileRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateUserProfileRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateUserProfileRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which a user profile is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a user profile is
     * created.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a user profile is
     * created.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a user profile is
     * created.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a user profile is
     * created.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a user profile is
     * created.</p>
     */
    inline CreateUserProfileRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a user profile is
     * created.</p>
     */
    inline CreateUserProfileRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a user profile is
     * created.</p>
     */
    inline CreateUserProfileRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The identifier of the user for which the user profile is created.</p>
     */
    inline const Aws::String& GetUserIdentifier() const{ return m_userIdentifier; }

    /**
     * <p>The identifier of the user for which the user profile is created.</p>
     */
    inline bool UserIdentifierHasBeenSet() const { return m_userIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the user for which the user profile is created.</p>
     */
    inline void SetUserIdentifier(const Aws::String& value) { m_userIdentifierHasBeenSet = true; m_userIdentifier = value; }

    /**
     * <p>The identifier of the user for which the user profile is created.</p>
     */
    inline void SetUserIdentifier(Aws::String&& value) { m_userIdentifierHasBeenSet = true; m_userIdentifier = std::move(value); }

    /**
     * <p>The identifier of the user for which the user profile is created.</p>
     */
    inline void SetUserIdentifier(const char* value) { m_userIdentifierHasBeenSet = true; m_userIdentifier.assign(value); }

    /**
     * <p>The identifier of the user for which the user profile is created.</p>
     */
    inline CreateUserProfileRequest& WithUserIdentifier(const Aws::String& value) { SetUserIdentifier(value); return *this;}

    /**
     * <p>The identifier of the user for which the user profile is created.</p>
     */
    inline CreateUserProfileRequest& WithUserIdentifier(Aws::String&& value) { SetUserIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user for which the user profile is created.</p>
     */
    inline CreateUserProfileRequest& WithUserIdentifier(const char* value) { SetUserIdentifier(value); return *this;}


    /**
     * <p>The user type of the user for which the user profile is created.</p>
     */
    inline const UserType& GetUserType() const{ return m_userType; }

    /**
     * <p>The user type of the user for which the user profile is created.</p>
     */
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }

    /**
     * <p>The user type of the user for which the user profile is created.</p>
     */
    inline void SetUserType(const UserType& value) { m_userTypeHasBeenSet = true; m_userType = value; }

    /**
     * <p>The user type of the user for which the user profile is created.</p>
     */
    inline void SetUserType(UserType&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }

    /**
     * <p>The user type of the user for which the user profile is created.</p>
     */
    inline CreateUserProfileRequest& WithUserType(const UserType& value) { SetUserType(value); return *this;}

    /**
     * <p>The user type of the user for which the user profile is created.</p>
     */
    inline CreateUserProfileRequest& WithUserType(UserType&& value) { SetUserType(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_userIdentifier;
    bool m_userIdentifierHasBeenSet = false;

    UserType m_userType;
    bool m_userTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
