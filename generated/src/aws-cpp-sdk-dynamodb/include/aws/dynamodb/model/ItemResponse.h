/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AttributeValue.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Details for the requested item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ItemResponse">AWS
   * API Reference</a></p>
   */
  class ItemResponse
  {
  public:
    AWS_DYNAMODB_API ItemResponse();
    AWS_DYNAMODB_API ItemResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ItemResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Map of attribute data consisting of the data type and attribute value.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const{ return m_item; }

    /**
     * <p>Map of attribute data consisting of the data type and attribute value.</p>
     */
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }

    /**
     * <p>Map of attribute data consisting of the data type and attribute value.</p>
     */
    inline void SetItem(const Aws::Map<Aws::String, AttributeValue>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p>Map of attribute data consisting of the data type and attribute value.</p>
     */
    inline void SetItem(Aws::Map<Aws::String, AttributeValue>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }

    /**
     * <p>Map of attribute data consisting of the data type and attribute value.</p>
     */
    inline ItemResponse& WithItem(const Aws::Map<Aws::String, AttributeValue>& value) { SetItem(value); return *this;}

    /**
     * <p>Map of attribute data consisting of the data type and attribute value.</p>
     */
    inline ItemResponse& WithItem(Aws::Map<Aws::String, AttributeValue>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * <p>Map of attribute data consisting of the data type and attribute value.</p>
     */
    inline ItemResponse& AddItem(const Aws::String& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }

    /**
     * <p>Map of attribute data consisting of the data type and attribute value.</p>
     */
    inline ItemResponse& AddItem(Aws::String&& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of attribute data consisting of the data type and attribute value.</p>
     */
    inline ItemResponse& AddItem(const Aws::String& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of attribute data consisting of the data type and attribute value.</p>
     */
    inline ItemResponse& AddItem(Aws::String&& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map of attribute data consisting of the data type and attribute value.</p>
     */
    inline ItemResponse& AddItem(const char* key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of attribute data consisting of the data type and attribute value.</p>
     */
    inline ItemResponse& AddItem(const char* key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, AttributeValue> m_item;
    bool m_itemHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
