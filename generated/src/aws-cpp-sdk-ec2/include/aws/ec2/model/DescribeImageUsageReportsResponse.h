/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ImageUsageReport.h>
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
namespace EC2
{
namespace Model
{
  class DescribeImageUsageReportsResponse
  {
  public:
    AWS_EC2_API DescribeImageUsageReportsResponse() = default;
    AWS_EC2_API DescribeImageUsageReportsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeImageUsageReportsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeImageUsageReportsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image usage reports.</p>
     */
    inline const Aws::Vector<ImageUsageReport>& GetImageUsageReports() const { return m_imageUsageReports; }
    template<typename ImageUsageReportsT = Aws::Vector<ImageUsageReport>>
    void SetImageUsageReports(ImageUsageReportsT&& value) { m_imageUsageReportsHasBeenSet = true; m_imageUsageReports = std::forward<ImageUsageReportsT>(value); }
    template<typename ImageUsageReportsT = Aws::Vector<ImageUsageReport>>
    DescribeImageUsageReportsResponse& WithImageUsageReports(ImageUsageReportsT&& value) { SetImageUsageReports(std::forward<ImageUsageReportsT>(value)); return *this;}
    template<typename ImageUsageReportsT = ImageUsageReport>
    DescribeImageUsageReportsResponse& AddImageUsageReports(ImageUsageReportsT&& value) { m_imageUsageReportsHasBeenSet = true; m_imageUsageReports.emplace_back(std::forward<ImageUsageReportsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeImageUsageReportsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ImageUsageReport> m_imageUsageReports;
    bool m_imageUsageReportsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
