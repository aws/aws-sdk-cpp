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
    AWS_INSPECTOR2_API BatchUpdateMemberEc2DeepInspectionStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateMemberEc2DeepInspectionStatus"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifiers for the Amazon Web Services accounts to change Amazon
     * Inspector deep inspection status for.</p>
     */
    inline const Aws::Vector<MemberAccountEc2DeepInspectionStatus>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The unique identifiers for the Amazon Web Services accounts to change Amazon
     * Inspector deep inspection status for.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The unique identifiers for the Amazon Web Services accounts to change Amazon
     * Inspector deep inspection status for.</p>
     */
    inline void SetAccountIds(const Aws::Vector<MemberAccountEc2DeepInspectionStatus>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The unique identifiers for the Amazon Web Services accounts to change Amazon
     * Inspector deep inspection status for.</p>
     */
    inline void SetAccountIds(Aws::Vector<MemberAccountEc2DeepInspectionStatus>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The unique identifiers for the Amazon Web Services accounts to change Amazon
     * Inspector deep inspection status for.</p>
     */
    inline BatchUpdateMemberEc2DeepInspectionStatusRequest& WithAccountIds(const Aws::Vector<MemberAccountEc2DeepInspectionStatus>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The unique identifiers for the Amazon Web Services accounts to change Amazon
     * Inspector deep inspection status for.</p>
     */
    inline BatchUpdateMemberEc2DeepInspectionStatusRequest& WithAccountIds(Aws::Vector<MemberAccountEc2DeepInspectionStatus>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The unique identifiers for the Amazon Web Services accounts to change Amazon
     * Inspector deep inspection status for.</p>
     */
    inline BatchUpdateMemberEc2DeepInspectionStatusRequest& AddAccountIds(const MemberAccountEc2DeepInspectionStatus& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The unique identifiers for the Amazon Web Services accounts to change Amazon
     * Inspector deep inspection status for.</p>
     */
    inline BatchUpdateMemberEc2DeepInspectionStatusRequest& AddAccountIds(MemberAccountEc2DeepInspectionStatus&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MemberAccountEc2DeepInspectionStatus> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
