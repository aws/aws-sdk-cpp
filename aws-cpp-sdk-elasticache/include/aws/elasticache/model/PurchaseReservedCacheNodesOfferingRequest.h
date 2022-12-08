/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>PurchaseReservedCacheNodesOffering</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/PurchaseReservedCacheNodesOfferingMessage">AWS
   * API Reference</a></p>
   */
  class PurchaseReservedCacheNodesOfferingRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API PurchaseReservedCacheNodesOfferingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseReservedCacheNodesOffering"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline const Aws::String& GetReservedCacheNodesOfferingId() const{ return m_reservedCacheNodesOfferingId; }

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline bool ReservedCacheNodesOfferingIdHasBeenSet() const { return m_reservedCacheNodesOfferingIdHasBeenSet; }

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline void SetReservedCacheNodesOfferingId(const Aws::String& value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId = value; }

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline void SetReservedCacheNodesOfferingId(Aws::String&& value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId = std::move(value); }

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline void SetReservedCacheNodesOfferingId(const char* value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId.assign(value); }

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithReservedCacheNodesOfferingId(const Aws::String& value) { SetReservedCacheNodesOfferingId(value); return *this;}

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithReservedCacheNodesOfferingId(Aws::String&& value) { SetReservedCacheNodesOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithReservedCacheNodesOfferingId(const char* value) { SetReservedCacheNodesOfferingId(value); return *this;}


    /**
     * <p>A customer-specified identifier to track this reservation.</p>  <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p>  <p>Example:
     * myreservationID</p>
     */
    inline const Aws::String& GetReservedCacheNodeId() const{ return m_reservedCacheNodeId; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>  <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p>  <p>Example:
     * myreservationID</p>
     */
    inline bool ReservedCacheNodeIdHasBeenSet() const { return m_reservedCacheNodeIdHasBeenSet; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>  <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p>  <p>Example:
     * myreservationID</p>
     */
    inline void SetReservedCacheNodeId(const Aws::String& value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId = value; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>  <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p>  <p>Example:
     * myreservationID</p>
     */
    inline void SetReservedCacheNodeId(Aws::String&& value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId = std::move(value); }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>  <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p>  <p>Example:
     * myreservationID</p>
     */
    inline void SetReservedCacheNodeId(const char* value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId.assign(value); }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>  <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p>  <p>Example:
     * myreservationID</p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithReservedCacheNodeId(const Aws::String& value) { SetReservedCacheNodeId(value); return *this;}

    /**
     * <p>A customer-specified identifier to track this reservation.</p>  <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p>  <p>Example:
     * myreservationID</p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithReservedCacheNodeId(Aws::String&& value) { SetReservedCacheNodeId(std::move(value)); return *this;}

    /**
     * <p>A customer-specified identifier to track this reservation.</p>  <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p>  <p>Example:
     * myreservationID</p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithReservedCacheNodeId(const char* value) { SetReservedCacheNodeId(value); return *this;}


    /**
     * <p>The number of cache node instances to reserve.</p> <p>Default: <code>1</code>
     * </p>
     */
    inline int GetCacheNodeCount() const{ return m_cacheNodeCount; }

    /**
     * <p>The number of cache node instances to reserve.</p> <p>Default: <code>1</code>
     * </p>
     */
    inline bool CacheNodeCountHasBeenSet() const { return m_cacheNodeCountHasBeenSet; }

    /**
     * <p>The number of cache node instances to reserve.</p> <p>Default: <code>1</code>
     * </p>
     */
    inline void SetCacheNodeCount(int value) { m_cacheNodeCountHasBeenSet = true; m_cacheNodeCount = value; }

    /**
     * <p>The number of cache node instances to reserve.</p> <p>Default: <code>1</code>
     * </p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithCacheNodeCount(int value) { SetCacheNodeCount(value); return *this;}


    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_reservedCacheNodesOfferingId;
    bool m_reservedCacheNodesOfferingIdHasBeenSet = false;

    Aws::String m_reservedCacheNodeId;
    bool m_reservedCacheNodeIdHasBeenSet = false;

    int m_cacheNodeCount;
    bool m_cacheNodeCountHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
