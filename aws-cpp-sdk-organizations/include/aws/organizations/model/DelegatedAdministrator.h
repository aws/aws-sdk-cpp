/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/AccountStatus.h>
#include <aws/organizations/model/AccountJoinedMethod.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains information about the delegated administrator.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DelegatedAdministrator">AWS
   * API Reference</a></p>
   */
  class DelegatedAdministrator
  {
  public:
    AWS_ORGANIZATIONS_API DelegatedAdministrator();
    AWS_ORGANIZATIONS_API DelegatedAdministrator(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API DelegatedAdministrator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier (ID) of the delegated administrator's account.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier (ID) of the delegated administrator's account.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the delegated administrator's account.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) of the delegated administrator's account.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the delegated administrator's account.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier (ID) of the delegated administrator's account.</p>
     */
    inline DelegatedAdministrator& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the delegated administrator's account.</p>
     */
    inline DelegatedAdministrator& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the delegated administrator's account.</p>
     */
    inline DelegatedAdministrator& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the delegated administrator's account.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the delegated administrator's account.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the delegated administrator's account.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the delegated administrator's account.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the delegated administrator's account.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the delegated administrator's account.</p>
     */
    inline DelegatedAdministrator& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the delegated administrator's account.</p>
     */
    inline DelegatedAdministrator& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the delegated administrator's account.</p>
     */
    inline DelegatedAdministrator& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The email address that is associated with the delegated administrator's
     * Amazon Web Services account.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address that is associated with the delegated administrator's
     * Amazon Web Services account.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address that is associated with the delegated administrator's
     * Amazon Web Services account.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address that is associated with the delegated administrator's
     * Amazon Web Services account.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address that is associated with the delegated administrator's
     * Amazon Web Services account.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address that is associated with the delegated administrator's
     * Amazon Web Services account.</p>
     */
    inline DelegatedAdministrator& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address that is associated with the delegated administrator's
     * Amazon Web Services account.</p>
     */
    inline DelegatedAdministrator& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address that is associated with the delegated administrator's
     * Amazon Web Services account.</p>
     */
    inline DelegatedAdministrator& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The friendly name of the delegated administrator's account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the delegated administrator's account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name of the delegated administrator's account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the delegated administrator's account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name of the delegated administrator's account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name of the delegated administrator's account.</p>
     */
    inline DelegatedAdministrator& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the delegated administrator's account.</p>
     */
    inline DelegatedAdministrator& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the delegated administrator's account.</p>
     */
    inline DelegatedAdministrator& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the delegated administrator's account in the organization.</p>
     */
    inline const AccountStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the delegated administrator's account in the organization.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the delegated administrator's account in the organization.</p>
     */
    inline void SetStatus(const AccountStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the delegated administrator's account in the organization.</p>
     */
    inline void SetStatus(AccountStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the delegated administrator's account in the organization.</p>
     */
    inline DelegatedAdministrator& WithStatus(const AccountStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the delegated administrator's account in the organization.</p>
     */
    inline DelegatedAdministrator& WithStatus(AccountStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The method by which the delegated administrator's account joined the
     * organization.</p>
     */
    inline const AccountJoinedMethod& GetJoinedMethod() const{ return m_joinedMethod; }

    /**
     * <p>The method by which the delegated administrator's account joined the
     * organization.</p>
     */
    inline bool JoinedMethodHasBeenSet() const { return m_joinedMethodHasBeenSet; }

    /**
     * <p>The method by which the delegated administrator's account joined the
     * organization.</p>
     */
    inline void SetJoinedMethod(const AccountJoinedMethod& value) { m_joinedMethodHasBeenSet = true; m_joinedMethod = value; }

    /**
     * <p>The method by which the delegated administrator's account joined the
     * organization.</p>
     */
    inline void SetJoinedMethod(AccountJoinedMethod&& value) { m_joinedMethodHasBeenSet = true; m_joinedMethod = std::move(value); }

    /**
     * <p>The method by which the delegated administrator's account joined the
     * organization.</p>
     */
    inline DelegatedAdministrator& WithJoinedMethod(const AccountJoinedMethod& value) { SetJoinedMethod(value); return *this;}

    /**
     * <p>The method by which the delegated administrator's account joined the
     * organization.</p>
     */
    inline DelegatedAdministrator& WithJoinedMethod(AccountJoinedMethod&& value) { SetJoinedMethod(std::move(value)); return *this;}


    /**
     * <p>The date when the delegated administrator's account became a part of the
     * organization.</p>
     */
    inline const Aws::Utils::DateTime& GetJoinedTimestamp() const{ return m_joinedTimestamp; }

    /**
     * <p>The date when the delegated administrator's account became a part of the
     * organization.</p>
     */
    inline bool JoinedTimestampHasBeenSet() const { return m_joinedTimestampHasBeenSet; }

    /**
     * <p>The date when the delegated administrator's account became a part of the
     * organization.</p>
     */
    inline void SetJoinedTimestamp(const Aws::Utils::DateTime& value) { m_joinedTimestampHasBeenSet = true; m_joinedTimestamp = value; }

    /**
     * <p>The date when the delegated administrator's account became a part of the
     * organization.</p>
     */
    inline void SetJoinedTimestamp(Aws::Utils::DateTime&& value) { m_joinedTimestampHasBeenSet = true; m_joinedTimestamp = std::move(value); }

    /**
     * <p>The date when the delegated administrator's account became a part of the
     * organization.</p>
     */
    inline DelegatedAdministrator& WithJoinedTimestamp(const Aws::Utils::DateTime& value) { SetJoinedTimestamp(value); return *this;}

    /**
     * <p>The date when the delegated administrator's account became a part of the
     * organization.</p>
     */
    inline DelegatedAdministrator& WithJoinedTimestamp(Aws::Utils::DateTime&& value) { SetJoinedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The date when the account was made a delegated administrator.</p>
     */
    inline const Aws::Utils::DateTime& GetDelegationEnabledDate() const{ return m_delegationEnabledDate; }

    /**
     * <p>The date when the account was made a delegated administrator.</p>
     */
    inline bool DelegationEnabledDateHasBeenSet() const { return m_delegationEnabledDateHasBeenSet; }

    /**
     * <p>The date when the account was made a delegated administrator.</p>
     */
    inline void SetDelegationEnabledDate(const Aws::Utils::DateTime& value) { m_delegationEnabledDateHasBeenSet = true; m_delegationEnabledDate = value; }

    /**
     * <p>The date when the account was made a delegated administrator.</p>
     */
    inline void SetDelegationEnabledDate(Aws::Utils::DateTime&& value) { m_delegationEnabledDateHasBeenSet = true; m_delegationEnabledDate = std::move(value); }

    /**
     * <p>The date when the account was made a delegated administrator.</p>
     */
    inline DelegatedAdministrator& WithDelegationEnabledDate(const Aws::Utils::DateTime& value) { SetDelegationEnabledDate(value); return *this;}

    /**
     * <p>The date when the account was made a delegated administrator.</p>
     */
    inline DelegatedAdministrator& WithDelegationEnabledDate(Aws::Utils::DateTime&& value) { SetDelegationEnabledDate(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AccountStatus m_status;
    bool m_statusHasBeenSet = false;

    AccountJoinedMethod m_joinedMethod;
    bool m_joinedMethodHasBeenSet = false;

    Aws::Utils::DateTime m_joinedTimestamp;
    bool m_joinedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_delegationEnabledDate;
    bool m_delegationEnabledDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
