/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/WorkflowDetail.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Container for the <code>WorkflowDetail</code> data type. It is used by
   * actions that trigger a workflow to begin execution.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/WorkflowDetails">AWS
   * API Reference</a></p>
   */
  class WorkflowDetails
  {
  public:
    AWS_TRANSFER_API WorkflowDetails();
    AWS_TRANSFER_API WorkflowDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API WorkflowDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A trigger that starts a workflow: the workflow begins to execute after a file
     * is uploaded.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline const Aws::Vector<WorkflowDetail>& GetOnUpload() const{ return m_onUpload; }

    /**
     * <p>A trigger that starts a workflow: the workflow begins to execute after a file
     * is uploaded.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline bool OnUploadHasBeenSet() const { return m_onUploadHasBeenSet; }

    /**
     * <p>A trigger that starts a workflow: the workflow begins to execute after a file
     * is uploaded.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline void SetOnUpload(const Aws::Vector<WorkflowDetail>& value) { m_onUploadHasBeenSet = true; m_onUpload = value; }

    /**
     * <p>A trigger that starts a workflow: the workflow begins to execute after a file
     * is uploaded.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline void SetOnUpload(Aws::Vector<WorkflowDetail>&& value) { m_onUploadHasBeenSet = true; m_onUpload = std::move(value); }

    /**
     * <p>A trigger that starts a workflow: the workflow begins to execute after a file
     * is uploaded.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline WorkflowDetails& WithOnUpload(const Aws::Vector<WorkflowDetail>& value) { SetOnUpload(value); return *this;}

    /**
     * <p>A trigger that starts a workflow: the workflow begins to execute after a file
     * is uploaded.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline WorkflowDetails& WithOnUpload(Aws::Vector<WorkflowDetail>&& value) { SetOnUpload(std::move(value)); return *this;}

    /**
     * <p>A trigger that starts a workflow: the workflow begins to execute after a file
     * is uploaded.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline WorkflowDetails& AddOnUpload(const WorkflowDetail& value) { m_onUploadHasBeenSet = true; m_onUpload.push_back(value); return *this; }

    /**
     * <p>A trigger that starts a workflow: the workflow begins to execute after a file
     * is uploaded.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>
     */
    inline WorkflowDetails& AddOnUpload(WorkflowDetail&& value) { m_onUploadHasBeenSet = true; m_onUpload.push_back(std::move(value)); return *this; }


    /**
     * <p>A trigger that starts a workflow if a file is only partially uploaded. You
     * can attach a workflow to a server that executes whenever there is a partial
     * upload.</p> <p>A <i>partial upload</i> occurs when a file is open when the
     * session disconnects.</p>
     */
    inline const Aws::Vector<WorkflowDetail>& GetOnPartialUpload() const{ return m_onPartialUpload; }

    /**
     * <p>A trigger that starts a workflow if a file is only partially uploaded. You
     * can attach a workflow to a server that executes whenever there is a partial
     * upload.</p> <p>A <i>partial upload</i> occurs when a file is open when the
     * session disconnects.</p>
     */
    inline bool OnPartialUploadHasBeenSet() const { return m_onPartialUploadHasBeenSet; }

    /**
     * <p>A trigger that starts a workflow if a file is only partially uploaded. You
     * can attach a workflow to a server that executes whenever there is a partial
     * upload.</p> <p>A <i>partial upload</i> occurs when a file is open when the
     * session disconnects.</p>
     */
    inline void SetOnPartialUpload(const Aws::Vector<WorkflowDetail>& value) { m_onPartialUploadHasBeenSet = true; m_onPartialUpload = value; }

    /**
     * <p>A trigger that starts a workflow if a file is only partially uploaded. You
     * can attach a workflow to a server that executes whenever there is a partial
     * upload.</p> <p>A <i>partial upload</i> occurs when a file is open when the
     * session disconnects.</p>
     */
    inline void SetOnPartialUpload(Aws::Vector<WorkflowDetail>&& value) { m_onPartialUploadHasBeenSet = true; m_onPartialUpload = std::move(value); }

    /**
     * <p>A trigger that starts a workflow if a file is only partially uploaded. You
     * can attach a workflow to a server that executes whenever there is a partial
     * upload.</p> <p>A <i>partial upload</i> occurs when a file is open when the
     * session disconnects.</p>
     */
    inline WorkflowDetails& WithOnPartialUpload(const Aws::Vector<WorkflowDetail>& value) { SetOnPartialUpload(value); return *this;}

    /**
     * <p>A trigger that starts a workflow if a file is only partially uploaded. You
     * can attach a workflow to a server that executes whenever there is a partial
     * upload.</p> <p>A <i>partial upload</i> occurs when a file is open when the
     * session disconnects.</p>
     */
    inline WorkflowDetails& WithOnPartialUpload(Aws::Vector<WorkflowDetail>&& value) { SetOnPartialUpload(std::move(value)); return *this;}

    /**
     * <p>A trigger that starts a workflow if a file is only partially uploaded. You
     * can attach a workflow to a server that executes whenever there is a partial
     * upload.</p> <p>A <i>partial upload</i> occurs when a file is open when the
     * session disconnects.</p>
     */
    inline WorkflowDetails& AddOnPartialUpload(const WorkflowDetail& value) { m_onPartialUploadHasBeenSet = true; m_onPartialUpload.push_back(value); return *this; }

    /**
     * <p>A trigger that starts a workflow if a file is only partially uploaded. You
     * can attach a workflow to a server that executes whenever there is a partial
     * upload.</p> <p>A <i>partial upload</i> occurs when a file is open when the
     * session disconnects.</p>
     */
    inline WorkflowDetails& AddOnPartialUpload(WorkflowDetail&& value) { m_onPartialUploadHasBeenSet = true; m_onPartialUpload.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<WorkflowDetail> m_onUpload;
    bool m_onUploadHasBeenSet = false;

    Aws::Vector<WorkflowDetail> m_onPartialUpload;
    bool m_onPartialUploadHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
