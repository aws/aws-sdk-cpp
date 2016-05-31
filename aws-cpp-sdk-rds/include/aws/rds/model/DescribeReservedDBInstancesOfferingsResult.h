/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/model/ReservedDBInstancesOffering.h>

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
  /**
   * <p> Contains the result of a successful invocation of the
   * <a>DescribeReservedDBInstancesOfferings</a> action. </p>
   */
  class AWS_RDS_API DescribeReservedDBInstancesOfferingsResult
  {
  public:
    DescribeReservedDBInstancesOfferingsResult();
    DescribeReservedDBInstancesOfferingsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeReservedDBInstancesOfferingsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReservedDBInstancesOfferingsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReservedDBInstancesOfferingsResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReservedDBInstancesOfferingsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>A list of reserved DB instance offerings.</p>
     */
    inline const Aws::Vector<ReservedDBInstancesOffering>& GetReservedDBInstancesOfferings() const{ return m_reservedDBInstancesOfferings; }

    /**
     * <p>A list of reserved DB instance offerings.</p>
     */
    inline void SetReservedDBInstancesOfferings(const Aws::Vector<ReservedDBInstancesOffering>& value) { m_reservedDBInstancesOfferings = value; }

    /**
     * <p>A list of reserved DB instance offerings.</p>
     */
    inline void SetReservedDBInstancesOfferings(Aws::Vector<ReservedDBInstancesOffering>&& value) { m_reservedDBInstancesOfferings = value; }

    /**
     * <p>A list of reserved DB instance offerings.</p>
     */
    inline DescribeReservedDBInstancesOfferingsResult& WithReservedDBInstancesOfferings(const Aws::Vector<ReservedDBInstancesOffering>& value) { SetReservedDBInstancesOfferings(value); return *this;}

    /**
     * <p>A list of reserved DB instance offerings.</p>
     */
    inline DescribeReservedDBInstancesOfferingsResult& WithReservedDBInstancesOfferings(Aws::Vector<ReservedDBInstancesOffering>&& value) { SetReservedDBInstancesOfferings(value); return *this;}

    /**
     * <p>A list of reserved DB instance offerings.</p>
     */
    inline DescribeReservedDBInstancesOfferingsResult& AddReservedDBInstancesOfferings(const ReservedDBInstancesOffering& value) { m_reservedDBInstancesOfferings.push_back(value); return *this; }

    /**
     * <p>A list of reserved DB instance offerings.</p>
     */
    inline DescribeReservedDBInstancesOfferingsResult& AddReservedDBInstancesOfferings(ReservedDBInstancesOffering&& value) { m_reservedDBInstancesOfferings.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeReservedDBInstancesOfferingsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeReservedDBInstancesOfferingsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_marker;
    Aws::Vector<ReservedDBInstancesOffering> m_reservedDBInstancesOfferings;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws