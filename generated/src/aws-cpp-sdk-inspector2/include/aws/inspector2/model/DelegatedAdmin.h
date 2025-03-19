/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/RelationshipStatus.h>
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
   * <p>Details of the Amazon Inspector delegated administrator for your
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DelegatedAdmin">AWS
   * API Reference</a></p>
   */
  class DelegatedAdmin
  {
  public:
    AWS_INSPECTOR2_API DelegatedAdmin() = default;
    AWS_INSPECTOR2_API DelegatedAdmin(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API DelegatedAdmin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for your organization.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    DelegatedAdmin& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon Inspector delegated administrator.</p>
     */
    inline RelationshipStatus GetRelationshipStatus() const { return m_relationshipStatus; }
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }
    inline void SetRelationshipStatus(RelationshipStatus value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }
    inline DelegatedAdmin& WithRelationshipStatus(RelationshipStatus value) { SetRelationshipStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    RelationshipStatus m_relationshipStatus{RelationshipStatus::NOT_SET};
    bool m_relationshipStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
