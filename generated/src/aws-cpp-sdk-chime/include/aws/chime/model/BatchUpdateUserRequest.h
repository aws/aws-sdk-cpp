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
    AWS_CHIME_API BatchUpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateUser"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline BatchUpdateUserRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline BatchUpdateUserRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline BatchUpdateUserRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The request containing the user IDs and details to update.</p>
     */
    inline const Aws::Vector<UpdateUserRequestItem>& GetUpdateUserRequestItems() const{ return m_updateUserRequestItems; }

    /**
     * <p>The request containing the user IDs and details to update.</p>
     */
    inline bool UpdateUserRequestItemsHasBeenSet() const { return m_updateUserRequestItemsHasBeenSet; }

    /**
     * <p>The request containing the user IDs and details to update.</p>
     */
    inline void SetUpdateUserRequestItems(const Aws::Vector<UpdateUserRequestItem>& value) { m_updateUserRequestItemsHasBeenSet = true; m_updateUserRequestItems = value; }

    /**
     * <p>The request containing the user IDs and details to update.</p>
     */
    inline void SetUpdateUserRequestItems(Aws::Vector<UpdateUserRequestItem>&& value) { m_updateUserRequestItemsHasBeenSet = true; m_updateUserRequestItems = std::move(value); }

    /**
     * <p>The request containing the user IDs and details to update.</p>
     */
    inline BatchUpdateUserRequest& WithUpdateUserRequestItems(const Aws::Vector<UpdateUserRequestItem>& value) { SetUpdateUserRequestItems(value); return *this;}

    /**
     * <p>The request containing the user IDs and details to update.</p>
     */
    inline BatchUpdateUserRequest& WithUpdateUserRequestItems(Aws::Vector<UpdateUserRequestItem>&& value) { SetUpdateUserRequestItems(std::move(value)); return *this;}

    /**
     * <p>The request containing the user IDs and details to update.</p>
     */
    inline BatchUpdateUserRequest& AddUpdateUserRequestItems(const UpdateUserRequestItem& value) { m_updateUserRequestItemsHasBeenSet = true; m_updateUserRequestItems.push_back(value); return *this; }

    /**
     * <p>The request containing the user IDs and details to update.</p>
     */
    inline BatchUpdateUserRequest& AddUpdateUserRequestItems(UpdateUserRequestItem&& value) { m_updateUserRequestItemsHasBeenSet = true; m_updateUserRequestItems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<UpdateUserRequestItem> m_updateUserRequestItems;
    bool m_updateUserRequestItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
