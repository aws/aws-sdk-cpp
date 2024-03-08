/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/RemoteIpDetails.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the Kubernetes API call action described in this
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesApiCallAction">AWS
   * API Reference</a></p>
   */
  class KubernetesApiCallAction
  {
  public:
    AWS_GUARDDUTY_API KubernetesApiCallAction();
    AWS_GUARDDUTY_API KubernetesApiCallAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesApiCallAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Kubernetes API request URI.</p>
     */
    inline const Aws::String& GetRequestUri() const{ return m_requestUri; }

    /**
     * <p>The Kubernetes API request URI.</p>
     */
    inline bool RequestUriHasBeenSet() const { return m_requestUriHasBeenSet; }

    /**
     * <p>The Kubernetes API request URI.</p>
     */
    inline void SetRequestUri(const Aws::String& value) { m_requestUriHasBeenSet = true; m_requestUri = value; }

    /**
     * <p>The Kubernetes API request URI.</p>
     */
    inline void SetRequestUri(Aws::String&& value) { m_requestUriHasBeenSet = true; m_requestUri = std::move(value); }

    /**
     * <p>The Kubernetes API request URI.</p>
     */
    inline void SetRequestUri(const char* value) { m_requestUriHasBeenSet = true; m_requestUri.assign(value); }

    /**
     * <p>The Kubernetes API request URI.</p>
     */
    inline KubernetesApiCallAction& WithRequestUri(const Aws::String& value) { SetRequestUri(value); return *this;}

    /**
     * <p>The Kubernetes API request URI.</p>
     */
    inline KubernetesApiCallAction& WithRequestUri(Aws::String&& value) { SetRequestUri(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes API request URI.</p>
     */
    inline KubernetesApiCallAction& WithRequestUri(const char* value) { SetRequestUri(value); return *this;}


    /**
     * <p>The Kubernetes API request HTTP verb.</p>
     */
    inline const Aws::String& GetVerb() const{ return m_verb; }

    /**
     * <p>The Kubernetes API request HTTP verb.</p>
     */
    inline bool VerbHasBeenSet() const { return m_verbHasBeenSet; }

    /**
     * <p>The Kubernetes API request HTTP verb.</p>
     */
    inline void SetVerb(const Aws::String& value) { m_verbHasBeenSet = true; m_verb = value; }

    /**
     * <p>The Kubernetes API request HTTP verb.</p>
     */
    inline void SetVerb(Aws::String&& value) { m_verbHasBeenSet = true; m_verb = std::move(value); }

    /**
     * <p>The Kubernetes API request HTTP verb.</p>
     */
    inline void SetVerb(const char* value) { m_verbHasBeenSet = true; m_verb.assign(value); }

    /**
     * <p>The Kubernetes API request HTTP verb.</p>
     */
    inline KubernetesApiCallAction& WithVerb(const Aws::String& value) { SetVerb(value); return *this;}

    /**
     * <p>The Kubernetes API request HTTP verb.</p>
     */
    inline KubernetesApiCallAction& WithVerb(Aws::String&& value) { SetVerb(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes API request HTTP verb.</p>
     */
    inline KubernetesApiCallAction& WithVerb(const char* value) { SetVerb(value); return *this;}


    /**
     * <p>The IP of the Kubernetes API caller and the IPs of any proxies or load
     * balancers between the caller and the API endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceIps() const{ return m_sourceIps; }

    /**
     * <p>The IP of the Kubernetes API caller and the IPs of any proxies or load
     * balancers between the caller and the API endpoint.</p>
     */
    inline bool SourceIpsHasBeenSet() const { return m_sourceIpsHasBeenSet; }

    /**
     * <p>The IP of the Kubernetes API caller and the IPs of any proxies or load
     * balancers between the caller and the API endpoint.</p>
     */
    inline void SetSourceIps(const Aws::Vector<Aws::String>& value) { m_sourceIpsHasBeenSet = true; m_sourceIps = value; }

    /**
     * <p>The IP of the Kubernetes API caller and the IPs of any proxies or load
     * balancers between the caller and the API endpoint.</p>
     */
    inline void SetSourceIps(Aws::Vector<Aws::String>&& value) { m_sourceIpsHasBeenSet = true; m_sourceIps = std::move(value); }

    /**
     * <p>The IP of the Kubernetes API caller and the IPs of any proxies or load
     * balancers between the caller and the API endpoint.</p>
     */
    inline KubernetesApiCallAction& WithSourceIps(const Aws::Vector<Aws::String>& value) { SetSourceIps(value); return *this;}

    /**
     * <p>The IP of the Kubernetes API caller and the IPs of any proxies or load
     * balancers between the caller and the API endpoint.</p>
     */
    inline KubernetesApiCallAction& WithSourceIps(Aws::Vector<Aws::String>&& value) { SetSourceIps(std::move(value)); return *this;}

    /**
     * <p>The IP of the Kubernetes API caller and the IPs of any proxies or load
     * balancers between the caller and the API endpoint.</p>
     */
    inline KubernetesApiCallAction& AddSourceIps(const Aws::String& value) { m_sourceIpsHasBeenSet = true; m_sourceIps.push_back(value); return *this; }

    /**
     * <p>The IP of the Kubernetes API caller and the IPs of any proxies or load
     * balancers between the caller and the API endpoint.</p>
     */
    inline KubernetesApiCallAction& AddSourceIps(Aws::String&& value) { m_sourceIpsHasBeenSet = true; m_sourceIps.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP of the Kubernetes API caller and the IPs of any proxies or load
     * balancers between the caller and the API endpoint.</p>
     */
    inline KubernetesApiCallAction& AddSourceIps(const char* value) { m_sourceIpsHasBeenSet = true; m_sourceIps.push_back(value); return *this; }


    /**
     * <p>The user agent of the caller of the Kubernetes API.</p>
     */
    inline const Aws::String& GetUserAgent() const{ return m_userAgent; }

    /**
     * <p>The user agent of the caller of the Kubernetes API.</p>
     */
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }

    /**
     * <p>The user agent of the caller of the Kubernetes API.</p>
     */
    inline void SetUserAgent(const Aws::String& value) { m_userAgentHasBeenSet = true; m_userAgent = value; }

    /**
     * <p>The user agent of the caller of the Kubernetes API.</p>
     */
    inline void SetUserAgent(Aws::String&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::move(value); }

    /**
     * <p>The user agent of the caller of the Kubernetes API.</p>
     */
    inline void SetUserAgent(const char* value) { m_userAgentHasBeenSet = true; m_userAgent.assign(value); }

    /**
     * <p>The user agent of the caller of the Kubernetes API.</p>
     */
    inline KubernetesApiCallAction& WithUserAgent(const Aws::String& value) { SetUserAgent(value); return *this;}

    /**
     * <p>The user agent of the caller of the Kubernetes API.</p>
     */
    inline KubernetesApiCallAction& WithUserAgent(Aws::String&& value) { SetUserAgent(std::move(value)); return *this;}

    /**
     * <p>The user agent of the caller of the Kubernetes API.</p>
     */
    inline KubernetesApiCallAction& WithUserAgent(const char* value) { SetUserAgent(value); return *this;}


    
    inline const RemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }

    
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }

    
    inline void SetRemoteIpDetails(const RemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }

    
    inline void SetRemoteIpDetails(RemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }

    
    inline KubernetesApiCallAction& WithRemoteIpDetails(const RemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}

    
    inline KubernetesApiCallAction& WithRemoteIpDetails(RemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}


    /**
     * <p>The resulting HTTP response code of the Kubernetes API call action.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The resulting HTTP response code of the Kubernetes API call action.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The resulting HTTP response code of the Kubernetes API call action.</p>
     */
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The resulting HTTP response code of the Kubernetes API call action.</p>
     */
    inline KubernetesApiCallAction& WithStatusCode(int value) { SetStatusCode(value); return *this;}


    /**
     * <p>Parameters related to the Kubernetes API call action.</p>
     */
    inline const Aws::String& GetParameters() const{ return m_parameters; }

    /**
     * <p>Parameters related to the Kubernetes API call action.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Parameters related to the Kubernetes API call action.</p>
     */
    inline void SetParameters(const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Parameters related to the Kubernetes API call action.</p>
     */
    inline void SetParameters(Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Parameters related to the Kubernetes API call action.</p>
     */
    inline void SetParameters(const char* value) { m_parametersHasBeenSet = true; m_parameters.assign(value); }

    /**
     * <p>Parameters related to the Kubernetes API call action.</p>
     */
    inline KubernetesApiCallAction& WithParameters(const Aws::String& value) { SetParameters(value); return *this;}

    /**
     * <p>Parameters related to the Kubernetes API call action.</p>
     */
    inline KubernetesApiCallAction& WithParameters(Aws::String&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Parameters related to the Kubernetes API call action.</p>
     */
    inline KubernetesApiCallAction& WithParameters(const char* value) { SetParameters(value); return *this;}


    /**
     * <p>The resource component in the Kubernetes API call action.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The resource component in the Kubernetes API call action.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The resource component in the Kubernetes API call action.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The resource component in the Kubernetes API call action.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The resource component in the Kubernetes API call action.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The resource component in the Kubernetes API call action.</p>
     */
    inline KubernetesApiCallAction& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The resource component in the Kubernetes API call action.</p>
     */
    inline KubernetesApiCallAction& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The resource component in the Kubernetes API call action.</p>
     */
    inline KubernetesApiCallAction& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The name of the sub-resource in the Kubernetes API call action.</p>
     */
    inline const Aws::String& GetSubresource() const{ return m_subresource; }

    /**
     * <p>The name of the sub-resource in the Kubernetes API call action.</p>
     */
    inline bool SubresourceHasBeenSet() const { return m_subresourceHasBeenSet; }

    /**
     * <p>The name of the sub-resource in the Kubernetes API call action.</p>
     */
    inline void SetSubresource(const Aws::String& value) { m_subresourceHasBeenSet = true; m_subresource = value; }

    /**
     * <p>The name of the sub-resource in the Kubernetes API call action.</p>
     */
    inline void SetSubresource(Aws::String&& value) { m_subresourceHasBeenSet = true; m_subresource = std::move(value); }

    /**
     * <p>The name of the sub-resource in the Kubernetes API call action.</p>
     */
    inline void SetSubresource(const char* value) { m_subresourceHasBeenSet = true; m_subresource.assign(value); }

    /**
     * <p>The name of the sub-resource in the Kubernetes API call action.</p>
     */
    inline KubernetesApiCallAction& WithSubresource(const Aws::String& value) { SetSubresource(value); return *this;}

    /**
     * <p>The name of the sub-resource in the Kubernetes API call action.</p>
     */
    inline KubernetesApiCallAction& WithSubresource(Aws::String&& value) { SetSubresource(std::move(value)); return *this;}

    /**
     * <p>The name of the sub-resource in the Kubernetes API call action.</p>
     */
    inline KubernetesApiCallAction& WithSubresource(const char* value) { SetSubresource(value); return *this;}


    /**
     * <p>The name of the namespace where the Kubernetes API call action takes
     * place.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The name of the namespace where the Kubernetes API call action takes
     * place.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The name of the namespace where the Kubernetes API call action takes
     * place.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The name of the namespace where the Kubernetes API call action takes
     * place.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The name of the namespace where the Kubernetes API call action takes
     * place.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The name of the namespace where the Kubernetes API call action takes
     * place.</p>
     */
    inline KubernetesApiCallAction& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The name of the namespace where the Kubernetes API call action takes
     * place.</p>
     */
    inline KubernetesApiCallAction& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace where the Kubernetes API call action takes
     * place.</p>
     */
    inline KubernetesApiCallAction& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the resource in the Kubernetes API call action.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the resource in the Kubernetes API call action.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the resource in the Kubernetes API call action.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the resource in the Kubernetes API call action.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the resource in the Kubernetes API call action.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the resource in the Kubernetes API call action.</p>
     */
    inline KubernetesApiCallAction& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the resource in the Kubernetes API call action.</p>
     */
    inline KubernetesApiCallAction& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource in the Kubernetes API call action.</p>
     */
    inline KubernetesApiCallAction& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_requestUri;
    bool m_requestUriHasBeenSet = false;

    Aws::String m_verb;
    bool m_verbHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceIps;
    bool m_sourceIpsHasBeenSet = false;

    Aws::String m_userAgent;
    bool m_userAgentHasBeenSet = false;

    RemoteIpDetails m_remoteIpDetails;
    bool m_remoteIpDetailsHasBeenSet = false;

    int m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_subresource;
    bool m_subresourceHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
