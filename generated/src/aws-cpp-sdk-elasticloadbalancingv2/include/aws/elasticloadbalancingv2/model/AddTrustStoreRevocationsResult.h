/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/TrustStoreRevocation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{
  class AddTrustStoreRevocationsResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API AddTrustStoreRevocationsResult();
    AWS_ELASTICLOADBALANCINGV2_API AddTrustStoreRevocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API AddTrustStoreRevocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the revocation file added to the trust store.</p>
     */
    inline const Aws::Vector<TrustStoreRevocation>& GetTrustStoreRevocations() const{ return m_trustStoreRevocations; }

    /**
     * <p>Information about the revocation file added to the trust store.</p>
     */
    inline void SetTrustStoreRevocations(const Aws::Vector<TrustStoreRevocation>& value) { m_trustStoreRevocations = value; }

    /**
     * <p>Information about the revocation file added to the trust store.</p>
     */
    inline void SetTrustStoreRevocations(Aws::Vector<TrustStoreRevocation>&& value) { m_trustStoreRevocations = std::move(value); }

    /**
     * <p>Information about the revocation file added to the trust store.</p>
     */
    inline AddTrustStoreRevocationsResult& WithTrustStoreRevocations(const Aws::Vector<TrustStoreRevocation>& value) { SetTrustStoreRevocations(value); return *this;}

    /**
     * <p>Information about the revocation file added to the trust store.</p>
     */
    inline AddTrustStoreRevocationsResult& WithTrustStoreRevocations(Aws::Vector<TrustStoreRevocation>&& value) { SetTrustStoreRevocations(std::move(value)); return *this;}

    /**
     * <p>Information about the revocation file added to the trust store.</p>
     */
    inline AddTrustStoreRevocationsResult& AddTrustStoreRevocations(const TrustStoreRevocation& value) { m_trustStoreRevocations.push_back(value); return *this; }

    /**
     * <p>Information about the revocation file added to the trust store.</p>
     */
    inline AddTrustStoreRevocationsResult& AddTrustStoreRevocations(TrustStoreRevocation&& value) { m_trustStoreRevocations.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AddTrustStoreRevocationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AddTrustStoreRevocationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TrustStoreRevocation> m_trustStoreRevocations;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
