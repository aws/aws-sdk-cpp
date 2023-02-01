/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchGetJobsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchGetJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetJobs"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of job names, which might be the names returned from the
     * <code>ListJobs</code> operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobNames() const{ return m_jobNames; }

    /**
     * <p>A list of job names, which might be the names returned from the
     * <code>ListJobs</code> operation.</p>
     */
    inline bool JobNamesHasBeenSet() const { return m_jobNamesHasBeenSet; }

    /**
     * <p>A list of job names, which might be the names returned from the
     * <code>ListJobs</code> operation.</p>
     */
    inline void SetJobNames(const Aws::Vector<Aws::String>& value) { m_jobNamesHasBeenSet = true; m_jobNames = value; }

    /**
     * <p>A list of job names, which might be the names returned from the
     * <code>ListJobs</code> operation.</p>
     */
    inline void SetJobNames(Aws::Vector<Aws::String>&& value) { m_jobNamesHasBeenSet = true; m_jobNames = std::move(value); }

    /**
     * <p>A list of job names, which might be the names returned from the
     * <code>ListJobs</code> operation.</p>
     */
    inline BatchGetJobsRequest& WithJobNames(const Aws::Vector<Aws::String>& value) { SetJobNames(value); return *this;}

    /**
     * <p>A list of job names, which might be the names returned from the
     * <code>ListJobs</code> operation.</p>
     */
    inline BatchGetJobsRequest& WithJobNames(Aws::Vector<Aws::String>&& value) { SetJobNames(std::move(value)); return *this;}

    /**
     * <p>A list of job names, which might be the names returned from the
     * <code>ListJobs</code> operation.</p>
     */
    inline BatchGetJobsRequest& AddJobNames(const Aws::String& value) { m_jobNamesHasBeenSet = true; m_jobNames.push_back(value); return *this; }

    /**
     * <p>A list of job names, which might be the names returned from the
     * <code>ListJobs</code> operation.</p>
     */
    inline BatchGetJobsRequest& AddJobNames(Aws::String&& value) { m_jobNamesHasBeenSet = true; m_jobNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of job names, which might be the names returned from the
     * <code>ListJobs</code> operation.</p>
     */
    inline BatchGetJobsRequest& AddJobNames(const char* value) { m_jobNamesHasBeenSet = true; m_jobNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_jobNames;
    bool m_jobNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
