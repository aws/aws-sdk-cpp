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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune/model/ResponseMetadata.h>
#include <aws/neptune/model/OrderableDBInstanceOption.h>
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
namespace Neptune
{
namespace Model
{
  class AWS_NEPTUNE_API DescribeOrderableDBInstanceOptionsResult
  {
  public:
    DescribeOrderableDBInstanceOptionsResult();
    DescribeOrderableDBInstanceOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeOrderableDBInstanceOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An <a>OrderableDBInstanceOption</a> structure containing information about
     * orderable options for the DB instance.</p>
     */
    inline const Aws::Vector<OrderableDBInstanceOption>& GetOrderableDBInstanceOptions() const{ return m_orderableDBInstanceOptions; }

    /**
     * <p>An <a>OrderableDBInstanceOption</a> structure containing information about
     * orderable options for the DB instance.</p>
     */
    inline void SetOrderableDBInstanceOptions(const Aws::Vector<OrderableDBInstanceOption>& value) { m_orderableDBInstanceOptions = value; }

    /**
     * <p>An <a>OrderableDBInstanceOption</a> structure containing information about
     * orderable options for the DB instance.</p>
     */
    inline void SetOrderableDBInstanceOptions(Aws::Vector<OrderableDBInstanceOption>&& value) { m_orderableDBInstanceOptions = std::move(value); }

    /**
     * <p>An <a>OrderableDBInstanceOption</a> structure containing information about
     * orderable options for the DB instance.</p>
     */
    inline DescribeOrderableDBInstanceOptionsResult& WithOrderableDBInstanceOptions(const Aws::Vector<OrderableDBInstanceOption>& value) { SetOrderableDBInstanceOptions(value); return *this;}

    /**
     * <p>An <a>OrderableDBInstanceOption</a> structure containing information about
     * orderable options for the DB instance.</p>
     */
    inline DescribeOrderableDBInstanceOptionsResult& WithOrderableDBInstanceOptions(Aws::Vector<OrderableDBInstanceOption>&& value) { SetOrderableDBInstanceOptions(std::move(value)); return *this;}

    /**
     * <p>An <a>OrderableDBInstanceOption</a> structure containing information about
     * orderable options for the DB instance.</p>
     */
    inline DescribeOrderableDBInstanceOptionsResult& AddOrderableDBInstanceOptions(const OrderableDBInstanceOption& value) { m_orderableDBInstanceOptions.push_back(value); return *this; }

    /**
     * <p>An <a>OrderableDBInstanceOption</a> structure containing information about
     * orderable options for the DB instance.</p>
     */
    inline DescribeOrderableDBInstanceOptionsResult& AddOrderableDBInstanceOptions(OrderableDBInstanceOption&& value) { m_orderableDBInstanceOptions.push_back(std::move(value)); return *this; }


    /**
     * <p> An optional pagination token provided by a previous
     * OrderableDBInstanceOptions request. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous
     * OrderableDBInstanceOptions request. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous
     * OrderableDBInstanceOptions request. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * OrderableDBInstanceOptions request. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous
     * OrderableDBInstanceOptions request. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline DescribeOrderableDBInstanceOptionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * OrderableDBInstanceOptions request. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline DescribeOrderableDBInstanceOptionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous
     * OrderableDBInstanceOptions request. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline DescribeOrderableDBInstanceOptionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeOrderableDBInstanceOptionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeOrderableDBInstanceOptionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<OrderableDBInstanceOption> m_orderableDBInstanceOptions;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
