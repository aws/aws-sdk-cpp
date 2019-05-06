/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CHIME_API BatchUpdatePhoneNumberRequest : public ChimeRequest
  {
  public:
    BatchUpdatePhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdatePhoneNumber"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The request containing the phone number IDs and product types to update.</p>
     */
    inline const Aws::Vector<UpdatePhoneNumberRequestItem>& GetUpdatePhoneNumberRequestItems() const{ return m_updatePhoneNumberRequestItems; }

    /**
     * <p>The request containing the phone number IDs and product types to update.</p>
     */
    inline bool UpdatePhoneNumberRequestItemsHasBeenSet() const { return m_updatePhoneNumberRequestItemsHasBeenSet; }

    /**
     * <p>The request containing the phone number IDs and product types to update.</p>
     */
    inline void SetUpdatePhoneNumberRequestItems(const Aws::Vector<UpdatePhoneNumberRequestItem>& value) { m_updatePhoneNumberRequestItemsHasBeenSet = true; m_updatePhoneNumberRequestItems = value; }

    /**
     * <p>The request containing the phone number IDs and product types to update.</p>
     */
    inline void SetUpdatePhoneNumberRequestItems(Aws::Vector<UpdatePhoneNumberRequestItem>&& value) { m_updatePhoneNumberRequestItemsHasBeenSet = true; m_updatePhoneNumberRequestItems = std::move(value); }

    /**
     * <p>The request containing the phone number IDs and product types to update.</p>
     */
    inline BatchUpdatePhoneNumberRequest& WithUpdatePhoneNumberRequestItems(const Aws::Vector<UpdatePhoneNumberRequestItem>& value) { SetUpdatePhoneNumberRequestItems(value); return *this;}

    /**
     * <p>The request containing the phone number IDs and product types to update.</p>
     */
    inline BatchUpdatePhoneNumberRequest& WithUpdatePhoneNumberRequestItems(Aws::Vector<UpdatePhoneNumberRequestItem>&& value) { SetUpdatePhoneNumberRequestItems(std::move(value)); return *this;}

    /**
     * <p>The request containing the phone number IDs and product types to update.</p>
     */
    inline BatchUpdatePhoneNumberRequest& AddUpdatePhoneNumberRequestItems(const UpdatePhoneNumberRequestItem& value) { m_updatePhoneNumberRequestItemsHasBeenSet = true; m_updatePhoneNumberRequestItems.push_back(value); return *this; }

    /**
     * <p>The request containing the phone number IDs and product types to update.</p>
     */
    inline BatchUpdatePhoneNumberRequest& AddUpdatePhoneNumberRequestItems(UpdatePhoneNumberRequestItem&& value) { m_updatePhoneNumberRequestItemsHasBeenSet = true; m_updatePhoneNumberRequestItems.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UpdatePhoneNumberRequestItem> m_updatePhoneNumberRequestItems;
    bool m_updatePhoneNumberRequestItemsHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
