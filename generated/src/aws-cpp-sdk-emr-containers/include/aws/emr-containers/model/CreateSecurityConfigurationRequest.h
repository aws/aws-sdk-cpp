/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/EMRContainersRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/ContainerProvider.h>
#include <aws/emr-containers/model/SecurityConfigurationData.h>
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
  class CreateSecurityConfigurationRequest : public EMRContainersRequest
  {
  public:
    AWS_EMRCONTAINERS_API CreateSecurityConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSecurityConfiguration"; }

    AWS_EMRCONTAINERS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The client idempotency token to use when creating the security
     * configuration.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateSecurityConfigurationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSecurityConfigurationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container provider associated with the security configuration.</p>
     */
    inline const ContainerProvider& GetContainerProvider() const { return m_containerProvider; }
    inline bool ContainerProviderHasBeenSet() const { return m_containerProviderHasBeenSet; }
    template<typename ContainerProviderT = ContainerProvider>
    void SetContainerProvider(ContainerProviderT&& value) { m_containerProviderHasBeenSet = true; m_containerProvider = std::forward<ContainerProviderT>(value); }
    template<typename ContainerProviderT = ContainerProvider>
    CreateSecurityConfigurationRequest& WithContainerProvider(ContainerProviderT&& value) { SetContainerProvider(std::forward<ContainerProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Security configuration input for the request.</p>
     */
    inline const SecurityConfigurationData& GetSecurityConfigurationData() const { return m_securityConfigurationData; }
    inline bool SecurityConfigurationDataHasBeenSet() const { return m_securityConfigurationDataHasBeenSet; }
    template<typename SecurityConfigurationDataT = SecurityConfigurationData>
    void SetSecurityConfigurationData(SecurityConfigurationDataT&& value) { m_securityConfigurationDataHasBeenSet = true; m_securityConfigurationData = std::forward<SecurityConfigurationDataT>(value); }
    template<typename SecurityConfigurationDataT = SecurityConfigurationData>
    CreateSecurityConfigurationRequest& WithSecurityConfigurationData(SecurityConfigurationDataT&& value) { SetSecurityConfigurationData(std::forward<SecurityConfigurationDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add to the security configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSecurityConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSecurityConfigurationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ContainerProvider m_containerProvider;
    bool m_containerProviderHasBeenSet = false;

    SecurityConfigurationData m_securityConfigurationData;
    bool m_securityConfigurationDataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
