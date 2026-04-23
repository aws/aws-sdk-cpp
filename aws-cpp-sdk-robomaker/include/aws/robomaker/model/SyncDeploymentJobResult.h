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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/DeploymentStatus.h>
#include <aws/robomaker/model/DeploymentConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/DeploymentJobErrorCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/DeploymentApplicationConfig.h>
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
namespace RoboMaker
{
namespace Model
{
  class AWS_ROBOMAKER_API SyncDeploymentJobResult
  {
  public:
    SyncDeploymentJobResult();
    SyncDeploymentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SyncDeploymentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the synchronization request.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the synchronization request.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the synchronization request.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the synchronization request.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the synchronization request.</p>
     */
    inline SyncDeploymentJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the synchronization request.</p>
     */
    inline SyncDeploymentJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the synchronization request.</p>
     */
    inline SyncDeploymentJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetFleet() const{ return m_fleet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleet(const Aws::String& value) { m_fleet = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleet(Aws::String&& value) { m_fleet = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleet(const char* value) { m_fleet.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline SyncDeploymentJobResult& WithFleet(const Aws::String& value) { SetFleet(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline SyncDeploymentJobResult& WithFleet(Aws::String&& value) { SetFleet(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline SyncDeploymentJobResult& WithFleet(const char* value) { SetFleet(value); return *this;}


    /**
     * <p>The status of the synchronization job.</p>
     */
    inline const DeploymentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the synchronization job.</p>
     */
    inline void SetStatus(const DeploymentStatus& value) { m_status = value; }

    /**
     * <p>The status of the synchronization job.</p>
     */
    inline void SetStatus(DeploymentStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the synchronization job.</p>
     */
    inline SyncDeploymentJobResult& WithStatus(const DeploymentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the synchronization job.</p>
     */
    inline SyncDeploymentJobResult& WithStatus(DeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline const DeploymentConfig& GetDeploymentConfig() const{ return m_deploymentConfig; }

    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline void SetDeploymentConfig(const DeploymentConfig& value) { m_deploymentConfig = value; }

    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline void SetDeploymentConfig(DeploymentConfig&& value) { m_deploymentConfig = std::move(value); }

    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline SyncDeploymentJobResult& WithDeploymentConfig(const DeploymentConfig& value) { SetDeploymentConfig(value); return *this;}

    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline SyncDeploymentJobResult& WithDeploymentConfig(DeploymentConfig&& value) { SetDeploymentConfig(std::move(value)); return *this;}


    /**
     * <p>Information about the deployment application configurations.</p>
     */
    inline const Aws::Vector<DeploymentApplicationConfig>& GetDeploymentApplicationConfigs() const{ return m_deploymentApplicationConfigs; }

    /**
     * <p>Information about the deployment application configurations.</p>
     */
    inline void SetDeploymentApplicationConfigs(const Aws::Vector<DeploymentApplicationConfig>& value) { m_deploymentApplicationConfigs = value; }

    /**
     * <p>Information about the deployment application configurations.</p>
     */
    inline void SetDeploymentApplicationConfigs(Aws::Vector<DeploymentApplicationConfig>&& value) { m_deploymentApplicationConfigs = std::move(value); }

    /**
     * <p>Information about the deployment application configurations.</p>
     */
    inline SyncDeploymentJobResult& WithDeploymentApplicationConfigs(const Aws::Vector<DeploymentApplicationConfig>& value) { SetDeploymentApplicationConfigs(value); return *this;}

    /**
     * <p>Information about the deployment application configurations.</p>
     */
    inline SyncDeploymentJobResult& WithDeploymentApplicationConfigs(Aws::Vector<DeploymentApplicationConfig>&& value) { SetDeploymentApplicationConfigs(std::move(value)); return *this;}

    /**
     * <p>Information about the deployment application configurations.</p>
     */
    inline SyncDeploymentJobResult& AddDeploymentApplicationConfigs(const DeploymentApplicationConfig& value) { m_deploymentApplicationConfigs.push_back(value); return *this; }

    /**
     * <p>Information about the deployment application configurations.</p>
     */
    inline SyncDeploymentJobResult& AddDeploymentApplicationConfigs(DeploymentApplicationConfig&& value) { m_deploymentApplicationConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The failure reason if the job fails.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The failure reason if the job fails.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The failure reason if the job fails.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The failure reason if the job fails.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The failure reason if the job fails.</p>
     */
    inline SyncDeploymentJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The failure reason if the job fails.</p>
     */
    inline SyncDeploymentJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The failure reason if the job fails.</p>
     */
    inline SyncDeploymentJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The failure code if the job fails:</p> <dl> <dt>InternalServiceError</dt>
     * <dd> <p>Internal service error.</p> </dd> <dt>RobotApplicationCrash</dt> <dd>
     * <p>Robot application exited abnormally.</p> </dd>
     * <dt>SimulationApplicationCrash</dt> <dd> <p> Simulation application exited
     * abnormally.</p> </dd> <dt>BadPermissionsRobotApplication</dt> <dd> <p>Robot
     * application bundle could not be downloaded.</p> </dd>
     * <dt>BadPermissionsSimulationApplication</dt> <dd> <p>Simulation application
     * bundle could not be downloaded.</p> </dd> <dt>BadPermissionsS3Output</dt> <dd>
     * <p>Unable to publish outputs to customer-provided S3 bucket.</p> </dd>
     * <dt>BadPermissionsCloudwatchLogs</dt> <dd> <p>Unable to publish logs to
     * customer-provided CloudWatch Logs resource.</p> </dd>
     * <dt>SubnetIpLimitExceeded</dt> <dd> <p>Subnet IP limit exceeded.</p> </dd>
     * <dt>ENILimitExceeded</dt> <dd> <p>ENI limit exceeded.</p> </dd>
     * <dt>BadPermissionsUserCredentials</dt> <dd> <p>Unable to use the Role
     * provided.</p> </dd> <dt>InvalidBundleRobotApplication</dt> <dd> <p>Robot bundle
     * cannot be extracted (invalid format, bundling error, or other issue).</p> </dd>
     * <dt>InvalidBundleSimulationApplication</dt> <dd> <p>Simulation bundle cannot be
     * extracted (invalid format, bundling error, or other issue).</p> </dd>
     * <dt>RobotApplicationVersionMismatchedEtag</dt> <dd> <p>Etag for RobotApplication
     * does not match value during version creation.</p> </dd>
     * <dt>SimulationApplicationVersionMismatchedEtag</dt> <dd> <p>Etag for
     * SimulationApplication does not match value during version creation.</p> </dd>
     * </dl>
     */
    inline const DeploymentJobErrorCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code if the job fails:</p> <dl> <dt>InternalServiceError</dt>
     * <dd> <p>Internal service error.</p> </dd> <dt>RobotApplicationCrash</dt> <dd>
     * <p>Robot application exited abnormally.</p> </dd>
     * <dt>SimulationApplicationCrash</dt> <dd> <p> Simulation application exited
     * abnormally.</p> </dd> <dt>BadPermissionsRobotApplication</dt> <dd> <p>Robot
     * application bundle could not be downloaded.</p> </dd>
     * <dt>BadPermissionsSimulationApplication</dt> <dd> <p>Simulation application
     * bundle could not be downloaded.</p> </dd> <dt>BadPermissionsS3Output</dt> <dd>
     * <p>Unable to publish outputs to customer-provided S3 bucket.</p> </dd>
     * <dt>BadPermissionsCloudwatchLogs</dt> <dd> <p>Unable to publish logs to
     * customer-provided CloudWatch Logs resource.</p> </dd>
     * <dt>SubnetIpLimitExceeded</dt> <dd> <p>Subnet IP limit exceeded.</p> </dd>
     * <dt>ENILimitExceeded</dt> <dd> <p>ENI limit exceeded.</p> </dd>
     * <dt>BadPermissionsUserCredentials</dt> <dd> <p>Unable to use the Role
     * provided.</p> </dd> <dt>InvalidBundleRobotApplication</dt> <dd> <p>Robot bundle
     * cannot be extracted (invalid format, bundling error, or other issue).</p> </dd>
     * <dt>InvalidBundleSimulationApplication</dt> <dd> <p>Simulation bundle cannot be
     * extracted (invalid format, bundling error, or other issue).</p> </dd>
     * <dt>RobotApplicationVersionMismatchedEtag</dt> <dd> <p>Etag for RobotApplication
     * does not match value during version creation.</p> </dd>
     * <dt>SimulationApplicationVersionMismatchedEtag</dt> <dd> <p>Etag for
     * SimulationApplication does not match value during version creation.</p> </dd>
     * </dl>
     */
    inline void SetFailureCode(const DeploymentJobErrorCode& value) { m_failureCode = value; }

    /**
     * <p>The failure code if the job fails:</p> <dl> <dt>InternalServiceError</dt>
     * <dd> <p>Internal service error.</p> </dd> <dt>RobotApplicationCrash</dt> <dd>
     * <p>Robot application exited abnormally.</p> </dd>
     * <dt>SimulationApplicationCrash</dt> <dd> <p> Simulation application exited
     * abnormally.</p> </dd> <dt>BadPermissionsRobotApplication</dt> <dd> <p>Robot
     * application bundle could not be downloaded.</p> </dd>
     * <dt>BadPermissionsSimulationApplication</dt> <dd> <p>Simulation application
     * bundle could not be downloaded.</p> </dd> <dt>BadPermissionsS3Output</dt> <dd>
     * <p>Unable to publish outputs to customer-provided S3 bucket.</p> </dd>
     * <dt>BadPermissionsCloudwatchLogs</dt> <dd> <p>Unable to publish logs to
     * customer-provided CloudWatch Logs resource.</p> </dd>
     * <dt>SubnetIpLimitExceeded</dt> <dd> <p>Subnet IP limit exceeded.</p> </dd>
     * <dt>ENILimitExceeded</dt> <dd> <p>ENI limit exceeded.</p> </dd>
     * <dt>BadPermissionsUserCredentials</dt> <dd> <p>Unable to use the Role
     * provided.</p> </dd> <dt>InvalidBundleRobotApplication</dt> <dd> <p>Robot bundle
     * cannot be extracted (invalid format, bundling error, or other issue).</p> </dd>
     * <dt>InvalidBundleSimulationApplication</dt> <dd> <p>Simulation bundle cannot be
     * extracted (invalid format, bundling error, or other issue).</p> </dd>
     * <dt>RobotApplicationVersionMismatchedEtag</dt> <dd> <p>Etag for RobotApplication
     * does not match value during version creation.</p> </dd>
     * <dt>SimulationApplicationVersionMismatchedEtag</dt> <dd> <p>Etag for
     * SimulationApplication does not match value during version creation.</p> </dd>
     * </dl>
     */
    inline void SetFailureCode(DeploymentJobErrorCode&& value) { m_failureCode = std::move(value); }

    /**
     * <p>The failure code if the job fails:</p> <dl> <dt>InternalServiceError</dt>
     * <dd> <p>Internal service error.</p> </dd> <dt>RobotApplicationCrash</dt> <dd>
     * <p>Robot application exited abnormally.</p> </dd>
     * <dt>SimulationApplicationCrash</dt> <dd> <p> Simulation application exited
     * abnormally.</p> </dd> <dt>BadPermissionsRobotApplication</dt> <dd> <p>Robot
     * application bundle could not be downloaded.</p> </dd>
     * <dt>BadPermissionsSimulationApplication</dt> <dd> <p>Simulation application
     * bundle could not be downloaded.</p> </dd> <dt>BadPermissionsS3Output</dt> <dd>
     * <p>Unable to publish outputs to customer-provided S3 bucket.</p> </dd>
     * <dt>BadPermissionsCloudwatchLogs</dt> <dd> <p>Unable to publish logs to
     * customer-provided CloudWatch Logs resource.</p> </dd>
     * <dt>SubnetIpLimitExceeded</dt> <dd> <p>Subnet IP limit exceeded.</p> </dd>
     * <dt>ENILimitExceeded</dt> <dd> <p>ENI limit exceeded.</p> </dd>
     * <dt>BadPermissionsUserCredentials</dt> <dd> <p>Unable to use the Role
     * provided.</p> </dd> <dt>InvalidBundleRobotApplication</dt> <dd> <p>Robot bundle
     * cannot be extracted (invalid format, bundling error, or other issue).</p> </dd>
     * <dt>InvalidBundleSimulationApplication</dt> <dd> <p>Simulation bundle cannot be
     * extracted (invalid format, bundling error, or other issue).</p> </dd>
     * <dt>RobotApplicationVersionMismatchedEtag</dt> <dd> <p>Etag for RobotApplication
     * does not match value during version creation.</p> </dd>
     * <dt>SimulationApplicationVersionMismatchedEtag</dt> <dd> <p>Etag for
     * SimulationApplication does not match value during version creation.</p> </dd>
     * </dl>
     */
    inline SyncDeploymentJobResult& WithFailureCode(const DeploymentJobErrorCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code if the job fails:</p> <dl> <dt>InternalServiceError</dt>
     * <dd> <p>Internal service error.</p> </dd> <dt>RobotApplicationCrash</dt> <dd>
     * <p>Robot application exited abnormally.</p> </dd>
     * <dt>SimulationApplicationCrash</dt> <dd> <p> Simulation application exited
     * abnormally.</p> </dd> <dt>BadPermissionsRobotApplication</dt> <dd> <p>Robot
     * application bundle could not be downloaded.</p> </dd>
     * <dt>BadPermissionsSimulationApplication</dt> <dd> <p>Simulation application
     * bundle could not be downloaded.</p> </dd> <dt>BadPermissionsS3Output</dt> <dd>
     * <p>Unable to publish outputs to customer-provided S3 bucket.</p> </dd>
     * <dt>BadPermissionsCloudwatchLogs</dt> <dd> <p>Unable to publish logs to
     * customer-provided CloudWatch Logs resource.</p> </dd>
     * <dt>SubnetIpLimitExceeded</dt> <dd> <p>Subnet IP limit exceeded.</p> </dd>
     * <dt>ENILimitExceeded</dt> <dd> <p>ENI limit exceeded.</p> </dd>
     * <dt>BadPermissionsUserCredentials</dt> <dd> <p>Unable to use the Role
     * provided.</p> </dd> <dt>InvalidBundleRobotApplication</dt> <dd> <p>Robot bundle
     * cannot be extracted (invalid format, bundling error, or other issue).</p> </dd>
     * <dt>InvalidBundleSimulationApplication</dt> <dd> <p>Simulation bundle cannot be
     * extracted (invalid format, bundling error, or other issue).</p> </dd>
     * <dt>RobotApplicationVersionMismatchedEtag</dt> <dd> <p>Etag for RobotApplication
     * does not match value during version creation.</p> </dd>
     * <dt>SimulationApplicationVersionMismatchedEtag</dt> <dd> <p>Etag for
     * SimulationApplication does not match value during version creation.</p> </dd>
     * </dl>
     */
    inline SyncDeploymentJobResult& WithFailureCode(DeploymentJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline SyncDeploymentJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline SyncDeploymentJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_fleet;

    DeploymentStatus m_status;

    DeploymentConfig m_deploymentConfig;

    Aws::Vector<DeploymentApplicationConfig> m_deploymentApplicationConfigs;

    Aws::String m_failureReason;

    DeploymentJobErrorCode m_failureCode;

    Aws::Utils::DateTime m_createdAt;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
