/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/EMRContainersRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/ContainerProvider.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

  /**
   */
  class CreateVirtualClusterRequest : public EMRContainersRequest
  {
  public:
    AWS_EMRCONTAINERS_API CreateVirtualClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVirtualCluster"; }

    AWS_EMRCONTAINERS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The specified name of the virtual cluster.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateVirtualClusterRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container provider of the virtual cluster.</p>
     */
    inline const ContainerProvider& GetContainerProvider() const { return m_containerProvider; }
    inline bool ContainerProviderHasBeenSet() const { return m_containerProviderHasBeenSet; }
    template<typename ContainerProviderT = ContainerProvider>
    void SetContainerProvider(ContainerProviderT&& value) { m_containerProviderHasBeenSet = true; m_containerProvider = std::forward<ContainerProviderT>(value); }
    template<typename ContainerProviderT = ContainerProvider>
    CreateVirtualClusterRequest& WithContainerProvider(ContainerProviderT&& value) { SetContainerProvider(std::forward<ContainerProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token of the virtual cluster.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateVirtualClusterRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the virtual cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateVirtualClusterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateVirtualClusterRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the security configuration.</p>
     */
    inline const Aws::String& GetSecurityConfigurationId() const { return m_securityConfigurationId; }
    inline bool SecurityConfigurationIdHasBeenSet() const { return m_securityConfigurationIdHasBeenSet; }
    template<typename SecurityConfigurationIdT = Aws::String>
    void SetSecurityConfigurationId(SecurityConfigurationIdT&& value) { m_securityConfigurationIdHasBeenSet = true; m_securityConfigurationId = std::forward<SecurityConfigurationIdT>(value); }
    template<typename SecurityConfigurationIdT = Aws::String>
    CreateVirtualClusterRequest& WithSecurityConfigurationId(SecurityConfigurationIdT&& value) { SetSecurityConfigurationId(std::forward<SecurityConfigurationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ContainerProvider m_containerProvider;
    bool m_containerProviderHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_securityConfigurationId;
    bool m_securityConfigurationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
