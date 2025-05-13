/**
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
    AWS_FINSPACE_API UpdateKxClusterCodeConfigurationRequest() = default;

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
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    UpdateKxClusterCodeConfigurationRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    UpdateKxClusterCodeConfigurationRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateKxClusterCodeConfigurationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CodeConfiguration& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = CodeConfiguration>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = CodeConfiguration>
    UpdateKxClusterCodeConfigurationRequest& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p> <p>You cannot update this parameter for a
     * <code>NO_RESTART</code> deployment.</p>
     */
    inline const Aws::String& GetInitializationScript() const { return m_initializationScript; }
    inline bool InitializationScriptHasBeenSet() const { return m_initializationScriptHasBeenSet; }
    template<typename InitializationScriptT = Aws::String>
    void SetInitializationScript(InitializationScriptT&& value) { m_initializationScriptHasBeenSet = true; m_initializationScript = std::forward<InitializationScriptT>(value); }
    template<typename InitializationScriptT = Aws::String>
    UpdateKxClusterCodeConfigurationRequest& WithInitializationScript(InitializationScriptT&& value) { SetInitializationScript(std::forward<InitializationScriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the key-value pairs to make them available inside the cluster.</p>
     * <p>You cannot update this parameter for a <code>NO_RESTART</code>
     * deployment.</p>
     */
    inline const Aws::Vector<KxCommandLineArgument>& GetCommandLineArguments() const { return m_commandLineArguments; }
    inline bool CommandLineArgumentsHasBeenSet() const { return m_commandLineArgumentsHasBeenSet; }
    template<typename CommandLineArgumentsT = Aws::Vector<KxCommandLineArgument>>
    void SetCommandLineArguments(CommandLineArgumentsT&& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments = std::forward<CommandLineArgumentsT>(value); }
    template<typename CommandLineArgumentsT = Aws::Vector<KxCommandLineArgument>>
    UpdateKxClusterCodeConfigurationRequest& WithCommandLineArguments(CommandLineArgumentsT&& value) { SetCommandLineArguments(std::forward<CommandLineArgumentsT>(value)); return *this;}
    template<typename CommandLineArgumentsT = KxCommandLineArgument>
    UpdateKxClusterCodeConfigurationRequest& AddCommandLineArguments(CommandLineArgumentsT&& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments.emplace_back(std::forward<CommandLineArgumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The configuration that allows you to choose how you want to update the code
     * on a cluster. </p>
     */
    inline const KxClusterCodeDeploymentConfiguration& GetDeploymentConfiguration() const { return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    template<typename DeploymentConfigurationT = KxClusterCodeDeploymentConfiguration>
    void SetDeploymentConfiguration(DeploymentConfigurationT&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::forward<DeploymentConfigurationT>(value); }
    template<typename DeploymentConfigurationT = KxClusterCodeDeploymentConfiguration>
    UpdateKxClusterCodeConfigurationRequest& WithDeploymentConfiguration(DeploymentConfigurationT&& value) { SetDeploymentConfiguration(std::forward<DeploymentConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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
