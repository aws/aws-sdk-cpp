/*
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
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

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
    inline bool InstancePortHasBeenSet() const { return m_instancePortHasBeenSet; }

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
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline const Aws::String& GetHealthCheckPath() const{ return m_healthCheckPath; }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline void SetHealthCheckPath(const Aws::String& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline void SetHealthCheckPath(Aws::String&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::move(value); }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline void SetHealthCheckPath(const char* value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath.assign(value); }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline CreateLoadBalancerRequest& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline CreateLoadBalancerRequest& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(std::move(value)); return *this;}

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline CreateLoadBalancerRequest& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}


    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
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
    inline bool CertificateDomainNameHasBeenSet() const { return m_certificateDomainNameHasBeenSet; }

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
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificateAlternativeNames() const{ return m_certificateAlternativeNames; }

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline bool CertificateAlternativeNamesHasBeenSet() const { return m_certificateAlternativeNamesHasBeenSet; }

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline void SetCertificateAlternativeNames(const Aws::Vector<Aws::String>& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames = value; }

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline void SetCertificateAlternativeNames(Aws::Vector<Aws::String>&& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames = std::move(value); }

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateAlternativeNames(const Aws::Vector<Aws::String>& value) { SetCertificateAlternativeNames(value); return *this;}

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateAlternativeNames(Aws::Vector<Aws::String>&& value) { SetCertificateAlternativeNames(std::move(value)); return *this;}

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& AddCertificateAlternativeNames(const Aws::String& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.push_back(value); return *this; }

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& AddCertificateAlternativeNames(Aws::String&& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& AddCertificateAlternativeNames(const char* value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.push_back(value); return *this; }


    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateLoadBalancerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateLoadBalancerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateLoadBalancerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateLoadBalancerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
