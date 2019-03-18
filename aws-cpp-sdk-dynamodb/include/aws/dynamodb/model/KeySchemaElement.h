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
  class AWS_DYNAMODB_API KeySchemaElement
  {
  public:
    KeySchemaElement();
    KeySchemaElement(Aws::Utils::Json::JsonView jsonValue);
    KeySchemaElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a key attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of a key attribute.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of a key attribute.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of a key attribute.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of a key attribute.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of a key attribute.</p>
     */
    inline KeySchemaElement& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of a key attribute.</p>
     */
    inline KeySchemaElement& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of a key attribute.</p>
     */
    inline KeySchemaElement& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The role that this key attribute will assume:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul> <note> <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB' usage of
     * an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> </note>
     */
    inline const KeyType& GetKeyType() const{ return m_keyType; }

    /**
     * <p>The role that this key attribute will assume:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul> <note> <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB' usage of
     * an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> </note>
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * <p>The role that this key attribute will assume:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul> <note> <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB' usage of
     * an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> </note>
     */
    inline void SetKeyType(const KeyType& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>The role that this key attribute will assume:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul> <note> <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB' usage of
     * an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> </note>
     */
    inline void SetKeyType(KeyType&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * <p>The role that this key attribute will assume:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul> <note> <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB' usage of
     * an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> </note>
     */
    inline KeySchemaElement& WithKeyType(const KeyType& value) { SetKeyType(value); return *this;}

    /**
     * <p>The role that this key attribute will assume:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul> <note> <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB' usage of
     * an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> </note>
     */
    inline KeySchemaElement& WithKeyType(KeyType&& value) { SetKeyType(std::move(value)); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    KeyType m_keyType;
    bool m_keyTypeHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
