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
  class CreateServerlessCacheResult
  {
  public:
    AWS_ELASTICACHE_API CreateServerlessCacheResult();
    AWS_ELASTICACHE_API CreateServerlessCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API CreateServerlessCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The response for the attempt to create the serverless cache.</p>
     */
    inline const ServerlessCache& GetServerlessCache() const{ return m_serverlessCache; }

    /**
     * <p>The response for the attempt to create the serverless cache.</p>
     */
    inline void SetServerlessCache(const ServerlessCache& value) { m_serverlessCache = value; }

    /**
     * <p>The response for the attempt to create the serverless cache.</p>
     */
    inline void SetServerlessCache(ServerlessCache&& value) { m_serverlessCache = std::move(value); }

    /**
     * <p>The response for the attempt to create the serverless cache.</p>
     */
    inline CreateServerlessCacheResult& WithServerlessCache(const ServerlessCache& value) { SetServerlessCache(value); return *this;}

    /**
     * <p>The response for the attempt to create the serverless cache.</p>
     */
    inline CreateServerlessCacheResult& WithServerlessCache(ServerlessCache&& value) { SetServerlessCache(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateServerlessCacheResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateServerlessCacheResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ServerlessCache m_serverlessCache;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
