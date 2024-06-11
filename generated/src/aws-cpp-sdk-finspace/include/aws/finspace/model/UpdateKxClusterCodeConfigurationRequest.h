﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/CodeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/KxClusterCodeDeploymentConfiguration.h>
#include <aws/finspace/model/KxCommandLineArgument.h>
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
  class UpdateKxClusterCodeConfigurationRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API UpdateKxClusterCodeConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKxClusterCodeConfiguration"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A unique identifier of the kdb environment. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline UpdateKxClusterCodeConfigurationRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline UpdateKxClusterCodeConfigurationRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline UpdateKxClusterCodeConfigurationRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline UpdateKxClusterCodeConfigurationRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline UpdateKxClusterCodeConfigurationRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline UpdateKxClusterCodeConfigurationRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
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
    inline UpdateKxClusterCodeConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateKxClusterCodeConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateKxClusterCodeConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const CodeConfiguration& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const CodeConfiguration& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(CodeConfiguration&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline UpdateKxClusterCodeConfigurationRequest& WithCode(const CodeConfiguration& value) { SetCode(value); return *this;}
    inline UpdateKxClusterCodeConfigurationRequest& WithCode(CodeConfiguration&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p> <p>You cannot update this parameter for a
     * <code>NO_RESTART</code> deployment.</p>
     */
    inline const Aws::String& GetInitializationScript() const{ return m_initializationScript; }
    inline bool InitializationScriptHasBeenSet() const { return m_initializationScriptHasBeenSet; }
    inline void SetInitializationScript(const Aws::String& value) { m_initializationScriptHasBeenSet = true; m_initializationScript = value; }
    inline void SetInitializationScript(Aws::String&& value) { m_initializationScriptHasBeenSet = true; m_initializationScript = std::move(value); }
    inline void SetInitializationScript(const char* value) { m_initializationScriptHasBeenSet = true; m_initializationScript.assign(value); }
    inline UpdateKxClusterCodeConfigurationRequest& WithInitializationScript(const Aws::String& value) { SetInitializationScript(value); return *this;}
    inline UpdateKxClusterCodeConfigurationRequest& WithInitializationScript(Aws::String&& value) { SetInitializationScript(std::move(value)); return *this;}
    inline UpdateKxClusterCodeConfigurationRequest& WithInitializationScript(const char* value) { SetInitializationScript(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the key-value pairs to make them available inside the cluster.</p>
     * <p>You cannot update this parameter for a <code>NO_RESTART</code>
     * deployment.</p>
     */
    inline const Aws::Vector<KxCommandLineArgument>& GetCommandLineArguments() const{ return m_commandLineArguments; }
    inline bool CommandLineArgumentsHasBeenSet() const { return m_commandLineArgumentsHasBeenSet; }
    inline void SetCommandLineArguments(const Aws::Vector<KxCommandLineArgument>& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments = value; }
    inline void SetCommandLineArguments(Aws::Vector<KxCommandLineArgument>&& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments = std::move(value); }
    inline UpdateKxClusterCodeConfigurationRequest& WithCommandLineArguments(const Aws::Vector<KxCommandLineArgument>& value) { SetCommandLineArguments(value); return *this;}
    inline UpdateKxClusterCodeConfigurationRequest& WithCommandLineArguments(Aws::Vector<KxCommandLineArgument>&& value) { SetCommandLineArguments(std::move(value)); return *this;}
    inline UpdateKxClusterCodeConfigurationRequest& AddCommandLineArguments(const KxCommandLineArgument& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments.push_back(value); return *this; }
    inline UpdateKxClusterCodeConfigurationRequest& AddCommandLineArguments(KxCommandLineArgument&& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The configuration that allows you to choose how you want to update the code
     * on a cluster. </p>
     */
    inline const KxClusterCodeDeploymentConfiguration& GetDeploymentConfiguration() const{ return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    inline void SetDeploymentConfiguration(const KxClusterCodeDeploymentConfiguration& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = value; }
    inline void SetDeploymentConfiguration(KxClusterCodeDeploymentConfiguration&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::move(value); }
    inline UpdateKxClusterCodeConfigurationRequest& WithDeploymentConfiguration(const KxClusterCodeDeploymentConfiguration& value) { SetDeploymentConfiguration(value); return *this;}
    inline UpdateKxClusterCodeConfigurationRequest& WithDeploymentConfiguration(KxClusterCodeDeploymentConfiguration&& value) { SetDeploymentConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    CodeConfiguration m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_initializationScript;
    bool m_initializationScriptHasBeenSet = false;

    Aws::Vector<KxCommandLineArgument> m_commandLineArguments;
    bool m_commandLineArgumentsHasBeenSet = false;

    KxClusterCodeDeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
