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
   * <p>Represents the properties of a local secondary index for the table when the
   * backup was created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/LocalSecondaryIndexInfo">AWS
   * API Reference</a></p>
   */
  class LocalSecondaryIndexInfo
  {
  public:
    AWS_DYNAMODB_API LocalSecondaryIndexInfo() = default;
    AWS_DYNAMODB_API LocalSecondaryIndexInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API LocalSecondaryIndexInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the name of the local secondary index.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    LocalSecondaryIndexInfo& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The complete key schema for a local secondary index, which consists of one or
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
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const { return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    template<typename KeySchemaT = Aws::Vector<KeySchemaElement>>
    void SetKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::forward<KeySchemaT>(value); }
    template<typename KeySchemaT = Aws::Vector<KeySchemaElement>>
    LocalSecondaryIndexInfo& WithKeySchema(KeySchemaT&& value) { SetKeySchema(std::forward<KeySchemaT>(value)); return *this;}
    template<typename KeySchemaT = KeySchemaElement>
    LocalSecondaryIndexInfo& AddKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema.emplace_back(std::forward<KeySchemaT>(value)); return *this; }
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
    LocalSecondaryIndexInfo& WithProjection(ProjectionT&& value) { SetProjection(std::forward<ProjectionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    Projection m_projection;
    bool m_projectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
