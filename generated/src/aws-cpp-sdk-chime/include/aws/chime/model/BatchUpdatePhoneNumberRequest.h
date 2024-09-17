/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/UpdatePhoneNumberRequestItem.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class BatchUpdatePhoneNumberRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API BatchUpdatePhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdatePhoneNumber"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The request containing the phone number IDs and product types or calling
     * names to update.</p>
     */
    inline const Aws::Vector<UpdatePhoneNumberRequestItem>& GetUpdatePhoneNumberRequestItems() const{ return m_updatePhoneNumberRequestItems; }
    inline bool UpdatePhoneNumberRequestItemsHasBeenSet() const { return m_updatePhoneNumberRequestItemsHasBeenSet; }
    inline void SetUpdatePhoneNumberRequestItems(const Aws::Vector<UpdatePhoneNumberRequestItem>& value) { m_updatePhoneNumberRequestItemsHasBeenSet = true; m_updatePhoneNumberRequestItems = value; }
    inline void SetUpdatePhoneNumberRequestItems(Aws::Vector<UpdatePhoneNumberRequestItem>&& value) { m_updatePhoneNumberRequestItemsHasBeenSet = true; m_updatePhoneNumberRequestItems = std::move(value); }
    inline BatchUpdatePhoneNumberRequest& WithUpdatePhoneNumberRequestItems(const Aws::Vector<UpdatePhoneNumberRequestItem>& value) { SetUpdatePhoneNumberRequestItems(value); return *this;}
    inline BatchUpdatePhoneNumberRequest& WithUpdatePhoneNumberRequestItems(Aws::Vector<UpdatePhoneNumberRequestItem>&& value) { SetUpdatePhoneNumberRequestItems(std::move(value)); return *this;}
    inline BatchUpdatePhoneNumberRequest& AddUpdatePhoneNumberRequestItems(const UpdatePhoneNumberRequestItem& value) { m_updatePhoneNumberRequestItemsHasBeenSet = true; m_updatePhoneNumberRequestItems.push_back(value); return *this; }
    inline BatchUpdatePhoneNumberRequest& AddUpdatePhoneNumberRequestItems(UpdatePhoneNumberRequestItem&& value) { m_updatePhoneNumberRequestItemsHasBeenSet = true; m_updatePhoneNumberRequestItems.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<UpdatePhoneNumberRequestItem> m_updatePhoneNumberRequestItems;
    bool m_updatePhoneNumberRequestItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
