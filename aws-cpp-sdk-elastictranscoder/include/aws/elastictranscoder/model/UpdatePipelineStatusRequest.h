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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/ElasticTranscoderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The <code>UpdatePipelineStatusRequest</code> structure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/UpdatePipelineStatusRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API UpdatePipelineStatusRequest : public ElasticTranscoderRequest
  {
  public:
    UpdatePipelineStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePipelineStatus"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the pipeline to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the pipeline to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the pipeline to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the pipeline to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

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
    inline UpdatePipelineStatusRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the pipeline to update.</p>
     */
    inline UpdatePipelineStatusRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline UpdatePipelineStatusRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
     */
    inline UpdatePipelineStatusRequest& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The desired status of the pipeline:</p> <ul> <li> <p> <code>Active</code>:
     * The pipeline is processing jobs.</p> </li> <li> <p> <code>Paused</code>: The
     * pipeline is not currently processing jobs.</p> </li> </ul>
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
