/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ExportImageTask.h>
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
  class DescribeExportImageTasksResponse
  {
  public:
    AWS_EC2_API DescribeExportImageTasksResponse();
    AWS_EC2_API DescribeExportImageTasksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeExportImageTasksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the export image tasks.</p>
     */
    inline const Aws::Vector<ExportImageTask>& GetExportImageTasks() const{ return m_exportImageTasks; }

    /**
     * <p>Information about the export image tasks.</p>
     */
    inline void SetExportImageTasks(const Aws::Vector<ExportImageTask>& value) { m_exportImageTasks = value; }

    /**
     * <p>Information about the export image tasks.</p>
     */
    inline void SetExportImageTasks(Aws::Vector<ExportImageTask>&& value) { m_exportImageTasks = std::move(value); }

    /**
     * <p>Information about the export image tasks.</p>
     */
    inline DescribeExportImageTasksResponse& WithExportImageTasks(const Aws::Vector<ExportImageTask>& value) { SetExportImageTasks(value); return *this;}

    /**
     * <p>Information about the export image tasks.</p>
     */
    inline DescribeExportImageTasksResponse& WithExportImageTasks(Aws::Vector<ExportImageTask>&& value) { SetExportImageTasks(std::move(value)); return *this;}

    /**
     * <p>Information about the export image tasks.</p>
     */
    inline DescribeExportImageTasksResponse& AddExportImageTasks(const ExportImageTask& value) { m_exportImageTasks.push_back(value); return *this; }

    /**
     * <p>Information about the export image tasks.</p>
     */
    inline DescribeExportImageTasksResponse& AddExportImageTasks(ExportImageTask&& value) { m_exportImageTasks.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to get the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeExportImageTasksResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeExportImageTasksResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeExportImageTasksResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeExportImageTasksResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeExportImageTasksResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ExportImageTask> m_exportImageTasks;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
