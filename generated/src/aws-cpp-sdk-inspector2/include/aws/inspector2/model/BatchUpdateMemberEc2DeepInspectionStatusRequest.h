/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/MemberAccountEc2DeepInspectionStatus.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class BatchUpdateMemberEc2DeepInspectionStatusRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API BatchUpdateMemberEc2DeepInspectionStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateMemberEc2DeepInspectionStatus"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifiers for the Amazon Web Services accounts to change Amazon
     * Inspector deep inspection status for.</p>
     */
    inline const Aws::Vector<MemberAccountEc2DeepInspectionStatus>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<MemberAccountEc2DeepInspectionStatus>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<MemberAccountEc2DeepInspectionStatus>>
    BatchUpdateMemberEc2DeepInspectionStatusRequest& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = MemberAccountEc2DeepInspectionStatus>
    BatchUpdateMemberEc2DeepInspectionStatusRequest& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MemberAccountEc2DeepInspectionStatus> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
