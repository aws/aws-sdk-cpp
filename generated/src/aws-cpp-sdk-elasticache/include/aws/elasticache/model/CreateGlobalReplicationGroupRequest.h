/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class CreateGlobalReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API CreateGlobalReplicationGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGlobalReplicationGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The suffix name of a Global datastore. Amazon ElastiCache automatically
     * applies a prefix to the Global datastore ID when it is created. Each Amazon
     * Region has its own prefix. For instance, a Global datastore ID created in the
     * US-West-1 region will begin with "dsdfu" along with the suffix name you provide.
     * The suffix, combined with the auto-generated prefix, guarantees uniqueness of
     * the Global datastore name across multiple regions. </p> <p>For a full list of
     * Amazon Regions and their respective Global datastore iD prefixes, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/dg/Redis-Global-Datastores-CLI.html">Using
     * the Amazon CLI with Global datastores </a>.</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupIdSuffix() const { return m_globalReplicationGroupIdSuffix; }
    inline bool GlobalReplicationGroupIdSuffixHasBeenSet() const { return m_globalReplicationGroupIdSuffixHasBeenSet; }
    template<typename GlobalReplicationGroupIdSuffixT = Aws::String>
    void SetGlobalReplicationGroupIdSuffix(GlobalReplicationGroupIdSuffixT&& value) { m_globalReplicationGroupIdSuffixHasBeenSet = true; m_globalReplicationGroupIdSuffix = std::forward<GlobalReplicationGroupIdSuffixT>(value); }
    template<typename GlobalReplicationGroupIdSuffixT = Aws::String>
    CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupIdSuffix(GlobalReplicationGroupIdSuffixT&& value) { SetGlobalReplicationGroupIdSuffix(std::forward<GlobalReplicationGroupIdSuffixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupDescription() const { return m_globalReplicationGroupDescription; }
    inline bool GlobalReplicationGroupDescriptionHasBeenSet() const { return m_globalReplicationGroupDescriptionHasBeenSet; }
    template<typename GlobalReplicationGroupDescriptionT = Aws::String>
    void SetGlobalReplicationGroupDescription(GlobalReplicationGroupDescriptionT&& value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription = std::forward<GlobalReplicationGroupDescriptionT>(value); }
    template<typename GlobalReplicationGroupDescriptionT = Aws::String>
    CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupDescription(GlobalReplicationGroupDescriptionT&& value) { SetGlobalReplicationGroupDescription(std::forward<GlobalReplicationGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the primary cluster that accepts writes and will replicate
     * updates to the secondary cluster.</p>
     */
    inline const Aws::String& GetPrimaryReplicationGroupId() const { return m_primaryReplicationGroupId; }
    inline bool PrimaryReplicationGroupIdHasBeenSet() const { return m_primaryReplicationGroupIdHasBeenSet; }
    template<typename PrimaryReplicationGroupIdT = Aws::String>
    void SetPrimaryReplicationGroupId(PrimaryReplicationGroupIdT&& value) { m_primaryReplicationGroupIdHasBeenSet = true; m_primaryReplicationGroupId = std::forward<PrimaryReplicationGroupIdT>(value); }
    template<typename PrimaryReplicationGroupIdT = Aws::String>
    CreateGlobalReplicationGroupRequest& WithPrimaryReplicationGroupId(PrimaryReplicationGroupIdT&& value) { SetPrimaryReplicationGroupId(std::forward<PrimaryReplicationGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_globalReplicationGroupIdSuffix;
    bool m_globalReplicationGroupIdSuffixHasBeenSet = false;

    Aws::String m_globalReplicationGroupDescription;
    bool m_globalReplicationGroupDescriptionHasBeenSet = false;

    Aws::String m_primaryReplicationGroupId;
    bool m_primaryReplicationGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
