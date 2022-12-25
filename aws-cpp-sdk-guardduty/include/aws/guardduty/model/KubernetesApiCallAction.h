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
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
