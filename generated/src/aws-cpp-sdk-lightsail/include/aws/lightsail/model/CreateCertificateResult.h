/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/CertificateSummary.h>
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
  class CreateCertificateResult
  {
  public:
    AWS_LIGHTSAIL_API CreateCertificateResult();
    AWS_LIGHTSAIL_API CreateCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API CreateCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the certificate created.</p>
     */
    inline const CertificateSummary& GetCertificate() const{ return m_certificate; }

    /**
     * <p>An object that describes the certificate created.</p>
     */
    inline void SetCertificate(const CertificateSummary& value) { m_certificate = value; }

    /**
     * <p>An object that describes the certificate created.</p>
     */
    inline void SetCertificate(CertificateSummary&& value) { m_certificate = std::move(value); }

    /**
     * <p>An object that describes the certificate created.</p>
     */
    inline CreateCertificateResult& WithCertificate(const CertificateSummary& value) { SetCertificate(value); return *this;}

    /**
     * <p>An object that describes the certificate created.</p>
     */
    inline CreateCertificateResult& WithCertificate(CertificateSummary&& value) { SetCertificate(std::move(value)); return *this;}


    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const{ return m_operations; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline void SetOperations(const Aws::Vector<Operation>& value) { m_operations = value; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline void SetOperations(Aws::Vector<Operation>&& value) { m_operations = std::move(value); }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateCertificateResult& WithOperations(const Aws::Vector<Operation>& value) { SetOperations(value); return *this;}

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateCertificateResult& WithOperations(Aws::Vector<Operation>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateCertificateResult& AddOperations(const Operation& value) { m_operations.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateCertificateResult& AddOperations(Operation&& value) { m_operations.push_back(std::move(value)); return *this; }

  private:

    CertificateSummary m_certificate;

    Aws::Vector<Operation> m_operations;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
