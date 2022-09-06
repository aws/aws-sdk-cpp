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
  class AWS_TRANSFER_API WorkflowDetails
  {
  public:
    WorkflowDetails();
    WorkflowDetails(Aws::Utils::Json::JsonView jsonValue);
    WorkflowDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::Vector<WorkflowDetail> m_onUpload;
    bool m_onUploadHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
