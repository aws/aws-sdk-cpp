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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/JobState.h>
#include <aws/snowball/model/JobType.h>
#include <aws/snowball/model/SnowballType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
   * a value that indicates whether the job is a job part, in the case of an export
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/JobListEntry">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API JobListEntry
  {
  public:
    JobListEntry();
    JobListEntry(Aws::Utils::Json::JsonView jsonValue);
    JobListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

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
    inline JobListEntry& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

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
    inline bool JobStateHasBeenSet() const { return m_jobStateHasBeenSet; }

    /**
     * <p>The current state of this job.</p>
     */
    inline void SetJobState(const JobState& value) { m_jobStateHasBeenSet = true; m_jobState = value; }

    /**
     * <p>The current state of this job.</p>
     */
    inline void SetJobState(JobState&& value) { m_jobStateHasBeenSet = true; m_jobState = std::move(value); }

    /**
     * <p>The current state of this job.</p>
     */
    inline JobListEntry& WithJobState(const JobState& value) { SetJobState(value); return *this;}

    /**
     * <p>The current state of this job.</p>
     */
    inline JobListEntry& WithJobState(JobState&& value) { SetJobState(std::move(value)); return *this;}


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
    inline bool IsMasterHasBeenSet() const { return m_isMasterHasBeenSet; }

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


    /**
     * <p>The type of job.</p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>The type of job.</p>
     */
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }

    /**
     * <p>The type of job.</p>
     */
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p>The type of job.</p>
     */
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }

    /**
     * <p>The type of job.</p>
     */
    inline JobListEntry& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    /**
     * <p>The type of job.</p>
     */
    inline JobListEntry& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}


    /**
     * <p>The type of device used with this job.</p>
     */
    inline const SnowballType& GetSnowballType() const{ return m_snowballType; }

    /**
     * <p>The type of device used with this job.</p>
     */
    inline bool SnowballTypeHasBeenSet() const { return m_snowballTypeHasBeenSet; }

    /**
     * <p>The type of device used with this job.</p>
     */
    inline void SetSnowballType(const SnowballType& value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }

    /**
     * <p>The type of device used with this job.</p>
     */
    inline void SetSnowballType(SnowballType&& value) { m_snowballTypeHasBeenSet = true; m_snowballType = std::move(value); }

    /**
     * <p>The type of device used with this job.</p>
     */
    inline JobListEntry& WithSnowballType(const SnowballType& value) { SetSnowballType(value); return *this;}

    /**
     * <p>The type of device used with this job.</p>
     */
    inline JobListEntry& WithSnowballType(SnowballType&& value) { SetSnowballType(std::move(value)); return *this;}


    /**
     * <p>The creation date for this job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date for this job.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The creation date for this job.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date for this job.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The creation date for this job.</p>
     */
    inline JobListEntry& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date for this job.</p>
     */
    inline JobListEntry& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The optional description of this specific job, for example <code>Important
     * Photos 2016-08-11</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description of this specific job, for example <code>Important
     * Photos 2016-08-11</code>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The optional description of this specific job, for example <code>Important
     * Photos 2016-08-11</code>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The optional description of this specific job, for example <code>Important
     * Photos 2016-08-11</code>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The optional description of this specific job, for example <code>Important
     * Photos 2016-08-11</code>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The optional description of this specific job, for example <code>Important
     * Photos 2016-08-11</code>.</p>
     */
    inline JobListEntry& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description of this specific job, for example <code>Important
     * Photos 2016-08-11</code>.</p>
     */
    inline JobListEntry& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description of this specific job, for example <code>Important
     * Photos 2016-08-11</code>.</p>
     */
    inline JobListEntry& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    JobState m_jobState;
    bool m_jobStateHasBeenSet;

    bool m_isMaster;
    bool m_isMasterHasBeenSet;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet;

    SnowballType m_snowballType;
    bool m_snowballTypeHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
