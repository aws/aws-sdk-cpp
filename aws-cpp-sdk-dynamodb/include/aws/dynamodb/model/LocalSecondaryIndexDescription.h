/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the properties of a local secondary index.</p>
   */
  class AWS_DYNAMODB_API LocalSecondaryIndexDescription
  {
  public:
    LocalSecondaryIndexDescription();
    LocalSecondaryIndexDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    LocalSecondaryIndexDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Represents the name of the local secondary index.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>Represents the name of the local secondary index.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>Represents the name of the local secondary index.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>Represents the name of the local secondary index.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>Represents the name of the local secondary index.</p>
     */
    inline LocalSecondaryIndexDescription& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>Represents the name of the local secondary index.</p>
     */
    inline LocalSecondaryIndexDescription& WithIndexName(Aws::String&& value) { SetIndexName(value); return *this;}

    /**
     * <p>Represents the name of the local secondary index.</p>
     */
    inline LocalSecondaryIndexDescription& WithIndexName(const char* value) { SetIndexName(value); return *this;}

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
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

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
    inline LocalSecondaryIndexDescription& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}

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
    inline LocalSecondaryIndexDescription& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(value); return *this;}

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
    inline LocalSecondaryIndexDescription& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

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
    inline LocalSecondaryIndexDescription& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    
    inline const Projection& GetProjection() const{ return m_projection; }

    
    inline void SetProjection(const Projection& value) { m_projectionHasBeenSet = true; m_projection = value; }

    
    inline void SetProjection(Projection&& value) { m_projectionHasBeenSet = true; m_projection = value; }

    
    inline LocalSecondaryIndexDescription& WithProjection(const Projection& value) { SetProjection(value); return *this;}

    
    inline LocalSecondaryIndexDescription& WithProjection(Projection&& value) { SetProjection(value); return *this;}

    /**
     * <p>The total size of the specified index, in bytes. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline long long GetIndexSizeBytes() const{ return m_indexSizeBytes; }

    /**
     * <p>The total size of the specified index, in bytes. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline void SetIndexSizeBytes(long long value) { m_indexSizeBytesHasBeenSet = true; m_indexSizeBytes = value; }

    /**
     * <p>The total size of the specified index, in bytes. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline LocalSecondaryIndexDescription& WithIndexSizeBytes(long long value) { SetIndexSizeBytes(value); return *this;}

    /**
     * <p>The number of items in the specified index. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline long long GetItemCount() const{ return m_itemCount; }

    /**
     * <p>The number of items in the specified index. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline void SetItemCount(long long value) { m_itemCountHasBeenSet = true; m_itemCount = value; }

    /**
     * <p>The number of items in the specified index. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline LocalSecondaryIndexDescription& WithItemCount(long long value) { SetItemCount(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the index.</p>
     */
    inline const Aws::String& GetIndexArn() const{ return m_indexArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the index.</p>
     */
    inline void SetIndexArn(const Aws::String& value) { m_indexArnHasBeenSet = true; m_indexArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the index.</p>
     */
    inline void SetIndexArn(Aws::String&& value) { m_indexArnHasBeenSet = true; m_indexArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the index.</p>
     */
    inline void SetIndexArn(const char* value) { m_indexArnHasBeenSet = true; m_indexArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the index.</p>
     */
    inline LocalSecondaryIndexDescription& WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the index.</p>
     */
    inline LocalSecondaryIndexDescription& WithIndexArn(Aws::String&& value) { SetIndexArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the index.</p>
     */
    inline LocalSecondaryIndexDescription& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}

  private:
    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;
    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet;
    Projection m_projection;
    bool m_projectionHasBeenSet;
    long long m_indexSizeBytes;
    bool m_indexSizeBytesHasBeenSet;
    long long m_itemCount;
    bool m_itemCountHasBeenSet;
    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
