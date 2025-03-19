/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/KeyType.h>
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
   * <p>Represents <i>a single element</i> of a key schema. A key schema specifies
   * the attributes that make up the primary key of a table, or the key attributes of
   * an index.</p> <p>A <code>KeySchemaElement</code> represents exactly one
   * attribute of the primary key. For example, a simple primary key would be
   * represented by one <code>KeySchemaElement</code> (for the partition key). A
   * composite primary key would require one <code>KeySchemaElement</code> for the
   * partition key, and another <code>KeySchemaElement</code> for the sort key.</p>
   * <p>A <code>KeySchemaElement</code> must be a scalar, top-level attribute (not a
   * nested attribute). The data type must be one of String, Number, or Binary. The
   * attribute cannot be nested within a List or a Map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/KeySchemaElement">AWS
   * API Reference</a></p>
   */
  class KeySchemaElement
  {
  public:
    AWS_DYNAMODB_API KeySchemaElement() = default;
    AWS_DYNAMODB_API KeySchemaElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API KeySchemaElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a key attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    KeySchemaElement& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role that this key attribute will assume:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul>  <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB's usage
     * of an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> 
     */
    inline KeyType GetKeyType() const { return m_keyType; }
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }
    inline void SetKeyType(KeyType value) { m_keyTypeHasBeenSet = true; m_keyType = value; }
    inline KeySchemaElement& WithKeyType(KeyType value) { SetKeyType(value); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    KeyType m_keyType{KeyType::NOT_SET};
    bool m_keyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
