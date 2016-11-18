/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/ElasticTranscoderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The <code>UpdatePipelineStatusRequest</code> structure.</p>
   */
  class AWS_ELASTICTRANSCODER_API UpdatePipelineStatusRequest : public ElasticTranscoderRequest
  {
  public:
    UpdatePipelineStatusRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier of the pipeline to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the pipeline to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the pipeline to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the pipeline to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the pipeline to update.</p>
     */
    inline UpdatePipelineStatusRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the pipeline to update.</p>
     */
    inline UpdatePipelineStatusRequest& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the pipeline to update.</p>
     */
    inline UpdatePipelineStatusRequest& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <code>Active</code>: The
     * pipeline is processing jobs.</li> <li> <code>Paused</code>: The pipeline is not
     * currently processing jobs.</li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <code>Active</code>: The
     * pipeline is processing jobs.</li> <li> <code>Paused</code>: The pipeline is not
     * currently processing jobs.</li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <code>Active</code>: The
     * pipeline is processing jobs.</li> <li> <code>Paused</code>: The pipeline is not
     * currently processing jobs.</li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <code>Active</code>: The
     * pipeline is processing jobs.</li> <li> <code>Paused</code>: The pipeline is not
     * currently processing jobs.</li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <code>Active</code>: The
     * pipeline is processing jobs.</li> <li> <code>Paused</code>: The pipeline is not
     * currently processing jobs.</li> </ul>
     */
    inline UpdatePipelineStatusRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <code>Active</code>: The
     * pipeline is processing jobs.</li> <li> <code>Paused</code>: The pipeline is not
     * currently processing jobs.</li> </ul>
     */
    inline UpdatePipelineStatusRequest& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <code>Active</code>: The
     * pipeline is processing jobs.</li> <li> <code>Paused</code>: The pipeline is not
     * currently processing jobs.</li> </ul>
     */
    inline UpdatePipelineStatusRequest& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
