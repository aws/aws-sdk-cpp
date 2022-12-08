/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/simspaceweaver/model/LiveSimulationState.h>
#include <aws/simspaceweaver/model/LoggingConfiguration.h>
#include <aws/simspaceweaver/model/S3Location.h>
#include <aws/simspaceweaver/model/SimulationStatus.h>
#include <aws/simspaceweaver/model/SimulationTargetStatus.h>
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
namespace SimSpaceWeaver
{
namespace Model
{
  class DescribeSimulationResult
  {
  public:
    AWS_SIMSPACEWEAVER_API DescribeSimulationResult();
    AWS_SIMSPACEWEAVER_API DescribeSimulationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIMSPACEWEAVER_API DescribeSimulationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline DescribeSimulationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline DescribeSimulationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline DescribeSimulationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time when the simulation was created, expressed as the number of seconds
     * and milliseconds in UTC since the Unix epoch (0:0:0.000, January 1, 1970).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the simulation was created, expressed as the number of seconds
     * and milliseconds in UTC since the Unix epoch (0:0:0.000, January 1, 1970).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time when the simulation was created, expressed as the number of seconds
     * and milliseconds in UTC since the Unix epoch (0:0:0.000, January 1, 1970).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time when the simulation was created, expressed as the number of seconds
     * and milliseconds in UTC since the Unix epoch (0:0:0.000, January 1, 1970).</p>
     */
    inline DescribeSimulationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the simulation was created, expressed as the number of seconds
     * and milliseconds in UTC since the Unix epoch (0:0:0.000, January 1, 1970).</p>
     */
    inline DescribeSimulationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The description of the simulation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the simulation.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the simulation.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the simulation.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the simulation.</p>
     */
    inline DescribeSimulationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the simulation.</p>
     */
    inline DescribeSimulationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the simulation.</p>
     */
    inline DescribeSimulationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A universally unique identifier (UUID) for this simulation.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>A universally unique identifier (UUID) for this simulation.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionId = value; }

    /**
     * <p>A universally unique identifier (UUID) for this simulation.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionId = std::move(value); }

    /**
     * <p>A universally unique identifier (UUID) for this simulation.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionId.assign(value); }

    /**
     * <p>A universally unique identifier (UUID) for this simulation.</p>
     */
    inline DescribeSimulationResult& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>A universally unique identifier (UUID) for this simulation.</p>
     */
    inline DescribeSimulationResult& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>A universally unique identifier (UUID) for this simulation.</p>
     */
    inline DescribeSimulationResult& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>A collection of additional state information, such as domain and clock
     * configuration.</p>
     */
    inline const LiveSimulationState& GetLiveSimulationState() const{ return m_liveSimulationState; }

    /**
     * <p>A collection of additional state information, such as domain and clock
     * configuration.</p>
     */
    inline void SetLiveSimulationState(const LiveSimulationState& value) { m_liveSimulationState = value; }

    /**
     * <p>A collection of additional state information, such as domain and clock
     * configuration.</p>
     */
    inline void SetLiveSimulationState(LiveSimulationState&& value) { m_liveSimulationState = std::move(value); }

    /**
     * <p>A collection of additional state information, such as domain and clock
     * configuration.</p>
     */
    inline DescribeSimulationResult& WithLiveSimulationState(const LiveSimulationState& value) { SetLiveSimulationState(value); return *this;}

    /**
     * <p>A collection of additional state information, such as domain and clock
     * configuration.</p>
     */
    inline DescribeSimulationResult& WithLiveSimulationState(LiveSimulationState&& value) { SetLiveSimulationState(std::move(value)); return *this;}


    /**
     * <p>Settings that control how SimSpace Weaver handles your simulation log
     * data.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>Settings that control how SimSpace Weaver handles your simulation log
     * data.</p>
     */
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfiguration = value; }

