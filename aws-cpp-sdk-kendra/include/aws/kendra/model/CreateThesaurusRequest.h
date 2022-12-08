/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/S3Path.h>
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
  class CreateThesaurusRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API CreateThesaurusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateThesaurus"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline CreateThesaurusRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline CreateThesaurusRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline CreateThesaurusRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>A name for the thesaurus.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the thesaurus.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the thesaurus.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the thesaurus.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the thesaurus.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the thesaurus.</p>
     */
    inline CreateThesaurusRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the thesaurus.</p>
     */
    inline CreateThesaurusRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the thesaurus.</p>
     */
    inline CreateThesaurusRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description for the thesaurus.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the thesaurus.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the thesaurus.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the thesaurus.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the thesaurus.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the thesaurus.</p>
     */
    inline CreateThesaurusRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the thesaurus.</p>
     */
    inline CreateThesaurusRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the thesaurus.</p>
     */
    inline CreateThesaurusRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline CreateThesaurusRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline CreateThesaurusRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>. </p>
     */
    inline CreateThesaurusRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A list of key-value pairs that identify the thesaurus. You can use the tags
     * to identify and organize your resources and to control access to resources. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that identify the thesaurus. You can use the tags
     * to identify and organize your resources and to control access to resources. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that identify the thesaurus. You can use the tags
     * to identify and organize your resources and to control access to resources. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that identify the thesaurus. You can use the tags
     * to identify and organize your resources and to control access to resources. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that identify the thesaurus. You can use the tags
     * to identify and organize your resources and to control access to resources. </p>
     */
    inline CreateThesaurusRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that identify the thesaurus. You can use the tags
     * to identify and organize your resources and to control access to resources. </p>
     */
    inline CreateThesaurusRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that identify the thesaurus. You can use the tags
     * to identify and organize your resources and to control access to resources. </p>
     */
    inline CreateThesaurusRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs that identify the thesaurus. You can use the tags
     * to identify and organize your resources and to control access to resources. </p>
     */
    inline CreateThesaurusRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The path to the thesaurus file in S3.</p>
     */
    inline const S3Path& GetSourceS3Path() const{ return m_sourceS3Path; }

    /**
     * <p>The path to the thesaurus file in S3.</p>
     */
    inline bool SourceS3PathHasBeenSet() const { return m_sourceS3PathHasBeenSet; }

    /**
     * <p>The path to the thesaurus file in S3.</p>
     */
    inline void SetSourceS3Path(const S3Path& value) { m_sourceS3PathHasBeenSet = true; m_sourceS3Path = value; }

    /**
     * <p>The path to the thesaurus file in S3.</p>
     */
    inline void SetSourceS3Path(S3Path&& value) { m_sourceS3PathHasBeenSet = true; m_sourceS3Path = std::move(value); }

    /**
     * <p>The path to the thesaurus file in S3.</p>
     */
    inline CreateThesaurusRequest& WithSourceS3Path(const S3Path& value) { SetSourceS3Path(value); return *this;}

    /**
     * <p>The path to the thesaurus file in S3.</p>
     */
    inline CreateThesaurusRequest& WithSourceS3Path(S3Path&& value) { SetSourceS3Path(std::move(value)); return *this;}


    /**
     * <p>A token that you provide to identify the request to create a thesaurus.
     * Multiple calls to the <code>CreateThesaurus</code> API with the same client
     * token will create only one thesaurus. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify the request to create a thesaurus.
     * Multiple calls to the <code>CreateThesaurus</code> API with the same client
     * token will create only one thesaurus. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify the request to create a thesaurus.
     * Multiple calls to the <code>CreateThesaurus</code> API with the same client
     * token will create only one thesaurus. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify the request to create a thesaurus.
     * Multiple calls to the <code>CreateThesaurus</code> API with the same client
     * token will create only one thesaurus. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify the request to create a thesaurus.
     * Multiple calls to the <code>CreateThesaurus</code> API with the same client
     * token will create only one thesaurus. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify the request to create a thesaurus.
     * Multiple calls to the <code>CreateThesaurus</code> API with the same client
     * token will create only one thesaurus. </p>
     */
    inline CreateThesaurusRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify the request to create a thesaurus.
     * Multiple calls to the <code>CreateThesaurus</code> API with the same client
     * token will create only one thesaurus. </p>
     */
    inline CreateThesaurusRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify the request to create a thesaurus.
     * Multiple calls to the <code>CreateThesaurus</code> API with the same client
     * token will create only one thesaurus. </p>
     */
    inline CreateThesaurusRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    S3Path m_sourceS3Path;
    bool m_sourceS3PathHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
