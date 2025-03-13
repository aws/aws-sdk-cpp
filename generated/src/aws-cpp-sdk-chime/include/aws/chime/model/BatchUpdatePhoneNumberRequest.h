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
    AWS_CHIME_API BatchUpdatePhoneNumberRequest() = default;

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
    inline const Aws::Vector<UpdatePhoneNumberRequestItem>& GetUpdatePhoneNumberRequestItems() const { return m_updatePhoneNumberRequestItems; }
    inline bool UpdatePhoneNumberRequestItemsHasBeenSet() const { return m_updatePhoneNumberRequestItemsHasBeenSet; }
    template<typename UpdatePhoneNumberRequestItemsT = Aws::Vector<UpdatePhoneNumberRequestItem>>
    void SetUpdatePhoneNumberRequestItems(UpdatePhoneNumberRequestItemsT&& value) { m_updatePhoneNumberRequestItemsHasBeenSet = true; m_updatePhoneNumberRequestItems = std::forward<UpdatePhoneNumberRequestItemsT>(value); }
    template<typename UpdatePhoneNumberRequestItemsT = Aws::Vector<UpdatePhoneNumberRequestItem>>
    BatchUpdatePhoneNumberRequest& WithUpdatePhoneNumberRequestItems(UpdatePhoneNumberRequestItemsT&& value) { SetUpdatePhoneNumberRequestItems(std::forward<UpdatePhoneNumberRequestItemsT>(value)); return *this;}
    template<typename UpdatePhoneNumberRequestItemsT = UpdatePhoneNumberRequestItem>
    BatchUpdatePhoneNumberRequest& AddUpdatePhoneNumberRequestItems(UpdatePhoneNumberRequestItemsT&& value) { m_updatePhoneNumberRequestItemsHasBeenSet = true; m_updatePhoneNumberRequestItems.emplace_back(std::forward<UpdatePhoneNumberRequestItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<UpdatePhoneNumberRequestItem> m_updatePhoneNumberRequestItems;
    bool m_updatePhoneNumberRequestItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
