/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/SchemaConversionRequest.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class DescribeMetadataModelAssessmentsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelAssessmentsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelAssessmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeMetadataModelAssessmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the unique pagination token that makes it possible to display the
     * next page of results. If this parameter is specified, the response includes only
     * records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p> <p>If <code>Marker</code> is returned by a previous
     * response, there are more results available. The value of <code>Marker</code> is
     * a unique pagination token for each page. To retrieve the next page, make the
     * call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Specifies the unique pagination token that makes it possible to display the
     * next page of results. If this parameter is specified, the response includes only
     * records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p> <p>If <code>Marker</code> is returned by a previous
     * response, there are more results available. The value of <code>Marker</code> is
     * a unique pagination token for each page. To retrieve the next page, make the
     * call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>Specifies the unique pagination token that makes it possible to display the
     * next page of results. If this parameter is specified, the response includes only
     * records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p> <p>If <code>Marker</code> is returned by a previous
     * response, there are more results available. The value of <code>Marker</code> is
     * a unique pagination token for each page. To retrieve the next page, make the
     * call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>Specifies the unique pagination token that makes it possible to display the
     * next page of results. If this parameter is specified, the response includes only
     * records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p> <p>If <code>Marker</code> is returned by a previous
     * response, there are more results available. The value of <code>Marker</code> is
     * a unique pagination token for each page. To retrieve the next page, make the
     * call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>Specifies the unique pagination token that makes it possible to display the
     * next page of results. If this parameter is specified, the response includes only
     * records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p> <p>If <code>Marker</code> is returned by a previous
     * response, there are more results available. The value of <code>Marker</code> is
     * a unique pagination token for each page. To retrieve the next page, make the
     * call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline DescribeMetadataModelAssessmentsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Specifies the unique pagination token that makes it possible to display the
     * next page of results. If this parameter is specified, the response includes only
     * records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p> <p>If <code>Marker</code> is returned by a previous
     * response, there are more results available. The value of <code>Marker</code> is
     * a unique pagination token for each page. To retrieve the next page, make the
     * call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline DescribeMetadataModelAssessmentsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique pagination token that makes it possible to display the
     * next page of results. If this parameter is specified, the response includes only
     * records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p> <p>If <code>Marker</code> is returned by a previous
     * response, there are more results available. The value of <code>Marker</code> is
     * a unique pagination token for each page. To retrieve the next page, make the
     * call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline DescribeMetadataModelAssessmentsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A paginated list of metadata model assessments for the specified migration
     * project.</p>
     */
    inline const Aws::Vector<SchemaConversionRequest>& GetRequests() const{ return m_requests; }

    /**
     * <p>A paginated list of metadata model assessments for the specified migration
     * project.</p>
     */
    inline void SetRequests(const Aws::Vector<SchemaConversionRequest>& value) { m_requests = value; }

    /**
     * <p>A paginated list of metadata model assessments for the specified migration
     * project.</p>
     */
    inline void SetRequests(Aws::Vector<SchemaConversionRequest>&& value) { m_requests = std::move(value); }

    /**
     * <p>A paginated list of metadata model assessments for the specified migration
     * project.</p>
     */
    inline DescribeMetadataModelAssessmentsResult& WithRequests(const Aws::Vector<SchemaConversionRequest>& value) { SetRequests(value); return *this;}

    /**
     * <p>A paginated list of metadata model assessments for the specified migration
     * project.</p>
     */
    inline DescribeMetadataModelAssessmentsResult& WithRequests(Aws::Vector<SchemaConversionRequest>&& value) { SetRequests(std::move(value)); return *this;}

    /**
     * <p>A paginated list of metadata model assessments for the specified migration
     * project.</p>
     */
    inline DescribeMetadataModelAssessmentsResult& AddRequests(const SchemaConversionRequest& value) { m_requests.push_back(value); return *this; }

    /**
     * <p>A paginated list of metadata model assessments for the specified migration
     * project.</p>
     */
    inline DescribeMetadataModelAssessmentsResult& AddRequests(SchemaConversionRequest&& value) { m_requests.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeMetadataModelAssessmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeMetadataModelAssessmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeMetadataModelAssessmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<SchemaConversionRequest> m_requests;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
