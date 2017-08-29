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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CACertificate.h>
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
   * <p>The output from the ListCACertificates operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCACertificatesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ListCACertificatesResult
  {
  public:
    ListCACertificatesResult();
    ListCACertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCACertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The CA certificates registered in your AWS account.</p>
     */
    inline const Aws::Vector<CACertificate>& GetCertificates() const{ return m_certificates; }

    /**
     * <p>The CA certificates registered in your AWS account.</p>
     */
    inline void SetCertificates(const Aws::Vector<CACertificate>& value) { m_certificates = value; }

    /**
     * <p>The CA certificates registered in your AWS account.</p>
     */
    inline void SetCertificates(Aws::Vector<CACertificate>&& value) { m_certificates = std::move(value); }

    /**
     * <p>The CA certificates registered in your AWS account.</p>
     */
    inline ListCACertificatesResult& WithCertificates(const Aws::Vector<CACertificate>& value) { SetCertificates(value); return *this;}

    /**
     * <p>The CA certificates registered in your AWS account.</p>
     */
    inline ListCACertificatesResult& WithCertificates(Aws::Vector<CACertificate>&& value) { SetCertificates(std::move(value)); return *this;}

    /**
     * <p>The CA certificates registered in your AWS account.</p>
     */
    inline ListCACertificatesResult& AddCertificates(const CACertificate& value) { m_certificates.push_back(value); return *this; }

    /**
     * <p>The CA certificates registered in your AWS account.</p>
     */
    inline ListCACertificatesResult& AddCertificates(CACertificate&& value) { m_certificates.push_back(std::move(value)); return *this; }


    /**
     * <p>The current position within the list of CA certificates.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The current position within the list of CA certificates.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The current position within the list of CA certificates.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>The current position within the list of CA certificates.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The current position within the list of CA certificates.</p>
     */
    inline ListCACertificatesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The current position within the list of CA certificates.</p>
     */
    inline ListCACertificatesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>The current position within the list of CA certificates.</p>
     */
    inline ListCACertificatesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<CACertificate> m_certificates;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
