/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb/model/ResponseMetadata.h>
#include <aws/docdb/model/OrderableDBInstanceOption.h>
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
namespace DocDB
{
namespace Model
{
  /**
   * <p>Represents the output of
   * <a>DescribeOrderableDBInstanceOptions</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/OrderableDBInstanceOptionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeOrderableDBInstanceOptionsResult
  {
  public:
    AWS_DOCDB_API DescribeOrderableDBInstanceOptionsResult();
    AWS_DOCDB_API DescribeOrderableDBInstanceOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API DescribeOrderableDBInstanceOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The options that are available for a particular orderable instance.</p>
     */
    inline const Aws::Vector<OrderableDBInstanceOption>& GetOrderableDBInstanceOptions() const{ return m_orderableDBInstanceOptions; }

    /**
     * <p>The options that are available for a particular orderable instance.</p>
     */
    inline void SetOrderableDBInstanceOptions(const Aws::Vector<OrderableDBInstanceOption>& value) { m_orderableDBInstanceOptions = value; }

    /**
     * <p>The options that are available for a particular orderable instance.</p>
     */
    inline void SetOrderableDBInstanceOptions(Aws::Vector<OrderableDBInstanceOption>&& value) { m_orderableDBInstanceOptions = std::move(value); }

    /**
     * <p>The options that are available for a particular orderable instance.</p>
     */
    inline DescribeOrderableDBInstanceOptionsResult& WithOrderableDBInstanceOptions(const Aws::Vector<OrderableDBInstanceOption>& value) { SetOrderableDBInstanceOptions(value); return *this;}

    /**
     * <p>The options that are available for a particular orderable instance.</p>
     */
    inline DescribeOrderableDBInstanceOptionsResult& WithOrderableDBInstanceOptions(Aws::Vector<OrderableDBInstanceOption>&& value) { SetOrderableDBInstanceOptions(std::move(value)); return *this;}

    /**
     * <p>The options that are available for a particular orderable instance.</p>
     */
    inline DescribeOrderableDBInstanceOptionsResult& AddOrderableDBInstanceOptions(const OrderableDBInstanceOption& value) { m_orderableDBInstanceOptions.push_back(value); return *this; }

    /**
     * <p>The options that are available for a particular orderable instance.</p>
     */
    inline DescribeOrderableDBInstanceOptionsResult& AddOrderableDBInstanceOptions(OrderableDBInstanceOption&& value) { m_orderableDBInstanceOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeOrderableDBInstanceOptionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeOrderableDBInstanceOptionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
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
} // namespace DocDB
} // namespace Aws
