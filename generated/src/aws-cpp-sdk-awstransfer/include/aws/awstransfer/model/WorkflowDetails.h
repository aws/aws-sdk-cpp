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
    AWS_TRANSFER_API WorkflowDetails() = default;
    AWS_TRANSFER_API WorkflowDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API WorkflowDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A trigger that starts a workflow: the workflow begins to execute after a file
     * is uploaded.</p> <p>To remove an associated workflow from a server, you can
     * provide an empty <code>OnUpload</code> object, as in the following example.</p>
     * <p> <code>aws transfer update-server --server-id s-01234567890abcdef
     * --workflow-details '{"OnUpload":[]}'</code> </p>  <p>
     * <code>OnUpload</code> can contain a maximum of one <code>WorkflowDetail</code>
     * object.</p> 
     */
    inline const Aws::Vector<WorkflowDetail>& GetOnUpload() const { return m_onUpload; }
    inline bool OnUploadHasBeenSet() const { return m_onUploadHasBeenSet; }
    template<typename OnUploadT = Aws::Vector<WorkflowDetail>>
    void SetOnUpload(OnUploadT&& value) { m_onUploadHasBeenSet = true; m_onUpload = std::forward<OnUploadT>(value); }
    template<typename OnUploadT = Aws::Vector<WorkflowDetail>>
    WorkflowDetails& WithOnUpload(OnUploadT&& value) { SetOnUpload(std::forward<OnUploadT>(value)); return *this;}
    template<typename OnUploadT = WorkflowDetail>
    WorkflowDetails& AddOnUpload(OnUploadT&& value) { m_onUploadHasBeenSet = true; m_onUpload.emplace_back(std::forward<OnUploadT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A trigger that starts a workflow if a file is only partially uploaded. You
     * can attach a workflow to a server that executes whenever there is a partial
     * upload.</p> <p>A <i>partial upload</i> occurs when a file is open when the
     * session disconnects.</p>  <p> <code>OnPartialUpload</code> can contain a
     * maximum of one <code>WorkflowDetail</code> object.</p> 
     */
    inline const Aws::Vector<WorkflowDetail>& GetOnPartialUpload() const { return m_onPartialUpload; }
    inline bool OnPartialUploadHasBeenSet() const { return m_onPartialUploadHasBeenSet; }
    template<typename OnPartialUploadT = Aws::Vector<WorkflowDetail>>
    void SetOnPartialUpload(OnPartialUploadT&& value) { m_onPartialUploadHasBeenSet = true; m_onPartialUpload = std::forward<OnPartialUploadT>(value); }
    template<typename OnPartialUploadT = Aws::Vector<WorkflowDetail>>
    WorkflowDetails& WithOnPartialUpload(OnPartialUploadT&& value) { SetOnPartialUpload(std::forward<OnPartialUploadT>(value)); return *this;}
    template<typename OnPartialUploadT = WorkflowDetail>
    WorkflowDetails& AddOnPartialUpload(OnPartialUploadT&& value) { m_onPartialUploadHasBeenSet = true; m_onPartialUpload.emplace_back(std::forward<OnPartialUploadT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<WorkflowDetail> m_onUpload;
    bool m_onUploadHasBeenSet = false;

    Aws::Vector<WorkflowDetail> m_onPartialUpload;
    bool m_onPartialUploadHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
