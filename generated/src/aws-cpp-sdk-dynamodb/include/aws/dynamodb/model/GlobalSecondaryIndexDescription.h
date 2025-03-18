/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Projection.h>
#include <aws/dynamodb/model/IndexStatus.h>
#include <aws/dynamodb/model/ProvisionedThroughputDescription.h>
#include <aws/dynamodb/model/OnDemandThroughput.h>
#include <aws/dynamodb/model/GlobalSecondaryIndexWarmThroughputDescription.h>
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
   * <p>Represents the properties of a global secondary index.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GlobalSecondaryIndexDescription">AWS
   * API Reference</a></p>
   */
  class GlobalSecondaryIndexDescription
  {
  public:
    AWS_DYNAMODB_API GlobalSecondaryIndexDescription() = default;
    AWS_DYNAMODB_API GlobalSecondaryIndexDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API GlobalSecondaryIndexDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the global secondary index.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    GlobalSecondaryIndexDescription& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The complete key schema for a global secondary index, which consists of one
     * or more pairs of attribute names and key types:</p> <ul> <li> <p>
     * <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code> - sort
     * key</p> </li> </ul>  <p>The partition key of an item is also known as its
     * <i>hash attribute</i>. The term "hash attribute" derives from DynamoDB's usage
     * of an internal hash function to evenly distribute data items across partitions,
     * based on their partition key values.</p> <p>The sort key of an item is also
     * known as its <i>range attribute</i>. The term "range attribute" derives from the
     * way DynamoDB stores items with the same partition key physically close together,
     * in sorted order by the sort key value.</p> 
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const { return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    template<typename KeySchemaT = Aws::Vector<KeySchemaElement>>
    void SetKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::forward<KeySchemaT>(value); }
    template<typename KeySchemaT = Aws::Vector<KeySchemaElement>>
    GlobalSecondaryIndexDescription& WithKeySchema(KeySchemaT&& value) { SetKeySchema(std::forward<KeySchemaT>(value)); return *this;}
    template<typename KeySchemaT = KeySchemaElement>
    GlobalSecondaryIndexDescription& AddKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema.emplace_back(std::forward<KeySchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents attributes that are copied (projected) from the table into the
     * global secondary index. These are in addition to the primary key attributes and
     * index key attributes, which are automatically projected. </p>
     */
    inline const Projection& GetProjection() const { return m_projection; }
    inline bool ProjectionHasBeenSet() const { return m_projectionHasBeenSet; }
    template<typename ProjectionT = Projection>
    void SetProjection(ProjectionT&& value) { m_projectionHasBeenSet = true; m_projection = std::forward<ProjectionT>(value); }
    template<typename ProjectionT = Projection>
    GlobalSecondaryIndexDescription& WithProjection(ProjectionT&& value) { SetProjection(std::forward<ProjectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the global secondary index:</p> <ul> <li> <p>
     * <code>CREATING</code> - The index is being created.</p> </li> <li> <p>
     * <code>UPDATING</code> - The index is being updated.</p> </li> <li> <p>
     * <code>DELETING</code> - The index is being deleted.</p> </li> <li> <p>
     * <code>ACTIVE</code> - The index is ready for use.</p> </li> </ul>
     */
    inline IndexStatus GetIndexStatus() const { return m_indexStatus; }
    inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }
    inline void SetIndexStatus(IndexStatus value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }
    inline GlobalSecondaryIndexDescription& WithIndexStatus(IndexStatus value) { SetIndexStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the index is currently backfilling. <i>Backfilling</i> is
     * the process of reading items from the table and determining whether they can be
     * added to the index. (Not all items will qualify: For example, a partition key
     * cannot have any duplicate values.) If an item can be added to the index,
     * DynamoDB will do so. After all items have been processed, the backfilling
     * operation is complete and <code>Backfilling</code> is false.</p> <p>You can
     * delete an index that is being created during the <code>Backfilling</code> phase
     * when <code>IndexStatus</code> is set to CREATING and <code>Backfilling</code> is
     * true. You can't delete the index that is being created when
     * <code>IndexStatus</code> is set to CREATING and <code>Backfilling</code> is
     * false. </p>  <p>For indexes that were created during a
     * <code>CreateTable</code> operation, the <code>Backfilling</code> attribute does
     * not appear in the <code>DescribeTable</code> output.</p> 
     */
    inline bool GetBackfilling() const { return m_backfilling; }
    inline bool BackfillingHasBeenSet() const { return m_backfillingHasBeenSet; }
    inline void SetBackfilling(bool value) { m_backfillingHasBeenSet = true; m_backfilling = value; }
    inline GlobalSecondaryIndexDescription& WithBackfilling(bool value) { SetBackfilling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Service,
     * Account, and Table Quotas</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ProvisionedThroughputDescription& GetProvisionedThroughput() const { return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    template<typename ProvisionedThroughputT = ProvisionedThroughputDescription>
    void SetProvisionedThroughput(ProvisionedThroughputT&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::forward<ProvisionedThroughputT>(value); }
    template<typename ProvisionedThroughputT = ProvisionedThroughputDescription>
    GlobalSecondaryIndexDescription& WithProvisionedThroughput(ProvisionedThroughputT&& value) { SetProvisionedThroughput(std::forward<ProvisionedThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size of the specified index, in bytes. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline long long GetIndexSizeBytes() const { return m_indexSizeBytes; }
    inline bool IndexSizeBytesHasBeenSet() const { return m_indexSizeBytesHasBeenSet; }
    inline void SetIndexSizeBytes(long long value) { m_indexSizeBytesHasBeenSet = true; m_indexSizeBytes = value; }
    inline GlobalSecondaryIndexDescription& WithIndexSizeBytes(long long value) { SetIndexSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of items in the specified index. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline long long GetItemCount() const { return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(long long value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline GlobalSecondaryIndexDescription& WithItemCount(long long value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the index.</p>
     */
    inline const Aws::String& GetIndexArn() const { return m_indexArn; }
    inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
    template<typename IndexArnT = Aws::String>
    void SetIndexArn(IndexArnT&& value) { m_indexArnHasBeenSet = true; m_indexArn = std::forward<IndexArnT>(value); }
    template<typename IndexArnT = Aws::String>
    GlobalSecondaryIndexDescription& WithIndexArn(IndexArnT&& value) { SetIndexArn(std::forward<IndexArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of read and write units for the specified global secondary
     * index. If you use this parameter, you must specify
     * <code>MaxReadRequestUnits</code>, <code>MaxWriteRequestUnits</code>, or
     * both.</p>
     */
    inline const OnDemandThroughput& GetOnDemandThroughput() const { return m_onDemandThroughput; }
    inline bool OnDemandThroughputHasBeenSet() const { return m_onDemandThroughputHasBeenSet; }
    template<typename OnDemandThroughputT = OnDemandThroughput>
    void SetOnDemandThroughput(OnDemandThroughputT&& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = std::forward<OnDemandThroughputT>(value); }
    template<typename OnDemandThroughputT = OnDemandThroughput>
    GlobalSecondaryIndexDescription& WithOnDemandThroughput(OnDemandThroughputT&& value) { SetOnDemandThroughput(std::forward<OnDemandThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the warm throughput value (in read units per second and write
     * units per second) for the specified secondary index.</p>
     */
    inline const GlobalSecondaryIndexWarmThroughputDescription& GetWarmThroughput() const { return m_warmThroughput; }
    inline bool WarmThroughputHasBeenSet() const { return m_warmThroughputHasBeenSet; }
    template<typename WarmThroughputT = GlobalSecondaryIndexWarmThroughputDescription>
    void SetWarmThroughput(WarmThroughputT&& value) { m_warmThroughputHasBeenSet = true; m_warmThroughput = std::forward<WarmThroughputT>(value); }
    template<typename WarmThroughputT = GlobalSecondaryIndexWarmThroughputDescription>
    GlobalSecondaryIndexDescription& WithWarmThroughput(WarmThroughputT&& value) { SetWarmThroughput(std::forward<WarmThroughputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    Projection m_projection;
    bool m_projectionHasBeenSet = false;

    IndexStatus m_indexStatus{IndexStatus::NOT_SET};
    bool m_indexStatusHasBeenSet = false;

    bool m_backfilling{false};
    bool m_backfillingHasBeenSet = false;

    ProvisionedThroughputDescription m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    long long m_indexSizeBytes{0};
    bool m_indexSizeBytesHasBeenSet = false;

    long long m_itemCount{0};
    bool m_itemCountHasBeenSet = false;

    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet = false;

    OnDemandThroughput m_onDemandThroughput;
    bool m_onDemandThroughputHasBeenSet = false;

    GlobalSecondaryIndexWarmThroughputDescription m_warmThroughput;
    bool m_warmThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
