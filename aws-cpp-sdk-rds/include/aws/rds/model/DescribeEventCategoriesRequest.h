/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API DescribeEventCategoriesRequest : public RDSRequest
  {
  public:
    DescribeEventCategoriesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The type of source that will be generating the events.</p> <p>Valid values:
     * db-instance | db-parameter-group | db-security-group | db-snapshot</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The type of source that will be generating the events.</p> <p>Valid values:
     * db-instance | db-parameter-group | db-security-group | db-snapshot</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The type of source that will be generating the events.</p> <p>Valid values:
     * db-instance | db-parameter-group | db-security-group | db-snapshot</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The type of source that will be generating the events.</p> <p>Valid values:
     * db-instance | db-parameter-group | db-security-group | db-snapshot</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The type of source that will be generating the events.</p> <p>Valid values:
     * db-instance | db-parameter-group | db-security-group | db-snapshot</p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The type of source that will be generating the events.</p> <p>Valid values:
     * db-instance | db-parameter-group | db-security-group | db-snapshot</p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(Aws::String&& value) { SetSourceType(value); return *this;}

    /**
     * <p>The type of source that will be generating the events.</p> <p>Valid values:
     * db-instance | db-parameter-group | db-security-group | db-snapshot</p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(const char* value) { SetSourceType(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEventCategoriesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEventCategoriesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEventCategoriesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEventCategoriesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

  private:
    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet;
    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
