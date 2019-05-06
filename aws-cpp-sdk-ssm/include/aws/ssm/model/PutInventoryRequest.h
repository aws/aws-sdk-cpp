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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InventoryItem.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API PutInventoryRequest : public SSMRequest
  {
  public:
    PutInventoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInventory"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>One or more instance IDs where you want to add or update inventory items.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>One or more instance IDs where you want to add or update inventory items.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>One or more instance IDs where you want to add or update inventory items.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>One or more instance IDs where you want to add or update inventory items.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>One or more instance IDs where you want to add or update inventory items.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>One or more instance IDs where you want to add or update inventory items.</p>
     */
    inline PutInventoryRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>One or more instance IDs where you want to add or update inventory items.</p>
     */
    inline PutInventoryRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>One or more instance IDs where you want to add or update inventory items.</p>
     */
    inline PutInventoryRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The inventory items that you want to add or update on instances.</p>
     */
    inline const Aws::Vector<InventoryItem>& GetItems() const{ return m_items; }

    /**
     * <p>The inventory items that you want to add or update on instances.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The inventory items that you want to add or update on instances.</p>
     */
    inline void SetItems(const Aws::Vector<InventoryItem>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The inventory items that you want to add or update on instances.</p>
     */
    inline void SetItems(Aws::Vector<InventoryItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The inventory items that you want to add or update on instances.</p>
     */
    inline PutInventoryRequest& WithItems(const Aws::Vector<InventoryItem>& value) { SetItems(value); return *this;}

    /**
     * <p>The inventory items that you want to add or update on instances.</p>
     */
    inline PutInventoryRequest& WithItems(Aws::Vector<InventoryItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The inventory items that you want to add or update on instances.</p>
     */
    inline PutInventoryRequest& AddItems(const InventoryItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The inventory items that you want to add or update on instances.</p>
     */
    inline PutInventoryRequest& AddItems(InventoryItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::Vector<InventoryItem> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
