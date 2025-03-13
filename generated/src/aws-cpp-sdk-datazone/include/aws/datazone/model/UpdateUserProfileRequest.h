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
    AWS_DATAZONE_API UpdateUserProfileRequest() = default;

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
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    UpdateUserProfileRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the user profile that are to be updated.</p>
     */
    inline UserProfileStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(UserProfileStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateUserProfileRequest& WithStatus(UserProfileStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the user profile that are to be updated.</p>
     */
    inline UserProfileType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(UserProfileType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UpdateUserProfileRequest& WithType(UserProfileType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user whose user profile is to be updated.</p>
     */
    inline const Aws::String& GetUserIdentifier() const { return m_userIdentifier; }
    inline bool UserIdentifierHasBeenSet() const { return m_userIdentifierHasBeenSet; }
    template<typename UserIdentifierT = Aws::String>
    void SetUserIdentifier(UserIdentifierT&& value) { m_userIdentifierHasBeenSet = true; m_userIdentifier = std::forward<UserIdentifierT>(value); }
    template<typename UserIdentifierT = Aws::String>
    UpdateUserProfileRequest& WithUserIdentifier(UserIdentifierT&& value) { SetUserIdentifier(std::forward<UserIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    UserProfileStatus m_status{UserProfileStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    UserProfileType m_type{UserProfileType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_userIdentifier;
    bool m_userIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
