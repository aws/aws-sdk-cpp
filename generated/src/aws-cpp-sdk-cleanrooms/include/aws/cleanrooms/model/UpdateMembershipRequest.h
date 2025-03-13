/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/MembershipQueryLogStatus.h>
#include <aws/cleanrooms/model/MembershipProtectedQueryResultConfiguration.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class UpdateMembershipRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API UpdateMembershipRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMembership"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the membership.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    UpdateMembershipRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * membership.</p>
     */
    inline MembershipQueryLogStatus GetQueryLogStatus() const { return m_queryLogStatus; }
    inline bool QueryLogStatusHasBeenSet() const { return m_queryLogStatusHasBeenSet; }
    inline void SetQueryLogStatus(MembershipQueryLogStatus value) { m_queryLogStatusHasBeenSet = true; m_queryLogStatus = value; }
    inline UpdateMembershipRequest& WithQueryLogStatus(MembershipQueryLogStatus value) { SetQueryLogStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default protected query result configuration as specified by the member
     * who can receive results.</p>
     */
    inline const MembershipProtectedQueryResultConfiguration& GetDefaultResultConfiguration() const { return m_defaultResultConfiguration; }
    inline bool DefaultResultConfigurationHasBeenSet() const { return m_defaultResultConfigurationHasBeenSet; }
    template<typename DefaultResultConfigurationT = MembershipProtectedQueryResultConfiguration>
    void SetDefaultResultConfiguration(DefaultResultConfigurationT&& value) { m_defaultResultConfigurationHasBeenSet = true; m_defaultResultConfiguration = std::forward<DefaultResultConfigurationT>(value); }
    template<typename DefaultResultConfigurationT = MembershipProtectedQueryResultConfiguration>
    UpdateMembershipRequest& WithDefaultResultConfiguration(DefaultResultConfigurationT&& value) { SetDefaultResultConfiguration(std::forward<DefaultResultConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    MembershipQueryLogStatus m_queryLogStatus{MembershipQueryLogStatus::NOT_SET};
    bool m_queryLogStatusHasBeenSet = false;

    MembershipProtectedQueryResultConfiguration m_defaultResultConfiguration;
    bool m_defaultResultConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
