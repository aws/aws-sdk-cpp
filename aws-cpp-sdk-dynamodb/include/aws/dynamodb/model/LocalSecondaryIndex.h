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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Projection.h>
#include <aws/dynamodb/model/KeySchemaElement.h>
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
   * <p>Represents the properties of a local secondary index.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/LocalSecondaryIndex">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API LocalSecondaryIndex
  {
  public:
    LocalSecondaryIndex();
    LocalSecondaryIndex(Aws::Utils::Json::JsonView jsonValue);
    LocalSecondaryIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the local secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the local secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the local secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the local secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the local secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the local secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline LocalSecondaryIndex& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the local secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline LocalSecondaryIndex& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the local secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline LocalSecondaryIndex& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The complete key schema for the local secondary index, consisting of one or
     * more pairs of attribute names and key types:</p> <ul> <li> <p> <code>HASH</code>
     * - partition key</p> </li> <li> <p> <code>RANGE</code> - sort key</p> </li> </ul>
     * <note> <p>The partition key of an item is also known as its <i>hash
     * attribute</i>. The term "hash attribute" derives from DynamoDB' usage of an
     * internal hash function to evenly distribute data items across partitions, based
     * on their partition key values.</p> <p>The sort key of an item is also known as
     * its <i>range attribute</i>. The term "range attribute" derives from the way
     * DynamoDB stores items with the same partition key physically close together, in
     * sorted order by the sort key value.</p> </note>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }

    /**
     * <p>The complete key schema for the local secondary index, consisting of one or
     * more pairs of attribute names and key types:</p> <ul> <li> <p> <code>HASH</code>
     * - partition key</p> </li> <li> <p> <code>RANGE</code> - sort key</p> </li> </ul>
     * <note> <p>The partition key of an item is also known as its <i>hash
     * attribute</i>. The term "hash attribute" derives from DynamoDB' usage of an
     * internal hash function to evenly distribute data items across partitions, based
     * on their partition key values.</p> <p>The sort key of an item is also known as
     * its <i>range attribute</i>. The term "range attribute" derives from the way
     * DynamoDB stores items with the same partition key physically close together, in
     * sorted order by the sort key value.</p> </note>
     */
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }

    /**
     * <p>The complete key schema for the local secondary index, consisting of one or
     * more pairs of attribute names and key types:</p> <ul> <li> <p> <code>HASH</code>
     * - partition key</p> </li> <li> <p> <code>RANGE</code> - sort key</p> </li> </ul>
     * <note> <p>The partition key of an item is also known as its <i>hash
     * attribute</i>. The term "hash attribute" derives from DynamoDB' usage of an
     * internal hash function to evenly distribute data items across partitions, based
     * on their partition key values.</p> <p>The sort key of an item is also known as
     * its <i>range attribute</i>. The term "range attribute" derives from the way
     * DynamoDB stores items with the same partition key physically close together, in
     * sorted order by the sort key value.</p> </note>
     */
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /**
     * <p>The complete key schema for the local secondary index, consisting of one or
     * more pairs of attribute names and key types:</p> <ul> <li> <p> <code>HASH</code>
     * - partition key</p> </li> <li> <p> <code>RANGE</code> - sort key</p> </li> </ul>
     * <note> <p>The partition key of an item is also known as its <i>hash
     * attribute</i>. The term "hash attribute" derives from DynamoDB' usage of an
     * internal hash function to evenly distribute data items across partitions, based
     * on their partition key values.</p> <p>The sort key of an item is also known as
     * its <i>range attribute</i>. The term "range attribute" derives from the way
     * DynamoDB stores items with the same partition key physically close together, in
     * sorted order by the sort key value.</p> </note>
     */
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }

    /**
     * <p>The complete key schema for the local secondary index, consisting of one or
     * more pairs of attribute names and key types:</p> <ul> <li> <p> <code>HASH</code>
     * - partition key</p> </li> <li> <p> <code>RANGE</code> - sort key</p> </li> </ul>
     * <note> <p>The partition key of an item is also known as its <i>hash
     * attribute</i>. The term "hash attribute" derives from DynamoDB' usage of an
     * internal hash function to evenly distribute data items across partitions, based
     * on their partition key values.</p> <p>The sort key of an item is also known as
     * its <i>range attribute</i>. The term "range attribute" derives from the way
     * DynamoDB stores items with the same partition key physically close together, in
     * sorted order by the sort key value.</p> </note>
     */
    inline LocalSecondaryIndex& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}

    /**
     * <p>The complete key schema for the local secondary index, consisting of one or
     * more pairs of attribute names and key types:</p> <ul> <li> <p> <code>HASH</code>
     * - partition key</p> </li> <li> <p> <code>RANGE</code> - sort key</p> </li> </ul>
     * <note> <p>The partition key of an item is also known as its <i>hash
     * attribute</i>. The term "hash attribute" derives from DynamoDB' usage of an
     * internal hash function to evenly distribute data items across partitions, based
     * on their partition key values.</p> <p>The sort key of an item is also known as
     * its <i>range attribute</i>. The term "range attribute" derives from the way
     * DynamoDB stores items with the same partition key physically close together, in
     * sorted order by the sort key value.</p> </note>
     */
    inline LocalSecondaryIndex& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(std::move(value)); return *this;}

    /**
     * <p>The complete key schema for the local secondary index, consisting of one or
     * more pairs of attribute names and key types:</p> <ul> <li> <p> <code>HASH</code>
     * - partition key</p> </li> <li> <p> <code>RANGE</code> - sort key</p> </li> </ul>
     * <note> <p>The partition key of an item is also known as its <i>hash
     * attribute</i>. The term "hash attribute" derives from DynamoDB' usage of an
     * internal hash function to evenly distribute data items across partitions, based
     * on their partition key values.</p> <p>The sort key of an item is also known as
     * its <i>range attribute</i>. The term "range attribute" derives from the way
     * DynamoDB stores items with the same partition key physically close together, in
     * sorted order by the sort key value.</p> </note>
     */
    inline LocalSecondaryIndex& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    /**
     * <p>The complete key schema for the local secondary index, consisting of one or
     * more pairs of attribute names and key types:</p> <ul> <li> <p> <code>HASH</code>
     * - partition key</p> </li> <li> <p> <code>RANGE</code> - sort key</p> </li> </ul>
     * <note> <p>The partition key of an item is also known as its <i>hash
     * attribute</i>. The term "hash attribute" derives from DynamoDB' usage of an
     * internal hash function to evenly distribute data items across partitions, based
     * on their partition key values.</p> <p>The sort key of an item is also known as
     * its <i>range attribute</i>. The term "range attribute" derives from the way
     * DynamoDB stores items with the same partition key physically close together, in
     * sorted order by the sort key value.</p> </note>
     */
    inline LocalSecondaryIndex& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents attributes that are copied (projected) from the table into the
     * local secondary index. These are in addition to the primary key attributes and
     * index key attributes, which are automatically projected. </p>
     */
    inline const Projection& GetProjection() const{ return m_projection; }

    /**
     * <p>Represents attributes that are copied (projected) from the table into the
     * local secondary index. These are in addition to the primary key attributes and
     * index key attributes, which are automatically projected. </p>
     */
    inline bool ProjectionHasBeenSet() const { return m_projectionHasBeenSet; }

    /**
     * <p>Represents attributes that are copied (projected) from the table into the
     * local secondary index. These are in addition to the primary key attributes and
     * index key attributes, which are automatically projected. </p>
     */
    inline void SetProjection(const Projection& value) { m_projectionHasBeenSet = true; m_projection = value; }

    /**
     * <p>Represents attributes that are copied (projected) from the table into the
     * local secondary index. These are in addition to the primary key attributes and
     * index key attributes, which are automatically projected. </p>
     */
    inline void SetProjection(Projection&& value) { m_projectionHasBeenSet = true; m_projection = std::move(value); }

    /**
     * <p>Represents attributes that are copied (projected) from the table into the
     * local secondary index. These are in addition to the primary key attributes and
     * index key attributes, which are automatically projected. </p>
     */
    inline LocalSecondaryIndex& WithProjection(const Projection& value) { SetProjection(value); return *this;}

    /**
     * <p>Represents attributes that are copied (projected) from the table into the
     * local secondary index. These are in addition to the primary key attributes and
     * index key attributes, which are automatically projected. </p>
     */
    inline LocalSecondaryIndex& WithProjection(Projection&& value) { SetProjection(std::move(value)); return *this;}

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet;

    Projection m_projection;
    bool m_projectionHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
