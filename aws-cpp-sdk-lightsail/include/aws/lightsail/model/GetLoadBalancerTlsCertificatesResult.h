/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_LIGHTSAIL_API GetLoadBalancerTlsCertificatesResult();
    AWS_LIGHTSAIL_API GetLoadBalancerTlsCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetLoadBalancerTlsCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of LoadBalancerTlsCertificate objects describing your SSL/TLS
     * certificates.</p>
     */
    inline const Aws::Vector<LoadBalancerTlsCertificate>& GetTlsCertificates() const{ return m_tlsCertificates; }

    /**
     * <p>An array of LoadBalancerTlsCertificate objects describing your SSL/TLS
     * certificates.</p>
     */
    inline void SetTlsCertificates(const Aws::Vector<LoadBalancerTlsCertificate>& value) { m_tlsCertificates = value; }

    /**
     * <p>An array of LoadBalancerTlsCertificate objects describing your SSL/TLS
     * certificates.</p>
     */
    inline void SetTlsCertificates(Aws::Vector<LoadBalancerTlsCertificate>&& value) { m_tlsCertificates = std::move(value); }

    /**
     * <p>An array of LoadBalancerTlsCertificate objects describing your SSL/TLS
     * certificates.</p>
     */
    inline GetLoadBalancerTlsCertificatesResult& WithTlsCertificates(const Aws::Vector<LoadBalancerTlsCertificate>& value) { SetTlsCertificates(value); return *this;}

    /**
     * <p>An array of LoadBalancerTlsCertificate objects describing your SSL/TLS
     * certificates.</p>
     */
    inline GetLoadBalancerTlsCertificatesResult& WithTlsCertificates(Aws::Vector<LoadBalancerTlsCertificate>&& value) { SetTlsCertificates(std::move(value)); return *this;}

    /**
     * <p>An array of LoadBalancerTlsCertificate objects describing your SSL/TLS
     * certificates.</p>
     */
    inline GetLoadBalancerTlsCertificatesResult& AddTlsCertificates(const LoadBalancerTlsCertificate& value) { m_tlsCertificates.push_back(value); return *this; }

    /**
     * <p>An array of LoadBalancerTlsCertificate objects describing your SSL/TLS
     * certificates.</p>
     */
    inline GetLoadBalancerTlsCertificatesResult& AddTlsCertificates(LoadBalancerTlsCertificate&& value) { m_tlsCertificates.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LoadBalancerTlsCertificate> m_tlsCertificates;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
