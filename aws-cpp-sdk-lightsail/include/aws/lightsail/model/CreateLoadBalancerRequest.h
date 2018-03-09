﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_LIGHTSAIL_API CreateLoadBalancerRequest : public LightsailRequest
  {
  public:
    CreateLoadBalancerRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoadBalancer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of your load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of your load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of your load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of your load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of your load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of your load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The instance port where you're creating your load balancer.</p>
     */
    inline int GetInstancePort() const{ return m_instancePort; }

    /**
     * <p>The instance port where you're creating your load balancer.</p>
     */
    inline void SetInstancePort(int value) { m_instancePortHasBeenSet = true; m_instancePort = value; }

    /**
     * <p>The instance port where you're creating your load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithInstancePort(int value) { SetInstancePort(value); return *this;}


    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p>
     */
    inline const Aws::String& GetHealthCheckPath() const{ return m_healthCheckPath; }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p>
     */
    inline void SetHealthCheckPath(const Aws::String& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p>
     */
    inline void SetHealthCheckPath(Aws::String&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::move(value); }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p>
     */
    inline void SetHealthCheckPath(const char* value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath.assign(value); }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p>
     */
    inline CreateLoadBalancerRequest& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p>
     */
    inline CreateLoadBalancerRequest& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(std::move(value)); return *this;}

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p>
     */
    inline CreateLoadBalancerRequest& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}


    /**
     * <p>The name of the TLS/SSL certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The name of the TLS/SSL certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The name of the TLS/SSL certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The name of the TLS/SSL certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The name of the TLS/SSL certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The name of the TLS/SSL certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The name of the TLS/SSL certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}


    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline const Aws::String& GetCertificateDomainName() const{ return m_certificateDomainName; }

    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateDomainName(const Aws::String& value) { m_certificateDomainNameHasBeenSet = true; m_certificateDomainName = value; }

    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateDomainName(Aws::String&& value) { m_certificateDomainNameHasBeenSet = true; m_certificateDomainName = std::move(value); }

    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateDomainName(const char* value) { m_certificateDomainNameHasBeenSet = true; m_certificateDomainName.assign(value); }

    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateDomainName(const Aws::String& value) { SetCertificateDomainName(value); return *this;}

    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateDomainName(Aws::String&& value) { SetCertificateDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateDomainName(const char* value) { SetCertificateDomainName(value); return *this;}


    /**
     * <p>The alternative domain names to use with your TLS/SSL certificate (e.g.,
     * <code>www.example.com</code>, <code>www.ejemplo.com</code>,
     * <code>ejemplo.com</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificateAlternativeNames() const{ return m_certificateAlternativeNames; }

    /**
     * <p>The alternative domain names to use with your TLS/SSL certificate (e.g.,
     * <code>www.example.com</code>, <code>www.ejemplo.com</code>,
     * <code>ejemplo.com</code>).</p>
     */
    inline void SetCertificateAlternativeNames(const Aws::Vector<Aws::String>& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames = value; }

    /**
     * <p>The alternative domain names to use with your TLS/SSL certificate (e.g.,
     * <code>www.example.com</code>, <code>www.ejemplo.com</code>,
     * <code>ejemplo.com</code>).</p>
     */
    inline void SetCertificateAlternativeNames(Aws::Vector<Aws::String>&& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames = std::move(value); }

    /**
     * <p>The alternative domain names to use with your TLS/SSL certificate (e.g.,
     * <code>www.example.com</code>, <code>www.ejemplo.com</code>,
     * <code>ejemplo.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateAlternativeNames(const Aws::Vector<Aws::String>& value) { SetCertificateAlternativeNames(value); return *this;}

    /**
     * <p>The alternative domain names to use with your TLS/SSL certificate (e.g.,
     * <code>www.example.com</code>, <code>www.ejemplo.com</code>,
     * <code>ejemplo.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateAlternativeNames(Aws::Vector<Aws::String>&& value) { SetCertificateAlternativeNames(std::move(value)); return *this;}

    /**
     * <p>The alternative domain names to use with your TLS/SSL certificate (e.g.,
     * <code>www.example.com</code>, <code>www.ejemplo.com</code>,
     * <code>ejemplo.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& AddCertificateAlternativeNames(const Aws::String& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.push_back(value); return *this; }

    /**
     * <p>The alternative domain names to use with your TLS/SSL certificate (e.g.,
     * <code>www.example.com</code>, <code>www.ejemplo.com</code>,
     * <code>ejemplo.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& AddCertificateAlternativeNames(Aws::String&& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The alternative domain names to use with your TLS/SSL certificate (e.g.,
     * <code>www.example.com</code>, <code>www.ejemplo.com</code>,
     * <code>ejemplo.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& AddCertificateAlternativeNames(const char* value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.push_back(value); return *this; }

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;

    int m_instancePort;
    bool m_instancePortHasBeenSet;

    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet;

    Aws::String m_certificateDomainName;
    bool m_certificateDomainNameHasBeenSet;

    Aws::Vector<Aws::String> m_certificateAlternativeNames;
    bool m_certificateAlternativeNamesHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
