/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/ecr/model/ReplicationConfiguration.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class PutReplicationConfigurationRequest : public ECRRequest
  {
  public:
    AWS_ECR_API PutReplicationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutReplicationConfiguration"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An object representing the replication configuration for a registry.</p>
     */
    inline const ReplicationConfiguration& GetReplicationConfiguration() const { return m_replicationConfiguration; }
    inline bool ReplicationConfigurationHasBeenSet() const { return m_replicationConfigurationHasBeenSet; }
    template<typename ReplicationConfigurationT = ReplicationConfiguration>
    void SetReplicationConfiguration(ReplicationConfigurationT&& value) { m_replicationConfigurationHasBeenSet = true; m_replicationConfiguration = std::forward<ReplicationConfigurationT>(value); }
    template<typename ReplicationConfigurationT = ReplicationConfiguration>
    PutReplicationConfigurationRequest& WithReplicationConfiguration(ReplicationConfigurationT&& value) { SetReplicationConfiguration(std::forward<ReplicationConfigurationT>(value)); return *this;}
    ///@}
  private:

    ReplicationConfiguration m_replicationConfiguration;
    bool m_replicationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
