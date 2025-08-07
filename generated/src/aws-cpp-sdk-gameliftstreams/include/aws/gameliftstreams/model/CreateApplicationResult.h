/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/RuntimeEnvironment.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gameliftstreams/model/ApplicationStatus.h>
#include <aws/gameliftstreams/model/ApplicationStatusReason.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_GAMELIFTSTREAMS_API CreateApplicationResult() = default;
    AWS_GAMELIFTSTREAMS_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> that's assigned to an application resource and uniquely
     * identifies it across all Amazon Web Services Regions. Format is
     * <code>arn:aws:gameliftstreams:[AWS Region]:[AWS account]:application/[resource
     * ID]</code>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateApplicationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable label for the application. You can edit this value. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateApplicationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configuration settings that identify the operating system for an application
     * resource. This can also include a compatibility layer and other drivers. </p>
     * <p>A runtime environment can be one of the following:</p> <ul> <li> <p> For
     * Linux applications </p> <ul> <li> <p> Ubuntu 22.04 LTS (<code>Type=UBUNTU,
     * Version=22_04_LTS</code>) </p> </li> </ul> </li> <li> <p> For Windows
     * applications </p> <ul> <li> <p>Microsoft Windows Server 2022 Base
     * (<code>Type=WINDOWS, Version=2022</code>)</p> </li> <li> <p>Proton 9.0-2
     * (<code>Type=PROTON, Version=20250516</code>)</p> </li> <li> <p>Proton 8.0-5
     * (<code>Type=PROTON, Version=20241007</code>)</p> </li> <li> <p>Proton 8.0-2c
     * (<code>Type=PROTON, Version=20230704</code>)</p> </li> </ul> </li> </ul>
     */
    inline const RuntimeEnvironment& GetRuntimeEnvironment() const { return m_runtimeEnvironment; }
    template<typename RuntimeEnvironmentT = RuntimeEnvironment>
    void SetRuntimeEnvironment(RuntimeEnvironmentT&& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = std::forward<RuntimeEnvironmentT>(value); }
    template<typename RuntimeEnvironmentT = RuntimeEnvironment>
    CreateApplicationResult& WithRuntimeEnvironment(RuntimeEnvironmentT&& value) { SetRuntimeEnvironment(std::forward<RuntimeEnvironmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path and file name of the executable file that launches the content for
     * streaming.</p>
     */
    inline const Aws::String& GetExecutablePath() const { return m_executablePath; }
    template<typename ExecutablePathT = Aws::String>
    void SetExecutablePath(ExecutablePathT&& value) { m_executablePathHasBeenSet = true; m_executablePath = std::forward<ExecutablePathT>(value); }
    template<typename ExecutablePathT = Aws::String>
    CreateApplicationResult& WithExecutablePath(ExecutablePathT&& value) { SetExecutablePath(std::forward<ExecutablePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Locations of log files that your content generates during a stream session.
     * Amazon GameLift Streams uploads log files to the Amazon S3 bucket that you
     * specify in <code>ApplicationLogOutputUri</code> at the end of a stream session.
     * To retrieve stored log files, call <a
     * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_GetStreamSession.html">GetStreamSession</a>
     * and get the <code>LogFileLocationUri</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationLogPaths() const { return m_applicationLogPaths; }
    template<typename ApplicationLogPathsT = Aws::Vector<Aws::String>>
    void SetApplicationLogPaths(ApplicationLogPathsT&& value) { m_applicationLogPathsHasBeenSet = true; m_applicationLogPaths = std::forward<ApplicationLogPathsT>(value); }
    template<typename ApplicationLogPathsT = Aws::Vector<Aws::String>>
    CreateApplicationResult& WithApplicationLogPaths(ApplicationLogPathsT&& value) { SetApplicationLogPaths(std::forward<ApplicationLogPathsT>(value)); return *this;}
    template<typename ApplicationLogPathsT = Aws::String>
    CreateApplicationResult& AddApplicationLogPaths(ApplicationLogPathsT&& value) { m_applicationLogPathsHasBeenSet = true; m_applicationLogPaths.emplace_back(std::forward<ApplicationLogPathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An Amazon S3 URI to a bucket where you would like Amazon GameLift Streams to
     * save application logs. Required if you specify one or more
     * <code>ApplicationLogPaths</code>.</p>
     */
    inline const Aws::String& GetApplicationLogOutputUri() const { return m_applicationLogOutputUri; }
    template<typename ApplicationLogOutputUriT = Aws::String>
    void SetApplicationLogOutputUri(ApplicationLogOutputUriT&& value) { m_applicationLogOutputUriHasBeenSet = true; m_applicationLogOutputUri = std::forward<ApplicationLogOutputUriT>(value); }
    template<typename ApplicationLogOutputUriT = Aws::String>
    CreateApplicationResult& WithApplicationLogOutputUri(ApplicationLogOutputUriT&& value) { SetApplicationLogOutputUri(std::forward<ApplicationLogOutputUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original Amazon S3 location of uploaded stream content for the
     * application.</p>
     */
    inline const Aws::String& GetApplicationSourceUri() const { return m_applicationSourceUri; }
    template<typename ApplicationSourceUriT = Aws::String>
    void SetApplicationSourceUri(ApplicationSourceUriT&& value) { m_applicationSourceUriHasBeenSet = true; m_applicationSourceUri = std::forward<ApplicationSourceUriT>(value); }
    template<typename ApplicationSourceUriT = Aws::String>
    CreateApplicationResult& WithApplicationSourceUri(ApplicationSourceUriT&& value) { SetApplicationSourceUri(std::forward<ApplicationSourceUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID value that is assigned to the resource when it's created. Format
     * example: <code>a-9ZY8X7Wv6</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateApplicationResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    inline ApplicationStatus GetStatus() const { return m_status; }
    inline void SetStatus(ApplicationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateApplicationResult& WithStatus(ApplicationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the status reason when the application is in
     * <code>ERROR</code> status.</p>
     */
    inline ApplicationStatusReason GetStatusReason() const { return m_statusReason; }
    inline void SetStatusReason(ApplicationStatusReason value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline CreateApplicationResult& WithStatusReason(ApplicationStatusReason value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of replication statuses for each location.</p>
     */
    inline const Aws::Vector<ReplicationStatus>& GetReplicationStatuses() const { return m_replicationStatuses; }
    template<typename ReplicationStatusesT = Aws::Vector<ReplicationStatus>>
    void SetReplicationStatuses(ReplicationStatusesT&& value) { m_replicationStatusesHasBeenSet = true; m_replicationStatuses = std::forward<ReplicationStatusesT>(value); }
    template<typename ReplicationStatusesT = Aws::Vector<ReplicationStatus>>
    CreateApplicationResult& WithReplicationStatuses(ReplicationStatusesT&& value) { SetReplicationStatuses(std::forward<ReplicationStatusesT>(value)); return *this;}
    template<typename ReplicationStatusesT = ReplicationStatus>
    CreateApplicationResult& AddReplicationStatuses(ReplicationStatusesT&& value) { m_replicationStatusesHasBeenSet = true; m_replicationStatuses.emplace_back(std::forward<ReplicationStatusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was created. Timestamps are
     * expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateApplicationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was last updated. Timestamps
     * are expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    CreateApplicationResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A newly created application is not associated to any stream groups. This
     * value is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedStreamGroups() const { return m_associatedStreamGroups; }
    template<typename AssociatedStreamGroupsT = Aws::Vector<Aws::String>>
    void SetAssociatedStreamGroups(AssociatedStreamGroupsT&& value) { m_associatedStreamGroupsHasBeenSet = true; m_associatedStreamGroups = std::forward<AssociatedStreamGroupsT>(value); }
    template<typename AssociatedStreamGroupsT = Aws::Vector<Aws::String>>
    CreateApplicationResult& WithAssociatedStreamGroups(AssociatedStreamGroupsT&& value) { SetAssociatedStreamGroups(std::forward<AssociatedStreamGroupsT>(value)); return *this;}
    template<typename AssociatedStreamGroupsT = Aws::String>
    CreateApplicationResult& AddAssociatedStreamGroups(AssociatedStreamGroupsT&& value) { m_associatedStreamGroupsHasBeenSet = true; m_associatedStreamGroups.emplace_back(std::forward<AssociatedStreamGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RuntimeEnvironment m_runtimeEnvironment;
    bool m_runtimeEnvironmentHasBeenSet = false;

    Aws::String m_executablePath;
    bool m_executablePathHasBeenSet = false;

    Aws::Vector<Aws::String> m_applicationLogPaths;
    bool m_applicationLogPathsHasBeenSet = false;

    Aws::String m_applicationLogOutputUri;
    bool m_applicationLogOutputUriHasBeenSet = false;

    Aws::String m_applicationSourceUri;
    bool m_applicationSourceUriHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ApplicationStatus m_status{ApplicationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ApplicationStatusReason m_statusReason{ApplicationStatusReason::NOT_SET};
    bool m_statusReasonHasBeenSet = false;

    Aws::Vector<ReplicationStatus> m_replicationStatuses;
    bool m_replicationStatusesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedStreamGroups;
    bool m_associatedStreamGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
