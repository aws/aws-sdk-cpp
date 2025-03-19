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
    AWS_DOCDB_API CertificateDetails() = default;
    AWS_DOCDB_API CertificateDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API CertificateDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The CA identifier of the CA certificate used for the DB instance's server
     * certificate.</p>
     */
    inline const Aws::String& GetCAIdentifier() const { return m_cAIdentifier; }
    inline bool CAIdentifierHasBeenSet() const { return m_cAIdentifierHasBeenSet; }
    template<typename CAIdentifierT = Aws::String>
    void SetCAIdentifier(CAIdentifierT&& value) { m_cAIdentifierHasBeenSet = true; m_cAIdentifier = std::forward<CAIdentifierT>(value); }
    template<typename CAIdentifierT = Aws::String>
    CertificateDetails& WithCAIdentifier(CAIdentifierT&& value) { SetCAIdentifier(std::forward<CAIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration date of the DB instance’s server certificate.</p>
     */
    inline const Aws::Utils::DateTime& GetValidTill() const { return m_validTill; }
    inline bool ValidTillHasBeenSet() const { return m_validTillHasBeenSet; }
    template<typename ValidTillT = Aws::Utils::DateTime>
    void SetValidTill(ValidTillT&& value) { m_validTillHasBeenSet = true; m_validTill = std::forward<ValidTillT>(value); }
    template<typename ValidTillT = Aws::Utils::DateTime>
    CertificateDetails& WithValidTill(ValidTillT&& value) { SetValidTill(std::forward<ValidTillT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cAIdentifier;
    bool m_cAIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_validTill{};
    bool m_validTillHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
