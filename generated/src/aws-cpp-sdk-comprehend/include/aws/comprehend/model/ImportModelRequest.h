/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class ImportModelRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API ImportModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportModel"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom model to import.</p>
     */
    inline const Aws::String& GetSourceModelArn() const{ return m_sourceModelArn; }
    inline bool SourceModelArnHasBeenSet() const { return m_sourceModelArnHasBeenSet; }
    inline void SetSourceModelArn(const Aws::String& value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn = value; }
    inline void SetSourceModelArn(Aws::String&& value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn = std::move(value); }
    inline void SetSourceModelArn(const char* value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn.assign(value); }
    inline ImportModelRequest& WithSourceModelArn(const Aws::String& value) { SetSourceModelArn(value); return *this;}
    inline ImportModelRequest& WithSourceModelArn(Aws::String&& value) { SetSourceModelArn(std::move(value)); return *this;}
    inline ImportModelRequest& WithSourceModelArn(const char* value) { SetSourceModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to assign to the custom model that is created in Amazon Comprehend
     * by this import.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline ImportModelRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline ImportModelRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline ImportModelRequest& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version name given to the custom model that is created by this import.
     * Version names can have a maximum of 256 characters. Alphanumeric characters,
     * hyphens (-) and underscores (_) are allowed. The version name must be unique
     * among all models with the same classifier name in the account/Region.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }
    inline ImportModelRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline ImportModelRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline ImportModelRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt trained custom
     * models. The ModelKmsKeyId can be either of the following formats:</p> <ul> <li>
     * <p>KMS Key ID: <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li>
     * <li> <p>Amazon Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetModelKmsKeyId() const{ return m_modelKmsKeyId; }
    inline bool ModelKmsKeyIdHasBeenSet() const { return m_modelKmsKeyIdHasBeenSet; }
    inline void SetModelKmsKeyId(const Aws::String& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = value; }
    inline void SetModelKmsKeyId(Aws::String&& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = std::move(value); }
    inline void SetModelKmsKeyId(const char* value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId.assign(value); }
    inline ImportModelRequest& WithModelKmsKeyId(const Aws::String& value) { SetModelKmsKeyId(value); return *this;}
    inline ImportModelRequest& WithModelKmsKeyId(Aws::String&& value) { SetModelKmsKeyId(std::move(value)); return *this;}
    inline ImportModelRequest& WithModelKmsKeyId(const char* value) { SetModelKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to use Amazon Key Management Service (KMS) to encrypt or decrypt the
     * custom model.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }
    inline ImportModelRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline ImportModelRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline ImportModelRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to associate with the custom model that is created by this import. A tag
     * is a key-value pair that adds as a metadata to a resource used by Amazon
     * Comprehend. For example, a tag with "Sales" as the key might be added to a
     * resource to indicate its use by the sales department.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ImportModelRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ImportModelRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ImportModelRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ImportModelRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceModelArn;
    bool m_sourceModelArnHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_modelKmsKeyId;
    bool m_modelKmsKeyIdHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
