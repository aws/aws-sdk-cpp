/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/S3Path.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class CreateQuerySuggestionsBlockListRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API CreateQuerySuggestionsBlockListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateQuerySuggestionsBlockList"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index you want to create a query suggestions block list
     * for.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index you want to create a query suggestions block list
     * for.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index you want to create a query suggestions block list
     * for.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index you want to create a query suggestions block list
     * for.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index you want to create a query suggestions block list
     * for.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index you want to create a query suggestions block list
     * for.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index you want to create a query suggestions block list
     * for.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index you want to create a query suggestions block list
     * for.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>A user friendly name for the block list.</p> <p>For example, the block list
     * named 'offensive-words' includes all offensive words that could appear in user
     * queries and need to be blocked from suggestions.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A user friendly name for the block list.</p> <p>For example, the block list
     * named 'offensive-words' includes all offensive words that could appear in user
     * queries and need to be blocked from suggestions.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A user friendly name for the block list.</p> <p>For example, the block list
     * named 'offensive-words' includes all offensive words that could appear in user
     * queries and need to be blocked from suggestions.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A user friendly name for the block list.</p> <p>For example, the block list
     * named 'offensive-words' includes all offensive words that could appear in user
     * queries and need to be blocked from suggestions.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A user friendly name for the block list.</p> <p>For example, the block list
     * named 'offensive-words' includes all offensive words that could appear in user
     * queries and need to be blocked from suggestions.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A user friendly name for the block list.</p> <p>For example, the block list
     * named 'offensive-words' includes all offensive words that could appear in user
     * queries and need to be blocked from suggestions.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A user friendly name for the block list.</p> <p>For example, the block list
     * named 'offensive-words' includes all offensive words that could appear in user
     * queries and need to be blocked from suggestions.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A user friendly name for the block list.</p> <p>For example, the block list
     * named 'offensive-words' includes all offensive words that could appear in user
     * queries and need to be blocked from suggestions.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A user-friendly description for the block list.</p> <p>For example, the
     * description "List of all offensive words that can appear in user queries and
     * need to be blocked from suggestions."</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A user-friendly description for the block list.</p> <p>For example, the
     * description "List of all offensive words that can appear in user queries and
     * need to be blocked from suggestions."</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A user-friendly description for the block list.</p> <p>For example, the
     * description "List of all offensive words that can appear in user queries and
     * need to be blocked from suggestions."</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-friendly description for the block list.</p> <p>For example, the
     * description "List of all offensive words that can appear in user queries and
     * need to be blocked from suggestions."</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A user-friendly description for the block list.</p> <p>For example, the
     * description "List of all offensive words that can appear in user queries and
     * need to be blocked from suggestions."</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A user-friendly description for the block list.</p> <p>For example, the
     * description "List of all offensive words that can appear in user queries and
     * need to be blocked from suggestions."</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A user-friendly description for the block list.</p> <p>For example, the
     * description "List of all offensive words that can appear in user queries and
     * need to be blocked from suggestions."</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A user-friendly description for the block list.</p> <p>For example, the
     * description "List of all offensive words that can appear in user queries and
     * need to be blocked from suggestions."</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The S3 path to your block list text file in your S3 bucket.</p> <p>Each block
     * word or phrase should be on a separate line in a text file.</p> <p>For
     * information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline const S3Path& GetSourceS3Path() const{ return m_sourceS3Path; }

    /**
     * <p>The S3 path to your block list text file in your S3 bucket.</p> <p>Each block
     * word or phrase should be on a separate line in a text file.</p> <p>For
     * information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline bool SourceS3PathHasBeenSet() const { return m_sourceS3PathHasBeenSet; }

    /**
     * <p>The S3 path to your block list text file in your S3 bucket.</p> <p>Each block
     * word or phrase should be on a separate line in a text file.</p> <p>For
     * information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline void SetSourceS3Path(const S3Path& value) { m_sourceS3PathHasBeenSet = true; m_sourceS3Path = value; }

    /**
     * <p>The S3 path to your block list text file in your S3 bucket.</p> <p>Each block
     * word or phrase should be on a separate line in a text file.</p> <p>For
     * information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline void SetSourceS3Path(S3Path&& value) { m_sourceS3PathHasBeenSet = true; m_sourceS3Path = std::move(value); }

    /**
     * <p>The S3 path to your block list text file in your S3 bucket.</p> <p>Each block
     * word or phrase should be on a separate line in a text file.</p> <p>For
     * information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithSourceS3Path(const S3Path& value) { SetSourceS3Path(value); return *this;}

    /**
     * <p>The S3 path to your block list text file in your S3 bucket.</p> <p>Each block
     * word or phrase should be on a separate line in a text file.</p> <p>For
     * information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithSourceS3Path(S3Path&& value) { SetSourceS3Path(std::move(value)); return *this;}


    /**
     * <p>A token that you provide to identify the request to create a query
     * suggestions block list.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify the request to create a query
     * suggestions block list.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify the request to create a query
     * suggestions block list.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify the request to create a query
     * suggestions block list.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify the request to create a query
     * suggestions block list.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify the request to create a query
     * suggestions block list.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify the request to create a query
     * suggestions block list.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify the request to create a query
     * suggestions block list.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in your S3 bucket.</p> <p>You need permissions to the
     * role ARN (Amazon Web Services Resource Name). The role needs S3 read permissions
     * to your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in your S3 bucket.</p> <p>You need permissions to the
     * role ARN (Amazon Web Services Resource Name). The role needs S3 read permissions
     * to your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in your S3 bucket.</p> <p>You need permissions to the
     * role ARN (Amazon Web Services Resource Name). The role needs S3 read permissions
     * to your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in your S3 bucket.</p> <p>You need permissions to the
     * role ARN (Amazon Web Services Resource Name). The role needs S3 read permissions
     * to your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in your S3 bucket.</p> <p>You need permissions to the
     * role ARN (Amazon Web Services Resource Name). The role needs S3 read permissions
     * to your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in your S3 bucket.</p> <p>You need permissions to the
     * role ARN (Amazon Web Services Resource Name). The role needs S3 read permissions
     * to your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in your S3 bucket.</p> <p>You need permissions to the
     * role ARN (Amazon Web Services Resource Name). The role needs S3 read permissions
     * to your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM (Identity and Access Management) role used by Amazon Kendra to access
     * the block list text file in your S3 bucket.</p> <p>You need permissions to the
     * role ARN (Amazon Web Services Resource Name). The role needs S3 read permissions
     * to your file in S3 and needs to give STS (Security Token Service) assume role
     * permissions to Amazon Kendra.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A tag that you can assign to a block list that categorizes the block
     * list.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A tag that you can assign to a block list that categorizes the block
     * list.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A tag that you can assign to a block list that categorizes the block
     * list.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A tag that you can assign to a block list that categorizes the block
     * list.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A tag that you can assign to a block list that categorizes the block
     * list.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag that you can assign to a block list that categorizes the block
     * list.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag that you can assign to a block list that categorizes the block
     * list.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A tag that you can assign to a block list that categorizes the block
     * list.</p>
     */
    inline CreateQuerySuggestionsBlockListRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    S3Path m_sourceS3Path;
    bool m_sourceS3PathHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
