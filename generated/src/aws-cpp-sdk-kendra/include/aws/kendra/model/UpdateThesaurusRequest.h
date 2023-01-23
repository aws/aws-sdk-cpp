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
  class UpdateThesaurusRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API UpdateThesaurusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateThesaurus"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the thesaurus you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the thesaurus you want to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the thesaurus you want to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the thesaurus you want to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the thesaurus you want to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the thesaurus you want to update.</p>
     */
    inline UpdateThesaurusRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the thesaurus you want to update.</p>
     */
    inline UpdateThesaurusRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the thesaurus you want to update.</p>
     */
    inline UpdateThesaurusRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A new name for the thesaurus.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A new name for the thesaurus.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A new name for the thesaurus.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A new name for the thesaurus.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A new name for the thesaurus.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A new name for the thesaurus.</p>
     */
    inline UpdateThesaurusRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A new name for the thesaurus.</p>
     */
    inline UpdateThesaurusRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A new name for the thesaurus.</p>
     */
    inline UpdateThesaurusRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline UpdateThesaurusRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline UpdateThesaurusRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index for the thesaurus.</p>
     */
    inline UpdateThesaurusRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>A new description for the thesaurus.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new description for the thesaurus.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A new description for the thesaurus.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new description for the thesaurus.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new description for the thesaurus.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new description for the thesaurus.</p>
     */
    inline UpdateThesaurusRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new description for the thesaurus.</p>
     */
    inline UpdateThesaurusRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A new description for the thesaurus.</p>
     */
    inline UpdateThesaurusRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>.</p>
     */
    inline UpdateThesaurusRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>.</p>
     */
    inline UpdateThesaurusRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access thesaurus file
     * specified in <code>SourceS3Path</code>.</p>
     */
    inline UpdateThesaurusRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const S3Path& GetSourceS3Path() const{ return m_sourceS3Path; }

    
    inline bool SourceS3PathHasBeenSet() const { return m_sourceS3PathHasBeenSet; }

    
    inline void SetSourceS3Path(const S3Path& value) { m_sourceS3PathHasBeenSet = true; m_sourceS3Path = value; }

    
    inline void SetSourceS3Path(S3Path&& value) { m_sourceS3PathHasBeenSet = true; m_sourceS3Path = std::move(value); }

    
    inline UpdateThesaurusRequest& WithSourceS3Path(const S3Path& value) { SetSourceS3Path(value); return *this;}

    
    inline UpdateThesaurusRequest& WithSourceS3Path(S3Path&& value) { SetSourceS3Path(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    S3Path m_sourceS3Path;
    bool m_sourceS3PathHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
