/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/S3Location.h>
#include <aws/appstream/model/ScriptDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appstream/model/PackagingType.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class CreateAppBlockRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API CreateAppBlockRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAppBlock"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the app block.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateAppBlockRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAppBlockRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAppBlockRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the app block.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateAppBlockRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateAppBlockRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateAppBlockRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the app block. This is not displayed to the user.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateAppBlockRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateAppBlockRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateAppBlockRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source S3 location of the app block.</p>
     */
    inline const S3Location& GetSourceS3Location() const{ return m_sourceS3Location; }
    inline bool SourceS3LocationHasBeenSet() const { return m_sourceS3LocationHasBeenSet; }
    inline void SetSourceS3Location(const S3Location& value) { m_sourceS3LocationHasBeenSet = true; m_sourceS3Location = value; }
    inline void SetSourceS3Location(S3Location&& value) { m_sourceS3LocationHasBeenSet = true; m_sourceS3Location = std::move(value); }
    inline CreateAppBlockRequest& WithSourceS3Location(const S3Location& value) { SetSourceS3Location(value); return *this;}
    inline CreateAppBlockRequest& WithSourceS3Location(S3Location&& value) { SetSourceS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The setup script details of the app block. This must be provided for the
     * <code>CUSTOM</code> PackagingType.</p>
     */
    inline const ScriptDetails& GetSetupScriptDetails() const{ return m_setupScriptDetails; }
    inline bool SetupScriptDetailsHasBeenSet() const { return m_setupScriptDetailsHasBeenSet; }
    inline void SetSetupScriptDetails(const ScriptDetails& value) { m_setupScriptDetailsHasBeenSet = true; m_setupScriptDetails = value; }
    inline void SetSetupScriptDetails(ScriptDetails&& value) { m_setupScriptDetailsHasBeenSet = true; m_setupScriptDetails = std::move(value); }
    inline CreateAppBlockRequest& WithSetupScriptDetails(const ScriptDetails& value) { SetSetupScriptDetails(value); return *this;}
    inline CreateAppBlockRequest& WithSetupScriptDetails(ScriptDetails&& value) { SetSetupScriptDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the app block.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateAppBlockRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateAppBlockRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAppBlockRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateAppBlockRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAppBlockRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAppBlockRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateAppBlockRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAppBlockRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAppBlockRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The post setup script details of the app block. This can only be provided for
     * the <code>APPSTREAM2</code> PackagingType.</p>
     */
    inline const ScriptDetails& GetPostSetupScriptDetails() const{ return m_postSetupScriptDetails; }
    inline bool PostSetupScriptDetailsHasBeenSet() const { return m_postSetupScriptDetailsHasBeenSet; }
    inline void SetPostSetupScriptDetails(const ScriptDetails& value) { m_postSetupScriptDetailsHasBeenSet = true; m_postSetupScriptDetails = value; }
    inline void SetPostSetupScriptDetails(ScriptDetails&& value) { m_postSetupScriptDetailsHasBeenSet = true; m_postSetupScriptDetails = std::move(value); }
    inline CreateAppBlockRequest& WithPostSetupScriptDetails(const ScriptDetails& value) { SetPostSetupScriptDetails(value); return *this;}
    inline CreateAppBlockRequest& WithPostSetupScriptDetails(ScriptDetails&& value) { SetPostSetupScriptDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The packaging type of the app block.</p>
     */
    inline const PackagingType& GetPackagingType() const{ return m_packagingType; }
    inline bool PackagingTypeHasBeenSet() const { return m_packagingTypeHasBeenSet; }
    inline void SetPackagingType(const PackagingType& value) { m_packagingTypeHasBeenSet = true; m_packagingType = value; }
    inline void SetPackagingType(PackagingType&& value) { m_packagingTypeHasBeenSet = true; m_packagingType = std::move(value); }
    inline CreateAppBlockRequest& WithPackagingType(const PackagingType& value) { SetPackagingType(value); return *this;}
    inline CreateAppBlockRequest& WithPackagingType(PackagingType&& value) { SetPackagingType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    S3Location m_sourceS3Location;
    bool m_sourceS3LocationHasBeenSet = false;

    ScriptDetails m_setupScriptDetails;
    bool m_setupScriptDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ScriptDetails m_postSetupScriptDetails;
    bool m_postSetupScriptDetailsHasBeenSet = false;

    PackagingType m_packagingType;
    bool m_packagingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
