/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/StatusType.h>
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
   * <p>Contains information about an X.509 signing certificate.</p> <p>This data
   * type is used as a response element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_UploadSigningCertificate.html">UploadSigningCertificate</a>
   * and <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListSigningCertificates.html">ListSigningCertificates</a>
   * operations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SigningCertificate">AWS
   * API Reference</a></p>
   */
  class SigningCertificate
  {
  public:
    AWS_IAM_API SigningCertificate() = default;
    AWS_IAM_API SigningCertificate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API SigningCertificate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the user the signing certificate is associated with.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    SigningCertificate& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the signing certificate.</p>
     */
    inline const Aws::String& GetCertificateId() const { return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    template<typename CertificateIdT = Aws::String>
    void SetCertificateId(CertificateIdT&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::forward<CertificateIdT>(value); }
    template<typename CertificateIdT = Aws::String>
    SigningCertificate& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the signing certificate.</p>
     */
    inline const Aws::String& GetCertificateBody() const { return m_certificateBody; }
    inline bool CertificateBodyHasBeenSet() const { return m_certificateBodyHasBeenSet; }
    template<typename CertificateBodyT = Aws::String>
    void SetCertificateBody(CertificateBodyT&& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = std::forward<CertificateBodyT>(value); }
    template<typename CertificateBodyT = Aws::String>
    SigningCertificate& WithCertificateBody(CertificateBodyT&& value) { SetCertificateBody(std::forward<CertificateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the signing certificate. <code>Active</code> means that the key
     * is valid for API calls, while <code>Inactive</code> means it is not.</p>
     */
    inline StatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline SigningCertificate& WithStatus(StatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the signing certificate was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetUploadDate() const { return m_uploadDate; }
    inline bool UploadDateHasBeenSet() const { return m_uploadDateHasBeenSet; }
    template<typename UploadDateT = Aws::Utils::DateTime>
    void SetUploadDate(UploadDateT&& value) { m_uploadDateHasBeenSet = true; m_uploadDate = std::forward<UploadDateT>(value); }
    template<typename UploadDateT = Aws::Utils::DateTime>
    SigningCertificate& WithUploadDate(UploadDateT&& value) { SetUploadDate(std::forward<UploadDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    Aws::String m_certificateBody;
    bool m_certificateBodyHasBeenSet = false;

    StatusType m_status{StatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_uploadDate{};
    bool m_uploadDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
