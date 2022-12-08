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
    AWS_LIGHTSAIL_API UpdateContainerServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContainerService"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the container service to update.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the container service to update.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the container service to update.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the container service to update.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the container service to update.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the container service to update.</p>
     */
    inline UpdateContainerServiceRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the container service to update.</p>
     */
    inline UpdateContainerServiceRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the container service to update.</p>
     */
    inline UpdateContainerServiceRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}


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
    inline const ContainerServicePowerName& GetPower() const{ return m_power; }

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
    inline bool PowerHasBeenSet() const { return m_powerHasBeenSet; }

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
    inline void SetPower(const ContainerServicePowerName& value) { m_powerHasBeenSet = true; m_power = value; }

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
    inline void SetPower(ContainerServicePowerName&& value) { m_powerHasBeenSet = true; m_power = std::move(value); }

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
    inline UpdateContainerServiceRequest& WithPower(const ContainerServicePowerName& value) { SetPower(value); return *this;}

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
    inline UpdateContainerServiceRequest& WithPower(ContainerServicePowerName&& value) { SetPower(std::move(value)); return *this;}


    /**
     * <p>The scale for the container service.</p> <p>The scale specifies the allocated
     * compute nodes of the container service. The <code>power</code> and
     * <code>scale</code> of a container service makes up its configured capacity. To
     * determine the monthly price of your container service, multiply the base price
     * of the <code>power</code> with the <code>scale</code> (the number of nodes) of
     * the service.</p>
     */
    inline int GetScale() const{ return m_scale; }

    /**
     * <p>The scale for the container service.</p> <p>The scale specifies the allocated
     * compute nodes of the container service. The <code>power</code> and
     * <code>scale</code> of a container service makes up its configured capacity. To
     * determine the monthly price of your container service, multiply the base price
     * of the <code>power</code> with the <code>scale</code> (the number of nodes) of
     * the service.</p>
     */
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }

    /**
     * <p>The scale for the container service.</p> <p>The scale specifies the allocated
     * compute nodes of the container service. The <code>power</code> and
     * <code>scale</code> of a container service makes up its configured capacity. To
     * determine the monthly price of your container service, multiply the base price
     * of the <code>power</code> with the <code>scale</code> (the number of nodes) of
     * the service.</p>
     */
    inline void SetScale(int value) { m_scaleHasBeenSet = true; m_scale = value; }

    /**
     * <p>The scale for the container service.</p> <p>The scale specifies the allocated
     * compute nodes of the container service. The <code>power</code> and
     * <code>scale</code> of a container service makes up its configured capacity. To
     * determine the monthly price of your container service, multiply the base price
     * of the <code>power</code> with the <code>scale</code> (the number of nodes) of
     * the service.</p>
     */
    inline UpdateContainerServiceRequest& WithScale(int value) { SetScale(value); return *this;}


    /**
     * <p>A Boolean value to indicate whether the container service is disabled.</p>
     */
    inline bool GetIsDisabled() const{ return m_isDisabled; }

    /**
     * <p>A Boolean value to indicate whether the container service is disabled.</p>
     */
    inline bool IsDisabledHasBeenSet() const { return m_isDisabledHasBeenSet; }

    /**
     * <p>A Boolean value to indicate whether the container service is disabled.</p>
     */
    inline void SetIsDisabled(bool value) { m_isDisabledHasBeenSet = true; m_isDisabled = value; }

    /**
     * <p>A Boolean value to indicate whether the container service is disabled.</p>
     */
    inline UpdateContainerServiceRequest& WithIsDisabled(bool value) { SetIsDisabled(value); return *this;}


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
    inline bool PublicDomainNamesHasBeenSet() const { return m_publicDomainNamesHasBeenSet; }

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
    inline void SetPublicDomainNames(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames = value; }

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
    inline void SetPublicDomainNames(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames = std::move(value); }

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
    inline UpdateContainerServiceRequest& WithPublicDomainNames(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetPublicDomainNames(value); return *this;}

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
    inline UpdateContainerServiceRequest& WithPublicDomainNames(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetPublicDomainNames(std::move(value)); return *this;}

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
    inline UpdateContainerServiceRequest& AddPublicDomainNames(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(key, value); return *this; }

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
    inline UpdateContainerServiceRequest& AddPublicDomainNames(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(std::move(key), value); return *this; }

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
    inline UpdateContainerServiceRequest& AddPublicDomainNames(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(key, std::move(value)); return *this; }

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
    inline UpdateContainerServiceRequest& AddPublicDomainNames(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(std::move(key), std::move(value)); return *this; }

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
    inline UpdateContainerServiceRequest& AddPublicDomainNames(const char* key, Aws::Vector<Aws::String>&& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(key, std::move(value)); return *this; }

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
    inline UpdateContainerServiceRequest& AddPublicDomainNames(const char* key, const Aws::Vector<Aws::String>& value) { m_publicDomainNamesHasBeenSet = true; m_publicDomainNames.emplace(key, value); return *this; }


    /**
     * <p>An object to describe the configuration for the container service to access
     * private container image repositories, such as Amazon Elastic Container Registry
     * (Amazon ECR) private repositories.</p> <p>For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-container-service-ecr-private-repo-access">Configuring
     * access to an Amazon ECR private repository for an Amazon Lightsail container
     * service</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline const PrivateRegistryAccessRequest& GetPrivateRegistryAccess() const{ return m_privateRegistryAccess; }

    /**
     * <p>An object to describe the configuration for the container service to access
     * private container image repositories, such as Amazon Elastic Container Registry
     * (Amazon ECR) private repositories.</p> <p>For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-container-service-ecr-private-repo-access">Configuring
     * access to an Amazon ECR private repository for an Amazon Lightsail container
     * service</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline bool PrivateRegistryAccessHasBeenSet() const { return m_privateRegistryAccessHasBeenSet; }

    /**
     * <p>An object to describe the configuration for the container service to access
     * private container image repositories, such as Amazon Elastic Container Registry
     * (Amazon ECR) private repositories.</p> <p>For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-container-service-ecr-private-repo-access">Configuring
     * access to an Amazon ECR private repository for an Amazon Lightsail container
     * service</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline void SetPrivateRegistryAccess(const PrivateRegistryAccessRequest& value) { m_privateRegistryAccessHasBeenSet = true; m_privateRegistryAccess = value; }

    /**
     * <p>An object to describe the configuration for the container service to access
     * private container image repositories, such as Amazon Elastic Container Registry
     * (Amazon ECR) private repositories.</p> <p>For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-container-service-ecr-private-repo-access">Configuring
     * access to an Amazon ECR private repository for an Amazon Lightsail container
     * service</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline void SetPrivateRegistryAccess(PrivateRegistryAccessRequest&& value) { m_privateRegistryAccessHasBeenSet = true; m_privateRegistryAccess = std::move(value); }

    /**
     * <p>An object to describe the configuration for the container service to access
     * private container image repositories, such as Amazon Elastic Container Registry
     * (Amazon ECR) private repositories.</p> <p>For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-container-service-ecr-private-repo-access">Configuring
     * access to an Amazon ECR private repository for an Amazon Lightsail container
     * service</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline UpdateContainerServiceRequest& WithPrivateRegistryAccess(const PrivateRegistryAccessRequest& value) { SetPrivateRegistryAccess(value); return *this;}

    /**
     * <p>An object to describe the configuration for the container service to access
     * private container image repositories, such as Amazon Elastic Container Registry
     * (Amazon ECR) private repositories.</p> <p>For more information, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-container-service-ecr-private-repo-access">Configuring
     * access to an Amazon ECR private repository for an Amazon Lightsail container
     * service</a> in the <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline UpdateContainerServiceRequest& WithPrivateRegistryAccess(PrivateRegistryAccessRequest&& value) { SetPrivateRegistryAccess(std::move(value)); return *this;}

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    ContainerServicePowerName m_power;
    bool m_powerHasBeenSet = false;

    int m_scale;
    bool m_scaleHasBeenSet = false;

    bool m_isDisabled;
    bool m_isDisabledHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_publicDomainNames;
    bool m_publicDomainNamesHasBeenSet = false;

    PrivateRegistryAccessRequest m_privateRegistryAccess;
    bool m_privateRegistryAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
