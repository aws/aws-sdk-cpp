/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
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
  class GetTrustStoreCaCertificatesBundleResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API GetTrustStoreCaCertificatesBundleResult();
    AWS_ELASTICLOADBALANCINGV2_API GetTrustStoreCaCertificatesBundleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API GetTrustStoreCaCertificatesBundleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ca certificate bundles Amazon S3 URI.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The ca certificate bundles Amazon S3 URI.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The ca certificate bundles Amazon S3 URI.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The ca certificate bundles Amazon S3 URI.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The ca certificate bundles Amazon S3 URI.</p>
     */
    inline GetTrustStoreCaCertificatesBundleResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The ca certificate bundles Amazon S3 URI.</p>
     */
    inline GetTrustStoreCaCertificatesBundleResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The ca certificate bundles Amazon S3 URI.</p>
     */
    inline GetTrustStoreCaCertificatesBundleResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetTrustStoreCaCertificatesBundleResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetTrustStoreCaCertificatesBundleResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_location;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
