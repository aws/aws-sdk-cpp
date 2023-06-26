/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/Certificate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteCertificateResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteCertificateResult();
    AWS_DATABASEMIGRATIONSERVICE_API DeleteCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DeleteCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Secure Sockets Layer (SSL) certificate.</p>
     */
    inline const Certificate& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The Secure Sockets Layer (SSL) certificate.</p>
     */
    inline void SetCertificate(const Certificate& value) { m_certificate = value; }

    /**
     * <p>The Secure Sockets Layer (SSL) certificate.</p>
     */
    inline void SetCertificate(Certificate&& value) { m_certificate = std::move(value); }

    /**
     * <p>The Secure Sockets Layer (SSL) certificate.</p>
     */
    inline DeleteCertificateResult& WithCertificate(const Certificate& value) { SetCertificate(value); return *this;}

    /**
     * <p>The Secure Sockets Layer (SSL) certificate.</p>
     */
    inline DeleteCertificateResult& WithCertificate(Certificate&& value) { SetCertificate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteCertificateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteCertificateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteCertificateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Certificate m_certificate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
