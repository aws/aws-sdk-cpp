/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/UserProfileType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class GetUserProfileRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API GetUserProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUserProfile"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline GetUserProfileRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline GetUserProfileRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>the ID of the Amazon DataZone domain the data portal of which you want to
     * get.</p>
     */
    inline GetUserProfileRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The type of the user profile.</p>
     */
    inline const UserProfileType& GetType() const{ return m_type; }

    /**
     * <p>The type of the user profile.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the user profile.</p>
     */
    inline void SetType(const UserProfileType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the user profile.</p>
     */
    inline void SetType(UserProfileType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the user profile.</p>
     */
    inline GetUserProfileRequest& WithType(const UserProfileType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the user profile.</p>
     */
    inline GetUserProfileRequest& WithType(UserProfileType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The identifier of the user for which you want to get the user profile.</p>
     */
    inline const Aws::String& GetUserIdentifier() const{ return m_userIdentifier; }

    /**
     * <p>The identifier of the user for which you want to get the user profile.</p>
     */
    inline bool UserIdentifierHasBeenSet() const { return m_userIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the user for which you want to get the user profile.</p>
     */
    inline void SetUserIdentifier(const Aws::String& value) { m_userIdentifierHasBeenSet = true; m_userIdentifier = value; }

    /**
     * <p>The identifier of the user for which you want to get the user profile.</p>
     */
    inline void SetUserIdentifier(Aws::String&& value) { m_userIdentifierHasBeenSet = true; m_userIdentifier = std::move(value); }

    /**
     * <p>The identifier of the user for which you want to get the user profile.</p>
     */
    inline void SetUserIdentifier(const char* value) { m_userIdentifierHasBeenSet = true; m_userIdentifier.assign(value); }

    /**
     * <p>The identifier of the user for which you want to get the user profile.</p>
     */
    inline GetUserProfileRequest& WithUserIdentifier(const Aws::String& value) { SetUserIdentifier(value); return *this;}

    /**
     * <p>The identifier of the user for which you want to get the user profile.</p>
     */
    inline GetUserProfileRequest& WithUserIdentifier(Aws::String&& value) { SetUserIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user for which you want to get the user profile.</p>
     */
    inline GetUserProfileRequest& WithUserIdentifier(const char* value) { SetUserIdentifier(value); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    UserProfileType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_userIdentifier;
    bool m_userIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
