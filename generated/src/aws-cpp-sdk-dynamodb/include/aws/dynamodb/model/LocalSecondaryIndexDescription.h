/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/LocalSecondaryIndexDescription">AWS
   * API Reference</a></p>
   */
  class LocalSecondaryIndexDescription
  {
  public:
    AWS_DYNAMODB_API LocalSecondaryIndexDescription();
    AWS_DYNAMODB_API LocalSecondaryIndexDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API LocalSecondaryIndexDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the name of the local secondary index.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline LocalSecondaryIndexDescription& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline LocalSecondaryIndexDescription& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline LocalSecondaryIndexDescription& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The complete key schema for the local secondary index, consisting of one or
     * more pairs of attribute names and key types:</p> <ul> <li> <p> <code>HASH</code>
     * - partition key</p> </li> <li> <p> <code>RANGE</code> - sort key</p> </li> </ul>
     *  <p>The partition key of an item is also known as its <i>hash
     * attribute</i>. The term "hash attribute" derives from DynamoDB's usage of an
     * internal hash function to evenly distribute data items across partitions, based
     * on their partition key values.</p> <p>The sort key of an item is also known as
     * its <i>range attribute</i>. The term "range attribute" derives from the way
     * DynamoDB stores items with the same partition key physically close together, in
     * sorted order by the sort key value.</p> 
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }
    inline LocalSecondaryIndexDescription& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}
    inline LocalSecondaryIndexDescription& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(std::move(value)); return *this;}
    inline LocalSecondaryIndexDescription& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }
    inline LocalSecondaryIndexDescription& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents attributes that are copied (projected) from the table into the
     * global secondary index. These are in addition to the primary key attributes and
     * index key attributes, which are automatically projected. </p>
     */
    inline const Projection& GetProjection() const{ return m_projection; }
    inline bool ProjectionHasBeenSet() const { return m_projectionHasBeenSet; }
    inline void SetProjection(const Projection& value) { m_projectionHasBeenSet = true; m_projection = value; }
    inline void SetProjection(Projection&& value) { m_projectionHasBeenSet = true; m_projection = std::move(value); }
    inline LocalSecondaryIndexDescription& WithProjection(const Projection& value) { SetProjection(value); return *this;}
    inline LocalSecondaryIndexDescription& WithProjection(Projection&& value) { SetProjection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size of the specified index, in bytes. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline long long GetIndexSizeBytes() const{ return m_indexSizeBytes; }
    inline bool IndexSizeBytesHasBeenSet() const { return m_indexSizeBytesHasBeenSet; }
    inline void SetIndexSizeBytes(long long value) { m_indexSizeBytesHasBeenSet = true; m_indexSizeBytes = value; }
    inline LocalSecondaryIndexDescription& WithIndexSizeBytes(long long value) { SetIndexSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of items in the specified index. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline long long GetItemCount() const{ return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(long long value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline LocalSecondaryIndexDescription& WithItemCount(long long value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the index.</p>
     */
    inline const Aws::String& GetIndexArn() const{ return m_indexArn; }
    inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
    inline void SetIndexArn(const Aws::String& value) { m_indexArnHasBeenSet = true; m_indexArn = value; }
    inline void SetIndexArn(Aws::String&& value) { m_indexArnHasBeenSet = true; m_indexArn = std::move(value); }
    inline void SetIndexArn(const char* value) { m_indexArnHasBeenSet = true; m_indexArn.assign(value); }
    inline LocalSecondaryIndexDescription& WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}
    inline LocalSecondaryIndexDescription& WithIndexArn(Aws::String&& value) { SetIndexArn(std::move(value)); return *this;}
    inline LocalSecondaryIndexDescription& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    Projection m_projection;
    bool m_projectionHasBeenSet = false;

    long long m_indexSizeBytes;
    bool m_indexSizeBytesHasBeenSet = false;

    long long m_itemCount;
    bool m_itemCountHasBeenSet = false;

    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
