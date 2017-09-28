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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CancelExportTask.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelExportTaskRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CancelExportTaskRequest : public EC2Request
  {
  public:
    CancelExportTaskRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelExportTask"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the export task. This is the ID returned by
     * <code>CreateInstanceExportTask</code>.</p>
     */
    inline const Aws::String& GetExportTaskId() const{ return m_exportTaskId; }

    /**
     * <p>The ID of the export task. This is the ID returned by
     * <code>CreateInstanceExportTask</code>.</p>
     */
    inline void SetExportTaskId(const Aws::String& value) { m_exportTaskIdHasBeenSet = true; m_exportTaskId = value; }

    /**
     * <p>The ID of the export task. This is the ID returned by
     * <code>CreateInstanceExportTask</code>.</p>
     */
    inline void SetExportTaskId(Aws::String&& value) { m_exportTaskIdHasBeenSet = true; m_exportTaskId = std::move(value); }

    /**
     * <p>The ID of the export task. This is the ID returned by
     * <code>CreateInstanceExportTask</code>.</p>
     */
    inline void SetExportTaskId(const char* value) { m_exportTaskIdHasBeenSet = true; m_exportTaskId.assign(value); }

    /**
     * <p>The ID of the export task. This is the ID returned by
     * <code>CreateInstanceExportTask</code>.</p>
     */
    inline CancelExportTaskRequest& WithExportTaskId(const Aws::String& value) { SetExportTaskId(value); return *this;}

    /**
     * <p>The ID of the export task. This is the ID returned by
     * <code>CreateInstanceExportTask</code>.</p>
     */
    inline CancelExportTaskRequest& WithExportTaskId(Aws::String&& value) { SetExportTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the export task. This is the ID returned by
     * <code>CreateInstanceExportTask</code>.</p>
     */
    inline CancelExportTaskRequest& WithExportTaskId(const char* value) { SetExportTaskId(value); return *this;}

  private:

    Aws::String m_exportTaskId;
    bool m_exportTaskIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
