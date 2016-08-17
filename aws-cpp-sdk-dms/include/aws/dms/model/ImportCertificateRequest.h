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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class AWS_DATABASEMIGRATIONSERVICE_API ImportCertificateRequest : public DatabaseMigrationServiceRequest
  {
  public:
    ImportCertificateRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are
     * [A-z_0-9].</p>
     */
    inline const Aws::String& GetCertificateIdentifier() const{ return m_certificateIdentifier; }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are
     * [A-z_0-9].</p>
     */
    inline void SetCertificateIdentifier(const Aws::String& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = value; }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are
     * [A-z_0-9].</p>
     */
    inline void SetCertificateIdentifier(Aws::String&& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = value; }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are
     * [A-z_0-9].</p>
     */
    inline void SetCertificateIdentifier(const char* value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier.assign(value); }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are
     * [A-z_0-9].</p>
     */
    inline ImportCertificateRequest& WithCertificateIdentifier(const Aws::String& value) { SetCertificateIdentifier(value); return *this;}

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are
     * [A-z_0-9].</p>
     */
    inline ImportCertificateRequest& WithCertificateIdentifier(Aws::String&& value) { SetCertificateIdentifier(value); return *this;}

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are
     * [A-z_0-9].</p>
     */
    inline ImportCertificateRequest& WithCertificateIdentifier(const char* value) { SetCertificateIdentifier(value); return *this;}

    /**
     * <p>The contents of the .pem X.509 certificate file.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }

    /**
     * <p>The contents of the .pem X.509 certificate file.</p>
     */
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }

    /**
     * <p>The contents of the .pem X.509 certificate file.</p>
     */
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }

    /**
     * <p>The contents of the .pem X.509 certificate file.</p>
     */
    inline void SetCertificatePem(const char* value) { m_certificatePemHasBeenSet = true; m_certificatePem.assign(value); }

    /**
     * <p>The contents of the .pem X.509 certificate file.</p>
     */
    inline ImportCertificateRequest& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}

    /**
     * <p>The contents of the .pem X.509 certificate file.</p>
     */
    inline ImportCertificateRequest& WithCertificatePem(Aws::String&& value) { SetCertificatePem(value); return *this;}

    /**
     * <p>The contents of the .pem X.509 certificate file.</p>
     */
    inline ImportCertificateRequest& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}

  private:
    Aws::String m_certificateIdentifier;
    bool m_certificateIdentifierHasBeenSet;
    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
