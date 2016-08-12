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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/JobState.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
   * a value that indicates whether the job is a job part, in the case of an export
   * job.</p>
   */
  class AWS_SNOWBALL_API JobListEntry
  {
  public:
    JobListEntry();
    JobListEntry(const Aws::Utils::Json::JsonValue& jsonValue);
    JobListEntry& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline JobListEntry& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline JobListEntry& WithJobId(Aws::String&& value) { SetJobId(value); return *this;}

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline JobListEntry& WithJobId(const char* value) { SetJobId(value); return *this;}

    /**
     * <p>The current state of this job.</p>
     */
    inline const JobState& GetJobState() const{ return m_jobState; }

    /**
     * <p>The current state of this job.</p>
     */
    inline void SetJobState(const JobState& value) { m_jobStateHasBeenSet = true; m_jobState = value; }

    /**
     * <p>The current state of this job.</p>
     */
    inline void SetJobState(JobState&& value) { m_jobStateHasBeenSet = true; m_jobState = value; }

    /**
     * <p>The current state of this job.</p>
     */
    inline JobListEntry& WithJobState(const JobState& value) { SetJobState(value); return *this;}

    /**
     * <p>The current state of this job.</p>
     */
    inline JobListEntry& WithJobState(JobState&& value) { SetJobState(value); return *this;}

    /**
     * <p>A value that indicates that this job is a master job. A master job represents
     * a successful request to create an export job. Master jobs aren't associated with
     * any Snowballs. Instead, each master job will have at least one job part, and
     * each job part is associated with a Snowball. It might take some time before the
     * job parts associated with a particular master job are listed, because they are
     * created after the master job is created.</p>
     */
    inline bool GetIsMaster() const{ return m_isMaster; }

    /**
     * <p>A value that indicates that this job is a master job. A master job represents
     * a successful request to create an export job. Master jobs aren't associated with
     * any Snowballs. Instead, each master job will have at least one job part, and
     * each job part is associated with a Snowball. It might take some time before the
     * job parts associated with a particular master job are listed, because they are
     * created after the master job is created.</p>
     */
    inline void SetIsMaster(bool value) { m_isMasterHasBeenSet = true; m_isMaster = value; }

    /**
     * <p>A value that indicates that this job is a master job. A master job represents
     * a successful request to create an export job. Master jobs aren't associated with
     * any Snowballs. Instead, each master job will have at least one job part, and
     * each job part is associated with a Snowball. It might take some time before the
     * job parts associated with a particular master job are listed, because they are
     * created after the master job is created.</p>
     */
    inline JobListEntry& WithIsMaster(bool value) { SetIsMaster(value); return *this;}

  private:
    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
    JobState m_jobState;
    bool m_jobStateHasBeenSet;
    bool m_isMaster;
    bool m_isMasterHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
