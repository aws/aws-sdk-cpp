/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/VirtualClusterState.h>
#include <aws/emr-containers/model/ContainerProvider.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>This entity describes a virtual cluster. A virtual cluster is a Kubernetes
   * namespace that Amazon EMR is registered with. Amazon EMR uses virtual clusters
   * to run jobs and host endpoints. Multiple virtual clusters can be backed by the
   * same physical cluster. However, each virtual cluster maps to one namespace on an
   * Amazon EKS cluster. Virtual clusters do not create any active resources that
   * contribute to your bill or that require lifecycle management outside the
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/VirtualCluster">AWS
   * API Reference</a></p>
   */
  class VirtualCluster
  {
  public:
    AWS_EMRCONTAINERS_API VirtualCluster() = default;
    AWS_EMRCONTAINERS_API VirtualCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API VirtualCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    VirtualCluster& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual cluster.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    VirtualCluster& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the virtual cluster.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    VirtualCluster& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the virtual cluster.</p>
     */
    inline VirtualClusterState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(VirtualClusterState value) { m_stateHasBeenSet = true; m_state = value; }
    inline VirtualCluster& WithState(VirtualClusterState value) { SetState(value); return *this;}
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
    VirtualCluster& WithContainerProvider(ContainerProviderT&& value) { SetContainerProvider(std::forward<ContainerProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the virtual cluster is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    VirtualCluster& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The assigned tags of the virtual cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    VirtualCluster& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    VirtualCluster& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
    VirtualCluster& WithSecurityConfigurationId(SecurityConfigurationIdT&& value) { SetSecurityConfigurationId(std::forward<SecurityConfigurationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    VirtualClusterState m_state{VirtualClusterState::NOT_SET};
    bool m_stateHasBeenSet = false;

    ContainerProvider m_containerProvider;
    bool m_containerProviderHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_securityConfigurationId;
    bool m_securityConfigurationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
