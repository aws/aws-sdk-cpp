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
    AWS_KENDRA_API UpdateQuerySuggestionsBlockListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQuerySuggestionsBlockList"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index for the block list.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The identifier of the block list you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the block list you want to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the block list you want to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the block list you want to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the block list you want to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the block list you want to update.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the block list you want to update.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the block list you want to update.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A new name for the block list.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A new name for the block list.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A new name for the block list.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A new name for the block list.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A new name for the block list.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A new name for the block list.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A new name for the block list.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A new name for the block list.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A new description for the block list.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new description for the block list.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A new description for the block list.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new description for the block list.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new description for the block list.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new description for the block list.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new description for the block list.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A new description for the block list.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline const S3Path& GetSourceS3Path() const{ return m_sourceS3Path; }

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
    inline bool SourceS3PathHasBeenSet() const { return m_sourceS3PathHasBeenSet; }

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
    inline void SetSourceS3Path(const S3Path& value) { m_sourceS3PathHasBeenSet = true; m_sourceS3Path = value; }

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
    inline void SetSourceS3Path(S3Path&& value) { m_sourceS3PathHasBeenSet = true; m_sourceS3Path = std::move(value); }

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
    inline UpdateQuerySuggestionsBlockListRequest& WithSourceS3Path(const S3Path& value) { SetSourceS3Path(value); return *this;}

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
    inline UpdateQuerySuggestionsBlockListRequest& WithSourceS3Path(S3Path&& value) { SetSourceS3Path(std::move(value)); return *this;}


    /**
     * <p>The IAM (Identity and Access Management) role used to access the block list
     * text file in S3.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM (Identity and Access Management) role used to access the block list
     * text file in S3.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM (Identity and Access Management) role used to access the block list
     * text file in S3.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM (Identity and Access Management) role used to access the block list
     * text file in S3.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM (Identity and Access Management) role used to access the block list
     * text file in S3.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM (Identity and Access Management) role used to access the block list
     * text file in S3.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM (Identity and Access Management) role used to access the block list
     * text file in S3.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM (Identity and Access Management) role used to access the block list
     * text file in S3.</p>
     */
    inline UpdateQuerySuggestionsBlockListRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

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
