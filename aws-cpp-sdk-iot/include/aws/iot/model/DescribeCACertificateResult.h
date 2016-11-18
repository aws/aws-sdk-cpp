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
#include <aws/iot/model/CACertificateDescription.h>

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
   * <p>The output from the DescribeCACertificate operation.</p>
   */
  class AWS_IOT_API DescribeCACertificateResult
  {
  public:
    DescribeCACertificateResult();
    DescribeCACertificateResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCACertificateResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The CA certificate description.</p>
     */
    inline const CACertificateDescription& GetCertificateDescription() const{ return m_certificateDescription; }

    /**
     * <p>The CA certificate description.</p>
     */
    inline void SetCertificateDescription(const CACertificateDescription& value) { m_certificateDescription = value; }

    /**
     * <p>The CA certificate description.</p>
     */
    inline void SetCertificateDescription(CACertificateDescription&& value) { m_certificateDescription = value; }

    /**
     * <p>The CA certificate description.</p>
     */
    inline DescribeCACertificateResult& WithCertificateDescription(const CACertificateDescription& value) { SetCertificateDescription(value); return *this;}

    /**
     * <p>The CA certificate description.</p>
     */
    inline DescribeCACertificateResult& WithCertificateDescription(CACertificateDescription&& value) { SetCertificateDescription(value); return *this;}

  private:
    CACertificateDescription m_certificateDescription;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
