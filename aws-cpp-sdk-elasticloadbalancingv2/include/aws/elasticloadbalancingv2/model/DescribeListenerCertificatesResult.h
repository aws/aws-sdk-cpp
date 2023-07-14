﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/Certificate.h>
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
  class AWS_ELASTICLOADBALANCINGV2_API DescribeListenerCertificatesResult
  {
  public:
    DescribeListenerCertificatesResult();
    DescribeListenerCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeListenerCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the certificates.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const{ return m_certificates; }

    /**
     * <p>Information about the certificates.</p>
     */
    inline void SetCertificates(const Aws::Vector<Certificate>& value) { m_certificates = value; }

    /**
     * <p>Information about the certificates.</p>
     */
    inline void SetCertificates(Aws::Vector<Certificate>&& value) { m_certificates = std::move(value); }

    /**
     * <p>Information about the certificates.</p>
     */
    inline DescribeListenerCertificatesResult& WithCertificates(const Aws::Vector<Certificate>& value) { SetCertificates(value); return *this;}

    /**
     * <p>Information about the certificates.</p>
     */
    inline DescribeListenerCertificatesResult& WithCertificates(Aws::Vector<Certificate>&& value) { SetCertificates(std::move(value)); return *this;}

    /**
     * <p>Information about the certificates.</p>
     */
    inline DescribeListenerCertificatesResult& AddCertificates(const Certificate& value) { m_certificates.push_back(value); return *this; }

    /**
     * <p>Information about the certificates.</p>
     */
    inline DescribeListenerCertificatesResult& AddCertificates(Certificate&& value) { m_certificates.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeListenerCertificatesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeListenerCertificatesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeListenerCertificatesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeListenerCertificatesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeListenerCertificatesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Certificate> m_certificates;

    Aws::String m_nextMarker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