    /**
     * <p>Settings that control how SimSpace Weaver handles your simulation log
     * data.</p>
     */
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfiguration = std::move(value); }

    /**
     * <p>Settings that control how SimSpace Weaver handles your simulation log
     * data.</p>
     */
    inline DescribeSimulationResult& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>Settings that control how SimSpace Weaver handles your simulation log
     * data.</p>
     */
    inline DescribeSimulationResult& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline const Aws::String& GetMaximumDuration() const{ return m_maximumDuration; }

    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline void SetMaximumDuration(const Aws::String& value) { m_maximumDuration = value; }

    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline void SetMaximumDuration(Aws::String&& value) { m_maximumDuration = std::move(value); }

    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline void SetMaximumDuration(const char* value) { m_maximumDuration.assign(value); }

    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline DescribeSimulationResult& WithMaximumDuration(const Aws::String& value) { SetMaximumDuration(value); return *this;}

    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline DescribeSimulationResult& WithMaximumDuration(Aws::String&& value) { SetMaximumDuration(std::move(value)); return *this;}

    /**
     * <p>The maximum running time of the simulation, specified as a number of months
     * (m or M), hours (h or H), or days (d or D). The simulation stops when it reaches
     * this limit.</p>
     */
    inline DescribeSimulationResult& WithMaximumDuration(const char* value) { SetMaximumDuration(value); return *this;}


    /**
     * <p>The name of the simulation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the simulation.</p>
     */
    inline DescribeSimulationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the simulation.</p>
     */
    inline DescribeSimulationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the simulation.</p>
     */
    inline DescribeSimulationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that the simulation assumes to perform actions. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about IAM roles, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * roles</a> in the <i>Identity and Access Management User Guide</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that the simulation assumes to perform actions. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about IAM roles, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * roles</a> in the <i>Identity and Access Management User Guide</i>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that the simulation assumes to perform actions. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about IAM roles, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * roles</a> in the <i>Identity and Access Management User Guide</i>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that the simulation assumes to perform actions. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about IAM roles, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * roles</a> in the <i>Identity and Access Management User Guide</i>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that the simulation assumes to perform actions. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about IAM roles, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * roles</a> in the <i>Identity and Access Management User Guide</i>.</p>
     */
    inline DescribeSimulationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that the simulation assumes to perform actions. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about IAM roles, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * roles</a> in the <i>Identity and Access Management User Guide</i>.</p>
     */
    inline DescribeSimulationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that the simulation assumes to perform actions. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about IAM roles, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
     * roles</a> in the <i>Identity and Access Management User Guide</i>.</p>
     */
    inline DescribeSimulationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An error message that SimSpace Weaver returns only if there is a problem with
     * the simulation schema.</p>
     */
    inline const Aws::String& GetSchemaError() const{ return m_schemaError; }

    /**
     * <p>An error message that SimSpace Weaver returns only if there is a problem with
     * the simulation schema.</p>
     */
    inline void SetSchemaError(const Aws::String& value) { m_schemaError = value; }

    /**
     * <p>An error message that SimSpace Weaver returns only if there is a problem with
     * the simulation schema.</p>
     */
    inline void SetSchemaError(Aws::String&& value) { m_schemaError = std::move(value); }

    /**
     * <p>An error message that SimSpace Weaver returns only if there is a problem with
     * the simulation schema.</p>
     */
    inline void SetSchemaError(const char* value) { m_schemaError.assign(value); }

    /**
     * <p>An error message that SimSpace Weaver returns only if there is a problem with
     * the simulation schema.</p>
     */
    inline DescribeSimulationResult& WithSchemaError(const Aws::String& value) { SetSchemaError(value); return *this;}

    /**
     * <p>An error message that SimSpace Weaver returns only if there is a problem with
     * the simulation schema.</p>
     */
    inline DescribeSimulationResult& WithSchemaError(Aws::String&& value) { SetSchemaError(std::move(value)); return *this;}

    /**
     * <p>An error message that SimSpace Weaver returns only if there is a problem with
     * the simulation schema.</p>
     */
    inline DescribeSimulationResult& WithSchemaError(const char* value) { SetSchemaError(value); return *this;}


    /**
     * <p>The location of the simulation schema in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p>
     */
    inline const S3Location& GetSchemaS3Location() const{ return m_schemaS3Location; }

    /**
     * <p>The location of the simulation schema in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p>
     */
    inline void SetSchemaS3Location(const S3Location& value) { m_schemaS3Location = value; }

    /**
     * <p>The location of the simulation schema in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p>
     */
    inline void SetSchemaS3Location(S3Location&& value) { m_schemaS3Location = std::move(value); }

    /**
     * <p>The location of the simulation schema in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p>
     */
    inline DescribeSimulationResult& WithSchemaS3Location(const S3Location& value) { SetSchemaS3Location(value); return *this;}

    /**
     * <p>The location of the simulation schema in Amazon Simple Storage Service
     * (Amazon S3). For more information about Amazon S3, see the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Welcome.html">
     * <i>Amazon Simple Storage Service User Guide</i> </a>.</p>
     */
    inline DescribeSimulationResult& WithSchemaS3Location(S3Location&& value) { SetSchemaS3Location(std::move(value)); return *this;}


    /**
     * <p>The current lifecycle state of the simulation.</p>
     */
    inline const SimulationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current lifecycle state of the simulation.</p>
     */
    inline void SetStatus(const SimulationStatus& value) { m_status = value; }

    /**
     * <p>The current lifecycle state of the simulation.</p>
     */
    inline void SetStatus(SimulationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current lifecycle state of the simulation.</p>
     */
    inline DescribeSimulationResult& WithStatus(const SimulationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current lifecycle state of the simulation.</p>
     */
    inline DescribeSimulationResult& WithStatus(SimulationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The desired lifecycle state of the simulation.</p>
     */
    inline const SimulationTargetStatus& GetTargetStatus() const{ return m_targetStatus; }

    /**
     * <p>The desired lifecycle state of the simulation.</p>
     */
    inline void SetTargetStatus(const SimulationTargetStatus& value) { m_targetStatus = value; }

    /**
     * <p>The desired lifecycle state of the simulation.</p>
     */
    inline void SetTargetStatus(SimulationTargetStatus&& value) { m_targetStatus = std::move(value); }

    /**
     * <p>The desired lifecycle state of the simulation.</p>
     */
    inline DescribeSimulationResult& WithTargetStatus(const SimulationTargetStatus& value) { SetTargetStatus(value); return *this;}

    /**
     * <p>The desired lifecycle state of the simulation.</p>
     */
    inline DescribeSimulationResult& WithTargetStatus(SimulationTargetStatus&& value) { SetTargetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_description;

    Aws::String m_executionId;

    LiveSimulationState m_liveSimulationState;

    LoggingConfiguration m_loggingConfiguration;

    Aws::String m_maximumDuration;

    Aws::String m_name;

    Aws::String m_roleArn;

    Aws::String m_schemaError;

    S3Location m_schemaS3Location;

    SimulationStatus m_status;

    SimulationTargetStatus m_targetStatus;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
