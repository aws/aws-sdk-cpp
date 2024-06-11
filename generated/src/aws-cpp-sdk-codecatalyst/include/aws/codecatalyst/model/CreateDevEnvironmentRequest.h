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
    AWS_CODECATALYST_API CreateDevEnvironmentRequest();

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
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }
    inline CreateDevEnvironmentRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline CreateDevEnvironmentRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline CreateDevEnvironmentRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline CreateDevEnvironmentRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline CreateDevEnvironmentRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline CreateDevEnvironmentRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source repository that contains the branch to clone into the Dev
     * Environment. </p>
     */
    inline const Aws::Vector<RepositoryInput>& GetRepositories() const{ return m_repositories; }
    inline bool RepositoriesHasBeenSet() const { return m_repositoriesHasBeenSet; }
    inline void SetRepositories(const Aws::Vector<RepositoryInput>& value) { m_repositoriesHasBeenSet = true; m_repositories = value; }
    inline void SetRepositories(Aws::Vector<RepositoryInput>&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::move(value); }
    inline CreateDevEnvironmentRequest& WithRepositories(const Aws::Vector<RepositoryInput>& value) { SetRepositories(value); return *this;}
    inline CreateDevEnvironmentRequest& WithRepositories(Aws::Vector<RepositoryInput>&& value) { SetRepositories(std::move(value)); return *this;}
    inline CreateDevEnvironmentRequest& AddRepositories(const RepositoryInput& value) { m_repositoriesHasBeenSet = true; m_repositories.push_back(value); return *this; }
    inline CreateDevEnvironmentRequest& AddRepositories(RepositoryInput&& value) { m_repositoriesHasBeenSet = true; m_repositories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateDevEnvironmentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateDevEnvironmentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateDevEnvironmentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined alias for a Dev Environment.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }
    inline CreateDevEnvironmentRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline CreateDevEnvironmentRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline CreateDevEnvironmentRequest& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>  <p>An IDE is required to create a Dev Environment.
     * For Dev Environment creation, this field contains configuration information and
     * must be provided. </p> 
     */
    inline const Aws::Vector<IdeConfiguration>& GetIdes() const{ return m_ides; }
    inline bool IdesHasBeenSet() const { return m_idesHasBeenSet; }
    inline void SetIdes(const Aws::Vector<IdeConfiguration>& value) { m_idesHasBeenSet = true; m_ides = value; }
    inline void SetIdes(Aws::Vector<IdeConfiguration>&& value) { m_idesHasBeenSet = true; m_ides = std::move(value); }
    inline CreateDevEnvironmentRequest& WithIdes(const Aws::Vector<IdeConfiguration>& value) { SetIdes(value); return *this;}
    inline CreateDevEnvironmentRequest& WithIdes(Aws::Vector<IdeConfiguration>&& value) { SetIdes(std::move(value)); return *this;}
    inline CreateDevEnvironmentRequest& AddIdes(const IdeConfiguration& value) { m_idesHasBeenSet = true; m_ides.push_back(value); return *this; }
    inline CreateDevEnvironmentRequest& AddIdes(IdeConfiguration&& value) { m_idesHasBeenSet = true; m_ides.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline CreateDevEnvironmentRequest& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline CreateDevEnvironmentRequest& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. Only whole integers are allowed. Dev Environments
     * consume compute minutes when running.</p>
     */
    inline int GetInactivityTimeoutMinutes() const{ return m_inactivityTimeoutMinutes; }
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
    inline const PersistentStorageConfiguration& GetPersistentStorage() const{ return m_persistentStorage; }
    inline bool PersistentStorageHasBeenSet() const { return m_persistentStorageHasBeenSet; }
    inline void SetPersistentStorage(const PersistentStorageConfiguration& value) { m_persistentStorageHasBeenSet = true; m_persistentStorage = value; }
    inline void SetPersistentStorage(PersistentStorageConfiguration&& value) { m_persistentStorageHasBeenSet = true; m_persistentStorage = std::move(value); }
    inline CreateDevEnvironmentRequest& WithPersistentStorage(const PersistentStorageConfiguration& value) { SetPersistentStorage(value); return *this;}
    inline CreateDevEnvironmentRequest& WithPersistentStorage(PersistentStorageConfiguration&& value) { SetPersistentStorage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection that will be used to connect to Amazon VPC, if
     * any.</p>
     */
    inline const Aws::String& GetVpcConnectionName() const{ return m_vpcConnectionName; }
    inline bool VpcConnectionNameHasBeenSet() const { return m_vpcConnectionNameHasBeenSet; }
    inline void SetVpcConnectionName(const Aws::String& value) { m_vpcConnectionNameHasBeenSet = true; m_vpcConnectionName = value; }
    inline void SetVpcConnectionName(Aws::String&& value) { m_vpcConnectionNameHasBeenSet = true; m_vpcConnectionName = std::move(value); }
    inline void SetVpcConnectionName(const char* value) { m_vpcConnectionNameHasBeenSet = true; m_vpcConnectionName.assign(value); }
    inline CreateDevEnvironmentRequest& WithVpcConnectionName(const Aws::String& value) { SetVpcConnectionName(value); return *this;}
    inline CreateDevEnvironmentRequest& WithVpcConnectionName(Aws::String&& value) { SetVpcConnectionName(std::move(value)); return *this;}
    inline CreateDevEnvironmentRequest& WithVpcConnectionName(const char* value) { SetVpcConnectionName(value); return *this;}
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

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_inactivityTimeoutMinutes;
    bool m_inactivityTimeoutMinutesHasBeenSet = false;

    PersistentStorageConfiguration m_persistentStorage;
    bool m_persistentStorageHasBeenSet = false;

    Aws::String m_vpcConnectionName;
    bool m_vpcConnectionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
