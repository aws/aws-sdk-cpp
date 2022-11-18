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
  class AWS_EC2_API CancelExportTaskRequest : public EC2Request
  {
  public:
    CancelExportTaskRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<CancelExportTaskRequest> Clone() const
    {
      return Aws::MakeUnique<CancelExportTaskRequest>(GetServiceRequestName(), *this);
    }

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
    inline bool ExportTaskIdHasBeenSet() const { return m_exportTaskIdHasBeenSet; }

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
    bool m_exportTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
