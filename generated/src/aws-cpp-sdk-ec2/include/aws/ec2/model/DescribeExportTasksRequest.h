/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeExportTasksRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeExportTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExportTasks"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>the filters for the export tasks.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeExportTasksRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeExportTasksRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeExportTasksRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeExportTasksRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The export task IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportTaskIds() const{ return m_exportTaskIds; }
    inline bool ExportTaskIdsHasBeenSet() const { return m_exportTaskIdsHasBeenSet; }
    inline void SetExportTaskIds(const Aws::Vector<Aws::String>& value) { m_exportTaskIdsHasBeenSet = true; m_exportTaskIds = value; }
    inline void SetExportTaskIds(Aws::Vector<Aws::String>&& value) { m_exportTaskIdsHasBeenSet = true; m_exportTaskIds = std::move(value); }
    inline DescribeExportTasksRequest& WithExportTaskIds(const Aws::Vector<Aws::String>& value) { SetExportTaskIds(value); return *this;}
    inline DescribeExportTasksRequest& WithExportTaskIds(Aws::Vector<Aws::String>&& value) { SetExportTaskIds(std::move(value)); return *this;}
    inline DescribeExportTasksRequest& AddExportTaskIds(const Aws::String& value) { m_exportTaskIdsHasBeenSet = true; m_exportTaskIds.push_back(value); return *this; }
    inline DescribeExportTasksRequest& AddExportTaskIds(Aws::String&& value) { m_exportTaskIdsHasBeenSet = true; m_exportTaskIds.push_back(std::move(value)); return *this; }
    inline DescribeExportTasksRequest& AddExportTaskIds(const char* value) { m_exportTaskIdsHasBeenSet = true; m_exportTaskIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_exportTaskIds;
    bool m_exportTaskIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
