/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace DocDB
{
namespace Model
{

  /**
   * <p>Returns the details of the DB instance’s server certificate.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/ca_cert_rotation.html">Updating
   * Your Amazon DocumentDB TLS Certificates</a> and <a
   * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/security.encryption.ssl.html">
   * Encrypting Data in Transit</a> in the <i>Amazon DocumentDB Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CertificateDetails">AWS
   * API Reference</a></p>
   */
  class CertificateDetails
  {
  public:
    AWS_DOCDB_API CertificateDetails();
    AWS_DOCDB_API CertificateDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API CertificateDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The CA identifier of the CA certificate used for the DB instance's server
     * certificate.</p>
     */
    inline const Aws::String& GetCAIdentifier() const{ return m_cAIdentifier; }

    /**
     * <p>The CA identifier of the CA certificate used for the DB instance's server
     * certificate.</p>
     */
    inline bool CAIdentifierHasBeenSet() const { return m_cAIdentifierHasBeenSet; }

    /**
     * <p>The CA identifier of the CA certificate used for the DB instance's server
     * certificate.</p>
     */
    inline void SetCAIdentifier(const Aws::String& value) { m_cAIdentifierHasBeenSet = true; m_cAIdentifier = value; }

    /**
     * <p>The CA identifier of the CA certificate used for the DB instance's server
     * certificate.</p>
     */
    inline void SetCAIdentifier(Aws::String&& value) { m_cAIdentifierHasBeenSet = true; m_cAIdentifier = std::move(value); }

    /**
     * <p>The CA identifier of the CA certificate used for the DB instance's server
     * certificate.</p>
     */
    inline void SetCAIdentifier(const char* value) { m_cAIdentifierHasBeenSet = true; m_cAIdentifier.assign(value); }

    /**
     * <p>The CA identifier of the CA certificate used for the DB instance's server
     * certificate.</p>
     */
    inline CertificateDetails& WithCAIdentifier(const Aws::String& value) { SetCAIdentifier(value); return *this;}

    /**
     * <p>The CA identifier of the CA certificate used for the DB instance's server
     * certificate.</p>
     */
    inline CertificateDetails& WithCAIdentifier(Aws::String&& value) { SetCAIdentifier(std::move(value)); return *this;}

    /**
     * <p>The CA identifier of the CA certificate used for the DB instance's server
     * certificate.</p>
     */
    inline CertificateDetails& WithCAIdentifier(const char* value) { SetCAIdentifier(value); return *this;}


    /**
     * <p>The expiration date of the DB instance’s server certificate.</p>
     */
    inline const Aws::Utils::DateTime& GetValidTill() const{ return m_validTill; }

    /**
     * <p>The expiration date of the DB instance’s server certificate.</p>
     */
    inline bool ValidTillHasBeenSet() const { return m_validTillHasBeenSet; }

    /**
     * <p>The expiration date of the DB instance’s server certificate.</p>
     */
    inline void SetValidTill(const Aws::Utils::DateTime& value) { m_validTillHasBeenSet = true; m_validTill = value; }

    /**
     * <p>The expiration date of the DB instance’s server certificate.</p>
     */
    inline void SetValidTill(Aws::Utils::DateTime&& value) { m_validTillHasBeenSet = true; m_validTill = std::move(value); }

    /**
     * <p>The expiration date of the DB instance’s server certificate.</p>
     */
    inline CertificateDetails& WithValidTill(const Aws::Utils::DateTime& value) { SetValidTill(value); return *this;}

    /**
     * <p>The expiration date of the DB instance’s server certificate.</p>
     */
    inline CertificateDetails& WithValidTill(Aws::Utils::DateTime&& value) { SetValidTill(std::move(value)); return *this;}

  private:

    Aws::String m_cAIdentifier;
    bool m_cAIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_validTill;
    bool m_validTillHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
