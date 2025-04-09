/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ProjectionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents attributes that are copied (projected) from the table into an
   * index. These are in addition to the primary key attributes and index key
   * attributes, which are automatically projected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Projection">AWS
   * API Reference</a></p>
   */
  class Projection
  {
  public:
    AWS_DYNAMODB_API Projection() = default;
    AWS_DYNAMODB_API Projection(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Projection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The set of attributes that are projected into the index:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the index and primary keys are projected into the
     * index.</p> </li> <li> <p> <code>INCLUDE</code> - In addition to the attributes
     * described in <code>KEYS_ONLY</code>, the secondary index will include other
     * non-key attributes that you specify.</p> </li> <li> <p> <code>ALL</code> - All
     * of the table attributes are projected into the index.</p> </li> </ul> <p>When
     * using the DynamoDB console, <code>ALL</code> is selected by default.</p>
     */
    inline ProjectionType GetProjectionType() const { return m_projectionType; }
    inline bool ProjectionTypeHasBeenSet() const { return m_projectionTypeHasBeenSet; }
    inline void SetProjectionType(ProjectionType value) { m_projectionTypeHasBeenSet = true; m_projectionType = value; }
    inline Projection& WithProjectionType(ProjectionType value) { SetProjectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the non-key attribute names which will be projected into the
     * index.</p> <p>For global and local secondary indexes, the total count of
     * <code>NonKeyAttributes</code> summed across all of the secondary indexes, must
     * not exceed 100. If you project the same attribute into two different indexes,
     * this counts as two distinct attributes when determining the total. This limit
     * only applies when you specify the ProjectionType of <code>INCLUDE</code>. You
     * still can specify the ProjectionType of <code>ALL</code> to project all
     * attributes from the source table, even if the table has more than 100
     * attributes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNonKeyAttributes() const { return m_nonKeyAttributes; }
    inline bool NonKeyAttributesHasBeenSet() const { return m_nonKeyAttributesHasBeenSet; }
    template<typename NonKeyAttributesT = Aws::Vector<Aws::String>>
    void SetNonKeyAttributes(NonKeyAttributesT&& value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes = std::forward<NonKeyAttributesT>(value); }
    template<typename NonKeyAttributesT = Aws::Vector<Aws::String>>
    Projection& WithNonKeyAttributes(NonKeyAttributesT&& value) { SetNonKeyAttributes(std::forward<NonKeyAttributesT>(value)); return *this;}
    template<typename NonKeyAttributesT = Aws::String>
    Projection& AddNonKeyAttributes(NonKeyAttributesT&& value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes.emplace_back(std::forward<NonKeyAttributesT>(value)); return *this; }
    ///@}
  private:

    ProjectionType m_projectionType{ProjectionType::NOT_SET};
    bool m_projectionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_nonKeyAttributes;
    bool m_nonKeyAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
