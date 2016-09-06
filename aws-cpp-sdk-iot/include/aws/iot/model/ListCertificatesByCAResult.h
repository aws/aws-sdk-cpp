/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/Certificate.h>

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
   * <p>The output of the ListCertificatesByCA operation.</p>
   */
  class AWS_IOT_API ListCertificatesByCAResult
  {
  public:
    ListCertificatesByCAResult();
    ListCertificatesByCAResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCertificatesByCAResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The device certificates signed by the specified CA certificate.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const{ return m_certificates; }

    /**
     * <p>The device certificates signed by the specified CA certificate.</p>
     */
    inline void SetCertificates(const Aws::Vector<Certificate>& value) { m_certificates = value; }

    /**
     * <p>The device certificates signed by the specified CA certificate.</p>
     */
    inline void SetCertificates(Aws::Vector<Certificate>&& value) { m_certificates = value; }

    /**
     * <p>The device certificates signed by the specified CA certificate.</p>
     */
    inline ListCertificatesByCAResult& WithCertificates(const Aws::Vector<Certificate>& value) { SetCertificates(value); return *this;}

    /**
     * <p>The device certificates signed by the specified CA certificate.</p>
     */
    inline ListCertificatesByCAResult& WithCertificates(Aws::Vector<Certificate>&& value) { SetCertificates(value); return *this;}

    /**
     * <p>The device certificates signed by the specified CA certificate.</p>
     */
    inline ListCertificatesByCAResult& AddCertificates(const Certificate& value) { m_certificates.push_back(value); return *this; }

    /**
     * <p>The device certificates signed by the specified CA certificate.</p>
     */
    inline ListCertificatesByCAResult& AddCertificates(Certificate&& value) { m_certificates.push_back(value); return *this; }

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = value; }

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListCertificatesByCAResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListCertificatesByCAResult& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListCertificatesByCAResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:
    Aws::Vector<Certificate> m_certificates;
    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
