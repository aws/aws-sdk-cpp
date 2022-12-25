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
    AWS_LIGHTSAIL_API GetCertificatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCertificates"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The status of the certificates for which to return information.</p> <p>For
     * example, specify <code>ISSUED</code> to return only certificates with an
     * <code>ISSUED</code> status.</p> <p>When omitted, the response includes all of
     * your certificates in the Amazon Web Services Region where the request is made,
     * regardless of their current status.</p>
     */
    inline const Aws::Vector<CertificateStatus>& GetCertificateStatuses() const{ return m_certificateStatuses; }

    /**
     * <p>The status of the certificates for which to return information.</p> <p>For
     * example, specify <code>ISSUED</code> to return only certificates with an
     * <code>ISSUED</code> status.</p> <p>When omitted, the response includes all of
     * your certificates in the Amazon Web Services Region where the request is made,
     * regardless of their current status.</p>
     */
    inline bool CertificateStatusesHasBeenSet() const { return m_certificateStatusesHasBeenSet; }

    /**
     * <p>The status of the certificates for which to return information.</p> <p>For
     * example, specify <code>ISSUED</code> to return only certificates with an
     * <code>ISSUED</code> status.</p> <p>When omitted, the response includes all of
     * your certificates in the Amazon Web Services Region where the request is made,
     * regardless of their current status.</p>
     */
    inline void SetCertificateStatuses(const Aws::Vector<CertificateStatus>& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses = value; }

    /**
     * <p>The status of the certificates for which to return information.</p> <p>For
     * example, specify <code>ISSUED</code> to return only certificates with an
     * <code>ISSUED</code> status.</p> <p>When omitted, the response includes all of
     * your certificates in the Amazon Web Services Region where the request is made,
     * regardless of their current status.</p>
     */
    inline void SetCertificateStatuses(Aws::Vector<CertificateStatus>&& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses = std::move(value); }

    /**
     * <p>The status of the certificates for which to return information.</p> <p>For
     * example, specify <code>ISSUED</code> to return only certificates with an
     * <code>ISSUED</code> status.</p> <p>When omitted, the response includes all of
     * your certificates in the Amazon Web Services Region where the request is made,
     * regardless of their current status.</p>
     */
    inline GetCertificatesRequest& WithCertificateStatuses(const Aws::Vector<CertificateStatus>& value) { SetCertificateStatuses(value); return *this;}

    /**
     * <p>The status of the certificates for which to return information.</p> <p>For
     * example, specify <code>ISSUED</code> to return only certificates with an
     * <code>ISSUED</code> status.</p> <p>When omitted, the response includes all of
     * your certificates in the Amazon Web Services Region where the request is made,
     * regardless of their current status.</p>
     */
    inline GetCertificatesRequest& WithCertificateStatuses(Aws::Vector<CertificateStatus>&& value) { SetCertificateStatuses(std::move(value)); return *this;}

    /**
     * <p>The status of the certificates for which to return information.</p> <p>For
     * example, specify <code>ISSUED</code> to return only certificates with an
     * <code>ISSUED</code> status.</p> <p>When omitted, the response includes all of
     * your certificates in the Amazon Web Services Region where the request is made,
     * regardless of their current status.</p>
     */
    inline GetCertificatesRequest& AddCertificateStatuses(const CertificateStatus& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses.push_back(value); return *this; }

    /**
     * <p>The status of the certificates for which to return information.</p> <p>For
     * example, specify <code>ISSUED</code> to return only certificates with an
     * <code>ISSUED</code> status.</p> <p>When omitted, the response includes all of
     * your certificates in the Amazon Web Services Region where the request is made,
     * regardless of their current status.</p>
     */
    inline GetCertificatesRequest& AddCertificateStatuses(CertificateStatus&& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether to include detailed information about the certificates in
     * the response.</p> <p>When omitted, the response includes only the certificate
     * names, Amazon Resource Names (ARNs), domain names, and tags.</p>
     */
    inline bool GetIncludeCertificateDetails() const{ return m_includeCertificateDetails; }

    /**
     * <p>Indicates whether to include detailed information about the certificates in
     * the response.</p> <p>When omitted, the response includes only the certificate
     * names, Amazon Resource Names (ARNs), domain names, and tags.</p>
     */
    inline bool IncludeCertificateDetailsHasBeenSet() const { return m_includeCertificateDetailsHasBeenSet; }

    /**
     * <p>Indicates whether to include detailed information about the certificates in
     * the response.</p> <p>When omitted, the response includes only the certificate
     * names, Amazon Resource Names (ARNs), domain names, and tags.</p>
     */
    inline void SetIncludeCertificateDetails(bool value) { m_includeCertificateDetailsHasBeenSet = true; m_includeCertificateDetails = value; }

    /**
     * <p>Indicates whether to include detailed information about the certificates in
     * the response.</p> <p>When omitted, the response includes only the certificate
     * names, Amazon Resource Names (ARNs), domain names, and tags.</p>
     */
    inline GetCertificatesRequest& WithIncludeCertificateDetails(bool value) { SetIncludeCertificateDetails(value); return *this;}


    /**
     * <p>The name for the certificate for which to return information.</p> <p>When
     * omitted, the response includes all of your certificates in the Amazon Web
     * Services Region where the request is made.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The name for the certificate for which to return information.</p> <p>When
     * omitted, the response includes all of your certificates in the Amazon Web
     * Services Region where the request is made.</p>
     */
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }

    /**
     * <p>The name for the certificate for which to return information.</p> <p>When
     * omitted, the response includes all of your certificates in the Amazon Web
     * Services Region where the request is made.</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The name for the certificate for which to return information.</p> <p>When
     * omitted, the response includes all of your certificates in the Amazon Web
     * Services Region where the request is made.</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The name for the certificate for which to return information.</p> <p>When
     * omitted, the response includes all of your certificates in the Amazon Web
     * Services Region where the request is made.</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The name for the certificate for which to return information.</p> <p>When
     * omitted, the response includes all of your certificates in the Amazon Web
     * Services Region where the request is made.</p>
     */
    inline GetCertificatesRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The name for the certificate for which to return information.</p> <p>When
     * omitted, the response includes all of your certificates in the Amazon Web
     * Services Region where the request is made.</p>
     */
    inline GetCertificatesRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The name for the certificate for which to return information.</p> <p>When
     * omitted, the response includes all of your certificates in the Amazon Web
     * Services Region where the request is made.</p>
     */
    inline GetCertificatesRequest& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}

  private:

    Aws::Vector<CertificateStatus> m_certificateStatuses;
    bool m_certificateStatusesHasBeenSet = false;

    bool m_includeCertificateDetails;
    bool m_includeCertificateDetailsHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
