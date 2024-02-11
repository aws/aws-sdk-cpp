/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class StartDiscoveryJobRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API StartDiscoveryJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDiscoveryJob"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the on-premises storage system
     * that you want to run the discovery job on.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const{ return m_storageSystemArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the on-premises storage system
     * that you want to run the discovery job on.</p>
     */
    inline bool StorageSystemArnHasBeenSet() const { return m_storageSystemArnHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the on-premises storage system
     * that you want to run the discovery job on.</p>
     */
    inline void SetStorageSystemArn(const Aws::String& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the on-premises storage system
     * that you want to run the discovery job on.</p>
     */
    inline void SetStorageSystemArn(Aws::String&& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the on-premises storage system
     * that you want to run the discovery job on.</p>
     */
    inline void SetStorageSystemArn(const char* value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the on-premises storage system
     * that you want to run the discovery job on.</p>
     */
    inline StartDiscoveryJobRequest& WithStorageSystemArn(const Aws::String& value) { SetStorageSystemArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the on-premises storage system
     * that you want to run the discovery job on.</p>
     */
    inline StartDiscoveryJobRequest& WithStorageSystemArn(Aws::String&& value) { SetStorageSystemArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the on-premises storage system
     * that you want to run the discovery job on.</p>
     */
    inline StartDiscoveryJobRequest& WithStorageSystemArn(const char* value) { SetStorageSystemArn(value); return *this;}


    /**
     * <p>Specifies in minutes how long you want the discovery job to run.</p> 
     * <p>For more accurate recommendations, we recommend a duration of at least 14
     * days. Longer durations allow time to collect a sufficient number of data points
     * and provide a realistic representation of storage performance and
     * utilization.</p> 
     */
    inline int GetCollectionDurationMinutes() const{ return m_collectionDurationMinutes; }

    /**
     * <p>Specifies in minutes how long you want the discovery job to run.</p> 
     * <p>For more accurate recommendations, we recommend a duration of at least 14
     * days. Longer durations allow time to collect a sufficient number of data points
     * and provide a realistic representation of storage performance and
     * utilization.</p> 
     */
    inline bool CollectionDurationMinutesHasBeenSet() const { return m_collectionDurationMinutesHasBeenSet; }

    /**
     * <p>Specifies in minutes how long you want the discovery job to run.</p> 
     * <p>For more accurate recommendations, we recommend a duration of at least 14
     * days. Longer durations allow time to collect a sufficient number of data points
     * and provide a realistic representation of storage performance and
     * utilization.</p> 
     */
    inline void SetCollectionDurationMinutes(int value) { m_collectionDurationMinutesHasBeenSet = true; m_collectionDurationMinutes = value; }

    /**
     * <p>Specifies in minutes how long you want the discovery job to run.</p> 
     * <p>For more accurate recommendations, we recommend a duration of at least 14
     * days. Longer durations allow time to collect a sufficient number of data points
     * and provide a realistic representation of storage performance and
     * utilization.</p> 
     */
    inline StartDiscoveryJobRequest& WithCollectionDurationMinutes(int value) { SetCollectionDurationMinutes(value); return *this;}


    /**
     * <p>Specifies a client token to make sure requests with this API operation are
     * idempotent. If you don't specify a client token, DataSync generates one for you
     * automatically.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Specifies a client token to make sure requests with this API operation are
     * idempotent. If you don't specify a client token, DataSync generates one for you
     * automatically.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Specifies a client token to make sure requests with this API operation are
     * idempotent. If you don't specify a client token, DataSync generates one for you
     * automatically.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Specifies a client token to make sure requests with this API operation are
     * idempotent. If you don't specify a client token, DataSync generates one for you
     * automatically.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Specifies a client token to make sure requests with this API operation are
     * idempotent. If you don't specify a client token, DataSync generates one for you
     * automatically.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Specifies a client token to make sure requests with this API operation are
     * idempotent. If you don't specify a client token, DataSync generates one for you
     * automatically.</p>
     */
    inline StartDiscoveryJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Specifies a client token to make sure requests with this API operation are
     * idempotent. If you don't specify a client token, DataSync generates one for you
     * automatically.</p>
     */
    inline StartDiscoveryJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Specifies a client token to make sure requests with this API operation are
     * idempotent. If you don't specify a client token, DataSync generates one for you
     * automatically.</p>
     */
    inline StartDiscoveryJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources.</p>
     */
    inline StartDiscoveryJobRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources.</p>
     */
    inline StartDiscoveryJobRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources.</p>
     */
    inline StartDiscoveryJobRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources.</p>
     */
    inline StartDiscoveryJobRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_storageSystemArn;
    bool m_storageSystemArnHasBeenSet = false;

    int m_collectionDurationMinutes;
    bool m_collectionDurationMinutesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
