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
    AWS_GLUE_API BatchGetJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetJobs"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of job names, which might be the names returned from the
     * <code>ListJobs</code> operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobNames() const { return m_jobNames; }
    inline bool JobNamesHasBeenSet() const { return m_jobNamesHasBeenSet; }
    template<typename JobNamesT = Aws::Vector<Aws::String>>
    void SetJobNames(JobNamesT&& value) { m_jobNamesHasBeenSet = true; m_jobNames = std::forward<JobNamesT>(value); }
    template<typename JobNamesT = Aws::Vector<Aws::String>>
    BatchGetJobsRequest& WithJobNames(JobNamesT&& value) { SetJobNames(std::forward<JobNamesT>(value)); return *this;}
    template<typename JobNamesT = Aws::String>
    BatchGetJobsRequest& AddJobNames(JobNamesT&& value) { m_jobNamesHasBeenSet = true; m_jobNames.emplace_back(std::forward<JobNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_jobNames;
    bool m_jobNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
