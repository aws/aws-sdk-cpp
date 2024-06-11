﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/KxDeploymentConfiguration.h>
#include <aws/finspace/model/KxDatabaseConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace finspace
{
namespace Model
{

  /**
   */
  class UpdateKxClusterDatabasesRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API UpdateKxClusterDatabasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKxClusterDatabases"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of a kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline UpdateKxClusterDatabasesRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline UpdateKxClusterDatabasesRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline UpdateKxClusterDatabasesRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for the cluster that you want to modify.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline UpdateKxClusterDatabasesRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline UpdateKxClusterDatabasesRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline UpdateKxClusterDatabasesRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateKxClusterDatabasesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateKxClusterDatabasesRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateKxClusterDatabasesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The structure of databases mounted on the cluster.</p>
     */
    inline const Aws::Vector<KxDatabaseConfiguration>& GetDatabases() const{ return m_databases; }
    inline bool DatabasesHasBeenSet() const { return m_databasesHasBeenSet; }
    inline void SetDatabases(const Aws::Vector<KxDatabaseConfiguration>& value) { m_databasesHasBeenSet = true; m_databases = value; }
    inline void SetDatabases(Aws::Vector<KxDatabaseConfiguration>&& value) { m_databasesHasBeenSet = true; m_databases = std::move(value); }
    inline UpdateKxClusterDatabasesRequest& WithDatabases(const Aws::Vector<KxDatabaseConfiguration>& value) { SetDatabases(value); return *this;}
    inline UpdateKxClusterDatabasesRequest& WithDatabases(Aws::Vector<KxDatabaseConfiguration>&& value) { SetDatabases(std::move(value)); return *this;}
    inline UpdateKxClusterDatabasesRequest& AddDatabases(const KxDatabaseConfiguration& value) { m_databasesHasBeenSet = true; m_databases.push_back(value); return *this; }
    inline UpdateKxClusterDatabasesRequest& AddDatabases(KxDatabaseConfiguration&& value) { m_databasesHasBeenSet = true; m_databases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The configuration that allows you to choose how you want to update the
     * databases on a cluster. </p>
     */
    inline const KxDeploymentConfiguration& GetDeploymentConfiguration() const{ return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    inline void SetDeploymentConfiguration(const KxDeploymentConfiguration& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = value; }
    inline void SetDeploymentConfiguration(KxDeploymentConfiguration&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::move(value); }
    inline UpdateKxClusterDatabasesRequest& WithDeploymentConfiguration(const KxDeploymentConfiguration& value) { SetDeploymentConfiguration(value); return *this;}
    inline UpdateKxClusterDatabasesRequest& WithDeploymentConfiguration(KxDeploymentConfiguration&& value) { SetDeploymentConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<KxDatabaseConfiguration> m_databases;
    bool m_databasesHasBeenSet = false;

    KxDeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
