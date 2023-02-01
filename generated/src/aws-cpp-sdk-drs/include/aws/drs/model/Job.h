/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/InitiatedBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/model/JobStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/drs/model/JobType.h>
#include <aws/drs/model/ParticipatingServer.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>A job is an asynchronous workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/Job">AWS API
   * Reference</a></p>
   */
  class Job
  {
  public:
    AWS_DRS_API Job();
    AWS_DRS_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a Job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of a Job.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of a Job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of a Job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of a Job.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of a Job.</p>
     */
    inline Job& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of a Job.</p>
     */
    inline Job& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a Job.</p>
     */
    inline Job& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time of when the Job was created.</p>
     */
    inline const Aws::String& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time of when the Job was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time of when the Job was created.</p>
     */
    inline void SetCreationDateTime(const Aws::String& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time of when the Job was created.</p>
     */
    inline void SetCreationDateTime(Aws::String&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time of when the Job was created.</p>
     */
    inline void SetCreationDateTime(const char* value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime.assign(value); }

    /**
     * <p>The date and time of when the Job was created.</p>
     */
    inline Job& WithCreationDateTime(const Aws::String& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time of when the Job was created.</p>
     */
    inline Job& WithCreationDateTime(Aws::String&& value) { SetCreationDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time of when the Job was created.</p>
     */
    inline Job& WithCreationDateTime(const char* value) { SetCreationDateTime(value); return *this;}


    /**
     * <p>The date and time of when the Job ended.</p>
     */
    inline const Aws::String& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The date and time of when the Job ended.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>The date and time of when the Job ended.</p>
     */
    inline void SetEndDateTime(const Aws::String& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The date and time of when the Job ended.</p>
     */
    inline void SetEndDateTime(Aws::String&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>The date and time of when the Job ended.</p>
     */
    inline void SetEndDateTime(const char* value) { m_endDateTimeHasBeenSet = true; m_endDateTime.assign(value); }

    /**
     * <p>The date and time of when the Job ended.</p>
     */
    inline Job& WithEndDateTime(const Aws::String& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The date and time of when the Job ended.</p>
     */
    inline Job& WithEndDateTime(Aws::String&& value) { SetEndDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time of when the Job ended.</p>
     */
    inline Job& WithEndDateTime(const char* value) { SetEndDateTime(value); return *this;}


    /**
     * <p>A string representing who initiated the Job.</p>
     */
    inline const InitiatedBy& GetInitiatedBy() const{ return m_initiatedBy; }

    /**
     * <p>A string representing who initiated the Job.</p>
     */
    inline bool InitiatedByHasBeenSet() const { return m_initiatedByHasBeenSet; }

    /**
     * <p>A string representing who initiated the Job.</p>
     */
    inline void SetInitiatedBy(const InitiatedBy& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = value; }

    /**
     * <p>A string representing who initiated the Job.</p>
     */
    inline void SetInitiatedBy(InitiatedBy&& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = std::move(value); }

    /**
     * <p>A string representing who initiated the Job.</p>
     */
    inline Job& WithInitiatedBy(const InitiatedBy& value) { SetInitiatedBy(value); return *this;}

    /**
     * <p>A string representing who initiated the Job.</p>
     */
    inline Job& WithInitiatedBy(InitiatedBy&& value) { SetInitiatedBy(std::move(value)); return *this;}


    /**
     * <p>The ID of the Job.</p>
     */
    inline const Aws::String& GetJobID() const{ return m_jobID; }

    /**
     * <p>The ID of the Job.</p>
     */
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }

    /**
     * <p>The ID of the Job.</p>
     */
    inline void SetJobID(const Aws::String& value) { m_jobIDHasBeenSet = true; m_jobID = value; }

    /**
     * <p>The ID of the Job.</p>
     */
    inline void SetJobID(Aws::String&& value) { m_jobIDHasBeenSet = true; m_jobID = std::move(value); }

    /**
     * <p>The ID of the Job.</p>
     */
    inline void SetJobID(const char* value) { m_jobIDHasBeenSet = true; m_jobID.assign(value); }

    /**
     * <p>The ID of the Job.</p>
     */
    inline Job& WithJobID(const Aws::String& value) { SetJobID(value); return *this;}

    /**
     * <p>The ID of the Job.</p>
     */
    inline Job& WithJobID(Aws::String&& value) { SetJobID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Job.</p>
     */
    inline Job& WithJobID(const char* value) { SetJobID(value); return *this;}


    /**
     * <p>A list of servers that the Job is acting upon.</p>
     */
    inline const Aws::Vector<ParticipatingServer>& GetParticipatingServers() const{ return m_participatingServers; }

    /**
     * <p>A list of servers that the Job is acting upon.</p>
     */
    inline bool ParticipatingServersHasBeenSet() const { return m_participatingServersHasBeenSet; }

    /**
     * <p>A list of servers that the Job is acting upon.</p>
     */
    inline void SetParticipatingServers(const Aws::Vector<ParticipatingServer>& value) { m_participatingServersHasBeenSet = true; m_participatingServers = value; }

    /**
     * <p>A list of servers that the Job is acting upon.</p>
     */
    inline void SetParticipatingServers(Aws::Vector<ParticipatingServer>&& value) { m_participatingServersHasBeenSet = true; m_participatingServers = std::move(value); }

    /**
     * <p>A list of servers that the Job is acting upon.</p>
     */
    inline Job& WithParticipatingServers(const Aws::Vector<ParticipatingServer>& value) { SetParticipatingServers(value); return *this;}

    /**
     * <p>A list of servers that the Job is acting upon.</p>
     */
    inline Job& WithParticipatingServers(Aws::Vector<ParticipatingServer>&& value) { SetParticipatingServers(std::move(value)); return *this;}

    /**
     * <p>A list of servers that the Job is acting upon.</p>
     */
    inline Job& AddParticipatingServers(const ParticipatingServer& value) { m_participatingServersHasBeenSet = true; m_participatingServers.push_back(value); return *this; }

    /**
     * <p>A list of servers that the Job is acting upon.</p>
     */
    inline Job& AddParticipatingServers(ParticipatingServer&& value) { m_participatingServersHasBeenSet = true; m_participatingServers.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the Job.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Job.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Job.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Job.</p>
     */
    inline Job& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Job.</p>
     */
    inline Job& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A list of tags associated with the Job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags associated with the Job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags associated with the Job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags associated with the Job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags associated with the Job.</p>
     */
    inline Job& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with the Job.</p>
     */
    inline Job& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with the Job.</p>
     */
    inline Job& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags associated with the Job.</p>
     */
    inline Job& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags associated with the Job.</p>
     */
    inline Job& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the Job.</p>
     */
    inline Job& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the Job.</p>
     */
    inline Job& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the Job.</p>
     */
    inline Job& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags associated with the Job.</p>
     */
    inline Job& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of the Job.</p>
     */
    inline const JobType& GetType() const{ return m_type; }

    /**
     * <p>The type of the Job.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the Job.</p>
     */
    inline void SetType(const JobType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the Job.</p>
     */
    inline void SetType(JobType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the Job.</p>
     */
    inline Job& WithType(const JobType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the Job.</p>
     */
    inline Job& WithType(JobType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;

    InitiatedBy m_initiatedBy;
    bool m_initiatedByHasBeenSet = false;

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;

    Aws::Vector<ParticipatingServer> m_participatingServers;
    bool m_participatingServersHasBeenSet = false;

    JobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    JobType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
