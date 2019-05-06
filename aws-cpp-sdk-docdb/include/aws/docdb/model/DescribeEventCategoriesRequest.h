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
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/Filter.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>DescribeEventCategories</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeEventCategoriesMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API DescribeEventCategoriesRequest : public DocDBRequest
  {
  public:
    DescribeEventCategoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEventCategories"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The type of source that is generating the events.</p> <p>Valid values:
     * <code>db-instance</code>, <code>db-parameter-group</code>,
     * <code>db-security-group</code>, <code>db-snapshot</code> </p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The type of source that is generating the events.</p> <p>Valid values:
     * <code>db-instance</code>, <code>db-parameter-group</code>,
     * <code>db-security-group</code>, <code>db-snapshot</code> </p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The type of source that is generating the events.</p> <p>Valid values:
     * <code>db-instance</code>, <code>db-parameter-group</code>,
     * <code>db-security-group</code>, <code>db-snapshot</code> </p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The type of source that is generating the events.</p> <p>Valid values:
     * <code>db-instance</code>, <code>db-parameter-group</code>,
     * <code>db-security-group</code>, <code>db-snapshot</code> </p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The type of source that is generating the events.</p> <p>Valid values:
     * <code>db-instance</code>, <code>db-parameter-group</code>,
     * <code>db-security-group</code>, <code>db-snapshot</code> </p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The type of source that is generating the events.</p> <p>Valid values:
     * <code>db-instance</code>, <code>db-parameter-group</code>,
     * <code>db-security-group</code>, <code>db-snapshot</code> </p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The type of source that is generating the events.</p> <p>Valid values:
     * <code>db-instance</code>, <code>db-parameter-group</code>,
     * <code>db-security-group</code>, <code>db-snapshot</code> </p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The type of source that is generating the events.</p> <p>Valid values:
     * <code>db-instance</code>, <code>db-parameter-group</code>,
     * <code>db-security-group</code>, <code>db-snapshot</code> </p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEventCategoriesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEventCategoriesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEventCategoriesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEventCategoriesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
