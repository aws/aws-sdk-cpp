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
    AWS_APPSTREAM_API AppBlock();
    AWS_APPSTREAM_API AppBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API AppBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the app block.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the app block.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the app block.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the app block.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the app block.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the app block.</p>
     */
    inline AppBlock& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the app block.</p>
     */
    inline AppBlock& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the app block.</p>
     */
    inline AppBlock& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the app block.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline AppBlock& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the app block.</p>
     */
    inline AppBlock& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the app block.</p>
     */
    inline AppBlock& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The description of the app block.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the app block.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the app block.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the app block.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the app block.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the app block.</p>
     */
    inline AppBlock& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the app block.</p>
     */
    inline AppBlock& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the app block.</p>
     */
    inline AppBlock& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The display name of the app block.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the app block.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the app block.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the app block.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the app block.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the app block.</p>
     */
    inline AppBlock& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the app block.</p>
     */
    inline AppBlock& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the app block.</p>
     */
    inline AppBlock& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The source S3 location of the app block.</p>
     */
    inline const S3Location& GetSourceS3Location() const{ return m_sourceS3Location; }

    /**
     * <p>The source S3 location of the app block.</p>
     */
    inline bool SourceS3LocationHasBeenSet() const { return m_sourceS3LocationHasBeenSet; }

    /**
     * <p>The source S3 location of the app block.</p>
     */
    inline void SetSourceS3Location(const S3Location& value) { m_sourceS3LocationHasBeenSet = true; m_sourceS3Location = value; }

    /**
     * <p>The source S3 location of the app block.</p>
     */
    inline void SetSourceS3Location(S3Location&& value) { m_sourceS3LocationHasBeenSet = true; m_sourceS3Location = std::move(value); }

    /**
     * <p>The source S3 location of the app block.</p>
     */
    inline AppBlock& WithSourceS3Location(const S3Location& value) { SetSourceS3Location(value); return *this;}

    /**
     * <p>The source S3 location of the app block.</p>
     */
    inline AppBlock& WithSourceS3Location(S3Location&& value) { SetSourceS3Location(std::move(value)); return *this;}


    /**
     * <p>The setup script details of the app block.</p> <p>This only applies to app
     * blocks with PackagingType <code>CUSTOM</code>.</p>
     */
    inline const ScriptDetails& GetSetupScriptDetails() const{ return m_setupScriptDetails; }

    /**
     * <p>The setup script details of the app block.</p> <p>This only applies to app
     * blocks with PackagingType <code>CUSTOM</code>.</p>
     */
    inline bool SetupScriptDetailsHasBeenSet() const { return m_setupScriptDetailsHasBeenSet; }

    /**
     * <p>The setup script details of the app block.</p> <p>This only applies to app
     * blocks with PackagingType <code>CUSTOM</code>.</p>
     */
    inline void SetSetupScriptDetails(const ScriptDetails& value) { m_setupScriptDetailsHasBeenSet = true; m_setupScriptDetails = value; }

    /**
     * <p>The setup script details of the app block.</p> <p>This only applies to app
     * blocks with PackagingType <code>CUSTOM</code>.</p>
     */
    inline void SetSetupScriptDetails(ScriptDetails&& value) { m_setupScriptDetailsHasBeenSet = true; m_setupScriptDetails = std::move(value); }

    /**
     * <p>The setup script details of the app block.</p> <p>This only applies to app
     * blocks with PackagingType <code>CUSTOM</code>.</p>
     */
    inline AppBlock& WithSetupScriptDetails(const ScriptDetails& value) { SetSetupScriptDetails(value); return *this;}

    /**
     * <p>The setup script details of the app block.</p> <p>This only applies to app
     * blocks with PackagingType <code>CUSTOM</code>.</p>
     */
    inline AppBlock& WithSetupScriptDetails(ScriptDetails&& value) { SetSetupScriptDetails(std::move(value)); return *this;}


    /**
     * <p>The created time of the app block.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The created time of the app block.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The created time of the app block.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The created time of the app block.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The created time of the app block.</p>
     */
    inline AppBlock& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The created time of the app block.</p>
     */
    inline AppBlock& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The post setup script details of the app block.</p> <p>This only applies to
     * app blocks with PackagingType <code>APPSTREAM2</code>.</p>
     */
    inline const ScriptDetails& GetPostSetupScriptDetails() const{ return m_postSetupScriptDetails; }

    /**
     * <p>The post setup script details of the app block.</p> <p>This only applies to
     * app blocks with PackagingType <code>APPSTREAM2</code>.</p>
     */
    inline bool PostSetupScriptDetailsHasBeenSet() const { return m_postSetupScriptDetailsHasBeenSet; }

    /**
     * <p>The post setup script details of the app block.</p> <p>This only applies to
     * app blocks with PackagingType <code>APPSTREAM2</code>.</p>
     */
    inline void SetPostSetupScriptDetails(const ScriptDetails& value) { m_postSetupScriptDetailsHasBeenSet = true; m_postSetupScriptDetails = value; }

    /**
     * <p>The post setup script details of the app block.</p> <p>This only applies to
     * app blocks with PackagingType <code>APPSTREAM2</code>.</p>
     */
    inline void SetPostSetupScriptDetails(ScriptDetails&& value) { m_postSetupScriptDetailsHasBeenSet = true; m_postSetupScriptDetails = std::move(value); }

    /**
     * <p>The post setup script details of the app block.</p> <p>This only applies to
     * app blocks with PackagingType <code>APPSTREAM2</code>.</p>
     */
    inline AppBlock& WithPostSetupScriptDetails(const ScriptDetails& value) { SetPostSetupScriptDetails(value); return *this;}

    /**
     * <p>The post setup script details of the app block.</p> <p>This only applies to
     * app blocks with PackagingType <code>APPSTREAM2</code>.</p>
     */
    inline AppBlock& WithPostSetupScriptDetails(ScriptDetails&& value) { SetPostSetupScriptDetails(std::move(value)); return *this;}


    /**
     * <p>The packaging type of the app block.</p>
     */
    inline const PackagingType& GetPackagingType() const{ return m_packagingType; }

    /**
     * <p>The packaging type of the app block.</p>
     */
    inline bool PackagingTypeHasBeenSet() const { return m_packagingTypeHasBeenSet; }

    /**
     * <p>The packaging type of the app block.</p>
     */
    inline void SetPackagingType(const PackagingType& value) { m_packagingTypeHasBeenSet = true; m_packagingType = value; }

    /**
     * <p>The packaging type of the app block.</p>
     */
    inline void SetPackagingType(PackagingType&& value) { m_packagingTypeHasBeenSet = true; m_packagingType = std::move(value); }

    /**
     * <p>The packaging type of the app block.</p>
     */
    inline AppBlock& WithPackagingType(const PackagingType& value) { SetPackagingType(value); return *this;}

    /**
     * <p>The packaging type of the app block.</p>
     */
    inline AppBlock& WithPackagingType(PackagingType&& value) { SetPackagingType(std::move(value)); return *this;}


    /**
     * <p>The state of the app block.</p> <p>An app block with AppStream 2.0 packaging
     * will be in the <code>INACTIVE</code> state if no application package (VHD) is
     * assigned to it. After an application package (VHD) is created by an app block
     * builder for an app block, it becomes <code>ACTIVE</code>. </p> <p>Custom app
     * blocks are always in the <code>ACTIVE</code> state and no action is required to
     * use them.</p>
     */
    inline const AppBlockState& GetState() const{ return m_state; }

    /**
     * <p>The state of the app block.</p> <p>An app block with AppStream 2.0 packaging
     * will be in the <code>INACTIVE</code> state if no application package (VHD) is
     * assigned to it. After an application package (VHD) is created by an app block
     * builder for an app block, it becomes <code>ACTIVE</code>. </p> <p>Custom app
     * blocks are always in the <code>ACTIVE</code> state and no action is required to
     * use them.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the app block.</p> <p>An app block with AppStream 2.0 packaging
     * will be in the <code>INACTIVE</code> state if no application package (VHD) is
     * assigned to it. After an application package (VHD) is created by an app block
     * builder for an app block, it becomes <code>ACTIVE</code>. </p> <p>Custom app
     * blocks are always in the <code>ACTIVE</code> state and no action is required to
     * use them.</p>
     */
    inline void SetState(const AppBlockState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the app block.</p> <p>An app block with AppStream 2.0 packaging
     * will be in the <code>INACTIVE</code> state if no application package (VHD) is
     * assigned to it. After an application package (VHD) is created by an app block
     * builder for an app block, it becomes <code>ACTIVE</code>. </p> <p>Custom app
     * blocks are always in the <code>ACTIVE</code> state and no action is required to
     * use them.</p>
     */
    inline void SetState(AppBlockState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the app block.</p> <p>An app block with AppStream 2.0 packaging
     * will be in the <code>INACTIVE</code> state if no application package (VHD) is
     * assigned to it. After an application package (VHD) is created by an app block
     * builder for an app block, it becomes <code>ACTIVE</code>. </p> <p>Custom app
     * blocks are always in the <code>ACTIVE</code> state and no action is required to
     * use them.</p>
     */
    inline AppBlock& WithState(const AppBlockState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the app block.</p> <p>An app block with AppStream 2.0 packaging
     * will be in the <code>INACTIVE</code> state if no application package (VHD) is
     * assigned to it. After an application package (VHD) is created by an app block
     * builder for an app block, it becomes <code>ACTIVE</code>. </p> <p>Custom app
     * blocks are always in the <code>ACTIVE</code> state and no action is required to
     * use them.</p>
     */
    inline AppBlock& WithState(AppBlockState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The errors of the app block.</p>
     */
    inline const Aws::Vector<ErrorDetails>& GetAppBlockErrors() const{ return m_appBlockErrors; }

    /**
     * <p>The errors of the app block.</p>
     */
    inline bool AppBlockErrorsHasBeenSet() const { return m_appBlockErrorsHasBeenSet; }

    /**
     * <p>The errors of the app block.</p>
     */
    inline void SetAppBlockErrors(const Aws::Vector<ErrorDetails>& value) { m_appBlockErrorsHasBeenSet = true; m_appBlockErrors = value; }

    /**
     * <p>The errors of the app block.</p>
     */
    inline void SetAppBlockErrors(Aws::Vector<ErrorDetails>&& value) { m_appBlockErrorsHasBeenSet = true; m_appBlockErrors = std::move(value); }

    /**
     * <p>The errors of the app block.</p>
     */
    inline AppBlock& WithAppBlockErrors(const Aws::Vector<ErrorDetails>& value) { SetAppBlockErrors(value); return *this;}

    /**
     * <p>The errors of the app block.</p>
     */
    inline AppBlock& WithAppBlockErrors(Aws::Vector<ErrorDetails>&& value) { SetAppBlockErrors(std::move(value)); return *this;}

    /**
     * <p>The errors of the app block.</p>
     */
    inline AppBlock& AddAppBlockErrors(const ErrorDetails& value) { m_appBlockErrorsHasBeenSet = true; m_appBlockErrors.push_back(value); return *this; }

    /**
     * <p>The errors of the app block.</p>
     */
    inline AppBlock& AddAppBlockErrors(ErrorDetails&& value) { m_appBlockErrorsHasBeenSet = true; m_appBlockErrors.push_back(std::move(value)); return *this; }

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

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    ScriptDetails m_postSetupScriptDetails;
    bool m_postSetupScriptDetailsHasBeenSet = false;

    PackagingType m_packagingType;
    bool m_packagingTypeHasBeenSet = false;

    AppBlockState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<ErrorDetails> m_appBlockErrors;
    bool m_appBlockErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
