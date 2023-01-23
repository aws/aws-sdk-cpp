/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/CertificateSummary.h>
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
  class GetCertificatesResult
  {
  public:
    AWS_LIGHTSAIL_API GetCertificatesResult();
    AWS_LIGHTSAIL_API GetCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes certificates.</p>
     */
    inline const Aws::Vector<CertificateSummary>& GetCertificates() const{ return m_certificates; }

    /**
     * <p>An object that describes certificates.</p>
     */
    inline void SetCertificates(const Aws::Vector<CertificateSummary>& value) { m_certificates = value; }

    /**
     * <p>An object that describes certificates.</p>
     */
    inline void SetCertificates(Aws::Vector<CertificateSummary>&& value) { m_certificates = std::move(value); }

    /**
     * <p>An object that describes certificates.</p>
     */
    inline GetCertificatesResult& WithCertificates(const Aws::Vector<CertificateSummary>& value) { SetCertificates(value); return *this;}

    /**
     * <p>An object that describes certificates.</p>
     */
    inline GetCertificatesResult& WithCertificates(Aws::Vector<CertificateSummary>&& value) { SetCertificates(std::move(value)); return *this;}

    /**
     * <p>An object that describes certificates.</p>
     */
    inline GetCertificatesResult& AddCertificates(const CertificateSummary& value) { m_certificates.push_back(value); return *this; }

    /**
     * <p>An object that describes certificates.</p>
     */
    inline GetCertificatesResult& AddCertificates(CertificateSummary&& value) { m_certificates.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CertificateSummary> m_certificates;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
