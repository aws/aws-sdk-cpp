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
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>A logical grouping of Performance Insights metrics for a related subject
   * area. For example, the <code>db.sql</code> dimension group consists of the
   * following dimensions: <code>db.sql.id</code>, <code>db.sql.db_id</code>,
   * <code>db.sql.statement</code>, and
   * <code>db.sql.tokenized_id</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DimensionGroup">AWS
   * API Reference</a></p>
   */
  class AWS_PI_API DimensionGroup
  {
  public:
    DimensionGroup();
    DimensionGroup(Aws::Utils::Json::JsonView jsonValue);
    DimensionGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dimension group. Valid values are:</p> <ul> <li> <p>
     * <code>db.user</code> </p> </li> <li> <p> <code>db.host</code> </p> </li> <li>
     * <p> <code>db.sql</code> </p> </li> <li> <p> <code>db.sql_tokenized</code> </p>
     * </li> <li> <p> <code>db.wait_event</code> </p> </li> <li> <p>
     * <code>db.wait_event_type</code> </p> </li> </ul>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name of the dimension group. Valid values are:</p> <ul> <li> <p>
     * <code>db.user</code> </p> </li> <li> <p> <code>db.host</code> </p> </li> <li>
     * <p> <code>db.sql</code> </p> </li> <li> <p> <code>db.sql_tokenized</code> </p>
     * </li> <li> <p> <code>db.wait_event</code> </p> </li> <li> <p>
     * <code>db.wait_event_type</code> </p> </li> </ul>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name of the dimension group. Valid values are:</p> <ul> <li> <p>
     * <code>db.user</code> </p> </li> <li> <p> <code>db.host</code> </p> </li> <li>
     * <p> <code>db.sql</code> </p> </li> <li> <p> <code>db.sql_tokenized</code> </p>
     * </li> <li> <p> <code>db.wait_event</code> </p> </li> <li> <p>
     * <code>db.wait_event_type</code> </p> </li> </ul>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name of the dimension group. Valid values are:</p> <ul> <li> <p>
     * <code>db.user</code> </p> </li> <li> <p> <code>db.host</code> </p> </li> <li>
     * <p> <code>db.sql</code> </p> </li> <li> <p> <code>db.sql_tokenized</code> </p>
     * </li> <li> <p> <code>db.wait_event</code> </p> </li> <li> <p>
     * <code>db.wait_event_type</code> </p> </li> </ul>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name of the dimension group. Valid values are:</p> <ul> <li> <p>
     * <code>db.user</code> </p> </li> <li> <p> <code>db.host</code> </p> </li> <li>
     * <p> <code>db.sql</code> </p> </li> <li> <p> <code>db.sql_tokenized</code> </p>
     * </li> <li> <p> <code>db.wait_event</code> </p> </li> <li> <p>
     * <code>db.wait_event_type</code> </p> </li> </ul>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name of the dimension group. Valid values are:</p> <ul> <li> <p>
     * <code>db.user</code> </p> </li> <li> <p> <code>db.host</code> </p> </li> <li>
     * <p> <code>db.sql</code> </p> </li> <li> <p> <code>db.sql_tokenized</code> </p>
     * </li> <li> <p> <code>db.wait_event</code> </p> </li> <li> <p>
     * <code>db.wait_event_type</code> </p> </li> </ul>
     */
    inline DimensionGroup& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name of the dimension group. Valid values are:</p> <ul> <li> <p>
     * <code>db.user</code> </p> </li> <li> <p> <code>db.host</code> </p> </li> <li>
     * <p> <code>db.sql</code> </p> </li> <li> <p> <code>db.sql_tokenized</code> </p>
     * </li> <li> <p> <code>db.wait_event</code> </p> </li> <li> <p>
     * <code>db.wait_event_type</code> </p> </li> </ul>
     */
    inline DimensionGroup& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the dimension group. Valid values are:</p> <ul> <li> <p>
     * <code>db.user</code> </p> </li> <li> <p> <code>db.host</code> </p> </li> <li>
     * <p> <code>db.sql</code> </p> </li> <li> <p> <code>db.sql_tokenized</code> </p>
     * </li> <li> <p> <code>db.wait_event</code> </p> </li> <li> <p>
     * <code>db.wait_event_type</code> </p> </li> </ul>
     */
    inline DimensionGroup& WithGroup(const char* value) { SetGroup(value); return *this;}


    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested, or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>db.user.id</p> </li>
     * <li> <p>db.user.name</p> </li> <li> <p>db.host.id</p> </li> <li>
     * <p>db.host.name</p> </li> <li> <p>db.sql.id</p> </li> <li> <p>db.sql.db_id</p>
     * </li> <li> <p>db.sql.statement</p> </li> <li> <p>db.sql.tokenized_id</p> </li>
     * <li> <p>db.sql_tokenized.id</p> </li> <li> <p>db.sql_tokenized.db_id</p> </li>
     * <li> <p>db.sql_tokenized.statement</p> </li> <li> <p>db.wait_event.name</p>
     * </li> <li> <p>db.wait_event.type</p> </li> <li> <p>db.wait_event_type.name</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested, or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>db.user.id</p> </li>
     * <li> <p>db.user.name</p> </li> <li> <p>db.host.id</p> </li> <li>
     * <p>db.host.name</p> </li> <li> <p>db.sql.id</p> </li> <li> <p>db.sql.db_id</p>
     * </li> <li> <p>db.sql.statement</p> </li> <li> <p>db.sql.tokenized_id</p> </li>
     * <li> <p>db.sql_tokenized.id</p> </li> <li> <p>db.sql_tokenized.db_id</p> </li>
     * <li> <p>db.sql_tokenized.statement</p> </li> <li> <p>db.wait_event.name</p>
     * </li> <li> <p>db.wait_event.type</p> </li> <li> <p>db.wait_event_type.name</p>
     * </li> </ul>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested, or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>db.user.id</p> </li>
     * <li> <p>db.user.name</p> </li> <li> <p>db.host.id</p> </li> <li>
     * <p>db.host.name</p> </li> <li> <p>db.sql.id</p> </li> <li> <p>db.sql.db_id</p>
     * </li> <li> <p>db.sql.statement</p> </li> <li> <p>db.sql.tokenized_id</p> </li>
     * <li> <p>db.sql_tokenized.id</p> </li> <li> <p>db.sql_tokenized.db_id</p> </li>
     * <li> <p>db.sql_tokenized.statement</p> </li> <li> <p>db.wait_event.name</p>
     * </li> <li> <p>db.wait_event.type</p> </li> <li> <p>db.wait_event_type.name</p>
     * </li> </ul>
     */
    inline void SetDimensions(const Aws::Vector<Aws::String>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested, or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>db.user.id</p> </li>
     * <li> <p>db.user.name</p> </li> <li> <p>db.host.id</p> </li> <li>
     * <p>db.host.name</p> </li> <li> <p>db.sql.id</p> </li> <li> <p>db.sql.db_id</p>
     * </li> <li> <p>db.sql.statement</p> </li> <li> <p>db.sql.tokenized_id</p> </li>
     * <li> <p>db.sql_tokenized.id</p> </li> <li> <p>db.sql_tokenized.db_id</p> </li>
     * <li> <p>db.sql_tokenized.statement</p> </li> <li> <p>db.wait_event.name</p>
     * </li> <li> <p>db.wait_event.type</p> </li> <li> <p>db.wait_event_type.name</p>
     * </li> </ul>
     */
    inline void SetDimensions(Aws::Vector<Aws::String>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested, or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>db.user.id</p> </li>
     * <li> <p>db.user.name</p> </li> <li> <p>db.host.id</p> </li> <li>
     * <p>db.host.name</p> </li> <li> <p>db.sql.id</p> </li> <li> <p>db.sql.db_id</p>
     * </li> <li> <p>db.sql.statement</p> </li> <li> <p>db.sql.tokenized_id</p> </li>
     * <li> <p>db.sql_tokenized.id</p> </li> <li> <p>db.sql_tokenized.db_id</p> </li>
     * <li> <p>db.sql_tokenized.statement</p> </li> <li> <p>db.wait_event.name</p>
     * </li> <li> <p>db.wait_event.type</p> </li> <li> <p>db.wait_event_type.name</p>
     * </li> </ul>
     */
    inline DimensionGroup& WithDimensions(const Aws::Vector<Aws::String>& value) { SetDimensions(value); return *this;}

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested, or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>db.user.id</p> </li>
     * <li> <p>db.user.name</p> </li> <li> <p>db.host.id</p> </li> <li>
     * <p>db.host.name</p> </li> <li> <p>db.sql.id</p> </li> <li> <p>db.sql.db_id</p>
     * </li> <li> <p>db.sql.statement</p> </li> <li> <p>db.sql.tokenized_id</p> </li>
     * <li> <p>db.sql_tokenized.id</p> </li> <li> <p>db.sql_tokenized.db_id</p> </li>
     * <li> <p>db.sql_tokenized.statement</p> </li> <li> <p>db.wait_event.name</p>
     * </li> <li> <p>db.wait_event.type</p> </li> <li> <p>db.wait_event_type.name</p>
     * </li> </ul>
     */
    inline DimensionGroup& WithDimensions(Aws::Vector<Aws::String>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested, or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>db.user.id</p> </li>
     * <li> <p>db.user.name</p> </li> <li> <p>db.host.id</p> </li> <li>
     * <p>db.host.name</p> </li> <li> <p>db.sql.id</p> </li> <li> <p>db.sql.db_id</p>
     * </li> <li> <p>db.sql.statement</p> </li> <li> <p>db.sql.tokenized_id</p> </li>
     * <li> <p>db.sql_tokenized.id</p> </li> <li> <p>db.sql_tokenized.db_id</p> </li>
     * <li> <p>db.sql_tokenized.statement</p> </li> <li> <p>db.wait_event.name</p>
     * </li> <li> <p>db.wait_event.type</p> </li> <li> <p>db.wait_event_type.name</p>
     * </li> </ul>
     */
    inline DimensionGroup& AddDimensions(const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested, or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>db.user.id</p> </li>
     * <li> <p>db.user.name</p> </li> <li> <p>db.host.id</p> </li> <li>
     * <p>db.host.name</p> </li> <li> <p>db.sql.id</p> </li> <li> <p>db.sql.db_id</p>
     * </li> <li> <p>db.sql.statement</p> </li> <li> <p>db.sql.tokenized_id</p> </li>
     * <li> <p>db.sql_tokenized.id</p> </li> <li> <p>db.sql_tokenized.db_id</p> </li>
     * <li> <p>db.sql_tokenized.statement</p> </li> <li> <p>db.wait_event.name</p>
     * </li> <li> <p>db.wait_event.type</p> </li> <li> <p>db.wait_event_type.name</p>
     * </li> </ul>
     */
    inline DimensionGroup& AddDimensions(Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested, or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>db.user.id</p> </li>
     * <li> <p>db.user.name</p> </li> <li> <p>db.host.id</p> </li> <li>
     * <p>db.host.name</p> </li> <li> <p>db.sql.id</p> </li> <li> <p>db.sql.db_id</p>
     * </li> <li> <p>db.sql.statement</p> </li> <li> <p>db.sql.tokenized_id</p> </li>
     * <li> <p>db.sql_tokenized.id</p> </li> <li> <p>db.sql_tokenized.db_id</p> </li>
     * <li> <p>db.sql_tokenized.statement</p> </li> <li> <p>db.wait_event.name</p>
     * </li> <li> <p>db.wait_event.type</p> </li> <li> <p>db.wait_event_type.name</p>
     * </li> </ul>
     */
    inline DimensionGroup& AddDimensions(const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }


    /**
     * <p>The maximum number of items to fetch for this dimension group.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items to fetch for this dimension group.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items to fetch for this dimension group.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items to fetch for this dimension group.</p>
     */
    inline DimensionGroup& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_group;
    bool m_groupHasBeenSet;

    Aws::Vector<Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
