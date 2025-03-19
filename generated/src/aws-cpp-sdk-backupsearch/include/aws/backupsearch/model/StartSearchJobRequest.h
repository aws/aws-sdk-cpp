/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/backupsearch/BackupSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupsearch/model/SearchScope.h>
#include <aws/backupsearch/model/ItemFilters.h>
#include <utility>

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

  /**
   */
  class StartSearchJobRequest : public BackupSearchRequest
  {
  public:
    AWS_BACKUPSEARCH_API StartSearchJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSearchJob"; }

    AWS_BACKUPSEARCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>List of tags returned by the operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartSearchJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartSearchJobRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Include alphanumeric characters to create a name for this search job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartSearchJobRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption key for the specified search job.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    StartSearchJobRequest& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include this parameter to allow multiple identical calls for idempotency.</p>
     * <p>A client token is valid for 8 hours after the first request that uses it is
     * completed. After this time, any request with the same token is treated as a new
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartSearchJobRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This object can contain BackupResourceTypes, BackupResourceArns,
     * BackupResourceCreationTime, BackupResourceTags, and SourceResourceArns to filter
     * the recovery points returned by the search job.</p>
     */
    inline const SearchScope& GetSearchScope() const { return m_searchScope; }
    inline bool SearchScopeHasBeenSet() const { return m_searchScopeHasBeenSet; }
    template<typename SearchScopeT = SearchScope>
    void SetSearchScope(SearchScopeT&& value) { m_searchScopeHasBeenSet = true; m_searchScope = std::forward<SearchScopeT>(value); }
    template<typename SearchScopeT = SearchScope>
    StartSearchJobRequest& WithSearchScope(SearchScopeT&& value) { SetSearchScope(std::forward<SearchScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Item Filters represent all input item properties specified when the search
     * was created.</p> <p>Contains either EBSItemFilters or S3ItemFilters</p>
     */
    inline const ItemFilters& GetItemFilters() const { return m_itemFilters; }
    inline bool ItemFiltersHasBeenSet() const { return m_itemFiltersHasBeenSet; }
    template<typename ItemFiltersT = ItemFilters>
    void SetItemFilters(ItemFiltersT&& value) { m_itemFiltersHasBeenSet = true; m_itemFilters = std::forward<ItemFiltersT>(value); }
    template<typename ItemFiltersT = ItemFilters>
    StartSearchJobRequest& WithItemFilters(ItemFiltersT&& value) { SetItemFilters(std::forward<ItemFiltersT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    SearchScope m_searchScope;
    bool m_searchScopeHasBeenSet = false;

    ItemFilters m_itemFilters;
    bool m_itemFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
