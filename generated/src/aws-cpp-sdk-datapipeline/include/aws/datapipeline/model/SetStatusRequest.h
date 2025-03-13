/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for SetStatus.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/SetStatusInput">AWS
   * API Reference</a></p>
   */
  class SetStatusRequest : public DataPipelineRequest
  {
  public:
    AWS_DATAPIPELINE_API SetStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetStatus"; }

    AWS_DATAPIPELINE_API Aws::String SerializePayload() const override;

    AWS_DATAPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the pipeline that contains the objects.</p>
     */
    inline const Aws::String& GetPipelineId() const { return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    template<typename PipelineIdT = Aws::String>
    void SetPipelineId(PipelineIdT&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::forward<PipelineIdT>(value); }
    template<typename PipelineIdT = Aws::String>
    SetStatusRequest& WithPipelineId(PipelineIdT&& value) { SetPipelineId(std::forward<PipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the objects. The corresponding objects can be either physical or
     * components, but not a mix of both types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectIds() const { return m_objectIds; }
    inline bool ObjectIdsHasBeenSet() const { return m_objectIdsHasBeenSet; }
    template<typename ObjectIdsT = Aws::Vector<Aws::String>>
    void SetObjectIds(ObjectIdsT&& value) { m_objectIdsHasBeenSet = true; m_objectIds = std::forward<ObjectIdsT>(value); }
    template<typename ObjectIdsT = Aws::Vector<Aws::String>>
    SetStatusRequest& WithObjectIds(ObjectIdsT&& value) { SetObjectIds(std::forward<ObjectIdsT>(value)); return *this;}
    template<typename ObjectIdsT = Aws::String>
    SetStatusRequest& AddObjectIds(ObjectIdsT&& value) { m_objectIdsHasBeenSet = true; m_objectIds.emplace_back(std::forward<ObjectIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status to be set on all the objects specified in <code>objectIds</code>.
     * For components, use <code>PAUSE</code> or <code>RESUME</code>. For instances,
     * use <code>TRY_CANCEL</code>, <code>RERUN</code>, or
     * <code>MARK_FINISHED</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    SetStatusRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_objectIds;
    bool m_objectIdsHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
