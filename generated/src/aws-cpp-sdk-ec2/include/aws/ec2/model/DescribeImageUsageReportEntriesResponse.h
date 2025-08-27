/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ImageUsageReportEntry.h>
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
  class DescribeImageUsageReportEntriesResponse
  {
  public:
    AWS_EC2_API DescribeImageUsageReportEntriesResponse() = default;
    AWS_EC2_API DescribeImageUsageReportEntriesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeImageUsageReportEntriesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeImageUsageReportEntriesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the usage reports.</p>
     */
    inline const Aws::Vector<ImageUsageReportEntry>& GetImageUsageReportEntries() const { return m_imageUsageReportEntries; }
    template<typename ImageUsageReportEntriesT = Aws::Vector<ImageUsageReportEntry>>
    void SetImageUsageReportEntries(ImageUsageReportEntriesT&& value) { m_imageUsageReportEntriesHasBeenSet = true; m_imageUsageReportEntries = std::forward<ImageUsageReportEntriesT>(value); }
    template<typename ImageUsageReportEntriesT = Aws::Vector<ImageUsageReportEntry>>
    DescribeImageUsageReportEntriesResponse& WithImageUsageReportEntries(ImageUsageReportEntriesT&& value) { SetImageUsageReportEntries(std::forward<ImageUsageReportEntriesT>(value)); return *this;}
    template<typename ImageUsageReportEntriesT = ImageUsageReportEntry>
    DescribeImageUsageReportEntriesResponse& AddImageUsageReportEntries(ImageUsageReportEntriesT&& value) { m_imageUsageReportEntriesHasBeenSet = true; m_imageUsageReportEntries.emplace_back(std::forward<ImageUsageReportEntriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeImageUsageReportEntriesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ImageUsageReportEntry> m_imageUsageReportEntries;
    bool m_imageUsageReportEntriesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
