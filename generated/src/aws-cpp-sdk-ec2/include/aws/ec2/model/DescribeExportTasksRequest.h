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
    AWS_EC2_API DescribeExportTasksRequest() = default;

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
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeExportTasksRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeExportTasksRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The export task IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportTaskIds() const { return m_exportTaskIds; }
    inline bool ExportTaskIdsHasBeenSet() const { return m_exportTaskIdsHasBeenSet; }
    template<typename ExportTaskIdsT = Aws::Vector<Aws::String>>
    void SetExportTaskIds(ExportTaskIdsT&& value) { m_exportTaskIdsHasBeenSet = true; m_exportTaskIds = std::forward<ExportTaskIdsT>(value); }
    template<typename ExportTaskIdsT = Aws::Vector<Aws::String>>
    DescribeExportTasksRequest& WithExportTaskIds(ExportTaskIdsT&& value) { SetExportTaskIds(std::forward<ExportTaskIdsT>(value)); return *this;}
    template<typename ExportTaskIdsT = Aws::String>
    DescribeExportTasksRequest& AddExportTaskIds(ExportTaskIdsT&& value) { m_exportTaskIdsHasBeenSet = true; m_exportTaskIds.emplace_back(std::forward<ExportTaskIdsT>(value)); return *this; }
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
