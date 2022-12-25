/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBProxyTarget.h>
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
  class DescribeDBProxyTargetsResult
  {
  public:
    AWS_RDS_API DescribeDBProxyTargetsResult();
    AWS_RDS_API DescribeDBProxyTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBProxyTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An arbitrary number of <code>DBProxyTarget</code> objects, containing details
     * of the corresponding targets.</p>
     */
    inline const Aws::Vector<DBProxyTarget>& GetTargets() const{ return m_targets; }

    /**
     * <p>An arbitrary number of <code>DBProxyTarget</code> objects, containing details
     * of the corresponding targets.</p>
     */
    inline void SetTargets(const Aws::Vector<DBProxyTarget>& value) { m_targets = value; }

    /**
     * <p>An arbitrary number of <code>DBProxyTarget</code> objects, containing details
     * of the corresponding targets.</p>
     */
    inline void SetTargets(Aws::Vector<DBProxyTarget>&& value) { m_targets = std::move(value); }

    /**
     * <p>An arbitrary number of <code>DBProxyTarget</code> objects, containing details
     * of the corresponding targets.</p>
     */
    inline DescribeDBProxyTargetsResult& WithTargets(const Aws::Vector<DBProxyTarget>& value) { SetTargets(value); return *this;}

    /**
     * <p>An arbitrary number of <code>DBProxyTarget</code> objects, containing details
     * of the corresponding targets.</p>
     */
    inline DescribeDBProxyTargetsResult& WithTargets(Aws::Vector<DBProxyTarget>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>An arbitrary number of <code>DBProxyTarget</code> objects, containing details
     * of the corresponding targets.</p>
     */
    inline DescribeDBProxyTargetsResult& AddTargets(const DBProxyTarget& value) { m_targets.push_back(value); return *this; }

    /**
     * <p>An arbitrary number of <code>DBProxyTarget</code> objects, containing details
     * of the corresponding targets.</p>
     */
    inline DescribeDBProxyTargetsResult& AddTargets(DBProxyTarget&& value) { m_targets.push_back(std::move(value)); return *this; }


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
    inline DescribeDBProxyTargetsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBProxyTargetsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBProxyTargetsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBProxyTargetsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBProxyTargetsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DBProxyTarget> m_targets;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
