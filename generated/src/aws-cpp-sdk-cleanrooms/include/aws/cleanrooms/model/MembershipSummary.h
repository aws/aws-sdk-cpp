/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/MembershipStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/MembershipPaymentConfiguration.h>
#include <aws/cleanrooms/model/MemberAbility.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The membership object listed by the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MembershipSummary">AWS
   * API Reference</a></p>
   */
  class MembershipSummary
  {
  public:
    AWS_CLEANROOMS_API MembershipSummary();
    AWS_CLEANROOMS_API MembershipSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MembershipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline MembershipSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline MembershipSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline MembershipSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The unique ARN for the membership.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The unique ARN for the membership.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The unique ARN for the membership.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The unique ARN for the membership.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The unique ARN for the membership.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The unique ARN for the membership.</p>
     */
    inline MembershipSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The unique ARN for the membership.</p>
     */
    inline MembershipSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN for the membership.</p>
     */
    inline MembershipSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The unique ARN for the membership's associated collaboration.</p>
     */
    inline const Aws::String& GetCollaborationArn() const{ return m_collaborationArn; }

    /**
     * <p>The unique ARN for the membership's associated collaboration.</p>
     */
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }

    /**
     * <p>The unique ARN for the membership's associated collaboration.</p>
     */
    inline void SetCollaborationArn(const Aws::String& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = value; }

    /**
     * <p>The unique ARN for the membership's associated collaboration.</p>
     */
    inline void SetCollaborationArn(Aws::String&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::move(value); }

    /**
     * <p>The unique ARN for the membership's associated collaboration.</p>
     */
    inline void SetCollaborationArn(const char* value) { m_collaborationArnHasBeenSet = true; m_collaborationArn.assign(value); }

    /**
     * <p>The unique ARN for the membership's associated collaboration.</p>
     */
    inline MembershipSummary& WithCollaborationArn(const Aws::String& value) { SetCollaborationArn(value); return *this;}

    /**
     * <p>The unique ARN for the membership's associated collaboration.</p>
     */
    inline MembershipSummary& WithCollaborationArn(Aws::String&& value) { SetCollaborationArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN for the membership's associated collaboration.</p>
     */
    inline MembershipSummary& WithCollaborationArn(const char* value) { SetCollaborationArn(value); return *this;}


    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline MembershipSummary& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline MembershipSummary& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline MembershipSummary& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services principal that created the
     * collaboration. Currently only supports Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetCollaborationCreatorAccountId() const{ return m_collaborationCreatorAccountId; }

    /**
     * <p>The identifier of the Amazon Web Services principal that created the
     * collaboration. Currently only supports Amazon Web Services account ID.</p>
     */
    inline bool CollaborationCreatorAccountIdHasBeenSet() const { return m_collaborationCreatorAccountIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services principal that created the
     * collaboration. Currently only supports Amazon Web Services account ID.</p>
     */
    inline void SetCollaborationCreatorAccountId(const Aws::String& value) { m_collaborationCreatorAccountIdHasBeenSet = true; m_collaborationCreatorAccountId = value; }

    /**
     * <p>The identifier of the Amazon Web Services principal that created the
     * collaboration. Currently only supports Amazon Web Services account ID.</p>
     */
    inline void SetCollaborationCreatorAccountId(Aws::String&& value) { m_collaborationCreatorAccountIdHasBeenSet = true; m_collaborationCreatorAccountId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services principal that created the
     * collaboration. Currently only supports Amazon Web Services account ID.</p>
     */
    inline void SetCollaborationCreatorAccountId(const char* value) { m_collaborationCreatorAccountIdHasBeenSet = true; m_collaborationCreatorAccountId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services principal that created the
     * collaboration. Currently only supports Amazon Web Services account ID.</p>
     */
    inline MembershipSummary& WithCollaborationCreatorAccountId(const Aws::String& value) { SetCollaborationCreatorAccountId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services principal that created the
     * collaboration. Currently only supports Amazon Web Services account ID.</p>
     */
    inline MembershipSummary& WithCollaborationCreatorAccountId(Aws::String&& value) { SetCollaborationCreatorAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services principal that created the
     * collaboration. Currently only supports Amazon Web Services account ID.</p>
     */
    inline MembershipSummary& WithCollaborationCreatorAccountId(const char* value) { SetCollaborationCreatorAccountId(value); return *this;}


    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline const Aws::String& GetCollaborationCreatorDisplayName() const{ return m_collaborationCreatorDisplayName; }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline bool CollaborationCreatorDisplayNameHasBeenSet() const { return m_collaborationCreatorDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline void SetCollaborationCreatorDisplayName(const Aws::String& value) { m_collaborationCreatorDisplayNameHasBeenSet = true; m_collaborationCreatorDisplayName = value; }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline void SetCollaborationCreatorDisplayName(Aws::String&& value) { m_collaborationCreatorDisplayNameHasBeenSet = true; m_collaborationCreatorDisplayName = std::move(value); }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline void SetCollaborationCreatorDisplayName(const char* value) { m_collaborationCreatorDisplayNameHasBeenSet = true; m_collaborationCreatorDisplayName.assign(value); }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline MembershipSummary& WithCollaborationCreatorDisplayName(const Aws::String& value) { SetCollaborationCreatorDisplayName(value); return *this;}

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline MembershipSummary& WithCollaborationCreatorDisplayName(Aws::String&& value) { SetCollaborationCreatorDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline MembershipSummary& WithCollaborationCreatorDisplayName(const char* value) { SetCollaborationCreatorDisplayName(value); return *this;}


    /**
     * <p>The name for the membership's collaboration.</p>
     */
    inline const Aws::String& GetCollaborationName() const{ return m_collaborationName; }

    /**
     * <p>The name for the membership's collaboration.</p>
     */
    inline bool CollaborationNameHasBeenSet() const { return m_collaborationNameHasBeenSet; }

    /**
     * <p>The name for the membership's collaboration.</p>
     */
    inline void SetCollaborationName(const Aws::String& value) { m_collaborationNameHasBeenSet = true; m_collaborationName = value; }

    /**
     * <p>The name for the membership's collaboration.</p>
     */
    inline void SetCollaborationName(Aws::String&& value) { m_collaborationNameHasBeenSet = true; m_collaborationName = std::move(value); }

    /**
     * <p>The name for the membership's collaboration.</p>
     */
    inline void SetCollaborationName(const char* value) { m_collaborationNameHasBeenSet = true; m_collaborationName.assign(value); }

    /**
     * <p>The name for the membership's collaboration.</p>
     */
    inline MembershipSummary& WithCollaborationName(const Aws::String& value) { SetCollaborationName(value); return *this;}

    /**
     * <p>The name for the membership's collaboration.</p>
     */
    inline MembershipSummary& WithCollaborationName(Aws::String&& value) { SetCollaborationName(std::move(value)); return *this;}

    /**
     * <p>The name for the membership's collaboration.</p>
     */
    inline MembershipSummary& WithCollaborationName(const char* value) { SetCollaborationName(value); return *this;}


    /**
     * <p>The time when the membership was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time when the membership was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time when the membership was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time when the membership was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time when the membership was created.</p>
     */
    inline MembershipSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time when the membership was created.</p>
     */
    inline MembershipSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time the membership metadata was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time the membership metadata was last updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The time the membership metadata was last updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The time the membership metadata was last updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The time the membership metadata was last updated.</p>
     */
    inline MembershipSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time the membership metadata was last updated.</p>
     */
    inline MembershipSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The status of the membership.</p>
     */
    inline const MembershipStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the membership.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the membership.</p>
     */
    inline void SetStatus(const MembershipStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the membership.</p>
     */
    inline void SetStatus(MembershipStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the membership.</p>
     */
    inline MembershipSummary& WithStatus(const MembershipStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the membership.</p>
     */
    inline MembershipSummary& WithStatus(MembershipStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline const Aws::Vector<MemberAbility>& GetMemberAbilities() const{ return m_memberAbilities; }

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline bool MemberAbilitiesHasBeenSet() const { return m_memberAbilitiesHasBeenSet; }

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline void SetMemberAbilities(const Aws::Vector<MemberAbility>& value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities = value; }

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline void SetMemberAbilities(Aws::Vector<MemberAbility>&& value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities = std::move(value); }

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline MembershipSummary& WithMemberAbilities(const Aws::Vector<MemberAbility>& value) { SetMemberAbilities(value); return *this;}

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline MembershipSummary& WithMemberAbilities(Aws::Vector<MemberAbility>&& value) { SetMemberAbilities(std::move(value)); return *this;}

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline MembershipSummary& AddMemberAbilities(const MemberAbility& value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities.push_back(value); return *this; }

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline MembershipSummary& AddMemberAbilities(MemberAbility&& value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The payment responsibilities accepted by the collaboration member.</p>
     */
    inline const MembershipPaymentConfiguration& GetPaymentConfiguration() const{ return m_paymentConfiguration; }

    /**
     * <p>The payment responsibilities accepted by the collaboration member.</p>
     */
    inline bool PaymentConfigurationHasBeenSet() const { return m_paymentConfigurationHasBeenSet; }

    /**
     * <p>The payment responsibilities accepted by the collaboration member.</p>
     */
    inline void SetPaymentConfiguration(const MembershipPaymentConfiguration& value) { m_paymentConfigurationHasBeenSet = true; m_paymentConfiguration = value; }

    /**
     * <p>The payment responsibilities accepted by the collaboration member.</p>
     */
    inline void SetPaymentConfiguration(MembershipPaymentConfiguration&& value) { m_paymentConfigurationHasBeenSet = true; m_paymentConfiguration = std::move(value); }

    /**
     * <p>The payment responsibilities accepted by the collaboration member.</p>
     */
    inline MembershipSummary& WithPaymentConfiguration(const MembershipPaymentConfiguration& value) { SetPaymentConfiguration(value); return *this;}

    /**
     * <p>The payment responsibilities accepted by the collaboration member.</p>
     */
    inline MembershipSummary& WithPaymentConfiguration(MembershipPaymentConfiguration&& value) { SetPaymentConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_collaborationArn;
    bool m_collaborationArnHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_collaborationCreatorAccountId;
    bool m_collaborationCreatorAccountIdHasBeenSet = false;

    Aws::String m_collaborationCreatorDisplayName;
    bool m_collaborationCreatorDisplayNameHasBeenSet = false;

    Aws::String m_collaborationName;
    bool m_collaborationNameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    MembershipStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<MemberAbility> m_memberAbilities;
    bool m_memberAbilitiesHasBeenSet = false;

    MembershipPaymentConfiguration m_paymentConfiguration;
    bool m_paymentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
