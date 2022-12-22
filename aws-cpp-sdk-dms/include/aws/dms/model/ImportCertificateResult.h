/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/Certificate.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class ImportCertificateResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ImportCertificateResult();
    AWS_DATABASEMIGRATIONSERVICE_API ImportCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ImportCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The certificate to be uploaded.</p>
     */
    inline const Certificate& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The certificate to be uploaded.</p>
     */
    inline void SetCertificate(const Certificate& value) { m_certificate = value; }

    /**
     * <p>The certificate to be uploaded.</p>
     */
    inline void SetCertificate(Certificate&& value) { m_certificate = std::move(value); }

    /**
     * <p>The certificate to be uploaded.</p>
     */
    inline ImportCertificateResult& WithCertificate(const Certificate& value) { SetCertificate(value); return *this;}

    /**
     * <p>The certificate to be uploaded.</p>
     */
    inline ImportCertificateResult& WithCertificate(Certificate&& value) { SetCertificate(std::move(value)); return *this;}

  private:

    Certificate m_certificate;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
