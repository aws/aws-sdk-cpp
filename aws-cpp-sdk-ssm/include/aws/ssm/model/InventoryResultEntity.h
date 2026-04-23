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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/InventoryResultItem.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Inventory query results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryResultEntity">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InventoryResultEntity
  {
  public:
    InventoryResultEntity();
    InventoryResultEntity(Aws::Utils::Json::JsonView jsonValue);
    InventoryResultEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ID of the inventory result entity. For example, for managed instance
     * inventory the result will be the managed instance ID. For EC2 instance
     * inventory, the result will be the instance ID. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>ID of the inventory result entity. For example, for managed instance
     * inventory the result will be the managed instance ID. For EC2 instance
     * inventory, the result will be the instance ID. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>ID of the inventory result entity. For example, for managed instance
     * inventory the result will be the managed instance ID. For EC2 instance
     * inventory, the result will be the instance ID. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>ID of the inventory result entity. For example, for managed instance
     * inventory the result will be the managed instance ID. For EC2 instance
     * inventory, the result will be the instance ID. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>ID of the inventory result entity. For example, for managed instance
     * inventory the result will be the managed instance ID. For EC2 instance
     * inventory, the result will be the instance ID. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>ID of the inventory result entity. For example, for managed instance
     * inventory the result will be the managed instance ID. For EC2 instance
     * inventory, the result will be the instance ID. </p>
     */
    inline InventoryResultEntity& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>ID of the inventory result entity. For example, for managed instance
     * inventory the result will be the managed instance ID. For EC2 instance
     * inventory, the result will be the instance ID. </p>
     */
    inline InventoryResultEntity& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>ID of the inventory result entity. For example, for managed instance
     * inventory the result will be the managed instance ID. For EC2 instance
     * inventory, the result will be the instance ID. </p>
     */
    inline InventoryResultEntity& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The data section in the inventory result entity JSON.</p>
     */
    inline const Aws::Map<Aws::String, InventoryResultItem>& GetData() const{ return m_data; }

    /**
     * <p>The data section in the inventory result entity JSON.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The data section in the inventory result entity JSON.</p>
     */
    inline void SetData(const Aws::Map<Aws::String, InventoryResultItem>& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The data section in the inventory result entity JSON.</p>
     */
    inline void SetData(Aws::Map<Aws::String, InventoryResultItem>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The data section in the inventory result entity JSON.</p>
     */
    inline InventoryResultEntity& WithData(const Aws::Map<Aws::String, InventoryResultItem>& value) { SetData(value); return *this;}

    /**
     * <p>The data section in the inventory result entity JSON.</p>
     */
    inline InventoryResultEntity& WithData(Aws::Map<Aws::String, InventoryResultItem>&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The data section in the inventory result entity JSON.</p>
     */
    inline InventoryResultEntity& AddData(const Aws::String& key, const InventoryResultItem& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }

    /**
     * <p>The data section in the inventory result entity JSON.</p>
     */
    inline InventoryResultEntity& AddData(Aws::String&& key, const InventoryResultItem& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * <p>The data section in the inventory result entity JSON.</p>
     */
    inline InventoryResultEntity& AddData(const Aws::String& key, InventoryResultItem&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The data section in the inventory result entity JSON.</p>
     */
    inline InventoryResultEntity& AddData(Aws::String&& key, InventoryResultItem&& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The data section in the inventory result entity JSON.</p>
     */
    inline InventoryResultEntity& AddData(const char* key, InventoryResultItem&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The data section in the inventory result entity JSON.</p>
     */
    inline InventoryResultEntity& AddData(const char* key, const InventoryResultItem& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Map<Aws::String, InventoryResultItem> m_data;
    bool m_dataHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
