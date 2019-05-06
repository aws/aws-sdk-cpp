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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class AWS_ROBOMAKER_API BatchDescribeSimulationJobRequest : public RoboMakerRequest
  {
  public:
    BatchDescribeSimulationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDescribeSimulationJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobs() const{ return m_jobs; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline bool JobsHasBeenSet() const { return m_jobsHasBeenSet; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline void SetJobs(const Aws::Vector<Aws::String>& value) { m_jobsHasBeenSet = true; m_jobs = value; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline void SetJobs(Aws::Vector<Aws::String>&& value) { m_jobsHasBeenSet = true; m_jobs = std::move(value); }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline BatchDescribeSimulationJobRequest& WithJobs(const Aws::Vector<Aws::String>& value) { SetJobs(value); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline BatchDescribeSimulationJobRequest& WithJobs(Aws::Vector<Aws::String>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline BatchDescribeSimulationJobRequest& AddJobs(const Aws::String& value) { m_jobsHasBeenSet = true; m_jobs.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline BatchDescribeSimulationJobRequest& AddJobs(Aws::String&& value) { m_jobsHasBeenSet = true; m_jobs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline BatchDescribeSimulationJobRequest& AddJobs(const char* value) { m_jobsHasBeenSet = true; m_jobs.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_jobs;
    bool m_jobsHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
