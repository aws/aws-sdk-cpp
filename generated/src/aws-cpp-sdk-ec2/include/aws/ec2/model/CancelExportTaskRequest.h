/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class CancelExportTaskRequest : public EC2Request
  {
  public:
    AWS_EC2_API CancelExportTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelExportTask"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the export task. This is the ID returned by the
     * <code>CreateInstanceExportTask</code> and <code>ExportImage</code>
     * operations.</p>
     */
    inline const Aws::String& GetExportTaskId() const { return m_exportTaskId; }
    inline bool ExportTaskIdHasBeenSet() const { return m_exportTaskIdHasBeenSet; }
    template<typename ExportTaskIdT = Aws::String>
    void SetExportTaskId(ExportTaskIdT&& value) { m_exportTaskIdHasBeenSet = true; m_exportTaskId = std::forward<ExportTaskIdT>(value); }
    template<typename ExportTaskIdT = Aws::String>
    CancelExportTaskRequest& WithExportTaskId(ExportTaskIdT&& value) { SetExportTaskId(std::forward<ExportTaskIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportTaskId;
    bool m_exportTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
