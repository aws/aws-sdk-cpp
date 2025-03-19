/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/UpdateUserRequestItem.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class BatchUpdateUserRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API BatchUpdateUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateUser"; }

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
    BatchUpdateUserRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request containing the user IDs and details to update.</p>
     */
    inline const Aws::Vector<UpdateUserRequestItem>& GetUpdateUserRequestItems() const { return m_updateUserRequestItems; }
    inline bool UpdateUserRequestItemsHasBeenSet() const { return m_updateUserRequestItemsHasBeenSet; }
    template<typename UpdateUserRequestItemsT = Aws::Vector<UpdateUserRequestItem>>
    void SetUpdateUserRequestItems(UpdateUserRequestItemsT&& value) { m_updateUserRequestItemsHasBeenSet = true; m_updateUserRequestItems = std::forward<UpdateUserRequestItemsT>(value); }
    template<typename UpdateUserRequestItemsT = Aws::Vector<UpdateUserRequestItem>>
    BatchUpdateUserRequest& WithUpdateUserRequestItems(UpdateUserRequestItemsT&& value) { SetUpdateUserRequestItems(std::forward<UpdateUserRequestItemsT>(value)); return *this;}
    template<typename UpdateUserRequestItemsT = UpdateUserRequestItem>
    BatchUpdateUserRequest& AddUpdateUserRequestItems(UpdateUserRequestItemsT&& value) { m_updateUserRequestItemsHasBeenSet = true; m_updateUserRequestItems.emplace_back(std::forward<UpdateUserRequestItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<UpdateUserRequestItem> m_updateUserRequestItems;
    bool m_updateUserRequestItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
