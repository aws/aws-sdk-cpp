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
#include <aws/iot/model/CertificateDescription.h>
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
   * <p>The output of the DescribeCertificate operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCertificateResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API DescribeCertificateResult
  {
  public:
    DescribeCertificateResult();
    DescribeCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of the certificate.</p>
     */
    inline const CertificateDescription& GetCertificateDescription() const{ return m_certificateDescription; }

    /**
     * <p>The description of the certificate.</p>
     */
    inline void SetCertificateDescription(const CertificateDescription& value) { m_certificateDescription = value; }

    /**
     * <p>The description of the certificate.</p>
     */
    inline void SetCertificateDescription(CertificateDescription&& value) { m_certificateDescription = std::move(value); }

    /**
     * <p>The description of the certificate.</p>
     */
    inline DescribeCertificateResult& WithCertificateDescription(const CertificateDescription& value) { SetCertificateDescription(value); return *this;}

    /**
     * <p>The description of the certificate.</p>
     */
    inline DescribeCertificateResult& WithCertificateDescription(CertificateDescription&& value) { SetCertificateDescription(std::move(value)); return *this;}

  private:

    CertificateDescription m_certificateDescription;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
