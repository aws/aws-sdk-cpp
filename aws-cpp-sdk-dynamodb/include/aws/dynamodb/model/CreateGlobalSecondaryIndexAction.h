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
#include <aws/dynamodb/model/ProvisionedThroughput.h>
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
  class AWS_DYNAMODB_API CreateGlobalSecondaryIndexAction
  {
  public:
    CreateGlobalSecondaryIndexAction();
    CreateGlobalSecondaryIndexAction(Aws::Utils::Json::JsonView jsonValue);
    CreateGlobalSecondaryIndexAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the global secondary index to be created.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the global secondary index to be created.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the global secondary index to be created.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the global secondary index to be created.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the global secondary index to be created.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the global secondary index to be created.</p>
     */
    inline CreateGlobalSecondaryIndexAction& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the global secondary index to be created.</p>
     */
    inline CreateGlobalSecondaryIndexAction& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the global secondary index to be created.</p>
     */
    inline CreateGlobalSecondaryIndexAction& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The key schema for the global secondary index.</p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }

    /**
     * <p>The key schema for the global secondary index.</p>
     */
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }

    /**
     * <p>The key schema for the global secondary index.</p>
     */
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /**
     * <p>The key schema for the global secondary index.</p>
     */
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }

    /**
     * <p>The key schema for the global secondary index.</p>
     */
    inline CreateGlobalSecondaryIndexAction& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}

    /**
     * <p>The key schema for the global secondary index.</p>
     */
    inline CreateGlobalSecondaryIndexAction& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(std::move(value)); return *this;}

    /**
     * <p>The key schema for the global secondary index.</p>
     */
    inline CreateGlobalSecondaryIndexAction& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    /**
     * <p>The key schema for the global secondary index.</p>
     */
    inline CreateGlobalSecondaryIndexAction& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents attributes that are copied (projected) from the table into an
     * index. These are in addition to the primary key attributes and index key
     * attributes, which are automatically projected.</p>
     */
    inline const Projection& GetProjection() const{ return m_projection; }

    /**
     * <p>Represents attributes that are copied (projected) from the table into an
     * index. These are in addition to the primary key attributes and index key
     * attributes, which are automatically projected.</p>
     */
    inline bool ProjectionHasBeenSet() const { return m_projectionHasBeenSet; }

    /**
     * <p>Represents attributes that are copied (projected) from the table into an
     * index. These are in addition to the primary key attributes and index key
     * attributes, which are automatically projected.</p>
     */
    inline void SetProjection(const Projection& value) { m_projectionHasBeenSet = true; m_projection = value; }

    /**
     * <p>Represents attributes that are copied (projected) from the table into an
     * index. These are in addition to the primary key attributes and index key
     * attributes, which are automatically projected.</p>
     */
    inline void SetProjection(Projection&& value) { m_projectionHasBeenSet = true; m_projection = std::move(value); }

    /**
     * <p>Represents attributes that are copied (projected) from the table into an
     * index. These are in addition to the primary key attributes and index key
     * attributes, which are automatically projected.</p>
     */
    inline CreateGlobalSecondaryIndexAction& WithProjection(const Projection& value) { SetProjection(value); return *this;}

    /**
     * <p>Represents attributes that are copied (projected) from the table into an
     * index. These are in addition to the primary key attributes and index key
     * attributes, which are automatically projected.</p>
     */
    inline CreateGlobalSecondaryIndexAction& WithProjection(Projection&& value) { SetProjection(std::move(value)); return *this;}


    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }

    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }

    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }

    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline CreateGlobalSecondaryIndexAction& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}

    /**
     * <p>Represents the provisioned throughput settings for the specified global
     * secondary index.</p> <p>For current minimum and maximum provisioned throughput
     * values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline CreateGlobalSecondaryIndexAction& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet;

    Projection m_projection;
    bool m_projectionHasBeenSet;

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
