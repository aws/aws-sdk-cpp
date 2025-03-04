/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Projection.h>
#include <aws/dynamodb/model/ProvisionedThroughput.h>
#include <aws/dynamodb/model/OnDemandThroughput.h>
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
   * <p>Represents the properties of a global secondary index for the table when the
   * backup was created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GlobalSecondaryIndexInfo">AWS
   * API Reference</a></p>
   */
  class GlobalSecondaryIndexInfo
  {
  public:
    AWS_DYNAMODB_API GlobalSecondaryIndexInfo() = default;
    AWS_DYNAMODB_API GlobalSecondaryIndexInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API GlobalSecondaryIndexInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    GlobalSecondaryIndexInfo& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
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
    GlobalSecondaryIndexInfo& WithKeySchema(KeySchemaT&& value) { SetKeySchema(std::forward<KeySchemaT>(value)); return *this;}
    template<typename KeySchemaT = KeySchemaElement>
    GlobalSecondaryIndexInfo& AddKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema.emplace_back(std::forward<KeySchemaT>(value)); return *this; }
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
    GlobalSecondaryIndexInfo& WithProjection(ProjectionT&& value) { SetProjection(std::forward<ProjectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index. </p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const { return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    template<typename ProvisionedThroughputT = ProvisionedThroughput>
    void SetProvisionedThroughput(ProvisionedThroughputT&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::forward<ProvisionedThroughputT>(value); }
    template<typename ProvisionedThroughputT = ProvisionedThroughput>
    GlobalSecondaryIndexInfo& WithProvisionedThroughput(ProvisionedThroughputT&& value) { SetProvisionedThroughput(std::forward<ProvisionedThroughputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OnDemandThroughput& GetOnDemandThroughput() const { return m_onDemandThroughput; }
    inline bool OnDemandThroughputHasBeenSet() const { return m_onDemandThroughputHasBeenSet; }
    template<typename OnDemandThroughputT = OnDemandThroughput>
    void SetOnDemandThroughput(OnDemandThroughputT&& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = std::forward<OnDemandThroughputT>(value); }
    template<typename OnDemandThroughputT = OnDemandThroughput>
    GlobalSecondaryIndexInfo& WithOnDemandThroughput(OnDemandThroughputT&& value) { SetOnDemandThroughput(std::forward<OnDemandThroughputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    Projection m_projection;
    bool m_projectionHasBeenSet = false;

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    OnDemandThroughput m_onDemandThroughput;
    bool m_onDemandThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
