/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Operation.h>
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
  class AttachLoadBalancerTlsCertificateResult
  {
  public:
    AWS_LIGHTSAIL_API AttachLoadBalancerTlsCertificateResult();
    AWS_LIGHTSAIL_API AttachLoadBalancerTlsCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API AttachLoadBalancerTlsCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p> <p>These SSL/TLS certificates are only usable by Lightsail
     * load balancers. You can't get the certificate and use it for another
     * purpose.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const{ return m_operations; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p> <p>These SSL/TLS certificates are only usable by Lightsail
     * load balancers. You can't get the certificate and use it for another
     * purpose.</p>
     */
    inline void SetOperations(const Aws::Vector<Operation>& value) { m_operations = value; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p> <p>These SSL/TLS certificates are only usable by Lightsail
     * load balancers. You can't get the certificate and use it for another
     * purpose.</p>
     */
    inline void SetOperations(Aws::Vector<Operation>&& value) { m_operations = std::move(value); }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p> <p>These SSL/TLS certificates are only usable by Lightsail
     * load balancers. You can't get the certificate and use it for another
     * purpose.</p>
     */
    inline AttachLoadBalancerTlsCertificateResult& WithOperations(const Aws::Vector<Operation>& value) { SetOperations(value); return *this;}

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p> <p>These SSL/TLS certificates are only usable by Lightsail
     * load balancers. You can't get the certificate and use it for another
     * purpose.</p>
     */
    inline AttachLoadBalancerTlsCertificateResult& WithOperations(Aws::Vector<Operation>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p> <p>These SSL/TLS certificates are only usable by Lightsail
     * load balancers. You can't get the certificate and use it for another
     * purpose.</p>
     */
    inline AttachLoadBalancerTlsCertificateResult& AddOperations(const Operation& value) { m_operations.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p> <p>These SSL/TLS certificates are only usable by Lightsail
     * load balancers. You can't get the certificate and use it for another
     * purpose.</p>
     */
    inline AttachLoadBalancerTlsCertificateResult& AddOperations(Operation&& value) { m_operations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Operation> m_operations;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
