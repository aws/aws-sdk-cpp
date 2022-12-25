/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SessionCommand.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/ConnectionsList.h>
#include <aws/glue/model/WorkerType.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   * <p>Request to create a new session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateSessionRequest">AWS
   * API Reference</a></p>
   */
  class CreateSessionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSession"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the session request. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the session request. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the session request. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the session request. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the session request. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the session request. </p>
     */
    inline CreateSessionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the session request. </p>
     */
    inline CreateSessionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the session request. </p>
     */
    inline CreateSessionRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The description of the session. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the session. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the session. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the session. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the session. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the session. </p>
     */
    inline CreateSessionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the session. </p>
     */
    inline CreateSessionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the session. </p>
     */
    inline CreateSessionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The IAM Role ARN </p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The IAM Role ARN </p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The IAM Role ARN </p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The IAM Role ARN </p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The IAM Role ARN </p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The IAM Role ARN </p>
     */
    inline CreateSessionRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The IAM Role ARN </p>
     */
    inline CreateSessionRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The IAM Role ARN </p>
     */
    inline CreateSessionRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The <code>SessionCommand</code> that runs the job. </p>
     */
    inline const SessionCommand& GetCommand() const{ return m_command; }

    /**
     * <p>The <code>SessionCommand</code> that runs the job. </p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The <code>SessionCommand</code> that runs the job. </p>
     */
    inline void SetCommand(const SessionCommand& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The <code>SessionCommand</code> that runs the job. </p>
     */
    inline void SetCommand(SessionCommand&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The <code>SessionCommand</code> that runs the job. </p>
     */
    inline CreateSessionRequest& WithCommand(const SessionCommand& value) { SetCommand(value); return *this;}

    /**
     * <p>The <code>SessionCommand</code> that runs the job. </p>
     */
    inline CreateSessionRequest& WithCommand(SessionCommand&& value) { SetCommand(std::move(value)); return *this;}


    /**
     * <p>The number of seconds before request times out. </p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The number of seconds before request times out. </p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The number of seconds before request times out. </p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The number of seconds before request times out. </p>
     */
    inline CreateSessionRequest& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The number of seconds when idle before request times out. </p>
     */
    inline int GetIdleTimeout() const{ return m_idleTimeout; }

    /**
     * <p>The number of seconds when idle before request times out. </p>
     */
    inline bool IdleTimeoutHasBeenSet() const { return m_idleTimeoutHasBeenSet; }

    /**
     * <p>The number of seconds when idle before request times out. </p>
     */
    inline void SetIdleTimeout(int value) { m_idleTimeoutHasBeenSet = true; m_idleTimeout = value; }

    /**
     * <p>The number of seconds when idle before request times out. </p>
     */
    inline CreateSessionRequest& WithIdleTimeout(int value) { SetIdleTimeout(value); return *this;}


    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultArguments() const{ return m_defaultArguments; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline bool DefaultArgumentsHasBeenSet() const { return m_defaultArgumentsHasBeenSet; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline void SetDefaultArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = value; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline void SetDefaultArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = std::move(value); }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline CreateSessionRequest& WithDefaultArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultArguments(value); return *this;}

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline CreateSessionRequest& WithDefaultArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultArguments(std::move(value)); return *this;}

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline CreateSessionRequest& AddDefaultArguments(const Aws::String& key, const Aws::String& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, value); return *this; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline CreateSessionRequest& AddDefaultArguments(Aws::String&& key, const Aws::String& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline CreateSessionRequest& AddDefaultArguments(const Aws::String& key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline CreateSessionRequest& AddDefaultArguments(Aws::String&& key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline CreateSessionRequest& AddDefaultArguments(const char* key, Aws::String&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline CreateSessionRequest& AddDefaultArguments(Aws::String&& key, const char* value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline CreateSessionRequest& AddDefaultArguments(const char* key, const char* value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(key, value); return *this; }


    /**
     * <p>The number of connections to use for the session. </p>
     */
    inline const ConnectionsList& GetConnections() const{ return m_connections; }

    /**
     * <p>The number of connections to use for the session. </p>
     */
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }

    /**
     * <p>The number of connections to use for the session. </p>
     */
    inline void SetConnections(const ConnectionsList& value) { m_connectionsHasBeenSet = true; m_connections = value; }

    /**
     * <p>The number of connections to use for the session. </p>
     */
    inline void SetConnections(ConnectionsList&& value) { m_connectionsHasBeenSet = true; m_connections = std::move(value); }

    /**
     * <p>The number of connections to use for the session. </p>
     */
    inline CreateSessionRequest& WithConnections(const ConnectionsList& value) { SetConnections(value); return *this;}

    /**
     * <p>The number of connections to use for the session. </p>
     */
    inline CreateSessionRequest& WithConnections(ConnectionsList&& value) { SetConnections(std::move(value)); return *this;}


    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * the job runs. A DPU is a relative measure of processing power that consists of 4
     * vCPUs of compute capacity and 16 GB memory. </p>
     */
    inline double GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * the job runs. A DPU is a relative measure of processing power that consists of 4
     * vCPUs of compute capacity and 16 GB memory. </p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * the job runs. A DPU is a relative measure of processing power that consists of 4
     * vCPUs of compute capacity and 16 GB memory. </p>
     */
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * the job runs. A DPU is a relative measure of processing power that consists of 4
     * vCPUs of compute capacity and 16 GB memory. </p>
     */
    inline CreateSessionRequest& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>The number of workers of a defined <code>WorkerType</code> to use for the
     * session. </p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }

    /**
     * <p>The number of workers of a defined <code>WorkerType</code> to use for the
     * session. </p>
     */
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }

    /**
     * <p>The number of workers of a defined <code>WorkerType</code> to use for the
     * session. </p>
     */
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }

    /**
     * <p>The number of workers of a defined <code>WorkerType</code> to use for the
     * session. </p>
     */
    inline CreateSessionRequest& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}


    /**
     * <p>The type of predefined worker that is allocated to use for the session.
     * Accepts a value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline const WorkerType& GetWorkerType() const{ return m_workerType; }

    /**
     * <p>The type of predefined worker that is allocated to use for the session.
     * Accepts a value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }

    /**
     * <p>The type of predefined worker that is allocated to use for the session.
     * Accepts a value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline void SetWorkerType(const WorkerType& value) { m_workerTypeHasBeenSet = true; m_workerType = value; }

    /**
     * <p>The type of predefined worker that is allocated to use for the session.
     * Accepts a value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline void SetWorkerType(WorkerType&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::move(value); }

    /**
     * <p>The type of predefined worker that is allocated to use for the session.
     * Accepts a value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline CreateSessionRequest& WithWorkerType(const WorkerType& value) { SetWorkerType(value); return *this;}

    /**
     * <p>The type of predefined worker that is allocated to use for the session.
     * Accepts a value of Standard, G.1X, G.2X, or G.025X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker maps to 1 DPU (4 vCPU, 16 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker maps to 2 DPU (8 vCPU, 32 GB of
     * memory, 128 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for memory-intensive jobs.</p> </li> <li> <p>For the
     * <code>G.025X</code> worker type, each worker maps to 0.25 DPU (2 vCPU, 4 GB of
     * memory, 64 GB disk), and provides 1 executor per worker. We recommend this
     * worker type for low volume streaming jobs. This worker type is only available
     * for Glue version 3.0 streaming jobs.</p> </li> </ul>
     */
    inline CreateSessionRequest& WithWorkerType(WorkerType&& value) { SetWorkerType(std::move(value)); return *this;}


    /**
     * <p>The name of the SecurityConfiguration structure to be used with the session
     * </p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the session
     * </p>
     */
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the session
     * </p>
     */
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the session
     * </p>
     */
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the session
     * </p>
     */
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the session
     * </p>
     */
    inline CreateSessionRequest& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the session
     * </p>
     */
    inline CreateSessionRequest& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>The name of the SecurityConfiguration structure to be used with the session
     * </p>
     */
    inline CreateSessionRequest& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}


    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0. </p>
     */
    inline const Aws::String& GetGlueVersion() const{ return m_glueVersion; }

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0. </p>
     */
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0. </p>
     */
    inline void SetGlueVersion(const Aws::String& value) { m_glueVersionHasBeenSet = true; m_glueVersion = value; }

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0. </p>
     */
    inline void SetGlueVersion(Aws::String&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::move(value); }

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0. </p>
     */
    inline void SetGlueVersion(const char* value) { m_glueVersionHasBeenSet = true; m_glueVersion.assign(value); }

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0. </p>
     */
    inline CreateSessionRequest& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0. </p>
     */
    inline CreateSessionRequest& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}

    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0. </p>
     */
    inline CreateSessionRequest& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}


    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline CreateSessionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline CreateSessionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline CreateSessionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline CreateSessionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline CreateSessionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline CreateSessionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline CreateSessionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline CreateSessionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline CreateSessionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The origin of the request. </p>
     */
    inline const Aws::String& GetRequestOrigin() const{ return m_requestOrigin; }

    /**
     * <p>The origin of the request. </p>
     */
    inline bool RequestOriginHasBeenSet() const { return m_requestOriginHasBeenSet; }

    /**
     * <p>The origin of the request. </p>
     */
    inline void SetRequestOrigin(const Aws::String& value) { m_requestOriginHasBeenSet = true; m_requestOrigin = value; }

    /**
     * <p>The origin of the request. </p>
     */
    inline void SetRequestOrigin(Aws::String&& value) { m_requestOriginHasBeenSet = true; m_requestOrigin = std::move(value); }

    /**
     * <p>The origin of the request. </p>
     */
    inline void SetRequestOrigin(const char* value) { m_requestOriginHasBeenSet = true; m_requestOrigin.assign(value); }

    /**
     * <p>The origin of the request. </p>
     */
    inline CreateSessionRequest& WithRequestOrigin(const Aws::String& value) { SetRequestOrigin(value); return *this;}

    /**
     * <p>The origin of the request. </p>
     */
    inline CreateSessionRequest& WithRequestOrigin(Aws::String&& value) { SetRequestOrigin(std::move(value)); return *this;}

    /**
     * <p>The origin of the request. </p>
     */
    inline CreateSessionRequest& WithRequestOrigin(const char* value) { SetRequestOrigin(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    SessionCommand m_command;
    bool m_commandHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    int m_idleTimeout;
    bool m_idleTimeoutHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_defaultArguments;
    bool m_defaultArgumentsHasBeenSet = false;

    ConnectionsList m_connections;
    bool m_connectionsHasBeenSet = false;

    double m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet = false;

    WorkerType m_workerType;
    bool m_workerTypeHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestOrigin;
    bool m_requestOriginHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
