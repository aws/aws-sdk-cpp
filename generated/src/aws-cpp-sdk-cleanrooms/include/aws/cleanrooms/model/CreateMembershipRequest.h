/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/MembershipQueryLogStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cleanrooms/model/MembershipProtectedQueryResultConfiguration.h>
#include <aws/cleanrooms/model/MembershipPaymentConfiguration.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class CreateMembershipRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API CreateMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMembership"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = value; }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::move(value); }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier.assign(value); }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline CreateMembershipRequest& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline CreateMembershipRequest& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline CreateMembershipRequest& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}


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
    inline CreateMembershipRequest& WithQueryLogStatus(const MembershipQueryLogStatus& value) { SetQueryLogStatus(value); return *this;}

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * membership.</p>
     */
    inline CreateMembershipRequest& WithQueryLogStatus(MembershipQueryLogStatus&& value) { SetQueryLogStatus(std::move(value)); return *this;}


    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateMembershipRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateMembershipRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateMembershipRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateMembershipRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateMembershipRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateMembershipRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateMembershipRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateMembershipRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateMembershipRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline CreateMembershipRequest& WithDefaultResultConfiguration(const MembershipProtectedQueryResultConfiguration& value) { SetDefaultResultConfiguration(value); return *this;}

    /**
     * <p>The default protected query result configuration as specified by the member
     * who can receive results.</p>
     */
    inline CreateMembershipRequest& WithDefaultResultConfiguration(MembershipProtectedQueryResultConfiguration&& value) { SetDefaultResultConfiguration(std::move(value)); return *this;}


    /**
     * <p>The payment responsibilities accepted by the collaboration member.</p> <p>Not
     * required if the collaboration member has the member ability to run queries. </p>
     * <p>Required if the collaboration member doesn't have the member ability to run
     * queries but is configured as a payer by the collaboration creator. </p>
     */
    inline const MembershipPaymentConfiguration& GetPaymentConfiguration() const{ return m_paymentConfiguration; }

    /**
     * <p>The payment responsibilities accepted by the collaboration member.</p> <p>Not
     * required if the collaboration member has the member ability to run queries. </p>
     * <p>Required if the collaboration member doesn't have the member ability to run
     * queries but is configured as a payer by the collaboration creator. </p>
     */
    inline bool PaymentConfigurationHasBeenSet() const { return m_paymentConfigurationHasBeenSet; }

    /**
     * <p>The payment responsibilities accepted by the collaboration member.</p> <p>Not
     * required if the collaboration member has the member ability to run queries. </p>
     * <p>Required if the collaboration member doesn't have the member ability to run
     * queries but is configured as a payer by the collaboration creator. </p>
     */
    inline void SetPaymentConfiguration(const MembershipPaymentConfiguration& value) { m_paymentConfigurationHasBeenSet = true; m_paymentConfiguration = value; }

    /**
     * <p>The payment responsibilities accepted by the collaboration member.</p> <p>Not
     * required if the collaboration member has the member ability to run queries. </p>
     * <p>Required if the collaboration member doesn't have the member ability to run
     * queries but is configured as a payer by the collaboration creator. </p>
     */
    inline void SetPaymentConfiguration(MembershipPaymentConfiguration&& value) { m_paymentConfigurationHasBeenSet = true; m_paymentConfiguration = std::move(value); }

    /**
     * <p>The payment responsibilities accepted by the collaboration member.</p> <p>Not
     * required if the collaboration member has the member ability to run queries. </p>
     * <p>Required if the collaboration member doesn't have the member ability to run
     * queries but is configured as a payer by the collaboration creator. </p>
     */
    inline CreateMembershipRequest& WithPaymentConfiguration(const MembershipPaymentConfiguration& value) { SetPaymentConfiguration(value); return *this;}

    /**
     * <p>The payment responsibilities accepted by the collaboration member.</p> <p>Not
     * required if the collaboration member has the member ability to run queries. </p>
     * <p>Required if the collaboration member doesn't have the member ability to run
     * queries but is configured as a payer by the collaboration creator. </p>
     */
    inline CreateMembershipRequest& WithPaymentConfiguration(MembershipPaymentConfiguration&& value) { SetPaymentConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    MembershipQueryLogStatus m_queryLogStatus;
    bool m_queryLogStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    MembershipProtectedQueryResultConfiguration m_defaultResultConfiguration;
    bool m_defaultResultConfigurationHasBeenSet = false;

    MembershipPaymentConfiguration m_paymentConfiguration;
    bool m_paymentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
