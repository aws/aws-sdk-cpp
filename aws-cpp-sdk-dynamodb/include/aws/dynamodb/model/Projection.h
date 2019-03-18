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
  class AWS_DYNAMODB_API Projection
  {
  public:
    Projection();
    Projection(Aws::Utils::Json::JsonView jsonValue);
    Projection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The set of attributes that are projected into the index:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the index and primary keys are projected into the
     * index.</p> </li> <li> <p> <code>INCLUDE</code> - Only the specified table
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul>
     */
    inline const ProjectionType& GetProjectionType() const{ return m_projectionType; }

    /**
     * <p>The set of attributes that are projected into the index:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the index and primary keys are projected into the
     * index.</p> </li> <li> <p> <code>INCLUDE</code> - Only the specified table
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul>
     */
    inline bool ProjectionTypeHasBeenSet() const { return m_projectionTypeHasBeenSet; }

    /**
     * <p>The set of attributes that are projected into the index:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the index and primary keys are projected into the
     * index.</p> </li> <li> <p> <code>INCLUDE</code> - Only the specified table
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul>
     */
    inline void SetProjectionType(const ProjectionType& value) { m_projectionTypeHasBeenSet = true; m_projectionType = value; }

    /**
     * <p>The set of attributes that are projected into the index:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the index and primary keys are projected into the
     * index.</p> </li> <li> <p> <code>INCLUDE</code> - Only the specified table
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul>
     */
    inline void SetProjectionType(ProjectionType&& value) { m_projectionTypeHasBeenSet = true; m_projectionType = std::move(value); }

    /**
     * <p>The set of attributes that are projected into the index:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the index and primary keys are projected into the
     * index.</p> </li> <li> <p> <code>INCLUDE</code> - Only the specified table
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul>
     */
    inline Projection& WithProjectionType(const ProjectionType& value) { SetProjectionType(value); return *this;}

    /**
     * <p>The set of attributes that are projected into the index:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the index and primary keys are projected into the
     * index.</p> </li> <li> <p> <code>INCLUDE</code> - Only the specified table
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul>
     */
    inline Projection& WithProjectionType(ProjectionType&& value) { SetProjectionType(std::move(value)); return *this;}


    /**
     * <p>Represents the non-key attribute names which will be projected into the
     * index.</p> <p>For local secondary indexes, the total count of
     * <code>NonKeyAttributes</code> summed across all of the local secondary indexes,
     * must not exceed 20. If you project the same attribute into two different
     * indexes, this counts as two distinct attributes when determining the total.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNonKeyAttributes() const{ return m_nonKeyAttributes; }

    /**
     * <p>Represents the non-key attribute names which will be projected into the
     * index.</p> <p>For local secondary indexes, the total count of
     * <code>NonKeyAttributes</code> summed across all of the local secondary indexes,
     * must not exceed 20. If you project the same attribute into two different
     * indexes, this counts as two distinct attributes when determining the total.</p>
     */
    inline bool NonKeyAttributesHasBeenSet() const { return m_nonKeyAttributesHasBeenSet; }

    /**
     * <p>Represents the non-key attribute names which will be projected into the
     * index.</p> <p>For local secondary indexes, the total count of
     * <code>NonKeyAttributes</code> summed across all of the local secondary indexes,
     * must not exceed 20. If you project the same attribute into two different
     * indexes, this counts as two distinct attributes when determining the total.</p>
     */
    inline void SetNonKeyAttributes(const Aws::Vector<Aws::String>& value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes = value; }

    /**
     * <p>Represents the non-key attribute names which will be projected into the
     * index.</p> <p>For local secondary indexes, the total count of
     * <code>NonKeyAttributes</code> summed across all of the local secondary indexes,
     * must not exceed 20. If you project the same attribute into two different
     * indexes, this counts as two distinct attributes when determining the total.</p>
     */
    inline void SetNonKeyAttributes(Aws::Vector<Aws::String>&& value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes = std::move(value); }

    /**
     * <p>Represents the non-key attribute names which will be projected into the
     * index.</p> <p>For local secondary indexes, the total count of
     * <code>NonKeyAttributes</code> summed across all of the local secondary indexes,
     * must not exceed 20. If you project the same attribute into two different
     * indexes, this counts as two distinct attributes when determining the total.</p>
     */
    inline Projection& WithNonKeyAttributes(const Aws::Vector<Aws::String>& value) { SetNonKeyAttributes(value); return *this;}

    /**
     * <p>Represents the non-key attribute names which will be projected into the
     * index.</p> <p>For local secondary indexes, the total count of
     * <code>NonKeyAttributes</code> summed across all of the local secondary indexes,
     * must not exceed 20. If you project the same attribute into two different
     * indexes, this counts as two distinct attributes when determining the total.</p>
     */
    inline Projection& WithNonKeyAttributes(Aws::Vector<Aws::String>&& value) { SetNonKeyAttributes(std::move(value)); return *this;}

    /**
     * <p>Represents the non-key attribute names which will be projected into the
     * index.</p> <p>For local secondary indexes, the total count of
     * <code>NonKeyAttributes</code> summed across all of the local secondary indexes,
     * must not exceed 20. If you project the same attribute into two different
     * indexes, this counts as two distinct attributes when determining the total.</p>
     */
    inline Projection& AddNonKeyAttributes(const Aws::String& value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes.push_back(value); return *this; }

    /**
     * <p>Represents the non-key attribute names which will be projected into the
     * index.</p> <p>For local secondary indexes, the total count of
     * <code>NonKeyAttributes</code> summed across all of the local secondary indexes,
     * must not exceed 20. If you project the same attribute into two different
     * indexes, this counts as two distinct attributes when determining the total.</p>
     */
    inline Projection& AddNonKeyAttributes(Aws::String&& value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes.push_back(std::move(value)); return *this; }

    /**
     * <p>Represents the non-key attribute names which will be projected into the
     * index.</p> <p>For local secondary indexes, the total count of
     * <code>NonKeyAttributes</code> summed across all of the local secondary indexes,
     * must not exceed 20. If you project the same attribute into two different
     * indexes, this counts as two distinct attributes when determining the total.</p>
     */
    inline Projection& AddNonKeyAttributes(const char* value) { m_nonKeyAttributesHasBeenSet = true; m_nonKeyAttributes.push_back(value); return *this; }

  private:

    ProjectionType m_projectionType;
    bool m_projectionTypeHasBeenSet;

    Aws::Vector<Aws::String> m_nonKeyAttributes;
    bool m_nonKeyAttributesHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
