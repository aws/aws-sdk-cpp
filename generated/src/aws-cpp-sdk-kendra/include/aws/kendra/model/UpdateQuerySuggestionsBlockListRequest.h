/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/S3Path.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class UpdateQuerySuggestionsBlockListRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API UpdateQuerySuggestionsBlockListRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQuerySuggestionsBlockList"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    UpdateQuerySuggestionsBlockListRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the block list you want to update.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateQuerySuggestionsBlockListRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the block list.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateQuerySuggestionsBlockListRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the block list.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateQuerySuggestionsBlockListRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path where your block list text file sits in S3.</p> <p>If you update
     * your block list and provide the same path to the block list text file in S3,
     * then Amazon Kendra reloads the file to refresh the block list. Amazon Kendra
     * does not automatically refresh your block list. You need to call the
     * <code>UpdateQuerySuggestionsBlockList</code> API to refresh you block list.</p>
     * <p>If you update your block list, then Amazon Kendra asynchronously refreshes
     * all query suggestions with the latest content in the S3 file. This means changes
     * might not take effect immediately.</p>
     */
    inline const S3Path& GetSourceS3Path() const { return m_sourceS3Path; }
    inline bool SourceS3PathHasBeenSet() const { return m_sourceS3PathHasBeenSet; }
    template<typename SourceS3PathT = S3Path>
    void SetSourceS3Path(SourceS3PathT&& value) { m_sourceS3PathHasBeenSet = true; m_sourceS3Path = std::forward<SourceS3PathT>(value); }
    template<typename SourceS3PathT = S3Path>
    UpdateQuerySuggestionsBlockListRequest& WithSourceS3Path(SourceS3PathT&& value) { SetSourceS3Path(std::forward<SourceS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM (Identity and Access Management) role used to access the block list
     * text file in S3.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateQuerySuggestionsBlockListRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    S3Path m_sourceS3Path;
    bool m_sourceS3PathHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
