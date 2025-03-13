/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/CertificateStatus.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetCertificatesRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetCertificatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCertificates"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The status of the certificates for which to return information.</p> <p>For
     * example, specify <code>ISSUED</code> to return only certificates with an
     * <code>ISSUED</code> status.</p> <p>When omitted, the response includes all of
     * your certificates in the Amazon Web Services Region where the request is made,
     * regardless of their current status.</p>
     */
    inline const Aws::Vector<CertificateStatus>& GetCertificateStatuses() const { return m_certificateStatuses; }
    inline bool CertificateStatusesHasBeenSet() const { return m_certificateStatusesHasBeenSet; }
    template<typename CertificateStatusesT = Aws::Vector<CertificateStatus>>
    void SetCertificateStatuses(CertificateStatusesT&& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses = std::forward<CertificateStatusesT>(value); }
    template<typename CertificateStatusesT = Aws::Vector<CertificateStatus>>
    GetCertificatesRequest& WithCertificateStatuses(CertificateStatusesT&& value) { SetCertificateStatuses(std::forward<CertificateStatusesT>(value)); return *this;}
    inline GetCertificatesRequest& AddCertificateStatuses(CertificateStatus value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to include detailed information about the certificates in
     * the response.</p> <p>When omitted, the response includes only the certificate
     * names, Amazon Resource Names (ARNs), domain names, and tags.</p>
     */
    inline bool GetIncludeCertificateDetails() const { return m_includeCertificateDetails; }
    inline bool IncludeCertificateDetailsHasBeenSet() const { return m_includeCertificateDetailsHasBeenSet; }
    inline void SetIncludeCertificateDetails(bool value) { m_includeCertificateDetailsHasBeenSet = true; m_includeCertificateDetails = value; }
    inline GetCertificatesRequest& WithIncludeCertificateDetails(bool value) { SetIncludeCertificateDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the certificate for which to return information.</p> <p>When
     * omitted, the response includes all of your certificates in the Amazon Web
     * Services Region where the request is made.</p>
     */
    inline const Aws::String& GetCertificateName() const { return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    template<typename CertificateNameT = Aws::String>
    void SetCertificateName(CertificateNameT&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::forward<CertificateNameT>(value); }
    template<typename CertificateNameT = Aws::String>
    GetCertificatesRequest& WithCertificateName(CertificateNameT&& value) { SetCertificateName(std::forward<CertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetCertificates</code> request. If
     * your results are paginated, the response will return a next page token that you
     * can specify as the page token in a subsequent request.</p>
     */
    inline const Aws::String& GetPageToken() const { return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    template<typename PageTokenT = Aws::String>
    void SetPageToken(PageTokenT&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::forward<PageTokenT>(value); }
    template<typename PageTokenT = Aws::String>
    GetCertificatesRequest& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CertificateStatus> m_certificateStatuses;
    bool m_certificateStatusesHasBeenSet = false;

    bool m_includeCertificateDetails{false};
    bool m_includeCertificateDetailsHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
