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
    AWS_APPSTREAM_API CreateAppBlockRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAppBlockRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the app block.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateAppBlockRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the app block. This is not displayed to the user.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateAppBlockRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source S3 location of the app block.</p>
     */
    inline const S3Location& GetSourceS3Location() const { return m_sourceS3Location; }
    inline bool SourceS3LocationHasBeenSet() const { return m_sourceS3LocationHasBeenSet; }
    template<typename SourceS3LocationT = S3Location>
    void SetSourceS3Location(SourceS3LocationT&& value) { m_sourceS3LocationHasBeenSet = true; m_sourceS3Location = std::forward<SourceS3LocationT>(value); }
    template<typename SourceS3LocationT = S3Location>
    CreateAppBlockRequest& WithSourceS3Location(SourceS3LocationT&& value) { SetSourceS3Location(std::forward<SourceS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The setup script details of the app block. This must be provided for the
     * <code>CUSTOM</code> PackagingType.</p>
     */
    inline const ScriptDetails& GetSetupScriptDetails() const { return m_setupScriptDetails; }
    inline bool SetupScriptDetailsHasBeenSet() const { return m_setupScriptDetailsHasBeenSet; }
    template<typename SetupScriptDetailsT = ScriptDetails>
    void SetSetupScriptDetails(SetupScriptDetailsT&& value) { m_setupScriptDetailsHasBeenSet = true; m_setupScriptDetails = std::forward<SetupScriptDetailsT>(value); }
    template<typename SetupScriptDetailsT = ScriptDetails>
    CreateAppBlockRequest& WithSetupScriptDetails(SetupScriptDetailsT&& value) { SetSetupScriptDetails(std::forward<SetupScriptDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the app block.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateAppBlockRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateAppBlockRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The post setup script details of the app block. This can only be provided for
     * the <code>APPSTREAM2</code> PackagingType.</p>
     */
    inline const ScriptDetails& GetPostSetupScriptDetails() const { return m_postSetupScriptDetails; }
    inline bool PostSetupScriptDetailsHasBeenSet() const { return m_postSetupScriptDetailsHasBeenSet; }
    template<typename PostSetupScriptDetailsT = ScriptDetails>
    void SetPostSetupScriptDetails(PostSetupScriptDetailsT&& value) { m_postSetupScriptDetailsHasBeenSet = true; m_postSetupScriptDetails = std::forward<PostSetupScriptDetailsT>(value); }
    template<typename PostSetupScriptDetailsT = ScriptDetails>
    CreateAppBlockRequest& WithPostSetupScriptDetails(PostSetupScriptDetailsT&& value) { SetPostSetupScriptDetails(std::forward<PostSetupScriptDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The packaging type of the app block.</p>
     */
    inline PackagingType GetPackagingType() const { return m_packagingType; }
    inline bool PackagingTypeHasBeenSet() const { return m_packagingTypeHasBeenSet; }
    inline void SetPackagingType(PackagingType value) { m_packagingTypeHasBeenSet = true; m_packagingType = value; }
    inline CreateAppBlockRequest& WithPackagingType(PackagingType value) { SetPackagingType(value); return *this;}
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

    PackagingType m_packagingType{PackagingType::NOT_SET};
    bool m_packagingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
