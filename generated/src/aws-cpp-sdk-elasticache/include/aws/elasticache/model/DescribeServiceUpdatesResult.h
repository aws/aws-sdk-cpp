/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/ServiceUpdate.h>
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
namespace ElastiCache
{
namespace Model
{
  class DescribeServiceUpdatesResult
  {
  public:
    AWS_ELASTICACHE_API DescribeServiceUpdatesResult();
    AWS_ELASTICACHE_API DescribeServiceUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeServiceUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeServiceUpdatesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeServiceUpdatesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeServiceUpdatesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of service updates</p>
     */
    inline const Aws::Vector<ServiceUpdate>& GetServiceUpdates() const{ return m_serviceUpdates; }

    /**
     * <p>A list of service updates</p>
     */
    inline void SetServiceUpdates(const Aws::Vector<ServiceUpdate>& value) { m_serviceUpdates = value; }

    /**
     * <p>A list of service updates</p>
     */
    inline void SetServiceUpdates(Aws::Vector<ServiceUpdate>&& value) { m_serviceUpdates = std::move(value); }

    /**
     * <p>A list of service updates</p>
     */
    inline DescribeServiceUpdatesResult& WithServiceUpdates(const Aws::Vector<ServiceUpdate>& value) { SetServiceUpdates(value); return *this;}

    /**
     * <p>A list of service updates</p>
     */
    inline DescribeServiceUpdatesResult& WithServiceUpdates(Aws::Vector<ServiceUpdate>&& value) { SetServiceUpdates(std::move(value)); return *this;}

    /**
     * <p>A list of service updates</p>
     */
    inline DescribeServiceUpdatesResult& AddServiceUpdates(const ServiceUpdate& value) { m_serviceUpdates.push_back(value); return *this; }

    /**
     * <p>A list of service updates</p>
     */
    inline DescribeServiceUpdatesResult& AddServiceUpdates(ServiceUpdate&& value) { m_serviceUpdates.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeServiceUpdatesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeServiceUpdatesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<ServiceUpdate> m_serviceUpdates;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
