/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/S3Location.h>
#include <aws/appstream/model/ScriptDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appstream/model/PackagingType.h>
#include <aws/appstream/model/AppBlockState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/ErrorDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes an app block.</p> <p>App blocks are an Amazon AppStream 2.0
   * resource that stores the details about the virtual hard disk in an S3 bucket. It
   * also stores the setup script with details about how to mount the virtual hard
   * disk. The virtual hard disk includes the application binaries and other files
   * necessary to launch your applications. Multiple applications can be assigned to
   * a single app block.</p> <p>This is only supported for Elastic
   * fleets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AppBlock">AWS
   * API Reference</a></p>
   */
  class AppBlock
  {
  public:
    AWS_APPSTREAM_API AppBlock() = default;
    AWS_APPSTREAM_API AppBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API AppBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the app block.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AppBlock& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the app block.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AppBlock& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
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
    AppBlock& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the app block.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    AppBlock& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
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
    AppBlock& WithSourceS3Location(SourceS3LocationT&& value) { SetSourceS3Location(std::forward<SourceS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The setup script details of the app block.</p> <p>This only applies to app
     * blocks with PackagingType <code>CUSTOM</code>.</p>
     */
    inline const ScriptDetails& GetSetupScriptDetails() const { return m_setupScriptDetails; }
    inline bool SetupScriptDetailsHasBeenSet() const { return m_setupScriptDetailsHasBeenSet; }
    template<typename SetupScriptDetailsT = ScriptDetails>
    void SetSetupScriptDetails(SetupScriptDetailsT&& value) { m_setupScriptDetailsHasBeenSet = true; m_setupScriptDetails = std::forward<SetupScriptDetailsT>(value); }
    template<typename SetupScriptDetailsT = ScriptDetails>
    AppBlock& WithSetupScriptDetails(SetupScriptDetailsT&& value) { SetSetupScriptDetails(std::forward<SetupScriptDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The created time of the app block.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    AppBlock& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The post setup script details of the app block.</p> <p>This only applies to
     * app blocks with PackagingType <code>APPSTREAM2</code>.</p>
     */
    inline const ScriptDetails& GetPostSetupScriptDetails() const { return m_postSetupScriptDetails; }
    inline bool PostSetupScriptDetailsHasBeenSet() const { return m_postSetupScriptDetailsHasBeenSet; }
    template<typename PostSetupScriptDetailsT = ScriptDetails>
    void SetPostSetupScriptDetails(PostSetupScriptDetailsT&& value) { m_postSetupScriptDetailsHasBeenSet = true; m_postSetupScriptDetails = std::forward<PostSetupScriptDetailsT>(value); }
    template<typename PostSetupScriptDetailsT = ScriptDetails>
    AppBlock& WithPostSetupScriptDetails(PostSetupScriptDetailsT&& value) { SetPostSetupScriptDetails(std::forward<PostSetupScriptDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The packaging type of the app block.</p>
     */
    inline PackagingType GetPackagingType() const { return m_packagingType; }
    inline bool PackagingTypeHasBeenSet() const { return m_packagingTypeHasBeenSet; }
    inline void SetPackagingType(PackagingType value) { m_packagingTypeHasBeenSet = true; m_packagingType = value; }
    inline AppBlock& WithPackagingType(PackagingType value) { SetPackagingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the app block.</p> <p>An app block with AppStream 2.0 packaging
     * will be in the <code>INACTIVE</code> state if no application package (VHD) is
     * assigned to it. After an application package (VHD) is created by an app block
     * builder for an app block, it becomes <code>ACTIVE</code>. </p> <p>Custom app
     * blocks are always in the <code>ACTIVE</code> state and no action is required to
     * use them.</p>
     */
    inline AppBlockState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AppBlockState value) { m_stateHasBeenSet = true; m_state = value; }
    inline AppBlock& WithState(AppBlockState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The errors of the app block.</p>
     */
    inline const Aws::Vector<ErrorDetails>& GetAppBlockErrors() const { return m_appBlockErrors; }
    inline bool AppBlockErrorsHasBeenSet() const { return m_appBlockErrorsHasBeenSet; }
    template<typename AppBlockErrorsT = Aws::Vector<ErrorDetails>>
    void SetAppBlockErrors(AppBlockErrorsT&& value) { m_appBlockErrorsHasBeenSet = true; m_appBlockErrors = std::forward<AppBlockErrorsT>(value); }
    template<typename AppBlockErrorsT = Aws::Vector<ErrorDetails>>
    AppBlock& WithAppBlockErrors(AppBlockErrorsT&& value) { SetAppBlockErrors(std::forward<AppBlockErrorsT>(value)); return *this;}
    template<typename AppBlockErrorsT = ErrorDetails>
    AppBlock& AddAppBlockErrors(AppBlockErrorsT&& value) { m_appBlockErrorsHasBeenSet = true; m_appBlockErrors.emplace_back(std::forward<AppBlockErrorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    S3Location m_sourceS3Location;
    bool m_sourceS3LocationHasBeenSet = false;

    ScriptDetails m_setupScriptDetails;
    bool m_setupScriptDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    ScriptDetails m_postSetupScriptDetails;
    bool m_postSetupScriptDetailsHasBeenSet = false;

    PackagingType m_packagingType{PackagingType::NOT_SET};
    bool m_packagingTypeHasBeenSet = false;

    AppBlockState m_state{AppBlockState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<ErrorDetails> m_appBlockErrors;
    bool m_appBlockErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
