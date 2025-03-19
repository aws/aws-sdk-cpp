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
    AWS_GLUE_API CreateSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSession"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the session request. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateSessionRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the session. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateSessionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Role ARN </p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    CreateSessionRequest& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SessionCommand</code> that runs the job. </p>
     */
    inline const SessionCommand& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = SessionCommand>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = SessionCommand>
    CreateSessionRequest& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of minutes before session times out. Default for Spark ETL jobs
     * is 48 hours (2880 minutes). Consult the documentation for other job types. </p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline CreateSessionRequest& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of minutes when idle before session times out. Default for Spark
     * ETL jobs is value of Timeout. Consult the documentation for other job types.
     * </p>
     */
    inline int GetIdleTimeout() const { return m_idleTimeout; }
    inline bool IdleTimeoutHasBeenSet() const { return m_idleTimeoutHasBeenSet; }
    inline void SetIdleTimeout(int value) { m_idleTimeoutHasBeenSet = true; m_idleTimeout = value; }
    inline CreateSessionRequest& WithIdleTimeout(int value) { SetIdleTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map array of key-value pairs. Max is 75 pairs. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultArguments() const { return m_defaultArguments; }
    inline bool DefaultArgumentsHasBeenSet() const { return m_defaultArgumentsHasBeenSet; }
    template<typename DefaultArgumentsT = Aws::Map<Aws::String, Aws::String>>
    void SetDefaultArguments(DefaultArgumentsT&& value) { m_defaultArgumentsHasBeenSet = true; m_defaultArguments = std::forward<DefaultArgumentsT>(value); }
    template<typename DefaultArgumentsT = Aws::Map<Aws::String, Aws::String>>
    CreateSessionRequest& WithDefaultArguments(DefaultArgumentsT&& value) { SetDefaultArguments(std::forward<DefaultArgumentsT>(value)); return *this;}
    template<typename DefaultArgumentsKeyT = Aws::String, typename DefaultArgumentsValueT = Aws::String>
    CreateSessionRequest& AddDefaultArguments(DefaultArgumentsKeyT&& key, DefaultArgumentsValueT&& value) {
      m_defaultArgumentsHasBeenSet = true; m_defaultArguments.emplace(std::forward<DefaultArgumentsKeyT>(key), std::forward<DefaultArgumentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The number of connections to use for the session. </p>
     */
    inline const ConnectionsList& GetConnections() const { return m_connections; }
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }
    template<typename ConnectionsT = ConnectionsList>
    void SetConnections(ConnectionsT&& value) { m_connectionsHasBeenSet = true; m_connections = std::forward<ConnectionsT>(value); }
    template<typename ConnectionsT = ConnectionsList>
    CreateSessionRequest& WithConnections(ConnectionsT&& value) { SetConnections(std::forward<ConnectionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Glue data processing units (DPUs) that can be allocated when
     * the job runs. A DPU is a relative measure of processing power that consists of 4
     * vCPUs of compute capacity and 16 GB memory. </p>
     */
    inline double GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline CreateSessionRequest& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers of a defined <code>WorkerType</code> to use for the
     * session. </p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline CreateSessionRequest& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of predefined worker that is allocated when a job runs. Accepts a
     * value of G.1X, G.2X, G.4X, or G.8X for Spark jobs. Accepts the value Z.2X for
     * Ray notebooks.</p> <ul> <li> <p>For the <code>G.1X</code> worker type, each
     * worker maps to 1 DPU (4 vCPUs, 16 GB of memory) with 94GB disk, and provides 1
     * executor per worker. We recommend this worker type for workloads such as data
     * transforms, joins, and queries, to offers a scalable and cost effective way to
     * run most jobs.</p> </li> <li> <p>For the <code>G.2X</code> worker type, each
     * worker maps to 2 DPU (8 vCPUs, 32 GB of memory) with 138GB disk, and provides 1
     * executor per worker. We recommend this worker type for workloads such as data
     * transforms, joins, and queries, to offers a scalable and cost effective way to
     * run most jobs.</p> </li> <li> <p>For the <code>G.4X</code> worker type, each
     * worker maps to 4 DPU (16 vCPUs, 64 GB of memory) with 256GB disk, and provides 1
     * executor per worker. We recommend this worker type for jobs whose workloads
     * contain your most demanding transforms, aggregations, joins, and queries. This
     * worker type is available only for Glue version 3.0 or later Spark ETL jobs in
     * the following Amazon Web Services Regions: US East (Ohio), US East (N.
     * Virginia), US West (Oregon), Asia Pacific (Singapore), Asia Pacific (Sydney),
     * Asia Pacific (Tokyo), Canada (Central), Europe (Frankfurt), Europe (Ireland),
     * and Europe (Stockholm).</p> </li> <li> <p>For the <code>G.8X</code> worker type,
     * each worker maps to 8 DPU (32 vCPUs, 128 GB of memory) with 512GB disk, and
     * provides 1 executor per worker. We recommend this worker type for jobs whose
     * workloads contain your most demanding transforms, aggregations, joins, and
     * queries. This worker type is available only for Glue version 3.0 or later Spark
     * ETL jobs, in the same Amazon Web Services Regions as supported for the
     * <code>G.4X</code> worker type.</p> </li> <li> <p>For the <code>Z.2X</code>
     * worker type, each worker maps to 2 M-DPU (8vCPUs, 64 GB of memory) with 128 GB
     * disk, and provides up to 8 Ray workers based on the autoscaler.</p> </li> </ul>
     */
    inline WorkerType GetWorkerType() const { return m_workerType; }
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }
    inline void SetWorkerType(WorkerType value) { m_workerTypeHasBeenSet = true; m_workerType = value; }
    inline CreateSessionRequest& WithWorkerType(WorkerType value) { SetWorkerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SecurityConfiguration structure to be used with the session
     * </p>
     */
    inline const Aws::String& GetSecurityConfiguration() const { return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    template<typename SecurityConfigurationT = Aws::String>
    void SetSecurityConfiguration(SecurityConfigurationT&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::forward<SecurityConfigurationT>(value); }
    template<typename SecurityConfigurationT = Aws::String>
    CreateSessionRequest& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Glue version determines the versions of Apache Spark and Python that Glue
     * supports. The GlueVersion must be greater than 2.0. </p>
     */
    inline const Aws::String& GetGlueVersion() const { return m_glueVersion; }
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }
    template<typename GlueVersionT = Aws::String>
    void SetGlueVersion(GlueVersionT&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::forward<GlueVersionT>(value); }
    template<typename GlueVersionT = Aws::String>
    CreateSessionRequest& WithGlueVersion(GlueVersionT&& value) { SetGlueVersion(std::forward<GlueVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The map of key value pairs (tags) belonging to the session.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSessionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSessionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The origin of the request. </p>
     */
    inline const Aws::String& GetRequestOrigin() const { return m_requestOrigin; }
    inline bool RequestOriginHasBeenSet() const { return m_requestOriginHasBeenSet; }
    template<typename RequestOriginT = Aws::String>
    void SetRequestOrigin(RequestOriginT&& value) { m_requestOriginHasBeenSet = true; m_requestOrigin = std::forward<RequestOriginT>(value); }
    template<typename RequestOriginT = Aws::String>
    CreateSessionRequest& WithRequestOrigin(RequestOriginT&& value) { SetRequestOrigin(std::forward<RequestOriginT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    SessionCommand m_command;
    bool m_commandHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    int m_idleTimeout{0};
    bool m_idleTimeoutHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_defaultArguments;
    bool m_defaultArgumentsHasBeenSet = false;

    ConnectionsList m_connections;
    bool m_connectionsHasBeenSet = false;

    double m_maxCapacity{0.0};
    bool m_maxCapacityHasBeenSet = false;

    int m_numberOfWorkers{0};
    bool m_numberOfWorkersHasBeenSet = false;

    WorkerType m_workerType{WorkerType::NOT_SET};
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
