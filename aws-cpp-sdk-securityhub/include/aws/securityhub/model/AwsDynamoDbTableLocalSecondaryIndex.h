/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsDynamoDbTableProjection.h>
#include <aws/securityhub/model/AwsDynamoDbTableKeySchema.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a local secondary index for a DynamoDB table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableLocalSecondaryIndex">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableLocalSecondaryIndex
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableLocalSecondaryIndex();
    AWS_SECURITYHUB_API AwsDynamoDbTableLocalSecondaryIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableLocalSecondaryIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the index.</p>
     */
    inline const Aws::String& GetIndexArn() const{ return m_indexArn; }

    /**
     * <p>The ARN of the index.</p>
     */
    inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }

    /**
     * <p>The ARN of the index.</p>
     */
    inline void SetIndexArn(const Aws::String& value) { m_indexArnHasBeenSet = true; m_indexArn = value; }

    /**
     * <p>The ARN of the index.</p>
     */
    inline void SetIndexArn(Aws::String&& value) { m_indexArnHasBeenSet = true; m_indexArn = std::move(value); }

    /**
     * <p>The ARN of the index.</p>
     */
    inline void SetIndexArn(const char* value) { m_indexArnHasBeenSet = true; m_indexArn.assign(value); }

    /**
     * <p>The ARN of the index.</p>
     */
    inline AwsDynamoDbTableLocalSecondaryIndex& WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}

    /**
     * <p>The ARN of the index.</p>
     */
    inline AwsDynamoDbTableLocalSecondaryIndex& WithIndexArn(Aws::String&& value) { SetIndexArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the index.</p>
     */
    inline AwsDynamoDbTableLocalSecondaryIndex& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}


    /**
     * <p>The name of the index.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the index.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the index.</p>
     */
    inline AwsDynamoDbTableLocalSecondaryIndex& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the index.</p>
     */
    inline AwsDynamoDbTableLocalSecondaryIndex& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the index.</p>
     */
    inline AwsDynamoDbTableLocalSecondaryIndex& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The complete key schema for the index.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableKeySchema>& GetKeySchema() const{ return m_keySchema; }

    /**
     * <p>The complete key schema for the index.</p>
     */
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }

    /**
     * <p>The complete key schema for the index.</p>
     */
    inline void SetKeySchema(const Aws::Vector<AwsDynamoDbTableKeySchema>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /**
     * <p>The complete key schema for the index.</p>
     */
    inline void SetKeySchema(Aws::Vector<AwsDynamoDbTableKeySchema>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }

    /**
     * <p>The complete key schema for the index.</p>
     */
    inline AwsDynamoDbTableLocalSecondaryIndex& WithKeySchema(const Aws::Vector<AwsDynamoDbTableKeySchema>& value) { SetKeySchema(value); return *this;}

    /**
     * <p>The complete key schema for the index.</p>
     */
    inline AwsDynamoDbTableLocalSecondaryIndex& WithKeySchema(Aws::Vector<AwsDynamoDbTableKeySchema>&& value) { SetKeySchema(std::move(value)); return *this;}

    /**
     * <p>The complete key schema for the index.</p>
     */
    inline AwsDynamoDbTableLocalSecondaryIndex& AddKeySchema(const AwsDynamoDbTableKeySchema& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    /**
     * <p>The complete key schema for the index.</p>
     */
    inline AwsDynamoDbTableLocalSecondaryIndex& AddKeySchema(AwsDynamoDbTableKeySchema&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }


    /**
     * <p>Attributes that are copied from the table into the index. These are in
     * addition to the primary key attributes and index key attributes, which are
     * automatically projected.</p>
     */
    inline const AwsDynamoDbTableProjection& GetProjection() const{ return m_projection; }

    /**
     * <p>Attributes that are copied from the table into the index. These are in
     * addition to the primary key attributes and index key attributes, which are
     * automatically projected.</p>
     */
    inline bool ProjectionHasBeenSet() const { return m_projectionHasBeenSet; }

    /**
     * <p>Attributes that are copied from the table into the index. These are in
     * addition to the primary key attributes and index key attributes, which are
     * automatically projected.</p>
     */
    inline void SetProjection(const AwsDynamoDbTableProjection& value) { m_projectionHasBeenSet = true; m_projection = value; }

    /**
     * <p>Attributes that are copied from the table into the index. These are in
     * addition to the primary key attributes and index key attributes, which are
     * automatically projected.</p>
     */
    inline void SetProjection(AwsDynamoDbTableProjection&& value) { m_projectionHasBeenSet = true; m_projection = std::move(value); }

    /**
     * <p>Attributes that are copied from the table into the index. These are in
     * addition to the primary key attributes and index key attributes, which are
     * automatically projected.</p>
     */
    inline AwsDynamoDbTableLocalSecondaryIndex& WithProjection(const AwsDynamoDbTableProjection& value) { SetProjection(value); return *this;}

    /**
     * <p>Attributes that are copied from the table into the index. These are in
     * addition to the primary key attributes and index key attributes, which are
     * automatically projected.</p>
     */
    inline AwsDynamoDbTableLocalSecondaryIndex& WithProjection(AwsDynamoDbTableProjection&& value) { SetProjection(std::move(value)); return *this;}

  private:

    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::Vector<AwsDynamoDbTableKeySchema> m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    AwsDynamoDbTableProjection m_projection;
    bool m_projectionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
