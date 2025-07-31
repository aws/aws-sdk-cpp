/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/RelationshipStatus.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details on a member account in your organization.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Member">AWS
   * API Reference</a></p>
   */
  class Member
  {
  public:
    AWS_INSPECTOR2_API Member() = default;
    AWS_INSPECTOR2_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the member account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Member& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the member account.</p>
     */
    inline RelationshipStatus GetRelationshipStatus() const { return m_relationshipStatus; }
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }
    inline void SetRelationshipStatus(RelationshipStatus value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }
    inline Member& WithRelationshipStatus(RelationshipStatus value) { SetRelationshipStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for this member account.</p>
     */
    inline const Aws::String& GetDelegatedAdminAccountId() const { return m_delegatedAdminAccountId; }
    inline bool DelegatedAdminAccountIdHasBeenSet() const { return m_delegatedAdminAccountIdHasBeenSet; }
    template<typename DelegatedAdminAccountIdT = Aws::String>
    void SetDelegatedAdminAccountId(DelegatedAdminAccountIdT&& value) { m_delegatedAdminAccountIdHasBeenSet = true; m_delegatedAdminAccountId = std::forward<DelegatedAdminAccountIdT>(value); }
    template<typename DelegatedAdminAccountIdT = Aws::String>
    Member& WithDelegatedAdminAccountId(DelegatedAdminAccountIdT&& value) { SetDelegatedAdminAccountId(std::forward<DelegatedAdminAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp showing when the status of this member was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Member& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    RelationshipStatus m_relationshipStatus{RelationshipStatus::NOT_SET};
    bool m_relationshipStatusHasBeenSet = false;

    Aws::String m_delegatedAdminAccountId;
    bool m_delegatedAdminAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
