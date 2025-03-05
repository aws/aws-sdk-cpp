/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gameliftstreams/model/RuntimeEnvironment.h>
#include <aws/gameliftstreams/model/ApplicationStatus.h>
#include <aws/gameliftstreams/model/ApplicationStatusReason.h>
#include <aws/gameliftstreams/model/ReplicationStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLiftStreams
{
namespace Model
{
  class CreateApplicationResult
  {
  public:
    AWS_GAMELIFTSTREAMS_API CreateApplicationResult();
    AWS_GAMELIFTSTREAMS_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An Amazon S3 URI to a bucket where you would like Amazon GameLift Streams to
     * save application logs. Use the following format for the URI: <code>s3://[bucket
     * name]/[prefix]</code>. Required if you specify one or more
     * <code>LogPaths</code>.</p>
     */
    inline const Aws::String& GetApplicationLogOutputUri() const{ return m_applicationLogOutputUri; }
    inline void SetApplicationLogOutputUri(const Aws::String& value) { m_applicationLogOutputUri = value; }
    inline void SetApplicationLogOutputUri(Aws::String&& value) { m_applicationLogOutputUri = std::move(value); }
    inline void SetApplicationLogOutputUri(const char* value) { m_applicationLogOutputUri.assign(value); }
    inline CreateApplicationResult& WithApplicationLogOutputUri(const Aws::String& value) { SetApplicationLogOutputUri(value); return *this;}
    inline CreateApplicationResult& WithApplicationLogOutputUri(Aws::String&& value) { SetApplicationLogOutputUri(std::move(value)); return *this;}
    inline CreateApplicationResult& WithApplicationLogOutputUri(const char* value) { SetApplicationLogOutputUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Locations of log files that your content generates during a stream session.
     * Amazon GameLift Streams uploads log files to the Amazon S3 bucket that you
     * specify in <code>ApplicationLogOutputUri</code> at the end of a stream session.
     * To retrieve stored log files, call <a>GetStreamSession</a> and get the
     * <code>LogFileLocationUri</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationLogPaths() const{ return m_applicationLogPaths; }
    inline void SetApplicationLogPaths(const Aws::Vector<Aws::String>& value) { m_applicationLogPaths = value; }
    inline void SetApplicationLogPaths(Aws::Vector<Aws::String>&& value) { m_applicationLogPaths = std::move(value); }
    inline CreateApplicationResult& WithApplicationLogPaths(const Aws::Vector<Aws::String>& value) { SetApplicationLogPaths(value); return *this;}
    inline CreateApplicationResult& WithApplicationLogPaths(Aws::Vector<Aws::String>&& value) { SetApplicationLogPaths(std::move(value)); return *this;}
    inline CreateApplicationResult& AddApplicationLogPaths(const Aws::String& value) { m_applicationLogPaths.push_back(value); return *this; }
    inline CreateApplicationResult& AddApplicationLogPaths(Aws::String&& value) { m_applicationLogPaths.push_back(std::move(value)); return *this; }
    inline CreateApplicationResult& AddApplicationLogPaths(const char* value) { m_applicationLogPaths.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The original Amazon S3 location of uploaded stream content for the
     * application.</p>
     */
    inline const Aws::String& GetApplicationSourceUri() const{ return m_applicationSourceUri; }
    inline void SetApplicationSourceUri(const Aws::String& value) { m_applicationSourceUri = value; }
    inline void SetApplicationSourceUri(Aws::String&& value) { m_applicationSourceUri = std::move(value); }
    inline void SetApplicationSourceUri(const char* value) { m_applicationSourceUri.assign(value); }
    inline CreateApplicationResult& WithApplicationSourceUri(const Aws::String& value) { SetApplicationSourceUri(value); return *this;}
    inline CreateApplicationResult& WithApplicationSourceUri(Aws::String&& value) { SetApplicationSourceUri(std::move(value)); return *this;}
    inline CreateApplicationResult& WithApplicationSourceUri(const char* value) { SetApplicationSourceUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that's assigned to an application resource and
     * uniquely identifies it across all Amazon Web Services Regions. Format is
     * <code>arn:aws:gameliftstreams:[AWS Region]:[AWS account]:application/[resource
     * ID]</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateApplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateApplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateApplicationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A newly created application is not associated to any stream groups. This
     * value is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedStreamGroups() const{ return m_associatedStreamGroups; }
    inline void SetAssociatedStreamGroups(const Aws::Vector<Aws::String>& value) { m_associatedStreamGroups = value; }
    inline void SetAssociatedStreamGroups(Aws::Vector<Aws::String>&& value) { m_associatedStreamGroups = std::move(value); }
    inline CreateApplicationResult& WithAssociatedStreamGroups(const Aws::Vector<Aws::String>& value) { SetAssociatedStreamGroups(value); return *this;}
    inline CreateApplicationResult& WithAssociatedStreamGroups(Aws::Vector<Aws::String>&& value) { SetAssociatedStreamGroups(std::move(value)); return *this;}
    inline CreateApplicationResult& AddAssociatedStreamGroups(const Aws::String& value) { m_associatedStreamGroups.push_back(value); return *this; }
    inline CreateApplicationResult& AddAssociatedStreamGroups(Aws::String&& value) { m_associatedStreamGroups.push_back(std::move(value)); return *this; }
    inline CreateApplicationResult& AddAssociatedStreamGroups(const char* value) { m_associatedStreamGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was created. Timestamps are
     * expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateApplicationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateApplicationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable label for the application. You can edit this value. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateApplicationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateApplicationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateApplicationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path and file name of the executable file that launches the content for
     * streaming.</p>
     */
    inline const Aws::String& GetExecutablePath() const{ return m_executablePath; }
    inline void SetExecutablePath(const Aws::String& value) { m_executablePath = value; }
    inline void SetExecutablePath(Aws::String&& value) { m_executablePath = std::move(value); }
    inline void SetExecutablePath(const char* value) { m_executablePath.assign(value); }
    inline CreateApplicationResult& WithExecutablePath(const Aws::String& value) { SetExecutablePath(value); return *this;}
    inline CreateApplicationResult& WithExecutablePath(Aws::String&& value) { SetExecutablePath(std::move(value)); return *this;}
    inline CreateApplicationResult& WithExecutablePath(const char* value) { SetExecutablePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the application resource.
     * Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:application/9ZY8X7Wv6</code>
     * or ID-<code>9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateApplicationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateApplicationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateApplicationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was last updated. Timestamps
     * are expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline CreateApplicationResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline CreateApplicationResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of replication statuses for each location.</p>
     */
    inline const Aws::Vector<ReplicationStatus>& GetReplicationStatuses() const{ return m_replicationStatuses; }
    inline void SetReplicationStatuses(const Aws::Vector<ReplicationStatus>& value) { m_replicationStatuses = value; }
    inline void SetReplicationStatuses(Aws::Vector<ReplicationStatus>&& value) { m_replicationStatuses = std::move(value); }
    inline CreateApplicationResult& WithReplicationStatuses(const Aws::Vector<ReplicationStatus>& value) { SetReplicationStatuses(value); return *this;}
    inline CreateApplicationResult& WithReplicationStatuses(Aws::Vector<ReplicationStatus>&& value) { SetReplicationStatuses(std::move(value)); return *this;}
    inline CreateApplicationResult& AddReplicationStatuses(const ReplicationStatus& value) { m_replicationStatuses.push_back(value); return *this; }
    inline CreateApplicationResult& AddReplicationStatuses(ReplicationStatus&& value) { m_replicationStatuses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A set of configuration settings to run the application on a stream group.
     * This configures the operating system, and can include compatibility layers and
     * other drivers. </p> <p>A runtime environment can be one of the following:</p>
     * <ul> <li> <p> For Linux applications </p> <ul> <li> <p> Ubuntu 22.04
     * LTS(<code>Type=UBUNTU, Version=22_04_LTS</code>) </p> </li> </ul> </li> <li> <p>
     * For Windows applications </p> <ul> <li> <p>Microsoft Windows Server 2022 Base
     * (<code>Type=WINDOWS, Version=2022</code>)</p> </li> <li> <p>Proton 8.0-5
     * (<code>Type=PROTON, Version=20241007</code>)</p> </li> <li> <p>Proton 8.0-2c
     * (<code>Type=PROTON, Version=20230704</code>)</p> </li> </ul> </li> </ul>
     */
    inline const RuntimeEnvironment& GetRuntimeEnvironment() const{ return m_runtimeEnvironment; }
    inline void SetRuntimeEnvironment(const RuntimeEnvironment& value) { m_runtimeEnvironment = value; }
    inline void SetRuntimeEnvironment(RuntimeEnvironment&& value) { m_runtimeEnvironment = std::move(value); }
    inline CreateApplicationResult& WithRuntimeEnvironment(const RuntimeEnvironment& value) { SetRuntimeEnvironment(value); return *this;}
    inline CreateApplicationResult& WithRuntimeEnvironment(RuntimeEnvironment&& value) { SetRuntimeEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the application resource. Possible statuses include the
     * following:</p> <ul> <li> <p> <code>INITIALIZED</code>: Amazon GameLift Streams
     * has received the request and is initiating the work flow to create an
     * application. </p> </li> <li> <p> <code>PROCESSING</code>: The create application
     * work flow is in process. Amazon GameLift Streams is copying the content and
     * caching for future deployment in a stream group.</p> </li> <li> <p>
     * <code>READY</code>: The application is ready to deploy in a stream group.</p>
     * </li> <li> <p> <code>ERROR</code>: An error occurred when setting up the
     * application. See <code>StatusReason</code> for more information.</p> </li> <li>
     * <p> <code>DELETING</code>: Amazon GameLift Streams is in the process of deleting
     * the application.</p> </li> </ul>
     */
    inline const ApplicationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ApplicationStatus& value) { m_status = value; }
    inline void SetStatus(ApplicationStatus&& value) { m_status = std::move(value); }
    inline CreateApplicationResult& WithStatus(const ApplicationStatus& value) { SetStatus(value); return *this;}
    inline CreateApplicationResult& WithStatus(ApplicationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the status reason when the application is in
     * <code>ERROR</code> status.</p>
     */
    inline const ApplicationStatusReason& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const ApplicationStatusReason& value) { m_statusReason = value; }
    inline void SetStatusReason(ApplicationStatusReason&& value) { m_statusReason = std::move(value); }
    inline CreateApplicationResult& WithStatusReason(const ApplicationStatusReason& value) { SetStatusReason(value); return *this;}
    inline CreateApplicationResult& WithStatusReason(ApplicationStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationLogOutputUri;

    Aws::Vector<Aws::String> m_applicationLogPaths;

    Aws::String m_applicationSourceUri;

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_associatedStreamGroups;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::String m_executablePath;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Vector<ReplicationStatus> m_replicationStatuses;

    RuntimeEnvironment m_runtimeEnvironment;

    ApplicationStatus m_status;

    ApplicationStatusReason m_statusReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
