﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/Certificate.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output of the ListCertificatesByCA operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCertificatesByCAResponse">AWS
   * API Reference</a></p>
   */
  class ListCertificatesByCAResult
  {
  public:
    AWS_IOT_API ListCertificatesByCAResult();
    AWS_IOT_API ListCertificatesByCAResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListCertificatesByCAResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The device certificates signed by the specified CA certificate.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const{ return m_certificates; }
    inline void SetCertificates(const Aws::Vector<Certificate>& value) { m_certificates = value; }
    inline void SetCertificates(Aws::Vector<Certificate>&& value) { m_certificates = std::move(value); }
    inline ListCertificatesByCAResult& WithCertificates(const Aws::Vector<Certificate>& value) { SetCertificates(value); return *this;}
    inline ListCertificatesByCAResult& WithCertificates(Aws::Vector<Certificate>&& value) { SetCertificates(std::move(value)); return *this;}
    inline ListCertificatesByCAResult& AddCertificates(const Certificate& value) { m_certificates.push_back(value); return *this; }
    inline ListCertificatesByCAResult& AddCertificates(Certificate&& value) { m_certificates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListCertificatesByCAResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListCertificatesByCAResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListCertificatesByCAResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCertificatesByCAResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCertificatesByCAResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCertificatesByCAResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Certificate> m_certificates;

    Aws::String m_nextMarker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
