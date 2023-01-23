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
    AWS_GLUE_API UpdateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJob"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the job definition to update.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job definition to update.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the job definition to update.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job definition to update.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job definition to update.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job definition to update.</p>
     */
    inline UpdateJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job definition to update.</p>
     */
    inline UpdateJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job definition to update.</p>
     */
    inline UpdateJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Specifies the values with which to update the job definition. Unspecified
     * configuration is removed or reset to default values.</p>
     */
    inline const JobUpdate& GetJobUpdate() const{ return m_jobUpdate; }

    /**
     * <p>Specifies the values with which to update the job definition. Unspecified
     * configuration is removed or reset to default values.</p>
     */
    inline bool JobUpdateHasBeenSet() const { return m_jobUpdateHasBeenSet; }

    /**
     * <p>Specifies the values with which to update the job definition. Unspecified
     * configuration is removed or reset to default values.</p>
     */
    inline void SetJobUpdate(const JobUpdate& value) { m_jobUpdateHasBeenSet = true; m_jobUpdate = value; }

    /**
     * <p>Specifies the values with which to update the job definition. Unspecified
     * configuration is removed or reset to default values.</p>
     */
    inline void SetJobUpdate(JobUpdate&& value) { m_jobUpdateHasBeenSet = true; m_jobUpdate = std::move(value); }

    /**
     * <p>Specifies the values with which to update the job definition. Unspecified
     * configuration is removed or reset to default values.</p>
     */
    inline UpdateJobRequest& WithJobUpdate(const JobUpdate& value) { SetJobUpdate(value); return *this;}

    /**
     * <p>Specifies the values with which to update the job definition. Unspecified
     * configuration is removed or reset to default values.</p>
     */
    inline UpdateJobRequest& WithJobUpdate(JobUpdate&& value) { SetJobUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobUpdate m_jobUpdate;
    bool m_jobUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
