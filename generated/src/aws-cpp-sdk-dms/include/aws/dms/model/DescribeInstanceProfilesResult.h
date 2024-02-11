/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/InstanceProfile.h>
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
  class DescribeInstanceProfilesResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeInstanceProfilesResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeInstanceProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeInstanceProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeInstanceProfilesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

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
    inline DescribeInstanceProfilesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

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
    inline DescribeInstanceProfilesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A description of instance profiles.</p>
     */
    inline const Aws::Vector<InstanceProfile>& GetInstanceProfiles() const{ return m_instanceProfiles; }

    /**
     * <p>A description of instance profiles.</p>
     */
    inline void SetInstanceProfiles(const Aws::Vector<InstanceProfile>& value) { m_instanceProfiles = value; }

    /**
     * <p>A description of instance profiles.</p>
     */
    inline void SetInstanceProfiles(Aws::Vector<InstanceProfile>&& value) { m_instanceProfiles = std::move(value); }

    /**
     * <p>A description of instance profiles.</p>
     */
    inline DescribeInstanceProfilesResult& WithInstanceProfiles(const Aws::Vector<InstanceProfile>& value) { SetInstanceProfiles(value); return *this;}

    /**
     * <p>A description of instance profiles.</p>
     */
    inline DescribeInstanceProfilesResult& WithInstanceProfiles(Aws::Vector<InstanceProfile>&& value) { SetInstanceProfiles(std::move(value)); return *this;}

    /**
     * <p>A description of instance profiles.</p>
     */
    inline DescribeInstanceProfilesResult& AddInstanceProfiles(const InstanceProfile& value) { m_instanceProfiles.push_back(value); return *this; }

    /**
     * <p>A description of instance profiles.</p>
     */
    inline DescribeInstanceProfilesResult& AddInstanceProfiles(InstanceProfile&& value) { m_instanceProfiles.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeInstanceProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeInstanceProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeInstanceProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<InstanceProfile> m_instanceProfiles;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
