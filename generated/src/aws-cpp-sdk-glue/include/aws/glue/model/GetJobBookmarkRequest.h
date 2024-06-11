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
  class GetJobBookmarkRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetJobBookmarkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJobBookmark"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the job in question.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline GetJobBookmarkRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline GetJobBookmarkRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline GetJobBookmarkRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique run identifier associated with this job run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }
    inline GetJobBookmarkRequest& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline GetJobBookmarkRequest& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline GetJobBookmarkRequest& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
