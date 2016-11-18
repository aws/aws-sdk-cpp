﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/iam/model/ReportFormatType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iam/model/ResponseMetadata.h>

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
   * </p>
   */
  class AWS_IAM_API GetCredentialReportResult
  {
  public:
    GetCredentialReportResult();
    GetCredentialReportResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetCredentialReportResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
    inline void SetContent(Aws::Utils::ByteBuffer&& value) { m_content = value; }

    /**
     * <p>Contains the credential report. The report is Base64-encoded.</p>
     */
    inline GetCredentialReportResult& WithContent(const Aws::Utils::ByteBuffer& value) { SetContent(value); return *this;}

    /**
     * <p>Contains the credential report. The report is Base64-encoded.</p>
     */
    inline GetCredentialReportResult& WithContent(Aws::Utils::ByteBuffer&& value) { SetContent(value); return *this;}

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
    inline void SetReportFormat(ReportFormatType&& value) { m_reportFormat = value; }

    /**
     * <p>The format (MIME type) of the credential report.</p>
     */
    inline GetCredentialReportResult& WithReportFormat(const ReportFormatType& value) { SetReportFormat(value); return *this;}

    /**
     * <p>The format (MIME type) of the credential report.</p>
     */
    inline GetCredentialReportResult& WithReportFormat(ReportFormatType&& value) { SetReportFormat(value); return *this;}

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
    inline void SetGeneratedTime(Aws::Utils::DateTime&& value) { m_generatedTime = value; }

    /**
     * <p> The date and time when the credential report was created, in <a
     * href="http://www.iso.org/iso/iso8601">ISO 8601 date-time format</a>.</p>
     */
    inline GetCredentialReportResult& WithGeneratedTime(const Aws::Utils::DateTime& value) { SetGeneratedTime(value); return *this;}

    /**
     * <p> The date and time when the credential report was created, in <a
     * href="http://www.iso.org/iso/iso8601">ISO 8601 date-time format</a>.</p>
     */
    inline GetCredentialReportResult& WithGeneratedTime(Aws::Utils::DateTime&& value) { SetGeneratedTime(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetCredentialReportResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetCredentialReportResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Utils::ByteBuffer m_content;
    ReportFormatType m_reportFormat;
    Aws::Utils::DateTime m_generatedTime;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws