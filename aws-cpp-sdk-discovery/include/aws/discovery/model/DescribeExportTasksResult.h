/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/ExportInfo.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApplicationDiscoveryService
{
namespace Model
{
  class AWS_APPLICATIONDISCOVERYSERVICE_API DescribeExportTasksResult
  {
  public:
    DescribeExportTasksResult();
    DescribeExportTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeExportTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains one or more sets of export request details. When the status of a
     * request is <code>SUCCEEDED</code>, the response includes a URL for an Amazon S3
     * bucket where you can view the data in a CSV file.</p>
     */
    inline const Aws::Vector<ExportInfo>& GetExportsInfo() const{ return m_exportsInfo; }

    /**
     * <p>Contains one or more sets of export request details. When the status of a
     * request is <code>SUCCEEDED</code>, the response includes a URL for an Amazon S3
     * bucket where you can view the data in a CSV file.</p>
     */
    inline void SetExportsInfo(const Aws::Vector<ExportInfo>& value) { m_exportsInfo = value; }

    /**
     * <p>Contains one or more sets of export request details. When the status of a
     * request is <code>SUCCEEDED</code>, the response includes a URL for an Amazon S3
     * bucket where you can view the data in a CSV file.</p>
     */
    inline void SetExportsInfo(Aws::Vector<ExportInfo>&& value) { m_exportsInfo = std::move(value); }

    /**
     * <p>Contains one or more sets of export request details. When the status of a
     * request is <code>SUCCEEDED</code>, the response includes a URL for an Amazon S3
     * bucket where you can view the data in a CSV file.</p>
     */
    inline DescribeExportTasksResult& WithExportsInfo(const Aws::Vector<ExportInfo>& value) { SetExportsInfo(value); return *this;}

    /**
     * <p>Contains one or more sets of export request details. When the status of a
     * request is <code>SUCCEEDED</code>, the response includes a URL for an Amazon S3
     * bucket where you can view the data in a CSV file.</p>
     */
    inline DescribeExportTasksResult& WithExportsInfo(Aws::Vector<ExportInfo>&& value) { SetExportsInfo(std::move(value)); return *this;}

    /**
     * <p>Contains one or more sets of export request details. When the status of a
     * request is <code>SUCCEEDED</code>, the response includes a URL for an Amazon S3
     * bucket where you can view the data in a CSV file.</p>
     */
    inline DescribeExportTasksResult& AddExportsInfo(const ExportInfo& value) { m_exportsInfo.push_back(value); return *this; }

    /**
     * <p>Contains one or more sets of export request details. When the status of a
     * request is <code>SUCCEEDED</code>, the response includes a URL for an Amazon S3
     * bucket where you can view the data in a CSV file.</p>
     */
    inline DescribeExportTasksResult& AddExportsInfo(ExportInfo&& value) { m_exportsInfo.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeExportTasks</code> request. When the results of a
     * <code>DescribeExportTasks</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is null when
     * there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeExportTasks</code> request. When the results of a
     * <code>DescribeExportTasks</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is null when
     * there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeExportTasks</code> request. When the results of a
     * <code>DescribeExportTasks</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is null when
     * there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeExportTasks</code> request. When the results of a
     * <code>DescribeExportTasks</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is null when
     * there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeExportTasks</code> request. When the results of a
     * <code>DescribeExportTasks</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is null when
     * there are no more results to return.</p>
     */
    inline DescribeExportTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeExportTasks</code> request. When the results of a
     * <code>DescribeExportTasks</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is null when
     * there are no more results to return.</p>
     */
    inline DescribeExportTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeExportTasks</code> request. When the results of a
     * <code>DescribeExportTasks</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is null when
     * there are no more results to return.</p>
     */
    inline DescribeExportTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ExportInfo> m_exportsInfo;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
