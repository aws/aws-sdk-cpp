/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ImportSnapshotTask.h>
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
  class DescribeImportSnapshotTasksResponse
  {
  public:
    AWS_EC2_API DescribeImportSnapshotTasksResponse() = default;
    AWS_EC2_API DescribeImportSnapshotTasksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeImportSnapshotTasksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of zero or more import snapshot tasks that are currently active or
     * were completed or canceled in the previous 7 days.</p>
     */
    inline const Aws::Vector<ImportSnapshotTask>& GetImportSnapshotTasks() const { return m_importSnapshotTasks; }
    template<typename ImportSnapshotTasksT = Aws::Vector<ImportSnapshotTask>>
    void SetImportSnapshotTasks(ImportSnapshotTasksT&& value) { m_importSnapshotTasksHasBeenSet = true; m_importSnapshotTasks = std::forward<ImportSnapshotTasksT>(value); }
    template<typename ImportSnapshotTasksT = Aws::Vector<ImportSnapshotTask>>
    DescribeImportSnapshotTasksResponse& WithImportSnapshotTasks(ImportSnapshotTasksT&& value) { SetImportSnapshotTasks(std::forward<ImportSnapshotTasksT>(value)); return *this;}
    template<typename ImportSnapshotTasksT = ImportSnapshotTask>
    DescribeImportSnapshotTasksResponse& AddImportSnapshotTasks(ImportSnapshotTasksT&& value) { m_importSnapshotTasksHasBeenSet = true; m_importSnapshotTasks.emplace_back(std::forward<ImportSnapshotTasksT>(value)); return *this; }
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
    DescribeImportSnapshotTasksResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeImportSnapshotTasksResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImportSnapshotTask> m_importSnapshotTasks;
    bool m_importSnapshotTasksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
