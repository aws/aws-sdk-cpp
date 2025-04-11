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
#include <aws/dynamodb/model/WarmThroughput.h>
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
   * <p>Represents a new global secondary index to be added to an existing
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateGlobalSecondaryIndexAction">AWS
   * API Reference</a></p>
   */
  class CreateGlobalSecondaryIndexAction
  {
  public:
    AWS_DYNAMODB_API CreateGlobalSecondaryIndexAction() = default;
    AWS_DYNAMODB_API CreateGlobalSecondaryIndexAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API CreateGlobalSecondaryIndexAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the global secondary index to be created.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    CreateGlobalSecondaryIndexAction& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key schema for the global secondary index.</p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const { return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    template<typename KeySchemaT = Aws::Vector<KeySchemaElement>>
    void SetKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::forward<KeySchemaT>(value); }
    template<typename KeySchemaT = Aws::Vector<KeySchemaElement>>
    CreateGlobalSecondaryIndexAction& WithKeySchema(KeySchemaT&& value) { SetKeySchema(std::forward<KeySchemaT>(value)); return *this;}
    template<typename KeySchemaT = KeySchemaElement>
    CreateGlobalSecondaryIndexAction& AddKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema.emplace_back(std::forward<KeySchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents attributes that are copied (projected) from the table into an
     * index. These are in addition to the primary key attributes and index key
     * attributes, which are automatically projected.</p>
     */
    inline const Projection& GetProjection() const { return m_projection; }
    inline bool ProjectionHasBeenSet() const { return m_projectionHasBeenSet; }
    template<typename ProjectionT = Projection>
    void SetProjection(ProjectionT&& value) { m_projectionHasBeenSet = true; m_projection = std::forward<ProjectionT>(value); }
    template<typename ProjectionT = Projection>
    CreateGlobalSecondaryIndexAction& WithProjection(ProjectionT&& value) { SetProjection(std::forward<ProjectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Service,
     * Account, and Table Quotas</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const { return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    template<typename ProvisionedThroughputT = ProvisionedThroughput>
    void SetProvisionedThroughput(ProvisionedThroughputT&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::forward<ProvisionedThroughputT>(value); }
    template<typename ProvisionedThroughputT = ProvisionedThroughput>
    CreateGlobalSecondaryIndexAction& WithProvisionedThroughput(ProvisionedThroughputT&& value) { SetProvisionedThroughput(std::forward<ProvisionedThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of read and write units for the global secondary index
     * being created. If you use this parameter, you must specify
     * <code>MaxReadRequestUnits</code>, <code>MaxWriteRequestUnits</code>, or both.
     * You must use either <code>OnDemand Throughput</code> or
     * <code>ProvisionedThroughput</code> based on your table's capacity mode.</p>
     */
    inline const OnDemandThroughput& GetOnDemandThroughput() const { return m_onDemandThroughput; }
    inline bool OnDemandThroughputHasBeenSet() const { return m_onDemandThroughputHasBeenSet; }
    template<typename OnDemandThroughputT = OnDemandThroughput>
    void SetOnDemandThroughput(OnDemandThroughputT&& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = std::forward<OnDemandThroughputT>(value); }
    template<typename OnDemandThroughputT = OnDemandThroughput>
    CreateGlobalSecondaryIndexAction& WithOnDemandThroughput(OnDemandThroughputT&& value) { SetOnDemandThroughput(std::forward<OnDemandThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the warm throughput value (in read units per second and write
     * units per second) when creating a secondary index.</p>
     */
    inline const WarmThroughput& GetWarmThroughput() const { return m_warmThroughput; }
    inline bool WarmThroughputHasBeenSet() const { return m_warmThroughputHasBeenSet; }
    template<typename WarmThroughputT = WarmThroughput>
    void SetWarmThroughput(WarmThroughputT&& value) { m_warmThroughputHasBeenSet = true; m_warmThroughput = std::forward<WarmThroughputT>(value); }
    template<typename WarmThroughputT = WarmThroughput>
    CreateGlobalSecondaryIndexAction& WithWarmThroughput(WarmThroughputT&& value) { SetWarmThroughput(std::forward<WarmThroughputT>(value)); return *this;}
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

    WarmThroughput m_warmThroughput;
    bool m_warmThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
