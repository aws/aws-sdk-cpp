/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/ContainerServicePowerName.h>
#include <aws/lightsail/model/ContainerServiceState.h>
#include <aws/lightsail/model/ContainerServiceStateDetail.h>
#include <aws/lightsail/model/ContainerServiceDeployment.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lightsail/model/PrivateRegistryAccess.h>
#include <aws/lightsail/model/Tag.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes an Amazon Lightsail container service.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContainerService">AWS
   * API Reference</a></p>
   */
  class ContainerService
  {
  public:
    AWS_LIGHTSAIL_API ContainerService() = default;
    AWS_LIGHTSAIL_API ContainerService(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the container service.</p>
     */
    inline const Aws::String& GetContainerServiceName() const { return m_containerServiceName; }
    inline bool ContainerServiceNameHasBeenSet() const { return m_containerServiceNameHasBeenSet; }
    template<typename ContainerServiceNameT = Aws::String>
    void SetContainerServiceName(ContainerServiceNameT&& value) { m_containerServiceNameHasBeenSet = true; m_containerServiceName = std::forward<ContainerServiceNameT>(value); }
    template<typename ContainerServiceNameT = Aws::String>
    ContainerService& WithContainerServiceName(ContainerServiceNameT&& value) { SetContainerServiceName(std::forward<ContainerServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container service.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ContainerService& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the container service was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ContainerService& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the location of the container service, such as the
     * Amazon Web Services Region and Availability Zone.</p>
     */
    inline const ResourceLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = ResourceLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = ResourceLocation>
    ContainerService& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lightsail resource type of the container service.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ContainerService& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ContainerService& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ContainerService& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The power specification of the container service.</p> <p>The power specifies
     * the amount of RAM, the number of vCPUs, and the base price of the container
     * service.</p>
     */
    inline ContainerServicePowerName GetPower() const { return m_power; }
    inline bool PowerHasBeenSet() const { return m_powerHasBeenSet; }
    inline void SetPower(ContainerServicePowerName value) { m_powerHasBeenSet = true; m_power = value; }
    inline ContainerService& WithPower(ContainerServicePowerName value) { SetPower(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the power of the container service.</p>
     */
    inline const Aws::String& GetPowerId() const { return m_powerId; }
    inline bool PowerIdHasBeenSet() const { return m_powerIdHasBeenSet; }
    template<typename PowerIdT = Aws::String>
    void SetPowerId(PowerIdT&& value) { m_powerIdHasBeenSet = true; m_powerId = std::forward<PowerIdT>(value); }
    template<typename PowerIdT = Aws::String>
    ContainerService& WithPowerId(PowerIdT&& value) { SetPowerId(std::forward<PowerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the container service.</p> <p>The following container
     * service states are possible:</p> <ul> <li> <p> <code>PENDING</code> - The
     * container service is being created.</p> </li> <li> <p> <code>READY</code> - The
     * container service is running but it does not have an active container
     * deployment.</p> </li> <li> <p> <code>DEPLOYING</code> - The container service is
     * launching a container deployment.</p> </li> <li> <p> <code>RUNNING</code> - The
     * container service is running and it has an active container deployment.</p>
     * </li> <li> <p> <code>UPDATING</code> - The container service capacity or its
     * custom domains are being updated.</p> </li> <li> <p> <code>DELETING</code> - The
     * container service is being deleted.</p> </li> <li> <p> <code>DISABLED</code> -
     * The container service is disabled, and its active deployment and containers, if
     * any, are shut down.</p> </li> </ul>
     */
    inline ContainerServiceState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ContainerServiceState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ContainerService& WithState(ContainerServiceState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the current state of the container service.</p>
     *  <p>The state detail is populated only when a container service is in a
     * <code>PENDING</code>, <code>DEPLOYING</code>, or <code>UPDATING</code>
     * state.</p> 
     */
    inline const ContainerServiceStateDetail& GetStateDetail() const { return m_stateDetail; }
    inline bool StateDetailHasBeenSet() const { return m_stateDetailHasBeenSet; }
    template<typename StateDetailT = ContainerServiceStateDetail>
    void SetStateDetail(StateDetailT&& value) { m_stateDetailHasBeenSet = true; m_stateDetail = std::forward<StateDetailT>(value); }
    template<typename StateDetailT = ContainerServiceStateDetail>
    ContainerService& WithStateDetail(StateDetailT&& value) { SetStateDetail(std::forward<StateDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scale specification of the container service.</p> <p>The scale specifies
     * the allocated compute nodes of the container service.</p>
     */
    inline int GetScale() const { return m_scale; }
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }
    inline void SetScale(int value) { m_scaleHasBeenSet = true; m_scale = value; }
    inline ContainerService& WithScale(int value) { SetScale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the current container deployment of the container
     * service.</p>
     */
    inline const ContainerServiceDeployment& GetCurrentDeployment() const { return m_currentDeployment; }
    inline bool CurrentDeploymentHasBeenSet() const { return m_currentDeploymentHasBeenSet; }
    template<typename CurrentDeploymentT = ContainerServiceDeployment>
    void SetCurrentDeployment(CurrentDeploymentT&& value) { m_currentDeploymentHasBeenSet = true; m_currentDeployment = std::forward<CurrentDeploymentT>(value); }
    template<typename CurrentDeploymentT = ContainerServiceDeployment>
    ContainerService& WithCurrentDeployment(CurrentDeploymentT&& value) { SetCurrentDeployment(std::forward<CurrentDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the next deployment of the container service.</p>
     * <p>This value is <code>null</code> when there is no deployment in a
     * <code>pending</code> state.</p>
     */
    inline const ContainerServiceDeployment& GetNextDeployment() const { return m_nextDeployment; }
    inline bool NextDeploymentHasBeenSet() const { return m_nextDeploymentHasBeenSet; }
    template<typename NextDeploymentT = ContainerServiceDeployment>
    void SetNextDeployment(NextDeploymentT&& value) { m_nextDeploymentHasBeenSet = true; m_nextDeployment = std::forward<NextDeploymentT>(value); }
    template<typename NextDeploymentT = ContainerServiceDeployment>
    ContainerService& WithNextDeployment(NextDeploymentT&& value) { SetNextDeployment(std::forward<NextDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the container service is disabled.</p>
     */
    inline bool GetIsDisabled() const { return m_isDisabled; }
    inline bool IsDisabledHasBeenSet() const { return m_isDisabledHasBeenSet; }
    inline void SetIsDisabled(bool value) { m_isDisabledHasBeenSet = true; m_isDisabled = value; }
    inline ContainerService& WithIsDisabled(bool value) { SetIsDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal ARN of the container service.</p> <p>The principal ARN can be
     * used to create a trust relationship between your standard Amazon Web Services
     * account and your Lightsail container service. This allows you to give your
     * service permission to access resources in your standard Amazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
    template<typename PrincipalArnT = Aws::String>
    void SetPrincipalArn(PrincipalArnT&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::forward<PrincipalArnT>(value); }
    template<typename PrincipalArnT = Aws::String>
    ContainerService& WithPrincipalArn(PrincipalArnT&& value) { SetPrincipalArn(std::forward<PrincipalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private domain name of the container service.</p> <p>The private domain
     * name is accessible only by other resources within the default virtual private
     * cloud (VPC) of your Lightsail account.</p>
     */
    inline const Aws::String& GetPrivateDomainName() const { return m_privateDomainName; }
    inline bool PrivateDomainNameHasBeenSet() const { return m_privateDomainNameHasBeenSet; }
    template<typename PrivateDomainNameT = Aws::String>
    void SetPrivateDomainName(PrivateDomainNameT&& value) { m_privateDomainNameHasBeenSet = true; m_privateDomainName = std::forward<PrivateDomainNameT>(value); }
    template<typename PrivateDomainNameT = Aws::String>
    ContainerService& WithPrivateDomainName(PrivateDomainNameT&& value) { SetPrivateDomainName(std::forward<PrivateDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public domain name of the container service, such as
     * <code>example.com</code> and <code>www.example.com</code>.</p> <p>You can
     * specify up to four public domain names for a container service. The domain names
     * that you specify are used when you create a deployment with a container
     * configured as the public endpoint of your container service.</p> <p>If you don't
     * specify public domain names, then you can use the default domain of the
     * container service.</p>  <p>You must create and validate an SSL/TLS
     * certificate before you can use public domain names with your container service.
     * Use the <code>CreateCertificate</code> action to create a certificate for the
     * public domain names you want to use with your container service.</p>
     *  <p>See <code>CreateContainerService</code> or
     * <code>UpdateContainerService</code> for information about how to specify public
     * domain names for your Lightsail container service.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetPublicDomainNames() const { return m_publicDomainNames; }
    inline bool PublicDomainNamesHasBeenSet() const { return m_publicDomainNamesHasBeenSet; }
    template<typename PublicDomainNamesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetPublicDomainNames(PublicDomainNamesT&& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames = std::forward<PublicDomainNamesT>(value); }
    template<typename PublicDomainNamesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    ContainerService& WithPublicDomainNames(PublicDomainNamesT&& value) { SetPublicDomainNames(std::forward<PublicDomainNamesT>(value)); return *this;}
    template<typename PublicDomainNamesKeyT = Aws::String, typename PublicDomainNamesValueT = Aws::Vector<Aws::String>>
    ContainerService& AddPublicDomainNames(PublicDomainNamesKeyT&& key, PublicDomainNamesValueT&& value) {
      m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(std::forward<PublicDomainNamesKeyT>(key), std::forward<PublicDomainNamesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The publicly accessible URL of the container service.</p> <p>If no public
     * endpoint is specified in the <code>currentDeployment</code>, this URL returns a
     * 404 response.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    ContainerService& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the configuration for the container service to
     * access private container image repositories, such as Amazon Elastic Container
     * Registry (Amazon ECR) private repositories.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-container-service-ecr-private-repo-access">Configuring
     * access to an Amazon ECR private repository for an Amazon Lightsail container
     * service</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline const PrivateRegistryAccess& GetPrivateRegistryAccess() const { return m_privateRegistryAccess; }
    inline bool PrivateRegistryAccessHasBeenSet() const { return m_privateRegistryAccessHasBeenSet; }
    template<typename PrivateRegistryAccessT = PrivateRegistryAccess>
    void SetPrivateRegistryAccess(PrivateRegistryAccessT&& value) { m_privateRegistryAccessHasBeenSet = true; m_privateRegistryAccess = std::forward<PrivateRegistryAccessT>(value); }
    template<typename PrivateRegistryAccessT = PrivateRegistryAccess>
    ContainerService& WithPrivateRegistryAccess(PrivateRegistryAccessT&& value) { SetPrivateRegistryAccess(std::forward<PrivateRegistryAccessT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerServiceName;
    bool m_containerServiceNameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ContainerServicePowerName m_power{ContainerServicePowerName::NOT_SET};
    bool m_powerHasBeenSet = false;

    Aws::String m_powerId;
    bool m_powerIdHasBeenSet = false;

    ContainerServiceState m_state{ContainerServiceState::NOT_SET};
    bool m_stateHasBeenSet = false;

    ContainerServiceStateDetail m_stateDetail;
    bool m_stateDetailHasBeenSet = false;

    int m_scale{0};
    bool m_scaleHasBeenSet = false;

    ContainerServiceDeployment m_currentDeployment;
    bool m_currentDeploymentHasBeenSet = false;

    ContainerServiceDeployment m_nextDeployment;
    bool m_nextDeploymentHasBeenSet = false;

    bool m_isDisabled{false};
    bool m_isDisabledHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    Aws::String m_privateDomainName;
    bool m_privateDomainNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_publicDomainNames;
    bool m_publicDomainNamesHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    PrivateRegistryAccess m_privateRegistryAccess;
    bool m_privateRegistryAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
