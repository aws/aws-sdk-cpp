/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ContainerServicePowerName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lightsail/model/ContainerServiceDeploymentRequest.h>
#include <aws/lightsail/model/PrivateRegistryAccessRequest.h>
#include <aws/lightsail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateContainerServiceRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateContainerServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContainerService"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the container service.</p> <p>The name that you specify for your
     * container service will make up part of its default domain. The default domain of
     * a container service is typically
     * <code>https://&lt;ServiceName&gt;.&lt;RandomGUID&gt;.&lt;AWSRegion&gt;.cs.amazonlightsail.com</code>.
     * If the name of your container service is <code>container-service-1</code>, and
     * it's located in the US East (Ohio) Amazon Web Services Region
     * (<code>us-east-2</code>), then the domain for your container service will be
     * like the following example:
     * <code>https://container-service-1.ur4EXAMPLE2uq.us-east-2.cs.amazonlightsail.com</code>
     * </p> <p>The following are the requirements for container service names:</p> <ul>
     * <li> <p>Must be unique within each Amazon Web Services Region in your Lightsail
     * account.</p> </li> <li> <p>Must contain 1 to 63 characters.</p> </li> <li>
     * <p>Must contain only alphanumeric characters and hyphens.</p> </li> <li> <p>A
     * hyphen (-) can separate words but cannot be at the start or end of the name.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline CreateContainerServiceRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline CreateContainerServiceRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline CreateContainerServiceRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The power specification for the container service.</p> <p>The power specifies
     * the amount of memory, vCPUs, and base monthly cost of each node of the container
     * service. The <code>power</code> and <code>scale</code> of a container service
     * makes up its configured capacity. To determine the monthly price of your
     * container service, multiply the base price of the <code>power</code> with the
     * <code>scale</code> (the number of nodes) of the service.</p> <p>Use the
     * <code>GetContainerServicePowers</code> action to get a list of power options
     * that you can specify using this parameter, and their base monthly cost.</p>
     */
    inline const ContainerServicePowerName& GetPower() const{ return m_power; }
    inline bool PowerHasBeenSet() const { return m_powerHasBeenSet; }
    inline void SetPower(const ContainerServicePowerName& value) { m_powerHasBeenSet = true; m_power = value; }
    inline void SetPower(ContainerServicePowerName&& value) { m_powerHasBeenSet = true; m_power = std::move(value); }
    inline CreateContainerServiceRequest& WithPower(const ContainerServicePowerName& value) { SetPower(value); return *this;}
    inline CreateContainerServiceRequest& WithPower(ContainerServicePowerName&& value) { SetPower(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scale specification for the container service.</p> <p>The scale specifies
     * the allocated compute nodes of the container service. The <code>power</code> and
     * <code>scale</code> of a container service makes up its configured capacity. To
     * determine the monthly price of your container service, multiply the base price
     * of the <code>power</code> with the <code>scale</code> (the number of nodes) of
     * the service.</p>
     */
    inline int GetScale() const{ return m_scale; }
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }
    inline void SetScale(int value) { m_scaleHasBeenSet = true; m_scale = value; }
    inline CreateContainerServiceRequest& WithScale(int value) { SetScale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values to add to the container service during
     * create.</p> <p>Use the <code>TagResource</code> action to tag a resource after
     * it's created.</p> <p>For more information about tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateContainerServiceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateContainerServiceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateContainerServiceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateContainerServiceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetPublicDomainNames() const{ return m_publicDomainNames; }
    inline bool PublicDomainNamesHasBeenSet() const { return m_publicDomainNamesHasBeenSet; }
    inline void SetPublicDomainNames(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames = value; }
    inline void SetPublicDomainNames(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames = std::move(value); }
    inline CreateContainerServiceRequest& WithPublicDomainNames(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetPublicDomainNames(value); return *this;}
    inline CreateContainerServiceRequest& WithPublicDomainNames(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetPublicDomainNames(std::move(value)); return *this;}
    inline CreateContainerServiceRequest& AddPublicDomainNames(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(key, value); return *this; }
    inline CreateContainerServiceRequest& AddPublicDomainNames(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(std::move(key), value); return *this; }
    inline CreateContainerServiceRequest& AddPublicDomainNames(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(key, std::move(value)); return *this; }
    inline CreateContainerServiceRequest& AddPublicDomainNames(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateContainerServiceRequest& AddPublicDomainNames(const char* key, Aws::Vector<Aws::String>&& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(key, std::move(value)); return *this; }
    inline CreateContainerServiceRequest& AddPublicDomainNames(const char* key, const Aws::Vector<Aws::String>& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that describes a deployment for the container service.</p> <p>A
     * deployment specifies the containers that will be launched on the container
     * service and their settings, such as the ports to open, the environment variables
     * to apply, and the launch command to run. It also specifies the container that
     * will serve as the public endpoint of the deployment and its settings, such as
     * the HTTP or HTTPS port to use, and the health check configuration.</p>
     */
    inline const ContainerServiceDeploymentRequest& GetDeployment() const{ return m_deployment; }
    inline bool DeploymentHasBeenSet() const { return m_deploymentHasBeenSet; }
    inline void SetDeployment(const ContainerServiceDeploymentRequest& value) { m_deploymentHasBeenSet = true; m_deployment = value; }
    inline void SetDeployment(ContainerServiceDeploymentRequest&& value) { m_deploymentHasBeenSet = true; m_deployment = std::move(value); }
    inline CreateContainerServiceRequest& WithDeployment(const ContainerServiceDeploymentRequest& value) { SetDeployment(value); return *this;}
    inline CreateContainerServiceRequest& WithDeployment(ContainerServiceDeploymentRequest&& value) { SetDeployment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object to describe the configuration for the container service to access
     * private container image repositories, such as Amazon Elastic Container Registry
     * (Amazon ECR) private repositories.</p> <p>For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-container-service-ecr-private-repo-access">Configuring
     * access to an Amazon ECR private repository for an Amazon Lightsail container
     * service</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline const PrivateRegistryAccessRequest& GetPrivateRegistryAccess() const{ return m_privateRegistryAccess; }
    inline bool PrivateRegistryAccessHasBeenSet() const { return m_privateRegistryAccessHasBeenSet; }
    inline void SetPrivateRegistryAccess(const PrivateRegistryAccessRequest& value) { m_privateRegistryAccessHasBeenSet = true; m_privateRegistryAccess = value; }
    inline void SetPrivateRegistryAccess(PrivateRegistryAccessRequest&& value) { m_privateRegistryAccessHasBeenSet = true; m_privateRegistryAccess = std::move(value); }
    inline CreateContainerServiceRequest& WithPrivateRegistryAccess(const PrivateRegistryAccessRequest& value) { SetPrivateRegistryAccess(value); return *this;}
    inline CreateContainerServiceRequest& WithPrivateRegistryAccess(PrivateRegistryAccessRequest&& value) { SetPrivateRegistryAccess(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    ContainerServicePowerName m_power;
    bool m_powerHasBeenSet = false;

    int m_scale;
    bool m_scaleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_publicDomainNames;
    bool m_publicDomainNamesHasBeenSet = false;

    ContainerServiceDeploymentRequest m_deployment;
    bool m_deploymentHasBeenSet = false;

    PrivateRegistryAccessRequest m_privateRegistryAccess;
    bool m_privateRegistryAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
