/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  class GetMFADeviceResult
  {
  public:
    AWS_IAM_API GetMFADeviceResult() = default;
    AWS_IAM_API GetMFADeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetMFADeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The friendly name identifying the user.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    GetMFADeviceResult& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Serial number that uniquely identifies the MFA device. For this API, we only
     * accept FIDO security key <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">ARNs</a>.</p>
     */
    inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
    template<typename SerialNumberT = Aws::String>
    void SetSerialNumber(SerialNumberT&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::forward<SerialNumberT>(value); }
    template<typename SerialNumberT = Aws::String>
    GetMFADeviceResult& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that a specified user's MFA device was first enabled.</p>
     */
    inline const Aws::Utils::DateTime& GetEnableDate() const { return m_enableDate; }
    template<typename EnableDateT = Aws::Utils::DateTime>
    void SetEnableDate(EnableDateT&& value) { m_enableDateHasBeenSet = true; m_enableDate = std::forward<EnableDateT>(value); }
    template<typename EnableDateT = Aws::Utils::DateTime>
    GetMFADeviceResult& WithEnableDate(EnableDateT&& value) { SetEnableDate(std::forward<EnableDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certifications of a specified user's MFA device. We currently provide
     * FIPS-140-2, FIPS-140-3, and FIDO certification levels obtained from <a
     * href="https://fidoalliance.org/metadata/"> FIDO Alliance Metadata Service
     * (MDS)</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCertifications() const { return m_certifications; }
    template<typename CertificationsT = Aws::Map<Aws::String, Aws::String>>
    void SetCertifications(CertificationsT&& value) { m_certificationsHasBeenSet = true; m_certifications = std::forward<CertificationsT>(value); }
    template<typename CertificationsT = Aws::Map<Aws::String, Aws::String>>
    GetMFADeviceResult& WithCertifications(CertificationsT&& value) { SetCertifications(std::forward<CertificationsT>(value)); return *this;}
    template<typename CertificationsKeyT = Aws::String, typename CertificationsValueT = Aws::String>
    GetMFADeviceResult& AddCertifications(CertificationsKeyT&& key, CertificationsValueT&& value) {
      m_certificationsHasBeenSet = true; m_certifications.emplace(std::forward<CertificationsKeyT>(key), std::forward<CertificationsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetMFADeviceResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::Utils::DateTime m_enableDate{};
    bool m_enableDateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_certifications;
    bool m_certificationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
