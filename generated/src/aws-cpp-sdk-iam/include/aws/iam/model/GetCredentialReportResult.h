/**
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
   * <p>Contains the response to a successful <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetCredentialReport.html">GetCredentialReport</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetCredentialReportResponse">AWS
   * API Reference</a></p>
   */
  class GetCredentialReportResult
  {
  public:
    AWS_IAM_API GetCredentialReportResult() = default;
    AWS_IAM_API GetCredentialReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetCredentialReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Contains the credential report. The report is Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetContent() const { return m_content; }
    template<typename ContentT = Aws::Utils::ByteBuffer>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Utils::ByteBuffer>
    GetCredentialReportResult& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format (MIME type) of the credential report.</p>
     */
    inline ReportFormatType GetReportFormat() const { return m_reportFormat; }
    inline void SetReportFormat(ReportFormatType value) { m_reportFormatHasBeenSet = true; m_reportFormat = value; }
    inline GetCredentialReportResult& WithReportFormat(ReportFormatType value) { SetReportFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time when the credential report was created, in <a
     * href="http://www.iso.org/iso/iso8601">ISO 8601 date-time format</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetGeneratedTime() const { return m_generatedTime; }
    template<typename GeneratedTimeT = Aws::Utils::DateTime>
    void SetGeneratedTime(GeneratedTimeT&& value) { m_generatedTimeHasBeenSet = true; m_generatedTime = std::forward<GeneratedTimeT>(value); }
    template<typename GeneratedTimeT = Aws::Utils::DateTime>
    GetCredentialReportResult& WithGeneratedTime(GeneratedTimeT&& value) { SetGeneratedTime(std::forward<GeneratedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetCredentialReportResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_content{};
    bool m_contentHasBeenSet = false;

    ReportFormatType m_reportFormat{ReportFormatType::NOT_SET};
    bool m_reportFormatHasBeenSet = false;

    Aws::Utils::DateTime m_generatedTime{};
    bool m_generatedTimeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
