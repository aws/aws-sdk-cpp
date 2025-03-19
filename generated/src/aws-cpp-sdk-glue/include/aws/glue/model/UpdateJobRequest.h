/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/JobUpdate.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateJobRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJob"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the job definition to update.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    UpdateJobRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the values with which to update the job definition. Unspecified
     * configuration is removed or reset to default values.</p>
     */
    inline const JobUpdate& GetJobUpdate() const { return m_jobUpdate; }
    inline bool JobUpdateHasBeenSet() const { return m_jobUpdateHasBeenSet; }
    template<typename JobUpdateT = JobUpdate>
    void SetJobUpdate(JobUpdateT&& value) { m_jobUpdateHasBeenSet = true; m_jobUpdate = std::forward<JobUpdateT>(value); }
    template<typename JobUpdateT = JobUpdate>
    UpdateJobRequest& WithJobUpdate(JobUpdateT&& value) { SetJobUpdate(std::forward<JobUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobUpdate m_jobUpdate;
    bool m_jobUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
