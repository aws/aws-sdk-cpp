﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/iam/model/ReportFormatType.h>
#include <aws/core/utils/DateTime.h>
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
  /**
   * <p>Contains the response to a successful <a>GetCredentialReport</a> request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetCredentialReportResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API GetCredentialReportResult
  {
  public:
    GetCredentialReportResult();
    GetCredentialReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetCredentialReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Contains the credential report. The report is Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetContent() const{ return m_content; }

    /**
     * <p>Contains the credential report. The report is Base64-encoded.</p>
     */
    inline void SetContent(const Aws::Utils::ByteBuffer& value) { m_content = value; }

    /**
     * <p>Contains the credential report. The report is Base64-encoded.</p>
     */
    inline void SetContent(Aws::Utils::ByteBuffer&& value) { m_content = std::move(value); }

    /**
     * <p>Contains the credential report. The report is Base64-encoded.</p>
     */
    inline GetCredentialReportResult& WithContent(const Aws::Utils::ByteBuffer& value) { SetContent(value); return *this;}

    /**
     * <p>Contains the credential report. The report is Base64-encoded.</p>
     */
    inline GetCredentialReportResult& WithContent(Aws::Utils::ByteBuffer&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>The format (MIME type) of the credential report.</p>
     */
    inline const ReportFormatType& GetReportFormat() const{ return m_reportFormat; }

    /**
     * <p>The format (MIME type) of the credential report.</p>
     */
    inline void SetReportFormat(const ReportFormatType& value) { m_reportFormat = value; }

    /**
     * <p>The format (MIME type) of the credential report.</p>
     */
    inline void SetReportFormat(ReportFormatType&& value) { m_reportFormat = std::move(value); }

    /**
     * <p>The format (MIME type) of the credential report.</p>
     */
    inline GetCredentialReportResult& WithReportFormat(const ReportFormatType& value) { SetReportFormat(value); return *this;}

    /**
     * <p>The format (MIME type) of the credential report.</p>
     */
    inline GetCredentialReportResult& WithReportFormat(ReportFormatType&& value) { SetReportFormat(std::move(value)); return *this;}


    /**
     * <p> The date and time when the credential report was created, in <a
     * href="http://www.iso.org/iso/iso8601">ISO 8601 date-time format</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetGeneratedTime() const{ return m_generatedTime; }

    /**
     * <p> The date and time when the credential report was created, in <a
     * href="http://www.iso.org/iso/iso8601">ISO 8601 date-time format</a>.</p>
     */
    inline void SetGeneratedTime(const Aws::Utils::DateTime& value) { m_generatedTime = value; }

    /**
     * <p> The date and time when the credential report was created, in <a
     * href="http://www.iso.org/iso/iso8601">ISO 8601 date-time format</a>.</p>
     */
    inline void SetGeneratedTime(Aws::Utils::DateTime&& value) { m_generatedTime = std::move(value); }

    /**
     * <p> The date and time when the credential report was created, in <a
     * href="http://www.iso.org/iso/iso8601">ISO 8601 date-time format</a>.</p>
     */
    inline GetCredentialReportResult& WithGeneratedTime(const Aws::Utils::DateTime& value) { SetGeneratedTime(value); return *this;}

    /**
     * <p> The date and time when the credential report was created, in <a
     * href="http://www.iso.org/iso/iso8601">ISO 8601 date-time format</a>.</p>
     */
    inline GetCredentialReportResult& WithGeneratedTime(Aws::Utils::DateTime&& value) { SetGeneratedTime(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetCredentialReportResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetCredentialReportResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_content;

    ReportFormatType m_reportFormat;

    Aws::Utils::DateTime m_generatedTime;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
