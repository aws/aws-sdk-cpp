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
  class AWS_DATABASEMIGRATIONSERVICE_API DeleteCertificateResult
  {
  public:
    DeleteCertificateResult();
    DeleteCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Certificate m_certificate;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
