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
    AWS_DATASYNC_API StartDiscoveryJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDiscoveryJob"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the on-premises storage system
     * that you want to run the discovery job on.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const { return m_storageSystemArn; }
    inline bool StorageSystemArnHasBeenSet() const { return m_storageSystemArnHasBeenSet; }
    template<typename StorageSystemArnT = Aws::String>
    void SetStorageSystemArn(StorageSystemArnT&& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = std::forward<StorageSystemArnT>(value); }
    template<typename StorageSystemArnT = Aws::String>
    StartDiscoveryJobRequest& WithStorageSystemArn(StorageSystemArnT&& value) { SetStorageSystemArn(std::forward<StorageSystemArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies in minutes how long you want the discovery job to run.</p> 
     * <p>For more accurate recommendations, we recommend a duration of at least 14
     * days. Longer durations allow time to collect a sufficient number of data points
     * and provide a realistic representation of storage performance and
     * utilization.</p> 
     */
    inline int GetCollectionDurationMinutes() const { return m_collectionDurationMinutes; }
    inline bool CollectionDurationMinutesHasBeenSet() const { return m_collectionDurationMinutesHasBeenSet; }
    inline void SetCollectionDurationMinutes(int value) { m_collectionDurationMinutesHasBeenSet = true; m_collectionDurationMinutes = value; }
    inline StartDiscoveryJobRequest& WithCollectionDurationMinutes(int value) { SetCollectionDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a client token to make sure requests with this API operation are
     * idempotent. If you don't specify a client token, DataSync generates one for you
     * automatically.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartDiscoveryJobRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    StartDiscoveryJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagListEntry>
    StartDiscoveryJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_storageSystemArn;
    bool m_storageSystemArnHasBeenSet = false;

    int m_collectionDurationMinutes{0};
    bool m_collectionDurationMinutesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
