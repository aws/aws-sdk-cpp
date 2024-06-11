﻿/**
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
    AWS_DATAPIPELINE_API SetStatusRequest();

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
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }
    inline SetStatusRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}
    inline SetStatusRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}
    inline SetStatusRequest& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the objects. The corresponding objects can be either physical or
     * components, but not a mix of both types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectIds() const{ return m_objectIds; }
    inline bool ObjectIdsHasBeenSet() const { return m_objectIdsHasBeenSet; }
    inline void SetObjectIds(const Aws::Vector<Aws::String>& value) { m_objectIdsHasBeenSet = true; m_objectIds = value; }
    inline void SetObjectIds(Aws::Vector<Aws::String>&& value) { m_objectIdsHasBeenSet = true; m_objectIds = std::move(value); }
    inline SetStatusRequest& WithObjectIds(const Aws::Vector<Aws::String>& value) { SetObjectIds(value); return *this;}
    inline SetStatusRequest& WithObjectIds(Aws::Vector<Aws::String>&& value) { SetObjectIds(std::move(value)); return *this;}
    inline SetStatusRequest& AddObjectIds(const Aws::String& value) { m_objectIdsHasBeenSet = true; m_objectIds.push_back(value); return *this; }
    inline SetStatusRequest& AddObjectIds(Aws::String&& value) { m_objectIdsHasBeenSet = true; m_objectIds.push_back(std::move(value)); return *this; }
    inline SetStatusRequest& AddObjectIds(const char* value) { m_objectIdsHasBeenSet = true; m_objectIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status to be set on all the objects specified in <code>objectIds</code>.
     * For components, use <code>PAUSE</code> or <code>RESUME</code>. For instances,
     * use <code>TRY_CANCEL</code>, <code>RERUN</code>, or
     * <code>MARK_FINISHED</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline SetStatusRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline SetStatusRequest& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline SetStatusRequest& WithStatus(const char* value) { SetStatus(value); return *this;}
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
