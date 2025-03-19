/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificate.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{
  class GetLoadBalancerTlsCertificatesResult
  {
  public:
    AWS_LIGHTSAIL_API GetLoadBalancerTlsCertificatesResult() = default;
    AWS_LIGHTSAIL_API GetLoadBalancerTlsCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetLoadBalancerTlsCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of LoadBalancerTlsCertificate objects describing your SSL/TLS
     * certificates.</p>
     */
    inline const Aws::Vector<LoadBalancerTlsCertificate>& GetTlsCertificates() const { return m_tlsCertificates; }
    template<typename TlsCertificatesT = Aws::Vector<LoadBalancerTlsCertificate>>
    void SetTlsCertificates(TlsCertificatesT&& value) { m_tlsCertificatesHasBeenSet = true; m_tlsCertificates = std::forward<TlsCertificatesT>(value); }
    template<typename TlsCertificatesT = Aws::Vector<LoadBalancerTlsCertificate>>
    GetLoadBalancerTlsCertificatesResult& WithTlsCertificates(TlsCertificatesT&& value) { SetTlsCertificates(std::forward<TlsCertificatesT>(value)); return *this;}
    template<typename TlsCertificatesT = LoadBalancerTlsCertificate>
    GetLoadBalancerTlsCertificatesResult& AddTlsCertificates(TlsCertificatesT&& value) { m_tlsCertificatesHasBeenSet = true; m_tlsCertificates.emplace_back(std::forward<TlsCertificatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLoadBalancerTlsCertificatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LoadBalancerTlsCertificate> m_tlsCertificates;
    bool m_tlsCertificatesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
