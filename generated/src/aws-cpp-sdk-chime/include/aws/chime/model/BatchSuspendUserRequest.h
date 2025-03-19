/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class BatchSuspendUserRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API BatchSuspendUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchSuspendUser"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    BatchSuspendUserRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request containing the user IDs to suspend.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIdList() const { return m_userIdList; }
    inline bool UserIdListHasBeenSet() const { return m_userIdListHasBeenSet; }
    template<typename UserIdListT = Aws::Vector<Aws::String>>
    void SetUserIdList(UserIdListT&& value) { m_userIdListHasBeenSet = true; m_userIdList = std::forward<UserIdListT>(value); }
    template<typename UserIdListT = Aws::Vector<Aws::String>>
    BatchSuspendUserRequest& WithUserIdList(UserIdListT&& value) { SetUserIdList(std::forward<UserIdListT>(value)); return *this;}
    template<typename UserIdListT = Aws::String>
    BatchSuspendUserRequest& AddUserIdList(UserIdListT&& value) { m_userIdListHasBeenSet = true; m_userIdList.emplace_back(std::forward<UserIdListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIdList;
    bool m_userIdListHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
