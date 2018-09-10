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
  class AWS_LIGHTSAIL_API GetLoadBalancerTlsCertificatesResult
  {
  public:
    GetLoadBalancerTlsCertificatesResult();
    GetLoadBalancerTlsCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetLoadBalancerTlsCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
