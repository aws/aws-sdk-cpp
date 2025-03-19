/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/backupsearch/BackupSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupsearch/model/ExportSpecification.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

  /**
   */
  class StartSearchResultExportJobRequest : public BackupSearchRequest
  {
  public:
    AWS_BACKUPSEARCH_API StartSearchResultExportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSearchResultExportJob"; }

    AWS_BACKUPSEARCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique string that specifies the search job.</p>
     */
    inline const Aws::String& GetSearchJobIdentifier() const { return m_searchJobIdentifier; }
    inline bool SearchJobIdentifierHasBeenSet() const { return m_searchJobIdentifierHasBeenSet; }
    template<typename SearchJobIdentifierT = Aws::String>
    void SetSearchJobIdentifier(SearchJobIdentifierT&& value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier = std::forward<SearchJobIdentifierT>(value); }
    template<typename SearchJobIdentifierT = Aws::String>
    StartSearchResultExportJobRequest& WithSearchJobIdentifier(SearchJobIdentifierT&& value) { SetSearchJobIdentifier(std::forward<SearchJobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This specification contains a required string of the destination bucket;
     * optionally, you can include the destination prefix.</p>
     */
    inline const ExportSpecification& GetExportSpecification() const { return m_exportSpecification; }
    inline bool ExportSpecificationHasBeenSet() const { return m_exportSpecificationHasBeenSet; }
    template<typename ExportSpecificationT = ExportSpecification>
    void SetExportSpecification(ExportSpecificationT&& value) { m_exportSpecificationHasBeenSet = true; m_exportSpecification = std::forward<ExportSpecificationT>(value); }
    template<typename ExportSpecificationT = ExportSpecification>
    StartSearchResultExportJobRequest& WithExportSpecification(ExportSpecificationT&& value) { SetExportSpecification(std::forward<ExportSpecificationT>(value)); return *this;}
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
    StartSearchResultExportJobRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartSearchResultExportJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartSearchResultExportJobRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>This parameter specifies the role ARN used to start the search results export
     * jobs.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    StartSearchResultExportJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_searchJobIdentifier;
    bool m_searchJobIdentifierHasBeenSet = false;

    ExportSpecification m_exportSpecification;
    bool m_exportSpecificationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
