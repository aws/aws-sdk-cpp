/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CancelMLTaskRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CancelMLTaskRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelMLTaskRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline const Aws::String& GetTransformId() const{ return m_transformId; }
    inline bool TransformIdHasBeenSet() const { return m_transformIdHasBeenSet; }
    inline void SetTransformId(const Aws::String& value) { m_transformIdHasBeenSet = true; m_transformId = value; }
    inline void SetTransformId(Aws::String&& value) { m_transformIdHasBeenSet = true; m_transformId = std::move(value); }
    inline void SetTransformId(const char* value) { m_transformIdHasBeenSet = true; m_transformId.assign(value); }
    inline CancelMLTaskRunRequest& WithTransformId(const Aws::String& value) { SetTransformId(value); return *this;}
    inline CancelMLTaskRunRequest& WithTransformId(Aws::String&& value) { SetTransformId(std::move(value)); return *this;}
    inline CancelMLTaskRunRequest& WithTransformId(const char* value) { SetTransformId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the task run.</p>
     */
    inline const Aws::String& GetTaskRunId() const{ return m_taskRunId; }
    inline bool TaskRunIdHasBeenSet() const { return m_taskRunIdHasBeenSet; }
    inline void SetTaskRunId(const Aws::String& value) { m_taskRunIdHasBeenSet = true; m_taskRunId = value; }
    inline void SetTaskRunId(Aws::String&& value) { m_taskRunIdHasBeenSet = true; m_taskRunId = std::move(value); }
    inline void SetTaskRunId(const char* value) { m_taskRunIdHasBeenSet = true; m_taskRunId.assign(value); }
    inline CancelMLTaskRunRequest& WithTaskRunId(const Aws::String& value) { SetTaskRunId(value); return *this;}
    inline CancelMLTaskRunRequest& WithTaskRunId(Aws::String&& value) { SetTaskRunId(std::move(value)); return *this;}
    inline CancelMLTaskRunRequest& WithTaskRunId(const char* value) { SetTaskRunId(value); return *this;}
    ///@}
  private:

    Aws::String m_transformId;
    bool m_transformIdHasBeenSet = false;

    Aws::String m_taskRunId;
    bool m_taskRunIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
