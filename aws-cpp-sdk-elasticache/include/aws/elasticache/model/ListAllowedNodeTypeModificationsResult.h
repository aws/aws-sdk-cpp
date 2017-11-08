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
  class AWS_ELASTICACHE_API ListAllowedNodeTypeModificationsResult
  {
  public:
    ListAllowedNodeTypeModificationsResult();
    ListAllowedNodeTypeModificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListAllowedNodeTypeModificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListAllowedNodeTypeModificationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListAllowedNodeTypeModificationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_scaleUpModifications;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
