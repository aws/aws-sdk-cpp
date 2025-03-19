/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ImportImageTask.h>
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
  class DescribeImportImageTasksResponse
  {
  public:
    AWS_EC2_API DescribeImportImageTasksResponse() = default;
    AWS_EC2_API DescribeImportImageTasksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeImportImageTasksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of zero or more import image tasks that are currently active or were
     * completed or canceled in the previous 7 days.</p>
     */
    inline const Aws::Vector<ImportImageTask>& GetImportImageTasks() const { return m_importImageTasks; }
    template<typename ImportImageTasksT = Aws::Vector<ImportImageTask>>
    void SetImportImageTasks(ImportImageTasksT&& value) { m_importImageTasksHasBeenSet = true; m_importImageTasks = std::forward<ImportImageTasksT>(value); }
    template<typename ImportImageTasksT = Aws::Vector<ImportImageTask>>
    DescribeImportImageTasksResponse& WithImportImageTasks(ImportImageTasksT&& value) { SetImportImageTasks(std::forward<ImportImageTasksT>(value)); return *this;}
    template<typename ImportImageTasksT = ImportImageTask>
    DescribeImportImageTasksResponse& AddImportImageTasks(ImportImageTasksT&& value) { m_importImageTasksHasBeenSet = true; m_importImageTasks.emplace_back(std::forward<ImportImageTasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeImportImageTasksResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeImportImageTasksResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImportImageTask> m_importImageTasks;
    bool m_importImageTasksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
