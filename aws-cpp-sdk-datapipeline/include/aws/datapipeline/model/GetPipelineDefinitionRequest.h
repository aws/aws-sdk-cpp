﻿/*
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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for GetPipelineDefinition.</p>
   */
  class AWS_DATAPIPELINE_API GetPipelineDefinitionRequest : public DataPipelineRequest
  {
  public:
    GetPipelineDefinitionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline GetPipelineDefinitionRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline GetPipelineDefinitionRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline GetPipelineDefinitionRequest& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}

    /**
     * <p>The version of the pipeline definition to retrieve. Set this parameter to
     * <code>latest</code> (default) to use the last definition saved to the pipeline
     * or <code>active</code> to use the last definition that was activated.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the pipeline definition to retrieve. Set this parameter to
     * <code>latest</code> (default) to use the last definition saved to the pipeline
     * or <code>active</code> to use the last definition that was activated.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the pipeline definition to retrieve. Set this parameter to
     * <code>latest</code> (default) to use the last definition saved to the pipeline
     * or <code>active</code> to use the last definition that was activated.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the pipeline definition to retrieve. Set this parameter to
     * <code>latest</code> (default) to use the last definition saved to the pipeline
     * or <code>active</code> to use the last definition that was activated.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the pipeline definition to retrieve. Set this parameter to
     * <code>latest</code> (default) to use the last definition saved to the pipeline
     * or <code>active</code> to use the last definition that was activated.</p>
     */
    inline GetPipelineDefinitionRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the pipeline definition to retrieve. Set this parameter to
     * <code>latest</code> (default) to use the last definition saved to the pipeline
     * or <code>active</code> to use the last definition that was activated.</p>
     */
    inline GetPipelineDefinitionRequest& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the pipeline definition to retrieve. Set this parameter to
     * <code>latest</code> (default) to use the last definition saved to the pipeline
     * or <code>active</code> to use the last definition that was activated.</p>
     */
    inline GetPipelineDefinitionRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:
    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet;
    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
