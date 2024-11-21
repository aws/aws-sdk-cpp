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
    AWS_ELASTICACHE_API CreateGlobalReplicationGroupRequest();

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
    inline const Aws::String& GetGlobalReplicationGroupIdSuffix() const{ return m_globalReplicationGroupIdSuffix; }
    inline bool GlobalReplicationGroupIdSuffixHasBeenSet() const { return m_globalReplicationGroupIdSuffixHasBeenSet; }
    inline void SetGlobalReplicationGroupIdSuffix(const Aws::String& value) { m_globalReplicationGroupIdSuffixHasBeenSet = true; m_globalReplicationGroupIdSuffix = value; }
    inline void SetGlobalReplicationGroupIdSuffix(Aws::String&& value) { m_globalReplicationGroupIdSuffixHasBeenSet = true; m_globalReplicationGroupIdSuffix = std::move(value); }
    inline void SetGlobalReplicationGroupIdSuffix(const char* value) { m_globalReplicationGroupIdSuffixHasBeenSet = true; m_globalReplicationGroupIdSuffix.assign(value); }
    inline CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupIdSuffix(const Aws::String& value) { SetGlobalReplicationGroupIdSuffix(value); return *this;}
    inline CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupIdSuffix(Aws::String&& value) { SetGlobalReplicationGroupIdSuffix(std::move(value)); return *this;}
    inline CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupIdSuffix(const char* value) { SetGlobalReplicationGroupIdSuffix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupDescription() const{ return m_globalReplicationGroupDescription; }
    inline bool GlobalReplicationGroupDescriptionHasBeenSet() const { return m_globalReplicationGroupDescriptionHasBeenSet; }
    inline void SetGlobalReplicationGroupDescription(const Aws::String& value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription = value; }
    inline void SetGlobalReplicationGroupDescription(Aws::String&& value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription = std::move(value); }
    inline void SetGlobalReplicationGroupDescription(const char* value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription.assign(value); }
    inline CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupDescription(const Aws::String& value) { SetGlobalReplicationGroupDescription(value); return *this;}
    inline CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupDescription(Aws::String&& value) { SetGlobalReplicationGroupDescription(std::move(value)); return *this;}
    inline CreateGlobalReplicationGroupRequest& WithGlobalReplicationGroupDescription(const char* value) { SetGlobalReplicationGroupDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the primary cluster that accepts writes and will replicate
     * updates to the secondary cluster.</p>
     */
    inline const Aws::String& GetPrimaryReplicationGroupId() const{ return m_primaryReplicationGroupId; }
    inline bool PrimaryReplicationGroupIdHasBeenSet() const { return m_primaryReplicationGroupIdHasBeenSet; }
    inline void SetPrimaryReplicationGroupId(const Aws::String& value) { m_primaryReplicationGroupIdHasBeenSet = true; m_primaryReplicationGroupId = value; }
    inline void SetPrimaryReplicationGroupId(Aws::String&& value) { m_primaryReplicationGroupIdHasBeenSet = true; m_primaryReplicationGroupId = std::move(value); }
    inline void SetPrimaryReplicationGroupId(const char* value) { m_primaryReplicationGroupIdHasBeenSet = true; m_primaryReplicationGroupId.assign(value); }
    inline CreateGlobalReplicationGroupRequest& WithPrimaryReplicationGroupId(const Aws::String& value) { SetPrimaryReplicationGroupId(value); return *this;}
    inline CreateGlobalReplicationGroupRequest& WithPrimaryReplicationGroupId(Aws::String&& value) { SetPrimaryReplicationGroupId(std::move(value)); return *this;}
    inline CreateGlobalReplicationGroupRequest& WithPrimaryReplicationGroupId(const char* value) { SetPrimaryReplicationGroupId(value); return *this;}
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
