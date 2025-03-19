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
   * <p>Represents a request to perform a <code>DeleteItem</code> operation on an
   * item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteRequest">AWS
   * API Reference</a></p>
   */
  class DeleteRequest
  {
  public:
    AWS_DYNAMODB_API DeleteRequest() = default;
    AWS_DYNAMODB_API DeleteRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API DeleteRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to delete. All of the table's primary key attributes must be specified,
     * and their data types must match those of the table's key schema.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::Map<Aws::String, AttributeValue>>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::Map<Aws::String, AttributeValue>>
    DeleteRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    template<typename KeyKeyT = Aws::String, typename KeyValueT = AttributeValue>
    DeleteRequest& AddKey(KeyKeyT&& key, KeyValueT&& value) {
      m_keyHasBeenSet = true; m_key.emplace(std::forward<KeyKeyT>(key), std::forward<KeyValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, AttributeValue> m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
