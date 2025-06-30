/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GenerateOrganizationsAccessReportResult
  {
  public:
    AWS_IAM_API GenerateOrganizationsAccessReportResult() = default;
    AWS_IAM_API GenerateOrganizationsAccessReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GenerateOrganizationsAccessReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The job identifier that you can use in the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetOrganizationsAccessReport.html">GetOrganizationsAccessReport</a>
     * operation.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GenerateOrganizationsAccessReportResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GenerateOrganizationsAccessReportResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
