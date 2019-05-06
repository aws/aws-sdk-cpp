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
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Tag.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportCertificate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline const Aws::String& GetCertificateIdentifier() const{ return m_certificateIdentifier; }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline bool CertificateIdentifierHasBeenSet() const { return m_certificateIdentifierHasBeenSet; }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline void SetCertificateIdentifier(const Aws::String& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = value; }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline void SetCertificateIdentifier(Aws::String&& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = std::move(value); }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline void SetCertificateIdentifier(const char* value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier.assign(value); }

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline ImportCertificateRequest& WithCertificateIdentifier(const Aws::String& value) { SetCertificateIdentifier(value); return *this;}

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline ImportCertificateRequest& WithCertificateIdentifier(Aws::String&& value) { SetCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>The customer-assigned name of the certificate. Valid characters are A-z and
     * 0-9.</p>
     */
    inline ImportCertificateRequest& WithCertificateIdentifier(const char* value) { SetCertificateIdentifier(value); return *this;}


    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline bool CertificatePemHasBeenSet() const { return m_certificatePemHasBeenSet; }

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::move(value); }

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline void SetCertificatePem(const char* value) { m_certificatePemHasBeenSet = true; m_certificatePem.assign(value); }

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline ImportCertificateRequest& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline ImportCertificateRequest& WithCertificatePem(Aws::String&& value) { SetCertificatePem(std::move(value)); return *this;}

    /**
     * <p>The contents of the .pem X.509 certificate file for the certificate.</p>
     */
    inline ImportCertificateRequest& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}


    /**
     * <p>The location of the imported Oracle Wallet certificate for use with SSL.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCertificateWallet() const{ return m_certificateWallet; }

    /**
     * <p>The location of the imported Oracle Wallet certificate for use with SSL.</p>
     */
    inline bool CertificateWalletHasBeenSet() const { return m_certificateWalletHasBeenSet; }

    /**
     * <p>The location of the imported Oracle Wallet certificate for use with SSL.</p>
     */
    inline void SetCertificateWallet(const Aws::Utils::ByteBuffer& value) { m_certificateWalletHasBeenSet = true; m_certificateWallet = value; }

    /**
     * <p>The location of the imported Oracle Wallet certificate for use with SSL.</p>
     */
    inline void SetCertificateWallet(Aws::Utils::ByteBuffer&& value) { m_certificateWalletHasBeenSet = true; m_certificateWallet = std::move(value); }

    /**
     * <p>The location of the imported Oracle Wallet certificate for use with SSL.</p>
     */
    inline ImportCertificateRequest& WithCertificateWallet(const Aws::Utils::ByteBuffer& value) { SetCertificateWallet(value); return *this;}

    /**
     * <p>The location of the imported Oracle Wallet certificate for use with SSL.</p>
     */
    inline ImportCertificateRequest& WithCertificateWallet(Aws::Utils::ByteBuffer&& value) { SetCertificateWallet(std::move(value)); return *this;}


    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline ImportCertificateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline ImportCertificateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline ImportCertificateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the certificate.</p>
     */
    inline ImportCertificateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_certificateIdentifier;
    bool m_certificateIdentifierHasBeenSet;

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet;

    Aws::Utils::ByteBuffer m_certificateWallet;
    bool m_certificateWalletHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
