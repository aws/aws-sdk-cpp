/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecatalyst/model/InstanceType.h>
#include <aws/codecatalyst/model/PersistentStorageConfiguration.h>
#include <aws/codecatalyst/model/RepositoryInput.h>
#include <aws/codecatalyst/model/IdeConfiguration.h>
#include <utility>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

  /**
   */
  class CreateDevEnvironmentRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API CreateDevEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDevEnvironment"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const { return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    template<typename SpaceNameT = Aws::String>
    void SetSpaceName(SpaceNameT&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::forward<SpaceNameT>(value); }
    template<typename SpaceNameT = Aws::String>
    CreateDevEnvironmentRequest& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    CreateDevEnvironmentRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source repository that contains the branch to clone into the Dev
     * Environment. </p>
     */
    inline const Aws::Vector<RepositoryInput>& GetRepositories() const { return m_repositories; }
    inline bool RepositoriesHasBeenSet() const { return m_repositoriesHasBeenSet; }
    template<typename RepositoriesT = Aws::Vector<RepositoryInput>>
    void SetRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::forward<RepositoriesT>(value); }
    template<typename RepositoriesT = Aws::Vector<RepositoryInput>>
    CreateDevEnvironmentRequest& WithRepositories(RepositoriesT&& value) { SetRepositories(std::forward<RepositoriesT>(value)); return *this;}
    template<typename RepositoriesT = RepositoryInput>
    CreateDevEnvironmentRequest& AddRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories.emplace_back(std::forward<RepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateDevEnvironmentRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined alias for a Dev Environment.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    CreateDevEnvironmentRequest& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>  <p>An IDE is required to create a Dev Environment.
     * For Dev Environment creation, this field contains configuration information and
     * must be provided. </p> 
     */
    inline const Aws::Vector<IdeConfiguration>& GetIdes() const { return m_ides; }
    inline bool IdesHasBeenSet() const { return m_idesHasBeenSet; }
    template<typename IdesT = Aws::Vector<IdeConfiguration>>
    void SetIdes(IdesT&& value) { m_idesHasBeenSet = true; m_ides = std::forward<IdesT>(value); }
    template<typename IdesT = Aws::Vector<IdeConfiguration>>
    CreateDevEnvironmentRequest& WithIdes(IdesT&& value) { SetIdes(std::forward<IdesT>(value)); return *this;}
    template<typename IdesT = IdeConfiguration>
    CreateDevEnvironmentRequest& AddIdes(IdesT&& value) { m_idesHasBeenSet = true; m_ides.emplace_back(std::forward<IdesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline CreateDevEnvironmentRequest& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. Only whole integers are allowed. Dev Environments
     * consume compute minutes when running.</p>
     */
    inline int GetInactivityTimeoutMinutes() const { return m_inactivityTimeoutMinutes; }
    inline bool InactivityTimeoutMinutesHasBeenSet() const { return m_inactivityTimeoutMinutesHasBeenSet; }
    inline void SetInactivityTimeoutMinutes(int value) { m_inactivityTimeoutMinutesHasBeenSet = true; m_inactivityTimeoutMinutes = value; }
    inline CreateDevEnvironmentRequest& WithInactivityTimeoutMinutes(int value) { SetInactivityTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the amount of storage allocated to the Dev Environment.
     * </p>  <p>By default, a Dev Environment is configured to have 16GB of
     * persistent storage when created from the Amazon CodeCatalyst console, but there
     * is no default when programmatically creating a Dev Environment. Valid values for
     * persistent storage are based on memory sizes in 16GB increments. Valid values
     * are 16, 32, and 64.</p> 
     */
    inline const PersistentStorageConfiguration& GetPersistentStorage() const { return m_persistentStorage; }
    inline bool PersistentStorageHasBeenSet() const { return m_persistentStorageHasBeenSet; }
    template<typename PersistentStorageT = PersistentStorageConfiguration>
    void SetPersistentStorage(PersistentStorageT&& value) { m_persistentStorageHasBeenSet = true; m_persistentStorage = std::forward<PersistentStorageT>(value); }
    template<typename PersistentStorageT = PersistentStorageConfiguration>
    CreateDevEnvironmentRequest& WithPersistentStorage(PersistentStorageT&& value) { SetPersistentStorage(std::forward<PersistentStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection that will be used to connect to Amazon VPC, if
     * any.</p>
     */
    inline const Aws::String& GetVpcConnectionName() const { return m_vpcConnectionName; }
    inline bool VpcConnectionNameHasBeenSet() const { return m_vpcConnectionNameHasBeenSet; }
    template<typename VpcConnectionNameT = Aws::String>
    void SetVpcConnectionName(VpcConnectionNameT&& value) { m_vpcConnectionNameHasBeenSet = true; m_vpcConnectionName = std::forward<VpcConnectionNameT>(value); }
    template<typename VpcConnectionNameT = Aws::String>
    CreateDevEnvironmentRequest& WithVpcConnectionName(VpcConnectionNameT&& value) { SetVpcConnectionName(std::forward<VpcConnectionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::Vector<RepositoryInput> m_repositories;
    bool m_repositoriesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::Vector<IdeConfiguration> m_ides;
    bool m_idesHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_inactivityTimeoutMinutes{0};
    bool m_inactivityTimeoutMinutesHasBeenSet = false;

    PersistentStorageConfiguration m_persistentStorage;
    bool m_persistentStorageHasBeenSet = false;

    Aws::String m_vpcConnectionName;
    bool m_vpcConnectionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
