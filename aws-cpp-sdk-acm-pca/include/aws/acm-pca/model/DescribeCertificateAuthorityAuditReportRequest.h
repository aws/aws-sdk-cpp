﻿/*
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
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class AWS_ACMPCA_API DescribeCertificateAuthorityAuditReportRequest : public ACMPCARequest
  {
  public:
    DescribeCertificateAuthorityAuditReportRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCertificateAuthorityAuditReport"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the private CA. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the private CA. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the private CA. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the private CA. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the private CA. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline DescribeCertificateAuthorityAuditReportRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the private CA. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline DescribeCertificateAuthorityAuditReportRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the private CA. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline DescribeCertificateAuthorityAuditReportRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>The report ID returned by calling the
     * <a>CreateCertificateAuthorityAuditReport</a> operation.</p>
     */
    inline const Aws::String& GetAuditReportId() const{ return m_auditReportId; }

    /**
     * <p>The report ID returned by calling the
     * <a>CreateCertificateAuthorityAuditReport</a> operation.</p>
     */
    inline void SetAuditReportId(const Aws::String& value) { m_auditReportIdHasBeenSet = true; m_auditReportId = value; }

    /**
     * <p>The report ID returned by calling the
     * <a>CreateCertificateAuthorityAuditReport</a> operation.</p>
     */
    inline void SetAuditReportId(Aws::String&& value) { m_auditReportIdHasBeenSet = true; m_auditReportId = std::move(value); }

    /**
     * <p>The report ID returned by calling the
     * <a>CreateCertificateAuthorityAuditReport</a> operation.</p>
     */
    inline void SetAuditReportId(const char* value) { m_auditReportIdHasBeenSet = true; m_auditReportId.assign(value); }

    /**
     * <p>The report ID returned by calling the
     * <a>CreateCertificateAuthorityAuditReport</a> operation.</p>
     */
    inline DescribeCertificateAuthorityAuditReportRequest& WithAuditReportId(const Aws::String& value) { SetAuditReportId(value); return *this;}

    /**
     * <p>The report ID returned by calling the
     * <a>CreateCertificateAuthorityAuditReport</a> operation.</p>
     */
    inline DescribeCertificateAuthorityAuditReportRequest& WithAuditReportId(Aws::String&& value) { SetAuditReportId(std::move(value)); return *this;}

    /**
     * <p>The report ID returned by calling the
     * <a>CreateCertificateAuthorityAuditReport</a> operation.</p>
     */
    inline DescribeCertificateAuthorityAuditReportRequest& WithAuditReportId(const char* value) { SetAuditReportId(value); return *this;}

  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet;

    Aws::String m_auditReportId;
    bool m_auditReportIdHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
