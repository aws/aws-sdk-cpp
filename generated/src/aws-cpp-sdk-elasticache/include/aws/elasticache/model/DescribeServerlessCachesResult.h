/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/ServerlessCache.h>
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
  class DescribeServerlessCachesResult
  {
  public:
    AWS_ELASTICACHE_API DescribeServerlessCachesResult();
    AWS_ELASTICACHE_API DescribeServerlessCachesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeServerlessCachesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * MaxResults.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * MaxResults.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * MaxResults.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * MaxResults.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * MaxResults.</p>
     */
    inline DescribeServerlessCachesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * MaxResults.</p>
     */
    inline DescribeServerlessCachesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * MaxResults.</p>
     */
    inline DescribeServerlessCachesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The serverless caches associated with a given description request.</p>
     */
    inline const Aws::Vector<ServerlessCache>& GetServerlessCaches() const{ return m_serverlessCaches; }

    /**
     * <p>The serverless caches associated with a given description request.</p>
     */
    inline void SetServerlessCaches(const Aws::Vector<ServerlessCache>& value) { m_serverlessCaches = value; }

    /**
     * <p>The serverless caches associated with a given description request.</p>
     */
    inline void SetServerlessCaches(Aws::Vector<ServerlessCache>&& value) { m_serverlessCaches = std::move(value); }

    /**
     * <p>The serverless caches associated with a given description request.</p>
     */
    inline DescribeServerlessCachesResult& WithServerlessCaches(const Aws::Vector<ServerlessCache>& value) { SetServerlessCaches(value); return *this;}

    /**
     * <p>The serverless caches associated with a given description request.</p>
     */
    inline DescribeServerlessCachesResult& WithServerlessCaches(Aws::Vector<ServerlessCache>&& value) { SetServerlessCaches(std::move(value)); return *this;}

    /**
     * <p>The serverless caches associated with a given description request.</p>
     */
    inline DescribeServerlessCachesResult& AddServerlessCaches(const ServerlessCache& value) { m_serverlessCaches.push_back(value); return *this; }

    /**
     * <p>The serverless caches associated with a given description request.</p>
     */
    inline DescribeServerlessCachesResult& AddServerlessCaches(ServerlessCache&& value) { m_serverlessCaches.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeServerlessCachesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeServerlessCachesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ServerlessCache> m_serverlessCaches;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
