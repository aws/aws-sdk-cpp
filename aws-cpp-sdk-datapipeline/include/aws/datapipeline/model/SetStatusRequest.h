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
  class AWS_DATAPIPELINE_API SetStatusRequest : public DataPipelineRequest
  {
  public:
    SetStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the pipeline that contains the objects.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p>The ID of the pipeline that contains the objects.</p>
     */
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }

    /**
     * <p>The ID of the pipeline that contains the objects.</p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline that contains the objects.</p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }

    /**
     * <p>The ID of the pipeline that contains the objects.</p>
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * <p>The ID of the pipeline that contains the objects.</p>
     */
    inline SetStatusRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline that contains the objects.</p>
     */
    inline SetStatusRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pipeline that contains the objects.</p>
     */
    inline SetStatusRequest& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}


    /**
     * <p>The IDs of the objects. The corresponding objects can be either physical or
     * components, but not a mix of both types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectIds() const{ return m_objectIds; }

    /**
     * <p>The IDs of the objects. The corresponding objects can be either physical or
     * components, but not a mix of both types.</p>
     */
    inline bool ObjectIdsHasBeenSet() const { return m_objectIdsHasBeenSet; }

    /**
     * <p>The IDs of the objects. The corresponding objects can be either physical or
     * components, but not a mix of both types.</p>
     */
    inline void SetObjectIds(const Aws::Vector<Aws::String>& value) { m_objectIdsHasBeenSet = true; m_objectIds = value; }

    /**
     * <p>The IDs of the objects. The corresponding objects can be either physical or
     * components, but not a mix of both types.</p>
     */
    inline void SetObjectIds(Aws::Vector<Aws::String>&& value) { m_objectIdsHasBeenSet = true; m_objectIds = std::move(value); }

    /**
     * <p>The IDs of the objects. The corresponding objects can be either physical or
     * components, but not a mix of both types.</p>
     */
    inline SetStatusRequest& WithObjectIds(const Aws::Vector<Aws::String>& value) { SetObjectIds(value); return *this;}

    /**
     * <p>The IDs of the objects. The corresponding objects can be either physical or
     * components, but not a mix of both types.</p>
     */
    inline SetStatusRequest& WithObjectIds(Aws::Vector<Aws::String>&& value) { SetObjectIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the objects. The corresponding objects can be either physical or
     * components, but not a mix of both types.</p>
     */
    inline SetStatusRequest& AddObjectIds(const Aws::String& value) { m_objectIdsHasBeenSet = true; m_objectIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the objects. The corresponding objects can be either physical or
     * components, but not a mix of both types.</p>
     */
    inline SetStatusRequest& AddObjectIds(Aws::String&& value) { m_objectIdsHasBeenSet = true; m_objectIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the objects. The corresponding objects can be either physical or
     * components, but not a mix of both types.</p>
     */
    inline SetStatusRequest& AddObjectIds(const char* value) { m_objectIdsHasBeenSet = true; m_objectIds.push_back(value); return *this; }


    /**
     * <p>The status to be set on all the objects specified in <code>objectIds</code>.
     * For components, use <code>PAUSE</code> or <code>RESUME</code>. For instances,
     * use <code>TRY_CANCEL</code>, <code>RERUN</code>, or
     * <code>MARK_FINISHED</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status to be set on all the objects specified in <code>objectIds</code>.
     * For components, use <code>PAUSE</code> or <code>RESUME</code>. For instances,
     * use <code>TRY_CANCEL</code>, <code>RERUN</code>, or
     * <code>MARK_FINISHED</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status to be set on all the objects specified in <code>objectIds</code>.
     * For components, use <code>PAUSE</code> or <code>RESUME</code>. For instances,
     * use <code>TRY_CANCEL</code>, <code>RERUN</code>, or
     * <code>MARK_FINISHED</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status to be set on all the objects specified in <code>objectIds</code>.
     * For components, use <code>PAUSE</code> or <code>RESUME</code>. For instances,
     * use <code>TRY_CANCEL</code>, <code>RERUN</code>, or
     * <code>MARK_FINISHED</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status to be set on all the objects specified in <code>objectIds</code>.
     * For components, use <code>PAUSE</code> or <code>RESUME</code>. For instances,
     * use <code>TRY_CANCEL</code>, <code>RERUN</code>, or
     * <code>MARK_FINISHED</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status to be set on all the objects specified in <code>objectIds</code>.
     * For components, use <code>PAUSE</code> or <code>RESUME</code>. For instances,
     * use <code>TRY_CANCEL</code>, <code>RERUN</code>, or
     * <code>MARK_FINISHED</code>.</p>
     */
    inline SetStatusRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status to be set on all the objects specified in <code>objectIds</code>.
     * For components, use <code>PAUSE</code> or <code>RESUME</code>. For instances,
     * use <code>TRY_CANCEL</code>, <code>RERUN</code>, or
     * <code>MARK_FINISHED</code>.</p>
     */
    inline SetStatusRequest& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status to be set on all the objects specified in <code>objectIds</code>.
     * For components, use <code>PAUSE</code> or <code>RESUME</code>. For instances,
     * use <code>TRY_CANCEL</code>, <code>RERUN</code>, or
     * <code>MARK_FINISHED</code>.</p>
     */
    inline SetStatusRequest& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet;

    Aws::Vector<Aws::String> m_objectIds;
    bool m_objectIdsHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
