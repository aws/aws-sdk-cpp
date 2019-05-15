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
#include <aws/rds/model/ReservedDBInstance.h>
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
  /**
   * <p> Contains the result of a successful invocation of the
   * <code>DescribeReservedDBInstances</code> action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ReservedDBInstanceMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DescribeReservedDBInstancesResult
  {
  public:
    DescribeReservedDBInstancesResult();
    DescribeReservedDBInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeReservedDBInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

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
    inline DescribeReservedDBInstancesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReservedDBInstancesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReservedDBInstancesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of reserved DB instances.</p>
     */
    inline const Aws::Vector<ReservedDBInstance>& GetReservedDBInstances() const{ return m_reservedDBInstances; }

    /**
     * <p>A list of reserved DB instances.</p>
     */
    inline void SetReservedDBInstances(const Aws::Vector<ReservedDBInstance>& value) { m_reservedDBInstances = value; }

    /**
     * <p>A list of reserved DB instances.</p>
     */
    inline void SetReservedDBInstances(Aws::Vector<ReservedDBInstance>&& value) { m_reservedDBInstances = std::move(value); }

    /**
     * <p>A list of reserved DB instances.</p>
     */
    inline DescribeReservedDBInstancesResult& WithReservedDBInstances(const Aws::Vector<ReservedDBInstance>& value) { SetReservedDBInstances(value); return *this;}

    /**
     * <p>A list of reserved DB instances.</p>
     */
    inline DescribeReservedDBInstancesResult& WithReservedDBInstances(Aws::Vector<ReservedDBInstance>&& value) { SetReservedDBInstances(std::move(value)); return *this;}

    /**
     * <p>A list of reserved DB instances.</p>
     */
    inline DescribeReservedDBInstancesResult& AddReservedDBInstances(const ReservedDBInstance& value) { m_reservedDBInstances.push_back(value); return *this; }

    /**
     * <p>A list of reserved DB instances.</p>
     */
    inline DescribeReservedDBInstancesResult& AddReservedDBInstances(ReservedDBInstance&& value) { m_reservedDBInstances.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeReservedDBInstancesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeReservedDBInstancesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<ReservedDBInstance> m_reservedDBInstances;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
