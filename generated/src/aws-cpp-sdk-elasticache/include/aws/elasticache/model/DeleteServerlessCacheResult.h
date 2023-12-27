/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/ServerlessCache.h>
#include <aws/elasticache/model/ResponseMetadata.h>
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
  class DeleteServerlessCacheResult
  {
  public:
    AWS_ELASTICACHE_API DeleteServerlessCacheResult();
    AWS_ELASTICACHE_API DeleteServerlessCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DeleteServerlessCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Provides the details of the specified serverless cache that is about to be
     * deleted.</p>
     */
    inline const ServerlessCache& GetServerlessCache() const{ return m_serverlessCache; }

    /**
     * <p>Provides the details of the specified serverless cache that is about to be
     * deleted.</p>
     */
    inline void SetServerlessCache(const ServerlessCache& value) { m_serverlessCache = value; }

    /**
     * <p>Provides the details of the specified serverless cache that is about to be
     * deleted.</p>
     */
    inline void SetServerlessCache(ServerlessCache&& value) { m_serverlessCache = std::move(value); }

    /**
     * <p>Provides the details of the specified serverless cache that is about to be
     * deleted.</p>
     */
    inline DeleteServerlessCacheResult& WithServerlessCache(const ServerlessCache& value) { SetServerlessCache(value); return *this;}

    /**
     * <p>Provides the details of the specified serverless cache that is about to be
     * deleted.</p>
     */
    inline DeleteServerlessCacheResult& WithServerlessCache(ServerlessCache&& value) { SetServerlessCache(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteServerlessCacheResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteServerlessCacheResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ServerlessCache m_serverlessCache;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
