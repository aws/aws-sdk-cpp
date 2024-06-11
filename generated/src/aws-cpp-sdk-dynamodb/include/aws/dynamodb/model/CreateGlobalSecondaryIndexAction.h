﻿/**
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
   * <p>Represents a new global secondary index to be added to an existing
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateGlobalSecondaryIndexAction">AWS
   * API Reference</a></p>
   */
  class CreateGlobalSecondaryIndexAction
  {
  public:
    AWS_DYNAMODB_API CreateGlobalSecondaryIndexAction();
    AWS_DYNAMODB_API CreateGlobalSecondaryIndexAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API CreateGlobalSecondaryIndexAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the global secondary index to be created.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline CreateGlobalSecondaryIndexAction& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline CreateGlobalSecondaryIndexAction& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline CreateGlobalSecondaryIndexAction& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key schema for the global secondary index.</p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }
    inline CreateGlobalSecondaryIndexAction& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}
    inline CreateGlobalSecondaryIndexAction& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(std::move(value)); return *this;}
    inline CreateGlobalSecondaryIndexAction& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }
    inline CreateGlobalSecondaryIndexAction& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents attributes that are copied (projected) from the table into an
     * index. These are in addition to the primary key attributes and index key
     * attributes, which are automatically projected.</p>
     */
    inline const Projection& GetProjection() const{ return m_projection; }
    inline bool ProjectionHasBeenSet() const { return m_projectionHasBeenSet; }
    inline void SetProjection(const Projection& value) { m_projectionHasBeenSet = true; m_projection = value; }
    inline void SetProjection(Projection&& value) { m_projectionHasBeenSet = true; m_projection = std::move(value); }
    inline CreateGlobalSecondaryIndexAction& WithProjection(const Projection& value) { SetProjection(value); return *this;}
    inline CreateGlobalSecondaryIndexAction& WithProjection(Projection&& value) { SetProjection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Service,
     * Account, and Table Quotas</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }
    inline CreateGlobalSecondaryIndexAction& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}
    inline CreateGlobalSecondaryIndexAction& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of read and write units for the global secondary index
     * being created. If you use this parameter, you must specify
     * <code>MaxReadRequestUnits</code>, <code>MaxWriteRequestUnits</code>, or
     * both.</p>
     */
    inline const OnDemandThroughput& GetOnDemandThroughput() const{ return m_onDemandThroughput; }
    inline bool OnDemandThroughputHasBeenSet() const { return m_onDemandThroughputHasBeenSet; }
    inline void SetOnDemandThroughput(const OnDemandThroughput& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = value; }
    inline void SetOnDemandThroughput(OnDemandThroughput&& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = std::move(value); }
    inline CreateGlobalSecondaryIndexAction& WithOnDemandThroughput(const OnDemandThroughput& value) { SetOnDemandThroughput(value); return *this;}
    inline CreateGlobalSecondaryIndexAction& WithOnDemandThroughput(OnDemandThroughput&& value) { SetOnDemandThroughput(std::move(value)); return *this;}
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
