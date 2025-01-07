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
    AWS_BACKUPSEARCH_API StartSearchResultExportJobRequest();

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
    inline const Aws::String& GetSearchJobIdentifier() const{ return m_searchJobIdentifier; }
    inline bool SearchJobIdentifierHasBeenSet() const { return m_searchJobIdentifierHasBeenSet; }
    inline void SetSearchJobIdentifier(const Aws::String& value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier = value; }
    inline void SetSearchJobIdentifier(Aws::String&& value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier = std::move(value); }
    inline void SetSearchJobIdentifier(const char* value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier.assign(value); }
    inline StartSearchResultExportJobRequest& WithSearchJobIdentifier(const Aws::String& value) { SetSearchJobIdentifier(value); return *this;}
    inline StartSearchResultExportJobRequest& WithSearchJobIdentifier(Aws::String&& value) { SetSearchJobIdentifier(std::move(value)); return *this;}
    inline StartSearchResultExportJobRequest& WithSearchJobIdentifier(const char* value) { SetSearchJobIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This specification contains a required string of the destination bucket;
     * optionally, you can include the destination prefix.</p>
     */
    inline const ExportSpecification& GetExportSpecification() const{ return m_exportSpecification; }
    inline bool ExportSpecificationHasBeenSet() const { return m_exportSpecificationHasBeenSet; }
    inline void SetExportSpecification(const ExportSpecification& value) { m_exportSpecificationHasBeenSet = true; m_exportSpecification = value; }
    inline void SetExportSpecification(ExportSpecification&& value) { m_exportSpecificationHasBeenSet = true; m_exportSpecification = std::move(value); }
    inline StartSearchResultExportJobRequest& WithExportSpecification(const ExportSpecification& value) { SetExportSpecification(value); return *this;}
    inline StartSearchResultExportJobRequest& WithExportSpecification(ExportSpecification&& value) { SetExportSpecification(std::move(value)); return *this;}
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
    inline StartSearchResultExportJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartSearchResultExportJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartSearchResultExportJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional tags to include. A tag is a key-value pair you can use to manage,
     * filter, and search for your resources. Allowed characters include UTF-8 letters,
     * numbers, spaces, and the following characters: + - = . _ : /. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartSearchResultExportJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StartSearchResultExportJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StartSearchResultExportJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline StartSearchResultExportJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartSearchResultExportJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartSearchResultExportJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StartSearchResultExportJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartSearchResultExportJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartSearchResultExportJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This parameter specifies the role ARN used to start the search results export
     * jobs.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline StartSearchResultExportJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline StartSearchResultExportJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline StartSearchResultExportJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
