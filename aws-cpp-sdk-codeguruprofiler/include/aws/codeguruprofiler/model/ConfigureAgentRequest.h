/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/codeguruprofiler/model/MetadataField.h>
#include <utility>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the configureAgentRequest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ConfigureAgentRequest">AWS
   * API Reference</a></p>
   */
  class ConfigureAgentRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API ConfigureAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfigureAgent"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;


    /**
     * <p> A universally unique identifier (UUID) for a profiling instance. For
     * example, if the profiling instance is an Amazon EC2 instance, it is the instance
     * ID. If it is an AWS Fargate container, it is the container's task ID. </p>
     */
    inline const Aws::String& GetFleetInstanceId() const{ return m_fleetInstanceId; }

    /**
     * <p> A universally unique identifier (UUID) for a profiling instance. For
     * example, if the profiling instance is an Amazon EC2 instance, it is the instance
     * ID. If it is an AWS Fargate container, it is the container's task ID. </p>
     */
    inline bool FleetInstanceIdHasBeenSet() const { return m_fleetInstanceIdHasBeenSet; }

    /**
     * <p> A universally unique identifier (UUID) for a profiling instance. For
     * example, if the profiling instance is an Amazon EC2 instance, it is the instance
     * ID. If it is an AWS Fargate container, it is the container's task ID. </p>
     */
    inline void SetFleetInstanceId(const Aws::String& value) { m_fleetInstanceIdHasBeenSet = true; m_fleetInstanceId = value; }

    /**
     * <p> A universally unique identifier (UUID) for a profiling instance. For
     * example, if the profiling instance is an Amazon EC2 instance, it is the instance
     * ID. If it is an AWS Fargate container, it is the container's task ID. </p>
     */
    inline void SetFleetInstanceId(Aws::String&& value) { m_fleetInstanceIdHasBeenSet = true; m_fleetInstanceId = std::move(value); }

    /**
     * <p> A universally unique identifier (UUID) for a profiling instance. For
     * example, if the profiling instance is an Amazon EC2 instance, it is the instance
     * ID. If it is an AWS Fargate container, it is the container's task ID. </p>
     */
    inline void SetFleetInstanceId(const char* value) { m_fleetInstanceIdHasBeenSet = true; m_fleetInstanceId.assign(value); }

    /**
     * <p> A universally unique identifier (UUID) for a profiling instance. For
     * example, if the profiling instance is an Amazon EC2 instance, it is the instance
     * ID. If it is an AWS Fargate container, it is the container's task ID. </p>
     */
    inline ConfigureAgentRequest& WithFleetInstanceId(const Aws::String& value) { SetFleetInstanceId(value); return *this;}

    /**
     * <p> A universally unique identifier (UUID) for a profiling instance. For
     * example, if the profiling instance is an Amazon EC2 instance, it is the instance
     * ID. If it is an AWS Fargate container, it is the container's task ID. </p>
     */
    inline ConfigureAgentRequest& WithFleetInstanceId(Aws::String&& value) { SetFleetInstanceId(std::move(value)); return *this;}

    /**
     * <p> A universally unique identifier (UUID) for a profiling instance. For
     * example, if the profiling instance is an Amazon EC2 instance, it is the instance
     * ID. If it is an AWS Fargate container, it is the container's task ID. </p>
     */
    inline ConfigureAgentRequest& WithFleetInstanceId(const char* value) { SetFleetInstanceId(value); return *this;}


    /**
     * <p> Metadata captured about the compute platform the agent is running on. It
     * includes information about sampling and reporting. The valid fields are:</p>
     * <ul> <li> <p> <code>COMPUTE_PLATFORM</code> - The compute platform on which the
     * agent is running </p> </li> <li> <p> <code>AGENT_ID</code> - The ID for an agent
     * instance. </p> </li> <li> <p> <code>AWS_REQUEST_ID</code> - The AWS request ID
     * of a Lambda invocation. </p> </li> <li> <p> <code>EXECUTION_ENVIRONMENT</code> -
     * The execution environment a Lambda function is running on. </p> </li> <li> <p>
     * <code>LAMBDA_FUNCTION_ARN</code> - The Amazon Resource Name (ARN) that is used
     * to invoke a Lambda function. </p> </li> <li> <p>
     * <code>LAMBDA_MEMORY_LIMIT_IN_MB</code> - The memory allocated to a Lambda
     * function. </p> </li> <li> <p> <code>LAMBDA_REMAINING_TIME_IN_MILLISECONDS</code>
     * - The time in milliseconds before execution of a Lambda function times out. </p>
     * </li> <li> <p> <code>LAMBDA_TIME_GAP_BETWEEN_INVOKES_IN_MILLISECONDS</code> -
     * The time in milliseconds between two invocations of a Lambda function. </p>
     * </li> <li> <p> <code>LAMBDA_PREVIOUS_EXECUTION_TIME_IN_MILLISECONDS</code> - The
     * time in milliseconds for the previous Lambda invocation. </p> </li> </ul>
     */
    inline const Aws::Map<MetadataField, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p> Metadata captured about the compute platform the agent is running on. It
     * includes information about sampling and reporting. The valid fields are:</p>
     * <ul> <li> <p> <code>COMPUTE_PLATFORM</code> - The compute platform on which the
     * agent is running </p> </li> <li> <p> <code>AGENT_ID</code> - The ID for an agent
     * instance. </p> </li> <li> <p> <code>AWS_REQUEST_ID</code> - The AWS request ID
     * of a Lambda invocation. </p> </li> <li> <p> <code>EXECUTION_ENVIRONMENT</code> -
     * The execution environment a Lambda function is running on. </p> </li> <li> <p>
     * <code>LAMBDA_FUNCTION_ARN</code> - The Amazon Resource Name (ARN) that is used
     * to invoke a Lambda function. </p> </li> <li> <p>
     * <code>LAMBDA_MEMORY_LIMIT_IN_MB</code> - The memory allocated to a Lambda
     * function. </p> </li> <li> <p> <code>LAMBDA_REMAINING_TIME_IN_MILLISECONDS</code>
     * - The time in milliseconds before execution of a Lambda function times out. </p>
     * </li> <li> <p> <code>LAMBDA_TIME_GAP_BETWEEN_INVOKES_IN_MILLISECONDS</code> -
     * The time in milliseconds between two invocations of a Lambda function. </p>
     * </li> <li> <p> <code>LAMBDA_PREVIOUS_EXECUTION_TIME_IN_MILLISECONDS</code> - The
     * time in milliseconds for the previous Lambda invocation. </p> </li> </ul>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p> Metadata captured about the compute platform the agent is running on. It
     * includes information about sampling and reporting. The valid fields are:</p>
     * <ul> <li> <p> <code>COMPUTE_PLATFORM</code> - The compute platform on which the
     * agent is running </p> </li> <li> <p> <code>AGENT_ID</code> - The ID for an agent
     * instance. </p> </li> <li> <p> <code>AWS_REQUEST_ID</code> - The AWS request ID
     * of a Lambda invocation. </p> </li> <li> <p> <code>EXECUTION_ENVIRONMENT</code> -
     * The execution environment a Lambda function is running on. </p> </li> <li> <p>
     * <code>LAMBDA_FUNCTION_ARN</code> - The Amazon Resource Name (ARN) that is used
     * to invoke a Lambda function. </p> </li> <li> <p>
     * <code>LAMBDA_MEMORY_LIMIT_IN_MB</code> - The memory allocated to a Lambda
     * function. </p> </li> <li> <p> <code>LAMBDA_REMAINING_TIME_IN_MILLISECONDS</code>
     * - The time in milliseconds before execution of a Lambda function times out. </p>
     * </li> <li> <p> <code>LAMBDA_TIME_GAP_BETWEEN_INVOKES_IN_MILLISECONDS</code> -
     * The time in milliseconds between two invocations of a Lambda function. </p>
     * </li> <li> <p> <code>LAMBDA_PREVIOUS_EXECUTION_TIME_IN_MILLISECONDS</code> - The
     * time in milliseconds for the previous Lambda invocation. </p> </li> </ul>
     */
    inline void SetMetadata(const Aws::Map<MetadataField, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p> Metadata captured about the compute platform the agent is running on. It
     * includes information about sampling and reporting. The valid fields are:</p>
     * <ul> <li> <p> <code>COMPUTE_PLATFORM</code> - The compute platform on which the
     * agent is running </p> </li> <li> <p> <code>AGENT_ID</code> - The ID for an agent
     * instance. </p> </li> <li> <p> <code>AWS_REQUEST_ID</code> - The AWS request ID
     * of a Lambda invocation. </p> </li> <li> <p> <code>EXECUTION_ENVIRONMENT</code> -
     * The execution environment a Lambda function is running on. </p> </li> <li> <p>
     * <code>LAMBDA_FUNCTION_ARN</code> - The Amazon Resource Name (ARN) that is used
     * to invoke a Lambda function. </p> </li> <li> <p>
     * <code>LAMBDA_MEMORY_LIMIT_IN_MB</code> - The memory allocated to a Lambda
     * function. </p> </li> <li> <p> <code>LAMBDA_REMAINING_TIME_IN_MILLISECONDS</code>
     * - The time in milliseconds before execution of a Lambda function times out. </p>
     * </li> <li> <p> <code>LAMBDA_TIME_GAP_BETWEEN_INVOKES_IN_MILLISECONDS</code> -
     * The time in milliseconds between two invocations of a Lambda function. </p>
     * </li> <li> <p> <code>LAMBDA_PREVIOUS_EXECUTION_TIME_IN_MILLISECONDS</code> - The
     * time in milliseconds for the previous Lambda invocation. </p> </li> </ul>
     */
    inline void SetMetadata(Aws::Map<MetadataField, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p> Metadata captured about the compute platform the agent is running on. It
     * includes information about sampling and reporting. The valid fields are:</p>
     * <ul> <li> <p> <code>COMPUTE_PLATFORM</code> - The compute platform on which the
     * agent is running </p> </li> <li> <p> <code>AGENT_ID</code> - The ID for an agent
     * instance. </p> </li> <li> <p> <code>AWS_REQUEST_ID</code> - The AWS request ID
     * of a Lambda invocation. </p> </li> <li> <p> <code>EXECUTION_ENVIRONMENT</code> -
     * The execution environment a Lambda function is running on. </p> </li> <li> <p>
     * <code>LAMBDA_FUNCTION_ARN</code> - The Amazon Resource Name (ARN) that is used
     * to invoke a Lambda function. </p> </li> <li> <p>
     * <code>LAMBDA_MEMORY_LIMIT_IN_MB</code> - The memory allocated to a Lambda
     * function. </p> </li> <li> <p> <code>LAMBDA_REMAINING_TIME_IN_MILLISECONDS</code>
     * - The time in milliseconds before execution of a Lambda function times out. </p>
     * </li> <li> <p> <code>LAMBDA_TIME_GAP_BETWEEN_INVOKES_IN_MILLISECONDS</code> -
     * The time in milliseconds between two invocations of a Lambda function. </p>
     * </li> <li> <p> <code>LAMBDA_PREVIOUS_EXECUTION_TIME_IN_MILLISECONDS</code> - The
     * time in milliseconds for the previous Lambda invocation. </p> </li> </ul>
     */
    inline ConfigureAgentRequest& WithMetadata(const Aws::Map<MetadataField, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p> Metadata captured about the compute platform the agent is running on. It
     * includes information about sampling and reporting. The valid fields are:</p>
     * <ul> <li> <p> <code>COMPUTE_PLATFORM</code> - The compute platform on which the
     * agent is running </p> </li> <li> <p> <code>AGENT_ID</code> - The ID for an agent
     * instance. </p> </li> <li> <p> <code>AWS_REQUEST_ID</code> - The AWS request ID
     * of a Lambda invocation. </p> </li> <li> <p> <code>EXECUTION_ENVIRONMENT</code> -
     * The execution environment a Lambda function is running on. </p> </li> <li> <p>
     * <code>LAMBDA_FUNCTION_ARN</code> - The Amazon Resource Name (ARN) that is used
     * to invoke a Lambda function. </p> </li> <li> <p>
     * <code>LAMBDA_MEMORY_LIMIT_IN_MB</code> - The memory allocated to a Lambda
     * function. </p> </li> <li> <p> <code>LAMBDA_REMAINING_TIME_IN_MILLISECONDS</code>
     * - The time in milliseconds before execution of a Lambda function times out. </p>
     * </li> <li> <p> <code>LAMBDA_TIME_GAP_BETWEEN_INVOKES_IN_MILLISECONDS</code> -
     * The time in milliseconds between two invocations of a Lambda function. </p>
     * </li> <li> <p> <code>LAMBDA_PREVIOUS_EXECUTION_TIME_IN_MILLISECONDS</code> - The
     * time in milliseconds for the previous Lambda invocation. </p> </li> </ul>
     */
    inline ConfigureAgentRequest& WithMetadata(Aws::Map<MetadataField, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p> Metadata captured about the compute platform the agent is running on. It
     * includes information about sampling and reporting. The valid fields are:</p>
     * <ul> <li> <p> <code>COMPUTE_PLATFORM</code> - The compute platform on which the
     * agent is running </p> </li> <li> <p> <code>AGENT_ID</code> - The ID for an agent
     * instance. </p> </li> <li> <p> <code>AWS_REQUEST_ID</code> - The AWS request ID
     * of a Lambda invocation. </p> </li> <li> <p> <code>EXECUTION_ENVIRONMENT</code> -
     * The execution environment a Lambda function is running on. </p> </li> <li> <p>
     * <code>LAMBDA_FUNCTION_ARN</code> - The Amazon Resource Name (ARN) that is used
     * to invoke a Lambda function. </p> </li> <li> <p>
     * <code>LAMBDA_MEMORY_LIMIT_IN_MB</code> - The memory allocated to a Lambda
     * function. </p> </li> <li> <p> <code>LAMBDA_REMAINING_TIME_IN_MILLISECONDS</code>
     * - The time in milliseconds before execution of a Lambda function times out. </p>
     * </li> <li> <p> <code>LAMBDA_TIME_GAP_BETWEEN_INVOKES_IN_MILLISECONDS</code> -
     * The time in milliseconds between two invocations of a Lambda function. </p>
     * </li> <li> <p> <code>LAMBDA_PREVIOUS_EXECUTION_TIME_IN_MILLISECONDS</code> - The
     * time in milliseconds for the previous Lambda invocation. </p> </li> </ul>
     */
    inline ConfigureAgentRequest& AddMetadata(const MetadataField& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p> Metadata captured about the compute platform the agent is running on. It
     * includes information about sampling and reporting. The valid fields are:</p>
     * <ul> <li> <p> <code>COMPUTE_PLATFORM</code> - The compute platform on which the
     * agent is running </p> </li> <li> <p> <code>AGENT_ID</code> - The ID for an agent
     * instance. </p> </li> <li> <p> <code>AWS_REQUEST_ID</code> - The AWS request ID
     * of a Lambda invocation. </p> </li> <li> <p> <code>EXECUTION_ENVIRONMENT</code> -
     * The execution environment a Lambda function is running on. </p> </li> <li> <p>
     * <code>LAMBDA_FUNCTION_ARN</code> - The Amazon Resource Name (ARN) that is used
     * to invoke a Lambda function. </p> </li> <li> <p>
     * <code>LAMBDA_MEMORY_LIMIT_IN_MB</code> - The memory allocated to a Lambda
     * function. </p> </li> <li> <p> <code>LAMBDA_REMAINING_TIME_IN_MILLISECONDS</code>
     * - The time in milliseconds before execution of a Lambda function times out. </p>
     * </li> <li> <p> <code>LAMBDA_TIME_GAP_BETWEEN_INVOKES_IN_MILLISECONDS</code> -
     * The time in milliseconds between two invocations of a Lambda function. </p>
     * </li> <li> <p> <code>LAMBDA_PREVIOUS_EXECUTION_TIME_IN_MILLISECONDS</code> - The
     * time in milliseconds for the previous Lambda invocation. </p> </li> </ul>
     */
    inline ConfigureAgentRequest& AddMetadata(MetadataField&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p> Metadata captured about the compute platform the agent is running on. It
     * includes information about sampling and reporting. The valid fields are:</p>
     * <ul> <li> <p> <code>COMPUTE_PLATFORM</code> - The compute platform on which the
     * agent is running </p> </li> <li> <p> <code>AGENT_ID</code> - The ID for an agent
     * instance. </p> </li> <li> <p> <code>AWS_REQUEST_ID</code> - The AWS request ID
     * of a Lambda invocation. </p> </li> <li> <p> <code>EXECUTION_ENVIRONMENT</code> -
     * The execution environment a Lambda function is running on. </p> </li> <li> <p>
     * <code>LAMBDA_FUNCTION_ARN</code> - The Amazon Resource Name (ARN) that is used
     * to invoke a Lambda function. </p> </li> <li> <p>
     * <code>LAMBDA_MEMORY_LIMIT_IN_MB</code> - The memory allocated to a Lambda
     * function. </p> </li> <li> <p> <code>LAMBDA_REMAINING_TIME_IN_MILLISECONDS</code>
     * - The time in milliseconds before execution of a Lambda function times out. </p>
     * </li> <li> <p> <code>LAMBDA_TIME_GAP_BETWEEN_INVOKES_IN_MILLISECONDS</code> -
     * The time in milliseconds between two invocations of a Lambda function. </p>
     * </li> <li> <p> <code>LAMBDA_PREVIOUS_EXECUTION_TIME_IN_MILLISECONDS</code> - The
     * time in milliseconds for the previous Lambda invocation. </p> </li> </ul>
     */
    inline ConfigureAgentRequest& AddMetadata(const MetadataField& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Metadata captured about the compute platform the agent is running on. It
     * includes information about sampling and reporting. The valid fields are:</p>
     * <ul> <li> <p> <code>COMPUTE_PLATFORM</code> - The compute platform on which the
     * agent is running </p> </li> <li> <p> <code>AGENT_ID</code> - The ID for an agent
     * instance. </p> </li> <li> <p> <code>AWS_REQUEST_ID</code> - The AWS request ID
     * of a Lambda invocation. </p> </li> <li> <p> <code>EXECUTION_ENVIRONMENT</code> -
     * The execution environment a Lambda function is running on. </p> </li> <li> <p>
     * <code>LAMBDA_FUNCTION_ARN</code> - The Amazon Resource Name (ARN) that is used
     * to invoke a Lambda function. </p> </li> <li> <p>
     * <code>LAMBDA_MEMORY_LIMIT_IN_MB</code> - The memory allocated to a Lambda
     * function. </p> </li> <li> <p> <code>LAMBDA_REMAINING_TIME_IN_MILLISECONDS</code>
     * - The time in milliseconds before execution of a Lambda function times out. </p>
     * </li> <li> <p> <code>LAMBDA_TIME_GAP_BETWEEN_INVOKES_IN_MILLISECONDS</code> -
     * The time in milliseconds between two invocations of a Lambda function. </p>
     * </li> <li> <p> <code>LAMBDA_PREVIOUS_EXECUTION_TIME_IN_MILLISECONDS</code> - The
     * time in milliseconds for the previous Lambda invocation. </p> </li> </ul>
     */
    inline ConfigureAgentRequest& AddMetadata(MetadataField&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Metadata captured about the compute platform the agent is running on. It
     * includes information about sampling and reporting. The valid fields are:</p>
     * <ul> <li> <p> <code>COMPUTE_PLATFORM</code> - The compute platform on which the
     * agent is running </p> </li> <li> <p> <code>AGENT_ID</code> - The ID for an agent
     * instance. </p> </li> <li> <p> <code>AWS_REQUEST_ID</code> - The AWS request ID
     * of a Lambda invocation. </p> </li> <li> <p> <code>EXECUTION_ENVIRONMENT</code> -
     * The execution environment a Lambda function is running on. </p> </li> <li> <p>
     * <code>LAMBDA_FUNCTION_ARN</code> - The Amazon Resource Name (ARN) that is used
     * to invoke a Lambda function. </p> </li> <li> <p>
     * <code>LAMBDA_MEMORY_LIMIT_IN_MB</code> - The memory allocated to a Lambda
     * function. </p> </li> <li> <p> <code>LAMBDA_REMAINING_TIME_IN_MILLISECONDS</code>
     * - The time in milliseconds before execution of a Lambda function times out. </p>
     * </li> <li> <p> <code>LAMBDA_TIME_GAP_BETWEEN_INVOKES_IN_MILLISECONDS</code> -
     * The time in milliseconds between two invocations of a Lambda function. </p>
     * </li> <li> <p> <code>LAMBDA_PREVIOUS_EXECUTION_TIME_IN_MILLISECONDS</code> - The
     * time in milliseconds for the previous Lambda invocation. </p> </li> </ul>
     */
    inline ConfigureAgentRequest& AddMetadata(MetadataField&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p> Metadata captured about the compute platform the agent is running on. It
     * includes information about sampling and reporting. The valid fields are:</p>
     * <ul> <li> <p> <code>COMPUTE_PLATFORM</code> - The compute platform on which the
     * agent is running </p> </li> <li> <p> <code>AGENT_ID</code> - The ID for an agent
     * instance. </p> </li> <li> <p> <code>AWS_REQUEST_ID</code> - The AWS request ID
     * of a Lambda invocation. </p> </li> <li> <p> <code>EXECUTION_ENVIRONMENT</code> -
     * The execution environment a Lambda function is running on. </p> </li> <li> <p>
     * <code>LAMBDA_FUNCTION_ARN</code> - The Amazon Resource Name (ARN) that is used
     * to invoke a Lambda function. </p> </li> <li> <p>
     * <code>LAMBDA_MEMORY_LIMIT_IN_MB</code> - The memory allocated to a Lambda
     * function. </p> </li> <li> <p> <code>LAMBDA_REMAINING_TIME_IN_MILLISECONDS</code>
     * - The time in milliseconds before execution of a Lambda function times out. </p>
     * </li> <li> <p> <code>LAMBDA_TIME_GAP_BETWEEN_INVOKES_IN_MILLISECONDS</code> -
     * The time in milliseconds between two invocations of a Lambda function. </p>
     * </li> <li> <p> <code>LAMBDA_PREVIOUS_EXECUTION_TIME_IN_MILLISECONDS</code> - The
     * time in milliseconds for the previous Lambda invocation. </p> </li> </ul>
     */
    inline ConfigureAgentRequest& AddMetadata(const MetadataField& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }


    /**
     * <p> The name of the profiling group for which the configured agent is collecting
     * profiling data. </p>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    /**
     * <p> The name of the profiling group for which the configured agent is collecting
     * profiling data. </p>
     */
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    /**
     * <p> The name of the profiling group for which the configured agent is collecting
     * profiling data. </p>
     */
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    /**
     * <p> The name of the profiling group for which the configured agent is collecting
     * profiling data. </p>
     */
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    /**
     * <p> The name of the profiling group for which the configured agent is collecting
     * profiling data. </p>
     */
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    /**
     * <p> The name of the profiling group for which the configured agent is collecting
     * profiling data. </p>
     */
    inline ConfigureAgentRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    /**
     * <p> The name of the profiling group for which the configured agent is collecting
     * profiling data. </p>
     */
    inline ConfigureAgentRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the profiling group for which the configured agent is collecting
     * profiling data. </p>
     */
    inline ConfigureAgentRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}

  private:

    Aws::String m_fleetInstanceId;
    bool m_fleetInstanceIdHasBeenSet = false;

    Aws::Map<MetadataField, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
