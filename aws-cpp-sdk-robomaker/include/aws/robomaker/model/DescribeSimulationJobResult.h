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
#include <aws/robomaker/model/SimulationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/FailureBehavior.h>
#include <aws/robomaker/model/SimulationJobErrorCode.h>
#include <aws/robomaker/model/OutputLocation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/VPCConfigResponse.h>
#include <aws/robomaker/model/RobotApplicationConfig.h>
#include <aws/robomaker/model/SimulationApplicationConfig.h>
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
  class AWS_ROBOMAKER_API DescribeSimulationJobResult
  {
  public:
    DescribeSimulationJobResult();
    DescribeSimulationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSimulationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the simulation job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the simulation job.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the simulation job.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the simulation job.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the simulation job.</p>
     */
    inline const SimulationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the simulation job.</p>
     */
    inline void SetStatus(const SimulationJobStatus& value) { m_status = value; }

    /**
     * <p>The status of the simulation job.</p>
     */
    inline void SetStatus(SimulationJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithStatus(const SimulationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithStatus(SimulationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartedAt() const{ return m_lastStartedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline void SetLastStartedAt(const Aws::Utils::DateTime& value) { m_lastStartedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline void SetLastStartedAt(Aws::Utils::DateTime&& value) { m_lastStartedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline DescribeSimulationJobResult& WithLastStartedAt(const Aws::Utils::DateTime& value) { SetLastStartedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline DescribeSimulationJobResult& WithLastStartedAt(Aws::Utils::DateTime&& value) { SetLastStartedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline DescribeSimulationJobResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline DescribeSimulationJobResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The failure behavior for the simulation job.</p>
     */
    inline const FailureBehavior& GetFailureBehavior() const{ return m_failureBehavior; }

    /**
     * <p>The failure behavior for the simulation job.</p>
     */
    inline void SetFailureBehavior(const FailureBehavior& value) { m_failureBehavior = value; }

    /**
     * <p>The failure behavior for the simulation job.</p>
     */
    inline void SetFailureBehavior(FailureBehavior&& value) { m_failureBehavior = std::move(value); }

    /**
     * <p>The failure behavior for the simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithFailureBehavior(const FailureBehavior& value) { SetFailureBehavior(value); return *this;}

    /**
     * <p>The failure behavior for the simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithFailureBehavior(FailureBehavior&& value) { SetFailureBehavior(std::move(value)); return *this;}


    /**
     * <p>The failure code of the simulation job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>RobotApplicationCrash</dt> <dd> <p>Robot application exited abnormally.</p>
     * </dd> <dt>SimulationApplicationCrash</dt> <dd> <p> Simulation application exited
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
    inline const SimulationJobErrorCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code of the simulation job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>RobotApplicationCrash</dt> <dd> <p>Robot application exited abnormally.</p>
     * </dd> <dt>SimulationApplicationCrash</dt> <dd> <p> Simulation application exited
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
    inline void SetFailureCode(const SimulationJobErrorCode& value) { m_failureCode = value; }

    /**
     * <p>The failure code of the simulation job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>RobotApplicationCrash</dt> <dd> <p>Robot application exited abnormally.</p>
     * </dd> <dt>SimulationApplicationCrash</dt> <dd> <p> Simulation application exited
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
    inline void SetFailureCode(SimulationJobErrorCode&& value) { m_failureCode = std::move(value); }

    /**
     * <p>The failure code of the simulation job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>RobotApplicationCrash</dt> <dd> <p>Robot application exited abnormally.</p>
     * </dd> <dt>SimulationApplicationCrash</dt> <dd> <p> Simulation application exited
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
    inline DescribeSimulationJobResult& WithFailureCode(const SimulationJobErrorCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code of the simulation job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>RobotApplicationCrash</dt> <dd> <p>Robot application exited abnormally.</p>
     * </dd> <dt>SimulationApplicationCrash</dt> <dd> <p> Simulation application exited
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
    inline DescribeSimulationJobResult& WithFailureCode(SimulationJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>Details about why the simulation job failed. For more information about
     * troubleshooting, see <a
     * href="https://docs.aws.amazon.com/robomaker/latest/dg/troubleshooting.html">Troubleshooting</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>Details about why the simulation job failed. For more information about
     * troubleshooting, see <a
     * href="https://docs.aws.amazon.com/robomaker/latest/dg/troubleshooting.html">Troubleshooting</a>.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>Details about why the simulation job failed. For more information about
     * troubleshooting, see <a
     * href="https://docs.aws.amazon.com/robomaker/latest/dg/troubleshooting.html">Troubleshooting</a>.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>Details about why the simulation job failed. For more information about
     * troubleshooting, see <a
     * href="https://docs.aws.amazon.com/robomaker/latest/dg/troubleshooting.html">Troubleshooting</a>.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>Details about why the simulation job failed. For more information about
     * troubleshooting, see <a
     * href="https://docs.aws.amazon.com/robomaker/latest/dg/troubleshooting.html">Troubleshooting</a>.</p>
     */
    inline DescribeSimulationJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>Details about why the simulation job failed. For more information about
     * troubleshooting, see <a
     * href="https://docs.aws.amazon.com/robomaker/latest/dg/troubleshooting.html">Troubleshooting</a>.</p>
     */
    inline DescribeSimulationJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>Details about why the simulation job failed. For more information about
     * troubleshooting, see <a
     * href="https://docs.aws.amazon.com/robomaker/latest/dg/troubleshooting.html">Troubleshooting</a>.</p>
     */
    inline DescribeSimulationJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline DescribeSimulationJobResult& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline DescribeSimulationJobResult& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline DescribeSimulationJobResult& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Location for output files generated by the simulation job.</p>
     */
    inline const OutputLocation& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>Location for output files generated by the simulation job.</p>
     */
    inline void SetOutputLocation(const OutputLocation& value) { m_outputLocation = value; }

    /**
     * <p>Location for output files generated by the simulation job.</p>
     */
    inline void SetOutputLocation(OutputLocation&& value) { m_outputLocation = std::move(value); }

    /**
     * <p>Location for output files generated by the simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithOutputLocation(const OutputLocation& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>Location for output files generated by the simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithOutputLocation(OutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}


    /**
     * <p>The maximum job duration in seconds. The value must be 8 days (691,200
     * seconds) or less.</p>
     */
    inline long long GetMaxJobDurationInSeconds() const{ return m_maxJobDurationInSeconds; }

    /**
     * <p>The maximum job duration in seconds. The value must be 8 days (691,200
     * seconds) or less.</p>
     */
    inline void SetMaxJobDurationInSeconds(long long value) { m_maxJobDurationInSeconds = value; }

    /**
     * <p>The maximum job duration in seconds. The value must be 8 days (691,200
     * seconds) or less.</p>
     */
    inline DescribeSimulationJobResult& WithMaxJobDurationInSeconds(long long value) { SetMaxJobDurationInSeconds(value); return *this;}


    /**
     * <p>The simulation job execution duration in milliseconds.</p>
     */
    inline long long GetSimulationTimeMillis() const{ return m_simulationTimeMillis; }

    /**
     * <p>The simulation job execution duration in milliseconds.</p>
     */
    inline void SetSimulationTimeMillis(long long value) { m_simulationTimeMillis = value; }

    /**
     * <p>The simulation job execution duration in milliseconds.</p>
     */
    inline DescribeSimulationJobResult& WithSimulationTimeMillis(long long value) { SetSimulationTimeMillis(value); return *this;}


    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf.</p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf.</p>
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRole = value; }

    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf.</p>
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRole = std::move(value); }

    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf.</p>
     */
    inline void SetIamRole(const char* value) { m_iamRole.assign(value); }

    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf.</p>
     */
    inline DescribeSimulationJobResult& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf.</p>
     */
    inline DescribeSimulationJobResult& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf.</p>
     */
    inline DescribeSimulationJobResult& WithIamRole(const char* value) { SetIamRole(value); return *this;}


    /**
     * <p>A list of robot applications.</p>
     */
    inline const Aws::Vector<RobotApplicationConfig>& GetRobotApplications() const{ return m_robotApplications; }

    /**
     * <p>A list of robot applications.</p>
     */
    inline void SetRobotApplications(const Aws::Vector<RobotApplicationConfig>& value) { m_robotApplications = value; }

    /**
     * <p>A list of robot applications.</p>
     */
    inline void SetRobotApplications(Aws::Vector<RobotApplicationConfig>&& value) { m_robotApplications = std::move(value); }

    /**
     * <p>A list of robot applications.</p>
     */
    inline DescribeSimulationJobResult& WithRobotApplications(const Aws::Vector<RobotApplicationConfig>& value) { SetRobotApplications(value); return *this;}

    /**
     * <p>A list of robot applications.</p>
     */
    inline DescribeSimulationJobResult& WithRobotApplications(Aws::Vector<RobotApplicationConfig>&& value) { SetRobotApplications(std::move(value)); return *this;}

    /**
     * <p>A list of robot applications.</p>
     */
    inline DescribeSimulationJobResult& AddRobotApplications(const RobotApplicationConfig& value) { m_robotApplications.push_back(value); return *this; }

    /**
     * <p>A list of robot applications.</p>
     */
    inline DescribeSimulationJobResult& AddRobotApplications(RobotApplicationConfig&& value) { m_robotApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of simulation applications.</p>
     */
    inline const Aws::Vector<SimulationApplicationConfig>& GetSimulationApplications() const{ return m_simulationApplications; }

    /**
     * <p>A list of simulation applications.</p>
     */
    inline void SetSimulationApplications(const Aws::Vector<SimulationApplicationConfig>& value) { m_simulationApplications = value; }

    /**
     * <p>A list of simulation applications.</p>
     */
    inline void SetSimulationApplications(Aws::Vector<SimulationApplicationConfig>&& value) { m_simulationApplications = std::move(value); }

    /**
     * <p>A list of simulation applications.</p>
     */
    inline DescribeSimulationJobResult& WithSimulationApplications(const Aws::Vector<SimulationApplicationConfig>& value) { SetSimulationApplications(value); return *this;}

    /**
     * <p>A list of simulation applications.</p>
     */
    inline DescribeSimulationJobResult& WithSimulationApplications(Aws::Vector<SimulationApplicationConfig>&& value) { SetSimulationApplications(std::move(value)); return *this;}

    /**
     * <p>A list of simulation applications.</p>
     */
    inline DescribeSimulationJobResult& AddSimulationApplications(const SimulationApplicationConfig& value) { m_simulationApplications.push_back(value); return *this; }

    /**
     * <p>A list of simulation applications.</p>
     */
    inline DescribeSimulationJobResult& AddSimulationApplications(SimulationApplicationConfig&& value) { m_simulationApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of all tags added to the specified simulation job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of all tags added to the specified simulation job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of all tags added to the specified simulation job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of all tags added to the specified simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of all tags added to the specified simulation job.</p>
     */
    inline DescribeSimulationJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of all tags added to the specified simulation job.</p>
     */
    inline DescribeSimulationJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of all tags added to the specified simulation job.</p>
     */
    inline DescribeSimulationJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the specified simulation job.</p>
     */
    inline DescribeSimulationJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified simulation job.</p>
     */
    inline DescribeSimulationJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified simulation job.</p>
     */
    inline DescribeSimulationJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of all tags added to the specified simulation job.</p>
     */
    inline DescribeSimulationJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of all tags added to the specified simulation job.</p>
     */
    inline DescribeSimulationJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The VPC configuration.</p>
     */
    inline const VPCConfigResponse& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The VPC configuration.</p>
     */
    inline void SetVpcConfig(const VPCConfigResponse& value) { m_vpcConfig = value; }

    /**
     * <p>The VPC configuration.</p>
     */
    inline void SetVpcConfig(VPCConfigResponse&& value) { m_vpcConfig = std::move(value); }

    /**
     * <p>The VPC configuration.</p>
     */
    inline DescribeSimulationJobResult& WithVpcConfig(const VPCConfigResponse& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The VPC configuration.</p>
     */
    inline DescribeSimulationJobResult& WithVpcConfig(VPCConfigResponse&& value) { SetVpcConfig(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_name;

    SimulationJobStatus m_status;

    Aws::Utils::DateTime m_lastStartedAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    FailureBehavior m_failureBehavior;

    SimulationJobErrorCode m_failureCode;

    Aws::String m_failureReason;

    Aws::String m_clientRequestToken;

    OutputLocation m_outputLocation;

    long long m_maxJobDurationInSeconds;

    long long m_simulationTimeMillis;

    Aws::String m_iamRole;

    Aws::Vector<RobotApplicationConfig> m_robotApplications;

    Aws::Vector<SimulationApplicationConfig> m_simulationApplications;

    Aws::Map<Aws::String, Aws::String> m_tags;

    VPCConfigResponse m_vpcConfig;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
