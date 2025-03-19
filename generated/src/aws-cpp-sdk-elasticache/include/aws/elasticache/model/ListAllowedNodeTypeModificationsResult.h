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
    AWS_ELASTICACHE_API ListAllowedNodeTypeModificationsResult() = default;
    AWS_ELASTICACHE_API ListAllowedNodeTypeModificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API ListAllowedNodeTypeModificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group.</p> <p>When scaling up a
     * Valkey or Redis OSS cluster or replication group using
     * <code>ModifyCacheCluster</code> or <code>ModifyReplicationGroup</code>, use a
     * value from this list for the <code>CacheNodeType</code> parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScaleUpModifications() const { return m_scaleUpModifications; }
    template<typename ScaleUpModificationsT = Aws::Vector<Aws::String>>
    void SetScaleUpModifications(ScaleUpModificationsT&& value) { m_scaleUpModificationsHasBeenSet = true; m_scaleUpModifications = std::forward<ScaleUpModificationsT>(value); }
    template<typename ScaleUpModificationsT = Aws::Vector<Aws::String>>
    ListAllowedNodeTypeModificationsResult& WithScaleUpModifications(ScaleUpModificationsT&& value) { SetScaleUpModifications(std::forward<ScaleUpModificationsT>(value)); return *this;}
    template<typename ScaleUpModificationsT = Aws::String>
    ListAllowedNodeTypeModificationsResult& AddScaleUpModifications(ScaleUpModificationsT&& value) { m_scaleUpModificationsHasBeenSet = true; m_scaleUpModifications.emplace_back(std::forward<ScaleUpModificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string list, each element of which specifies a cache node type which you
     * can use to scale your cluster or replication group. When scaling down a Valkey
     * or Redis OSS cluster or replication group using ModifyCacheCluster or
     * ModifyReplicationGroup, use a value from this list for the CacheNodeType
     * parameter. </p>
     */
    inline const Aws::Vector<Aws::String>& GetScaleDownModifications() const { return m_scaleDownModifications; }
    template<typename ScaleDownModificationsT = Aws::Vector<Aws::String>>
    void SetScaleDownModifications(ScaleDownModificationsT&& value) { m_scaleDownModificationsHasBeenSet = true; m_scaleDownModifications = std::forward<ScaleDownModificationsT>(value); }
    template<typename ScaleDownModificationsT = Aws::Vector<Aws::String>>
    ListAllowedNodeTypeModificationsResult& WithScaleDownModifications(ScaleDownModificationsT&& value) { SetScaleDownModifications(std::forward<ScaleDownModificationsT>(value)); return *this;}
    template<typename ScaleDownModificationsT = Aws::String>
    ListAllowedNodeTypeModificationsResult& AddScaleDownModifications(ScaleDownModificationsT&& value) { m_scaleDownModificationsHasBeenSet = true; m_scaleDownModifications.emplace_back(std::forward<ScaleDownModificationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListAllowedNodeTypeModificationsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_scaleUpModifications;
    bool m_scaleUpModificationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_scaleDownModifications;
    bool m_scaleDownModificationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
