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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBClusterEndpoint.h>
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
namespace RDS
{
namespace Model
{
  class AWS_RDS_API DescribeDBClusterEndpointsResult
  {
  public:
    DescribeDBClusterEndpointsResult();
    DescribeDBClusterEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeDBClusterEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClusterEndpointsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClusterEndpointsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBClusterEndpointsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Contains the details of the endpoints associated with the cluster and
     * matching any filter conditions.</p>
     */
    inline const Aws::Vector<DBClusterEndpoint>& GetDBClusterEndpoints() const{ return m_dBClusterEndpoints; }

    /**
     * <p>Contains the details of the endpoints associated with the cluster and
     * matching any filter conditions.</p>
     */
    inline void SetDBClusterEndpoints(const Aws::Vector<DBClusterEndpoint>& value) { m_dBClusterEndpoints = value; }

    /**
     * <p>Contains the details of the endpoints associated with the cluster and
     * matching any filter conditions.</p>
     */
    inline void SetDBClusterEndpoints(Aws::Vector<DBClusterEndpoint>&& value) { m_dBClusterEndpoints = std::move(value); }

    /**
     * <p>Contains the details of the endpoints associated with the cluster and
     * matching any filter conditions.</p>
     */
    inline DescribeDBClusterEndpointsResult& WithDBClusterEndpoints(const Aws::Vector<DBClusterEndpoint>& value) { SetDBClusterEndpoints(value); return *this;}

    /**
     * <p>Contains the details of the endpoints associated with the cluster and
     * matching any filter conditions.</p>
     */
    inline DescribeDBClusterEndpointsResult& WithDBClusterEndpoints(Aws::Vector<DBClusterEndpoint>&& value) { SetDBClusterEndpoints(std::move(value)); return *this;}

    /**
     * <p>Contains the details of the endpoints associated with the cluster and
     * matching any filter conditions.</p>
     */
    inline DescribeDBClusterEndpointsResult& AddDBClusterEndpoints(const DBClusterEndpoint& value) { m_dBClusterEndpoints.push_back(value); return *this; }

    /**
     * <p>Contains the details of the endpoints associated with the cluster and
     * matching any filter conditions.</p>
     */
    inline DescribeDBClusterEndpointsResult& AddDBClusterEndpoints(DBClusterEndpoint&& value) { m_dBClusterEndpoints.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBClusterEndpointsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBClusterEndpointsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<DBClusterEndpoint> m_dBClusterEndpoints;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
