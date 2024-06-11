/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/UserProfileStatus.h>
#include <aws/datazone/model/UserProfileType.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class UpdateUserProfileRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateUserProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserProfile"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which a user profile is
     * updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline UpdateUserProfileRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline UpdateUserProfileRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline UpdateUserProfileRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the user profile that are to be updated.</p>
     */
    inline const UserProfileStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const UserProfileStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(UserProfileStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateUserProfileRequest& WithStatus(const UserProfileStatus& value) { SetStatus(value); return *this;}
    inline UpdateUserProfileRequest& WithStatus(UserProfileStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the user profile that are to be updated.</p>
     */
    inline const UserProfileType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const UserProfileType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(UserProfileType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline UpdateUserProfileRequest& WithType(const UserProfileType& value) { SetType(value); return *this;}
    inline UpdateUserProfileRequest& WithType(UserProfileType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user whose user profile is to be updated.</p>
     */
    inline const Aws::String& GetUserIdentifier() const{ return m_userIdentifier; }
    inline bool UserIdentifierHasBeenSet() const { return m_userIdentifierHasBeenSet; }
    inline void SetUserIdentifier(const Aws::String& value) { m_userIdentifierHasBeenSet = true; m_userIdentifier = value; }
    inline void SetUserIdentifier(Aws::String&& value) { m_userIdentifierHasBeenSet = true; m_userIdentifier = std::move(value); }
    inline void SetUserIdentifier(const char* value) { m_userIdentifierHasBeenSet = true; m_userIdentifier.assign(value); }
    inline UpdateUserProfileRequest& WithUserIdentifier(const Aws::String& value) { SetUserIdentifier(value); return *this;}
    inline UpdateUserProfileRequest& WithUserIdentifier(Aws::String&& value) { SetUserIdentifier(std::move(value)); return *this;}
    inline UpdateUserProfileRequest& WithUserIdentifier(const char* value) { SetUserIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    UserProfileStatus m_status;
    bool m_statusHasBeenSet = false;

    UserProfileType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_userIdentifier;
    bool m_userIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
