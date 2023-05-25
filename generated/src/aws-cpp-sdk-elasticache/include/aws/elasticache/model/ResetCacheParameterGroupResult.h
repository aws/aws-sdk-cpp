/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  /**
   * <p>Represents the output of one of the following operations:</p> <ul> <li> <p>
   * <code>ModifyCacheParameterGroup</code> </p> </li> <li> <p>
   * <code>ResetCacheParameterGroup</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheParameterGroupNameMessage">AWS
   * API Reference</a></p>
   */
  class ResetCacheParameterGroupResult
  {
  public:
    AWS_ELASTICACHE_API ResetCacheParameterGroupResult();
    AWS_ELASTICACHE_API ResetCacheParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API ResetCacheParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupName = std::move(value); }

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline ResetCacheParameterGroupResult& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline ResetCacheParameterGroupResult& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cache parameter group.</p>
     */
    inline ResetCacheParameterGroupResult& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ResetCacheParameterGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ResetCacheParameterGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_cacheParameterGroupName;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
