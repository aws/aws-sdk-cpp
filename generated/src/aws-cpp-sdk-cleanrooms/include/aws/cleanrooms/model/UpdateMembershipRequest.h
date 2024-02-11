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
    AWS_CLEANROOMS_API UpdateMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMembership"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the membership.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }

    /**
     * <p>The unique identifier of the membership.</p>
     */
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the membership.</p>
     */
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }

    /**
     * <p>The unique identifier of the membership.</p>
     */
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the membership.</p>
     */
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the membership.</p>
     */
    inline UpdateMembershipRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the membership.</p>
     */
    inline UpdateMembershipRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the membership.</p>
     */
    inline UpdateMembershipRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}


    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * membership.</p>
     */
    inline const MembershipQueryLogStatus& GetQueryLogStatus() const{ return m_queryLogStatus; }

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * membership.</p>
     */
    inline bool QueryLogStatusHasBeenSet() const { return m_queryLogStatusHasBeenSet; }

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * membership.</p>
     */
    inline void SetQueryLogStatus(const MembershipQueryLogStatus& value) { m_queryLogStatusHasBeenSet = true; m_queryLogStatus = value; }

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * membership.</p>
     */
    inline void SetQueryLogStatus(MembershipQueryLogStatus&& value) { m_queryLogStatusHasBeenSet = true; m_queryLogStatus = std::move(value); }

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * membership.</p>
     */
    inline UpdateMembershipRequest& WithQueryLogStatus(const MembershipQueryLogStatus& value) { SetQueryLogStatus(value); return *this;}

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * membership.</p>
     */
    inline UpdateMembershipRequest& WithQueryLogStatus(MembershipQueryLogStatus&& value) { SetQueryLogStatus(std::move(value)); return *this;}


    /**
     * <p>The default protected query result configuration as specified by the member
     * who can receive results.</p>
     */
    inline const MembershipProtectedQueryResultConfiguration& GetDefaultResultConfiguration() const{ return m_defaultResultConfiguration; }

    /**
     * <p>The default protected query result configuration as specified by the member
     * who can receive results.</p>
     */
    inline bool DefaultResultConfigurationHasBeenSet() const { return m_defaultResultConfigurationHasBeenSet; }

    /**
     * <p>The default protected query result configuration as specified by the member
     * who can receive results.</p>
     */
    inline void SetDefaultResultConfiguration(const MembershipProtectedQueryResultConfiguration& value) { m_defaultResultConfigurationHasBeenSet = true; m_defaultResultConfiguration = value; }

    /**
     * <p>The default protected query result configuration as specified by the member
     * who can receive results.</p>
     */
    inline void SetDefaultResultConfiguration(MembershipProtectedQueryResultConfiguration&& value) { m_defaultResultConfigurationHasBeenSet = true; m_defaultResultConfiguration = std::move(value); }

    /**
     * <p>The default protected query result configuration as specified by the member
     * who can receive results.</p>
     */
    inline UpdateMembershipRequest& WithDefaultResultConfiguration(const MembershipProtectedQueryResultConfiguration& value) { SetDefaultResultConfiguration(value); return *this;}

    /**
     * <p>The default protected query result configuration as specified by the member
     * who can receive results.</p>
     */
    inline UpdateMembershipRequest& WithDefaultResultConfiguration(MembershipProtectedQueryResultConfiguration&& value) { SetDefaultResultConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    MembershipQueryLogStatus m_queryLogStatus;
    bool m_queryLogStatusHasBeenSet = false;

    MembershipProtectedQueryResultConfiguration m_defaultResultConfiguration;
    bool m_defaultResultConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
