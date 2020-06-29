/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/CustomAvailabilityZone.h>
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
  class AWS_RDS_API DescribeCustomAvailabilityZonesResult
  {
  public:
    DescribeCustomAvailabilityZonesResult();
    DescribeCustomAvailabilityZonesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeCustomAvailabilityZonesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCustomAvailabilityZones</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCustomAvailabilityZones</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCustomAvailabilityZones</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCustomAvailabilityZones</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCustomAvailabilityZones</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeCustomAvailabilityZonesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCustomAvailabilityZones</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeCustomAvailabilityZonesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeCustomAvailabilityZones</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeCustomAvailabilityZonesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The list of <a>CustomAvailabilityZone</a> objects for the AWS account.</p>
     */
    inline const Aws::Vector<CustomAvailabilityZone>& GetCustomAvailabilityZones() const{ return m_customAvailabilityZones; }

    /**
     * <p>The list of <a>CustomAvailabilityZone</a> objects for the AWS account.</p>
     */
    inline void SetCustomAvailabilityZones(const Aws::Vector<CustomAvailabilityZone>& value) { m_customAvailabilityZones = value; }

    /**
     * <p>The list of <a>CustomAvailabilityZone</a> objects for the AWS account.</p>
     */
    inline void SetCustomAvailabilityZones(Aws::Vector<CustomAvailabilityZone>&& value) { m_customAvailabilityZones = std::move(value); }

    /**
     * <p>The list of <a>CustomAvailabilityZone</a> objects for the AWS account.</p>
     */
    inline DescribeCustomAvailabilityZonesResult& WithCustomAvailabilityZones(const Aws::Vector<CustomAvailabilityZone>& value) { SetCustomAvailabilityZones(value); return *this;}

    /**
     * <p>The list of <a>CustomAvailabilityZone</a> objects for the AWS account.</p>
     */
    inline DescribeCustomAvailabilityZonesResult& WithCustomAvailabilityZones(Aws::Vector<CustomAvailabilityZone>&& value) { SetCustomAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The list of <a>CustomAvailabilityZone</a> objects for the AWS account.</p>
     */
    inline DescribeCustomAvailabilityZonesResult& AddCustomAvailabilityZones(const CustomAvailabilityZone& value) { m_customAvailabilityZones.push_back(value); return *this; }

    /**
     * <p>The list of <a>CustomAvailabilityZone</a> objects for the AWS account.</p>
     */
    inline DescribeCustomAvailabilityZonesResult& AddCustomAvailabilityZones(CustomAvailabilityZone&& value) { m_customAvailabilityZones.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeCustomAvailabilityZonesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeCustomAvailabilityZonesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<CustomAvailabilityZone> m_customAvailabilityZones;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
