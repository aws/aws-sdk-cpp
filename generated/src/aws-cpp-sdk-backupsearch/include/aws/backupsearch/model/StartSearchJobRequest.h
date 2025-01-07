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
    AWS_BACKUPSEARCH_API StartSearchJobRequest();

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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartSearchJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StartSearchJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StartSearchJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline StartSearchJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartSearchJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartSearchJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StartSearchJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartSearchJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartSearchJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include alphanumeric characters to create a name for this search job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StartSearchJobRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartSearchJobRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartSearchJobRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption key for the specified search job.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }
    inline StartSearchJobRequest& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}
    inline StartSearchJobRequest& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}
    inline StartSearchJobRequest& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include this parameter to allow multiple identical calls for idempotency.</p>
     * <p>A client token is valid for 8 hours after the first request that uses it is
     * completed. After this time, any request with the same token is treated as a new
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartSearchJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartSearchJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartSearchJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This object can contain BackupResourceTypes, BackupResourceArns,
     * BackupResourceCreationTime, BackupResourceTags, and SourceResourceArns to filter
     * the recovery points returned by the search job.</p>
     */
    inline const SearchScope& GetSearchScope() const{ return m_searchScope; }
    inline bool SearchScopeHasBeenSet() const { return m_searchScopeHasBeenSet; }
    inline void SetSearchScope(const SearchScope& value) { m_searchScopeHasBeenSet = true; m_searchScope = value; }
    inline void SetSearchScope(SearchScope&& value) { m_searchScopeHasBeenSet = true; m_searchScope = std::move(value); }
    inline StartSearchJobRequest& WithSearchScope(const SearchScope& value) { SetSearchScope(value); return *this;}
    inline StartSearchJobRequest& WithSearchScope(SearchScope&& value) { SetSearchScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Item Filters represent all input item properties specified when the search
     * was created.</p> <p>Contains either EBSItemFilters or S3ItemFilters</p>
     */
    inline const ItemFilters& GetItemFilters() const{ return m_itemFilters; }
    inline bool ItemFiltersHasBeenSet() const { return m_itemFiltersHasBeenSet; }
    inline void SetItemFilters(const ItemFilters& value) { m_itemFiltersHasBeenSet = true; m_itemFilters = value; }
    inline void SetItemFilters(ItemFilters&& value) { m_itemFiltersHasBeenSet = true; m_itemFilters = std::move(value); }
    inline StartSearchJobRequest& WithItemFilters(const ItemFilters& value) { SetItemFilters(value); return *this;}
    inline StartSearchJobRequest& WithItemFilters(ItemFilters&& value) { SetItemFilters(std::move(value)); return *this;}
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
