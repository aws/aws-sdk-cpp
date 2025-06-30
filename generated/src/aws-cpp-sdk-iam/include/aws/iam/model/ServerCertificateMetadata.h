/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
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
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about a server certificate without its certificate body,
   * certificate chain, and private key.</p> <p> This data type is used as a response
   * element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_UploadServerCertificate.html">UploadServerCertificate</a>
   * and <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListServerCertificates.html">ListServerCertificates</a>
   * operations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ServerCertificateMetadata">AWS
   * API Reference</a></p>
   */
  class ServerCertificateMetadata
  {
  public:
    AWS_IAM_API ServerCertificateMetadata() = default;
    AWS_IAM_API ServerCertificateMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API ServerCertificateMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The path to the server certificate. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    ServerCertificateMetadata& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that identifies the server certificate.</p>
     */
    inline const Aws::String& GetServerCertificateName() const { return m_serverCertificateName; }
    inline bool ServerCertificateNameHasBeenSet() const { return m_serverCertificateNameHasBeenSet; }
    template<typename ServerCertificateNameT = Aws::String>
    void SetServerCertificateName(ServerCertificateNameT&& value) { m_serverCertificateNameHasBeenSet = true; m_serverCertificateName = std::forward<ServerCertificateNameT>(value); }
    template<typename ServerCertificateNameT = Aws::String>
    ServerCertificateMetadata& WithServerCertificateName(ServerCertificateNameT&& value) { SetServerCertificateName(std::forward<ServerCertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The stable and unique string identifying the server certificate. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetServerCertificateId() const { return m_serverCertificateId; }
    inline bool ServerCertificateIdHasBeenSet() const { return m_serverCertificateIdHasBeenSet; }
    template<typename ServerCertificateIdT = Aws::String>
    void SetServerCertificateId(ServerCertificateIdT&& value) { m_serverCertificateIdHasBeenSet = true; m_serverCertificateId = std::forward<ServerCertificateIdT>(value); }
    template<typename ServerCertificateIdT = Aws::String>
    ServerCertificateMetadata& WithServerCertificateId(ServerCertificateIdT&& value) { SetServerCertificateId(std::forward<ServerCertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) specifying the server certificate. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ServerCertificateMetadata& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the server certificate was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetUploadDate() const { return m_uploadDate; }
    inline bool UploadDateHasBeenSet() const { return m_uploadDateHasBeenSet; }
    template<typename UploadDateT = Aws::Utils::DateTime>
    void SetUploadDate(UploadDateT&& value) { m_uploadDateHasBeenSet = true; m_uploadDate = std::forward<UploadDateT>(value); }
    template<typename UploadDateT = Aws::Utils::DateTime>
    ServerCertificateMetadata& WithUploadDate(UploadDateT&& value) { SetUploadDate(std::forward<UploadDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the certificate is set to expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
    template<typename ExpirationT = Aws::Utils::DateTime>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::Utils::DateTime>
    ServerCertificateMetadata& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_serverCertificateName;
    bool m_serverCertificateNameHasBeenSet = false;

    Aws::String m_serverCertificateId;
    bool m_serverCertificateIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_uploadDate{};
    bool m_uploadDateHasBeenSet = false;

    Aws::Utils::DateTime m_expiration{};
    bool m_expirationHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
