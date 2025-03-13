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
    AWS_GUARDDUTY_API KubernetesApiCallAction() = default;
    AWS_GUARDDUTY_API KubernetesApiCallAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesApiCallAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Kubernetes API request URI.</p>
     */
    inline const Aws::String& GetRequestUri() const { return m_requestUri; }
    inline bool RequestUriHasBeenSet() const { return m_requestUriHasBeenSet; }
    template<typename RequestUriT = Aws::String>
    void SetRequestUri(RequestUriT&& value) { m_requestUriHasBeenSet = true; m_requestUri = std::forward<RequestUriT>(value); }
    template<typename RequestUriT = Aws::String>
    KubernetesApiCallAction& WithRequestUri(RequestUriT&& value) { SetRequestUri(std::forward<RequestUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes API request HTTP verb.</p>
     */
    inline const Aws::String& GetVerb() const { return m_verb; }
    inline bool VerbHasBeenSet() const { return m_verbHasBeenSet; }
    template<typename VerbT = Aws::String>
    void SetVerb(VerbT&& value) { m_verbHasBeenSet = true; m_verb = std::forward<VerbT>(value); }
    template<typename VerbT = Aws::String>
    KubernetesApiCallAction& WithVerb(VerbT&& value) { SetVerb(std::forward<VerbT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP of the Kubernetes API caller and the IPs of any proxies or load
     * balancers between the caller and the API endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceIps() const { return m_sourceIps; }
    inline bool SourceIpsHasBeenSet() const { return m_sourceIpsHasBeenSet; }
    template<typename SourceIpsT = Aws::Vector<Aws::String>>
    void SetSourceIps(SourceIpsT&& value) { m_sourceIpsHasBeenSet = true; m_sourceIps = std::forward<SourceIpsT>(value); }
    template<typename SourceIpsT = Aws::Vector<Aws::String>>
    KubernetesApiCallAction& WithSourceIps(SourceIpsT&& value) { SetSourceIps(std::forward<SourceIpsT>(value)); return *this;}
    template<typename SourceIpsT = Aws::String>
    KubernetesApiCallAction& AddSourceIps(SourceIpsT&& value) { m_sourceIpsHasBeenSet = true; m_sourceIps.emplace_back(std::forward<SourceIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user agent of the caller of the Kubernetes API.</p>
     */
    inline const Aws::String& GetUserAgent() const { return m_userAgent; }
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
    template<typename UserAgentT = Aws::String>
    void SetUserAgent(UserAgentT&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::forward<UserAgentT>(value); }
    template<typename UserAgentT = Aws::String>
    KubernetesApiCallAction& WithUserAgent(UserAgentT&& value) { SetUserAgent(std::forward<UserAgentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RemoteIpDetails& GetRemoteIpDetails() const { return m_remoteIpDetails; }
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }
    template<typename RemoteIpDetailsT = RemoteIpDetails>
    void SetRemoteIpDetails(RemoteIpDetailsT&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::forward<RemoteIpDetailsT>(value); }
    template<typename RemoteIpDetailsT = RemoteIpDetails>
    KubernetesApiCallAction& WithRemoteIpDetails(RemoteIpDetailsT&& value) { SetRemoteIpDetails(std::forward<RemoteIpDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resulting HTTP response code of the Kubernetes API call action.</p>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline KubernetesApiCallAction& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters related to the Kubernetes API call action.</p>
     */
    inline const Aws::String& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::String>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::String>
    KubernetesApiCallAction& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource component in the Kubernetes API call action.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    KubernetesApiCallAction& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the sub-resource in the Kubernetes API call action.</p>
     */
    inline const Aws::String& GetSubresource() const { return m_subresource; }
    inline bool SubresourceHasBeenSet() const { return m_subresourceHasBeenSet; }
    template<typename SubresourceT = Aws::String>
    void SetSubresource(SubresourceT&& value) { m_subresourceHasBeenSet = true; m_subresource = std::forward<SubresourceT>(value); }
    template<typename SubresourceT = Aws::String>
    KubernetesApiCallAction& WithSubresource(SubresourceT&& value) { SetSubresource(std::forward<SubresourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namespace where the Kubernetes API call action takes
     * place.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    KubernetesApiCallAction& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource in the Kubernetes API call action.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    KubernetesApiCallAction& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}
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

    int m_statusCode{0};
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
