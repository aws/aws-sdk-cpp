/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ContainerServicePowerName.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lightsail/model/PrivateRegistryAccessRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class UpdateContainerServiceRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API UpdateContainerServiceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContainerService"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the container service to update.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    UpdateContainerServiceRequest& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The power for the container service.</p> <p>The power specifies the amount of
     * memory, vCPUs, and base monthly cost of each node of the container service. The
     * <code>power</code> and <code>scale</code> of a container service makes up its
     * configured capacity. To determine the monthly price of your container service,
     * multiply the base price of the <code>power</code> with the <code>scale</code>
     * (the number of nodes) of the service.</p> <p>Use the
     * <code>GetContainerServicePowers</code> action to view the specifications of each
     * power option.</p>
     */
    inline ContainerServicePowerName GetPower() const { return m_power; }
    inline bool PowerHasBeenSet() const { return m_powerHasBeenSet; }
    inline void SetPower(ContainerServicePowerName value) { m_powerHasBeenSet = true; m_power = value; }
    inline UpdateContainerServiceRequest& WithPower(ContainerServicePowerName value) { SetPower(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scale for the container service.</p> <p>The scale specifies the allocated
     * compute nodes of the container service. The <code>power</code> and
     * <code>scale</code> of a container service makes up its configured capacity. To
     * determine the monthly price of your container service, multiply the base price
     * of the <code>power</code> with the <code>scale</code> (the number of nodes) of
     * the service.</p>
     */
    inline int GetScale() const { return m_scale; }
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }
    inline void SetScale(int value) { m_scaleHasBeenSet = true; m_scale = value; }
    inline UpdateContainerServiceRequest& WithScale(int value) { SetScale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value to indicate whether the container service is disabled.</p>
     */
    inline bool GetIsDisabled() const { return m_isDisabled; }
    inline bool IsDisabledHasBeenSet() const { return m_isDisabledHasBeenSet; }
    inline void SetIsDisabled(bool value) { m_isDisabledHasBeenSet = true; m_isDisabled = value; }
    inline UpdateContainerServiceRequest& WithIsDisabled(bool value) { SetIsDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public domain names to use with the container service, such as
     * <code>example.com</code> and <code>www.example.com</code>.</p> <p>You can
     * specify up to four public domain names for a container service. The domain names
     * that you specify are used when you create a deployment with a container
     * configured as the public endpoint of your container service.</p> <p>If you don't
     * specify public domain names, then you can use the default domain of the
     * container service.</p>  <p>You must create and validate an SSL/TLS
     * certificate before you can use public domain names with your container service.
     * Use the <code>CreateCertificate</code> action to create a certificate for the
     * public domain names you want to use with your container service.</p>
     *  <p>You can specify public domain names using a string to array map
     * as shown in the example later on this page.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetPublicDomainNames() const { return m_publicDomainNames; }
    inline bool PublicDomainNamesHasBeenSet() const { return m_publicDomainNamesHasBeenSet; }
    template<typename PublicDomainNamesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetPublicDomainNames(PublicDomainNamesT&& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames = std::forward<PublicDomainNamesT>(value); }
    template<typename PublicDomainNamesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    UpdateContainerServiceRequest& WithPublicDomainNames(PublicDomainNamesT&& value) { SetPublicDomainNames(std::forward<PublicDomainNamesT>(value)); return *this;}
    template<typename PublicDomainNamesKeyT = Aws::String, typename PublicDomainNamesValueT = Aws::Vector<Aws::String>>
    UpdateContainerServiceRequest& AddPublicDomainNames(PublicDomainNamesKeyT&& key, PublicDomainNamesValueT&& value) {
      m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(std::forward<PublicDomainNamesKeyT>(key), std::forward<PublicDomainNamesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An object to describe the configuration for the container service to access
     * private container image repositories, such as Amazon Elastic Container Registry
     * (Amazon ECR) private repositories.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-container-service-ecr-private-repo-access">Configuring
     * access to an Amazon ECR private repository for an Amazon Lightsail container
     * service</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline const PrivateRegistryAccessRequest& GetPrivateRegistryAccess() const { return m_privateRegistryAccess; }
    inline bool PrivateRegistryAccessHasBeenSet() const { return m_privateRegistryAccessHasBeenSet; }
    template<typename PrivateRegistryAccessT = PrivateRegistryAccessRequest>
    void SetPrivateRegistryAccess(PrivateRegistryAccessT&& value) { m_privateRegistryAccessHasBeenSet = true; m_privateRegistryAccess = std::forward<PrivateRegistryAccessT>(value); }
    template<typename PrivateRegistryAccessT = PrivateRegistryAccessRequest>
    UpdateContainerServiceRequest& WithPrivateRegistryAccess(PrivateRegistryAccessT&& value) { SetPrivateRegistryAccess(std::forward<PrivateRegistryAccessT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    ContainerServicePowerName m_power{ContainerServicePowerName::NOT_SET};
    bool m_powerHasBeenSet = false;

    int m_scale{0};
    bool m_scaleHasBeenSet = false;

    bool m_isDisabled{false};
    bool m_isDisabledHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_publicDomainNames;
    bool m_publicDomainNamesHasBeenSet = false;

    PrivateRegistryAccessRequest m_privateRegistryAccess;
    bool m_privateRegistryAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
