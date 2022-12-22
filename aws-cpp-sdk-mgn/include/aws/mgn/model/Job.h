/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/InitiatedBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/model/JobStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mgn/model/JobType.h>
#include <aws/mgn/model/ParticipatingServer.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/Job">AWS API
   * Reference</a></p>
   */
  class Job
  {
  public:
    AWS_MGN_API Job();
    AWS_MGN_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>the ARN of the specific Job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>the ARN of the specific Job.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>the ARN of the specific Job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>the ARN of the specific Job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>the ARN of the specific Job.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>the ARN of the specific Job.</p>
     */
    inline Job& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>the ARN of the specific Job.</p>
     */
    inline Job& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>the ARN of the specific Job.</p>
     */
    inline Job& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Job creation time.</p>
     */
    inline const Aws::String& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>Job creation time.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>Job creation time.</p>
     */
    inline void SetCreationDateTime(const Aws::String& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>Job creation time.</p>
     */
    inline void SetCreationDateTime(Aws::String&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>Job creation time.</p>
     */
    inline void SetCreationDateTime(const char* value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime.assign(value); }

    /**
     * <p>Job creation time.</p>
     */
    inline Job& WithCreationDateTime(const Aws::String& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>Job creation time.</p>
     */
    inline Job& WithCreationDateTime(Aws::String&& value) { SetCreationDateTime(std::move(value)); return *this;}

    /**
     * <p>Job creation time.</p>
     */
    inline Job& WithCreationDateTime(const char* value) { SetCreationDateTime(value); return *this;}


    /**
     * <p>Job end time.</p>
     */
    inline const Aws::String& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>Job end time.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>Job end time.</p>
     */
    inline void SetEndDateTime(const Aws::String& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>Job end time.</p>
     */
    inline void SetEndDateTime(Aws::String&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>Job end time.</p>
     */
    inline void SetEndDateTime(const char* value) { m_endDateTimeHasBeenSet = true; m_endDateTime.assign(value); }

    /**
     * <p>Job end time.</p>
     */
    inline Job& WithEndDateTime(const Aws::String& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>Job end time.</p>
     */
    inline Job& WithEndDateTime(Aws::String&& value) { SetEndDateTime(std::move(value)); return *this;}

    /**
     * <p>Job end time.</p>
     */
    inline Job& WithEndDateTime(const char* value) { SetEndDateTime(value); return *this;}


    /**
     * <p>Job initiated by field.</p>
     */
    inline const InitiatedBy& GetInitiatedBy() const{ return m_initiatedBy; }

    /**
     * <p>Job initiated by field.</p>
     */
    inline bool InitiatedByHasBeenSet() const { return m_initiatedByHasBeenSet; }

    /**
     * <p>Job initiated by field.</p>
     */
    inline void SetInitiatedBy(const InitiatedBy& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = value; }

    /**
     * <p>Job initiated by field.</p>
     */
    inline void SetInitiatedBy(InitiatedBy&& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = std::move(value); }

    /**
     * <p>Job initiated by field.</p>
     */
    inline Job& WithInitiatedBy(const InitiatedBy& value) { SetInitiatedBy(value); return *this;}

    /**
     * <p>Job initiated by field.</p>
     */
    inline Job& WithInitiatedBy(InitiatedBy&& value) { SetInitiatedBy(std::move(value)); return *this;}


    /**
     * <p>Job ID.</p>
     */
    inline const Aws::String& GetJobID() const{ return m_jobID; }

    /**
     * <p>Job ID.</p>
     */
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }

    /**
     * <p>Job ID.</p>
     */
    inline void SetJobID(const Aws::String& value) { m_jobIDHasBeenSet = true; m_jobID = value; }

    /**
     * <p>Job ID.</p>
     */
    inline void SetJobID(Aws::String&& value) { m_jobIDHasBeenSet = true; m_jobID = std::move(value); }

    /**
     * <p>Job ID.</p>
     */
    inline void SetJobID(const char* value) { m_jobIDHasBeenSet = true; m_jobID.assign(value); }

    /**
     * <p>Job ID.</p>
     */
    inline Job& WithJobID(const Aws::String& value) { SetJobID(value); return *this;}

    /**
     * <p>Job ID.</p>
     */
    inline Job& WithJobID(Aws::String&& value) { SetJobID(std::move(value)); return *this;}

    /**
     * <p>Job ID.</p>
     */
    inline Job& WithJobID(const char* value) { SetJobID(value); return *this;}


    /**
     * <p>Servers participating in a specific Job.</p>
     */
    inline const Aws::Vector<ParticipatingServer>& GetParticipatingServers() const{ return m_participatingServers; }

    /**
     * <p>Servers participating in a specific Job.</p>
     */
    inline bool ParticipatingServersHasBeenSet() const { return m_participatingServersHasBeenSet; }

    /**
     * <p>Servers participating in a specific Job.</p>
     */
    inline void SetParticipatingServers(const Aws::Vector<ParticipatingServer>& value) { m_participatingServersHasBeenSet = true; m_participatingServers = value; }

    /**
     * <p>Servers participating in a specific Job.</p>
     */
    inline void SetParticipatingServers(Aws::Vector<ParticipatingServer>&& value) { m_participatingServersHasBeenSet = true; m_participatingServers = std::move(value); }

    /**
     * <p>Servers participating in a specific Job.</p>
     */
    inline Job& WithParticipatingServers(const Aws::Vector<ParticipatingServer>& value) { SetParticipatingServers(value); return *this;}

    /**
     * <p>Servers participating in a specific Job.</p>
     */
    inline Job& WithParticipatingServers(Aws::Vector<ParticipatingServer>&& value) { SetParticipatingServers(std::move(value)); return *this;}

    /**
     * <p>Servers participating in a specific Job.</p>
     */
    inline Job& AddParticipatingServers(const ParticipatingServer& value) { m_participatingServersHasBeenSet = true; m_participatingServers.push_back(value); return *this; }

    /**
     * <p>Servers participating in a specific Job.</p>
     */
    inline Job& AddParticipatingServers(ParticipatingServer&& value) { m_participatingServersHasBeenSet = true; m_participatingServers.push_back(std::move(value)); return *this; }


    /**
     * <p>Job status.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Job status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Job status.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Job status.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Job status.</p>
     */
    inline Job& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Job status.</p>
     */
    inline Job& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline Job& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline Job& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline Job& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline Job& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline Job& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline Job& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline Job& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline Job& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline Job& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Job type.</p>
     */
    inline const JobType& GetType() const{ return m_type; }

    /**
     * <p>Job type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Job type.</p>
     */
    inline void SetType(const JobType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Job type.</p>
     */
    inline void SetType(JobType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Job type.</p>
     */
    inline Job& WithType(const JobType& value) { SetType(value); return *this;}

    /**
     * <p>Job type.</p>
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
} // namespace mgn
} // namespace Aws
