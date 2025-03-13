/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ExportTask.h>
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
  class DescribeExportTasksResponse
  {
  public:
    AWS_EC2_API DescribeExportTasksResponse() = default;
    AWS_EC2_API DescribeExportTasksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeExportTasksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the export tasks.</p>
     */
    inline const Aws::Vector<ExportTask>& GetExportTasks() const { return m_exportTasks; }
    template<typename ExportTasksT = Aws::Vector<ExportTask>>
    void SetExportTasks(ExportTasksT&& value) { m_exportTasksHasBeenSet = true; m_exportTasks = std::forward<ExportTasksT>(value); }
    template<typename ExportTasksT = Aws::Vector<ExportTask>>
    DescribeExportTasksResponse& WithExportTasks(ExportTasksT&& value) { SetExportTasks(std::forward<ExportTasksT>(value)); return *this;}
    template<typename ExportTasksT = ExportTask>
    DescribeExportTasksResponse& AddExportTasks(ExportTasksT&& value) { m_exportTasksHasBeenSet = true; m_exportTasks.emplace_back(std::forward<ExportTasksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeExportTasksResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExportTask> m_exportTasks;
    bool m_exportTasksHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
