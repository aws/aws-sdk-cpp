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
#include <aws/dynamodb/model/IndexStatus.h>
#include <aws/dynamodb/model/ProvisionedThroughputDescription.h>
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
   * <p>Represents the properties of a global secondary index.</p>
   */
  class AWS_DYNAMODB_API GlobalSecondaryIndexDescription
  {
  public:
    GlobalSecondaryIndexDescription();
    GlobalSecondaryIndexDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    GlobalSecondaryIndexDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline GlobalSecondaryIndexDescription& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline GlobalSecondaryIndexDescription& WithIndexName(Aws::String&& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline GlobalSecondaryIndexDescription& WithIndexName(const char* value) { SetIndexName(value); return *this;}

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul> <note> <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB' usage of
     * an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> </note>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul> <note> <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB' usage of
     * an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> </note>
     */
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul> <note> <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB' usage of
     * an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> </note>
     */
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul> <note> <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB' usage of
     * an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> </note>
     */
    inline GlobalSecondaryIndexDescription& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul> <note> <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB' usage of
     * an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> </note>
     */
    inline GlobalSecondaryIndexDescription& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(value); return *this;}

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul> <note> <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB' usage of
     * an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> </note>
     */
    inline GlobalSecondaryIndexDescription& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul> <note> <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB' usage of
     * an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> </note>
     */
    inline GlobalSecondaryIndexDescription& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    
    inline const Projection& GetProjection() const{ return m_projection; }

    
    inline void SetProjection(const Projection& value) { m_projectionHasBeenSet = true; m_projection = value; }

    
    inline void SetProjection(Projection&& value) { m_projectionHasBeenSet = true; m_projection = value; }

    
    inline GlobalSecondaryIndexDescription& WithProjection(const Projection& value) { SetProjection(value); return *this;}

    
    inline GlobalSecondaryIndexDescription& WithProjection(Projection&& value) { SetProjection(value); return *this;}

    /**
     * <p>The current state of the global secondary index:</p> <ul> <li> <p>
     * <i>CREATING</i> - The index is being created.</p> </li> <li> <p> <i>UPDATING</i>
     * - The index is being updated.</p> </li> <li> <p> <i>DELETING</i> - The index is
     * being deleted.</p> </li> <li> <p> <i>ACTIVE</i> - The index is ready for
     * use.</p> </li> </ul>
     */
    inline const IndexStatus& GetIndexStatus() const{ return m_indexStatus; }

    /**
     * <p>The current state of the global secondary index:</p> <ul> <li> <p>
     * <i>CREATING</i> - The index is being created.</p> </li> <li> <p> <i>UPDATING</i>
     * - The index is being updated.</p> </li> <li> <p> <i>DELETING</i> - The index is
     * being deleted.</p> </li> <li> <p> <i>ACTIVE</i> - The index is ready for
     * use.</p> </li> </ul>
     */
    inline void SetIndexStatus(const IndexStatus& value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }

    /**
     * <p>The current state of the global secondary index:</p> <ul> <li> <p>
     * <i>CREATING</i> - The index is being created.</p> </li> <li> <p> <i>UPDATING</i>
     * - The index is being updated.</p> </li> <li> <p> <i>DELETING</i> - The index is
     * being deleted.</p> </li> <li> <p> <i>ACTIVE</i> - The index is ready for
     * use.</p> </li> </ul>
     */
    inline void SetIndexStatus(IndexStatus&& value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }

    /**
     * <p>The current state of the global secondary index:</p> <ul> <li> <p>
     * <i>CREATING</i> - The index is being created.</p> </li> <li> <p> <i>UPDATING</i>
     * - The index is being updated.</p> </li> <li> <p> <i>DELETING</i> - The index is
     * being deleted.</p> </li> <li> <p> <i>ACTIVE</i> - The index is ready for
     * use.</p> </li> </ul>
     */
    inline GlobalSecondaryIndexDescription& WithIndexStatus(const IndexStatus& value) { SetIndexStatus(value); return *this;}

    /**
     * <p>The current state of the global secondary index:</p> <ul> <li> <p>
     * <i>CREATING</i> - The index is being created.</p> </li> <li> <p> <i>UPDATING</i>
     * - The index is being updated.</p> </li> <li> <p> <i>DELETING</i> - The index is
     * being deleted.</p> </li> <li> <p> <i>ACTIVE</i> - The index is ready for
     * use.</p> </li> </ul>
     */
    inline GlobalSecondaryIndexDescription& WithIndexStatus(IndexStatus&& value) { SetIndexStatus(value); return *this;}

    /**
     * <p>Indicates whether the index is currently backfilling. <i>Backfilling</i> is
     * the process of reading items from the table and determining whether they can be
     * added to the index. (Not all items will qualify: For example, a partition key
     * cannot have any duplicate values.) If an item can be added to the index,
     * DynamoDB will do so. After all items have been processed, the backfilling
     * operation is complete and <i>Backfilling</i> is false.</p> <note> <p>For indexes
     * that were created during a <i>CreateTable</i> operation, the <i>Backfilling</i>
     * attribute does not appear in the <i>DescribeTable</i> output.</p> </note>
     */
    inline bool GetBackfilling() const{ return m_backfilling; }

    /**
     * <p>Indicates whether the index is currently backfilling. <i>Backfilling</i> is
     * the process of reading items from the table and determining whether they can be
     * added to the index. (Not all items will qualify: For example, a partition key
     * cannot have any duplicate values.) If an item can be added to the index,
     * DynamoDB will do so. After all items have been processed, the backfilling
     * operation is complete and <i>Backfilling</i> is false.</p> <note> <p>For indexes
     * that were created during a <i>CreateTable</i> operation, the <i>Backfilling</i>
     * attribute does not appear in the <i>DescribeTable</i> output.</p> </note>
     */
    inline void SetBackfilling(bool value) { m_backfillingHasBeenSet = true; m_backfilling = value; }

    /**
     * <p>Indicates whether the index is currently backfilling. <i>Backfilling</i> is
     * the process of reading items from the table and determining whether they can be
     * added to the index. (Not all items will qualify: For example, a partition key
     * cannot have any duplicate values.) If an item can be added to the index,
     * DynamoDB will do so. After all items have been processed, the backfilling
     * operation is complete and <i>Backfilling</i> is false.</p> <note> <p>For indexes
     * that were created during a <i>CreateTable</i> operation, the <i>Backfilling</i>
     * attribute does not appear in the <i>DescribeTable</i> output.</p> </note>
     */
    inline GlobalSecondaryIndexDescription& WithBackfilling(bool value) { SetBackfilling(value); return *this;}

    
    inline const ProvisionedThroughputDescription& GetProvisionedThroughput() const{ return m_provisionedThroughput; }

    
    inline void SetProvisionedThroughput(const ProvisionedThroughputDescription& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    
    inline void SetProvisionedThroughput(ProvisionedThroughputDescription&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    
    inline GlobalSecondaryIndexDescription& WithProvisionedThroughput(const ProvisionedThroughputDescription& value) { SetProvisionedThroughput(value); return *this;}

    
    inline GlobalSecondaryIndexDescription& WithProvisionedThroughput(ProvisionedThroughputDescription&& value) { SetProvisionedThroughput(value); return *this;}

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
    inline GlobalSecondaryIndexDescription& WithIndexSizeBytes(long long value) { SetIndexSizeBytes(value); return *this;}

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
    inline GlobalSecondaryIndexDescription& WithItemCount(long long value) { SetItemCount(value); return *this;}

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
    inline GlobalSecondaryIndexDescription& WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the index.</p>
     */
    inline GlobalSecondaryIndexDescription& WithIndexArn(Aws::String&& value) { SetIndexArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the index.</p>
     */
    inline GlobalSecondaryIndexDescription& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}

  private:
    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;
    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet;
    Projection m_projection;
    bool m_projectionHasBeenSet;
    IndexStatus m_indexStatus;
    bool m_indexStatusHasBeenSet;
    bool m_backfilling;
    bool m_backfillingHasBeenSet;
    ProvisionedThroughputDescription m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet;
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
