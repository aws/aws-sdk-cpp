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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeExportTasks.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeExportTasksRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeExportTasksRequest : public EC2Request
  {
  public:
    DescribeExportTasksRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExportTasks"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more export task IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportTaskIds() const{ return m_exportTaskIds; }

    /**
     * <p>One or more export task IDs.</p>
     */
    inline void SetExportTaskIds(const Aws::Vector<Aws::String>& value) { m_exportTaskIdsHasBeenSet = true; m_exportTaskIds = value; }

    /**
     * <p>One or more export task IDs.</p>
     */
    inline void SetExportTaskIds(Aws::Vector<Aws::String>&& value) { m_exportTaskIdsHasBeenSet = true; m_exportTaskIds = std::move(value); }

    /**
     * <p>One or more export task IDs.</p>
     */
    inline DescribeExportTasksRequest& WithExportTaskIds(const Aws::Vector<Aws::String>& value) { SetExportTaskIds(value); return *this;}

    /**
     * <p>One or more export task IDs.</p>
     */
    inline DescribeExportTasksRequest& WithExportTaskIds(Aws::Vector<Aws::String>&& value) { SetExportTaskIds(std::move(value)); return *this;}

    /**
     * <p>One or more export task IDs.</p>
     */
    inline DescribeExportTasksRequest& AddExportTaskIds(const Aws::String& value) { m_exportTaskIdsHasBeenSet = true; m_exportTaskIds.push_back(value); return *this; }

    /**
     * <p>One or more export task IDs.</p>
     */
    inline DescribeExportTasksRequest& AddExportTaskIds(Aws::String&& value) { m_exportTaskIdsHasBeenSet = true; m_exportTaskIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more export task IDs.</p>
     */
    inline DescribeExportTasksRequest& AddExportTaskIds(const char* value) { m_exportTaskIdsHasBeenSet = true; m_exportTaskIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_exportTaskIds;
    bool m_exportTaskIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
