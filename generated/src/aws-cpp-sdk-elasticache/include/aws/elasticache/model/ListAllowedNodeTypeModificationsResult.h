/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents the allowed node types you can use to modify your cluster or
   * replication group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/AllowedNodeTypeModificationsMessage">AWS
   * API Reference</a></p>
   */
  class ListAllowedNodeTypeModificationsResult
  {
  public:
    AWS_ELASTICACHE_API ListAllowedNodeTypeModificationsResult();
    AWS_ELASTICACHE_API ListAllowedNodeTypeModificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API ListAllowedNodeTypeModificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group.</p> <p>When scaling up a
     * Redis cluster or replication group using <code>ModifyCacheCluster</code> or
     * <code>ModifyReplicationGroup</code>, use a value from this list for the
     * <code>CacheNodeType</code> parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScaleUpModifications() const{ return m_scaleUpModifications; }

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group.</p> <p>When scaling up a
     * Redis cluster or replication group using <code>ModifyCacheCluster</code> or
     * <code>ModifyReplicationGroup</code>, use a value from this list for the
     * <code>CacheNodeType</code> parameter.</p>
     */
    inline void SetScaleUpModifications(const Aws::Vector<Aws::String>& value) { m_scaleUpModifications = value; }

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group.</p> <p>When scaling up a
     * Redis cluster or replication group using <code>ModifyCacheCluster</code> or
     * <code>ModifyReplicationGroup</code>, use a value from this list for the
     * <code>CacheNodeType</code> parameter.</p>
     */
    inline void SetScaleUpModifications(Aws::Vector<Aws::String>&& value) { m_scaleUpModifications = std::move(value); }

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group.</p> <p>When scaling up a
     * Redis cluster or replication group using <code>ModifyCacheCluster</code> or
     * <code>ModifyReplicationGroup</code>, use a value from this list for the
     * <code>CacheNodeType</code> parameter.</p>
     */
    inline ListAllowedNodeTypeModificationsResult& WithScaleUpModifications(const Aws::Vector<Aws::String>& value) { SetScaleUpModifications(value); return *this;}

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group.</p> <p>When scaling up a
     * Redis cluster or replication group using <code>ModifyCacheCluster</code> or
     * <code>ModifyReplicationGroup</code>, use a value from this list for the
     * <code>CacheNodeType</code> parameter.</p>
     */
    inline ListAllowedNodeTypeModificationsResult& WithScaleUpModifications(Aws::Vector<Aws::String>&& value) { SetScaleUpModifications(std::move(value)); return *this;}

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group.</p> <p>When scaling up a
     * Redis cluster or replication group using <code>ModifyCacheCluster</code> or
     * <code>ModifyReplicationGroup</code>, use a value from this list for the
     * <code>CacheNodeType</code> parameter.</p>
     */
    inline ListAllowedNodeTypeModificationsResult& AddScaleUpModifications(const Aws::String& value) { m_scaleUpModifications.push_back(value); return *this; }

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group.</p> <p>When scaling up a
     * Redis cluster or replication group using <code>ModifyCacheCluster</code> or
     * <code>ModifyReplicationGroup</code>, use a value from this list for the
     * <code>CacheNodeType</code> parameter.</p>
     */
    inline ListAllowedNodeTypeModificationsResult& AddScaleUpModifications(Aws::String&& value) { m_scaleUpModifications.push_back(std::move(value)); return *this; }

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group.</p> <p>When scaling up a
     * Redis cluster or replication group using <code>ModifyCacheCluster</code> or
     * <code>ModifyReplicationGroup</code>, use a value from this list for the
     * <code>CacheNodeType</code> parameter.</p>
     */
    inline ListAllowedNodeTypeModificationsResult& AddScaleUpModifications(const char* value) { m_scaleUpModifications.push_back(value); return *this; }


    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group. When scaling down a Redis
     * cluster or replication group using ModifyCacheCluster or ModifyReplicationGroup,
     * use a value from this list for the CacheNodeType parameter. </p>
     */
    inline const Aws::Vector<Aws::String>& GetScaleDownModifications() const{ return m_scaleDownModifications; }

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group. When scaling down a Redis
     * cluster or replication group using ModifyCacheCluster or ModifyReplicationGroup,
     * use a value from this list for the CacheNodeType parameter. </p>
     */
    inline void SetScaleDownModifications(const Aws::Vector<Aws::String>& value) { m_scaleDownModifications = value; }

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group. When scaling down a Redis
     * cluster or replication group using ModifyCacheCluster or ModifyReplicationGroup,
     * use a value from this list for the CacheNodeType parameter. </p>
     */
    inline void SetScaleDownModifications(Aws::Vector<Aws::String>&& value) { m_scaleDownModifications = std::move(value); }

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group. When scaling down a Redis
     * cluster or replication group using ModifyCacheCluster or ModifyReplicationGroup,
     * use a value from this list for the CacheNodeType parameter. </p>
     */
    inline ListAllowedNodeTypeModificationsResult& WithScaleDownModifications(const Aws::Vector<Aws::String>& value) { SetScaleDownModifications(value); return *this;}

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group. When scaling down a Redis
     * cluster or replication group using ModifyCacheCluster or ModifyReplicationGroup,
     * use a value from this list for the CacheNodeType parameter. </p>
     */
    inline ListAllowedNodeTypeModificationsResult& WithScaleDownModifications(Aws::Vector<Aws::String>&& value) { SetScaleDownModifications(std::move(value)); return *this;}

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group. When scaling down a Redis
     * cluster or replication group using ModifyCacheCluster or ModifyReplicationGroup,
     * use a value from this list for the CacheNodeType parameter. </p>
     */
    inline ListAllowedNodeTypeModificationsResult& AddScaleDownModifications(const Aws::String& value) { m_scaleDownModifications.push_back(value); return *this; }

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group. When scaling down a Redis
     * cluster or replication group using ModifyCacheCluster or ModifyReplicationGroup,
     * use a value from this list for the CacheNodeType parameter. </p>
     */
    inline ListAllowedNodeTypeModificationsResult& AddScaleDownModifications(Aws::String&& value) { m_scaleDownModifications.push_back(std::move(value)); return *this; }

    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group. When scaling down a Redis
     * cluster or replication group using ModifyCacheCluster or ModifyReplicationGroup,
     * use a value from this list for the CacheNodeType parameter. </p>
     */
    inline ListAllowedNodeTypeModificationsResult& AddScaleDownModifications(const char* value) { m_scaleDownModifications.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListAllowedNodeTypeModificationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListAllowedNodeTypeModificationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_scaleUpModifications;

    Aws::Vector<Aws::String> m_scaleDownModifications;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
