/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/S3Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/ApplicationAttribute.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the application. This name is visible to users when display name
     * is not specified.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application. This name is visible to users when display name
     * is not specified.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the application. This name is visible to users when display name
     * is not specified.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the application. This name is visible to users when display name
     * is not specified.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the application. This name is visible to users when display name
     * is not specified.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the application. This name is visible to users when display name
     * is not specified.</p>
     */
    inline UpdateApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application. This name is visible to users when display name
     * is not specified.</p>
     */
    inline UpdateApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application. This name is visible to users when display name
     * is not specified.</p>
     */
    inline UpdateApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The display name of the application. This name is visible to users in the
     * application catalog.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the application. This name is visible to users in the
     * application catalog.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the application. This name is visible to users in the
     * application catalog.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the application. This name is visible to users in the
     * application catalog.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the application. This name is visible to users in the
     * application catalog.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the application. This name is visible to users in the
     * application catalog.</p>
     */
    inline UpdateApplicationRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the application. This name is visible to users in the
     * application catalog.</p>
     */
    inline UpdateApplicationRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the application. This name is visible to users in the
     * application catalog.</p>
     */
    inline UpdateApplicationRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline UpdateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline UpdateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline UpdateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The icon S3 location of the application.</p>
     */
    inline const S3Location& GetIconS3Location() const{ return m_iconS3Location; }

    /**
     * <p>The icon S3 location of the application.</p>
     */
    inline bool IconS3LocationHasBeenSet() const { return m_iconS3LocationHasBeenSet; }

    /**
     * <p>The icon S3 location of the application.</p>
     */
    inline void SetIconS3Location(const S3Location& value) { m_iconS3LocationHasBeenSet = true; m_iconS3Location = value; }

    /**
     * <p>The icon S3 location of the application.</p>
     */
    inline void SetIconS3Location(S3Location&& value) { m_iconS3LocationHasBeenSet = true; m_iconS3Location = std::move(value); }

    /**
     * <p>The icon S3 location of the application.</p>
     */
    inline UpdateApplicationRequest& WithIconS3Location(const S3Location& value) { SetIconS3Location(value); return *this;}

    /**
     * <p>The icon S3 location of the application.</p>
     */
    inline UpdateApplicationRequest& WithIconS3Location(S3Location&& value) { SetIconS3Location(std::move(value)); return *this;}


    /**
     * <p>The launch path of the application.</p>
     */
    inline const Aws::String& GetLaunchPath() const{ return m_launchPath; }

    /**
     * <p>The launch path of the application.</p>
     */
    inline bool LaunchPathHasBeenSet() const { return m_launchPathHasBeenSet; }

    /**
     * <p>The launch path of the application.</p>
     */
    inline void SetLaunchPath(const Aws::String& value) { m_launchPathHasBeenSet = true; m_launchPath = value; }

    /**
     * <p>The launch path of the application.</p>
     */
    inline void SetLaunchPath(Aws::String&& value) { m_launchPathHasBeenSet = true; m_launchPath = std::move(value); }

    /**
     * <p>The launch path of the application.</p>
     */
    inline void SetLaunchPath(const char* value) { m_launchPathHasBeenSet = true; m_launchPath.assign(value); }

    /**
     * <p>The launch path of the application.</p>
     */
    inline UpdateApplicationRequest& WithLaunchPath(const Aws::String& value) { SetLaunchPath(value); return *this;}

    /**
     * <p>The launch path of the application.</p>
     */
    inline UpdateApplicationRequest& WithLaunchPath(Aws::String&& value) { SetLaunchPath(std::move(value)); return *this;}

    /**
     * <p>The launch path of the application.</p>
     */
    inline UpdateApplicationRequest& WithLaunchPath(const char* value) { SetLaunchPath(value); return *this;}


    /**
     * <p>The working directory of the application.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }

    /**
     * <p>The working directory of the application.</p>
     */
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }

    /**
     * <p>The working directory of the application.</p>
     */
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }

    /**
     * <p>The working directory of the application.</p>
     */
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }

    /**
     * <p>The working directory of the application.</p>
     */
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }

    /**
     * <p>The working directory of the application.</p>
     */
    inline UpdateApplicationRequest& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>The working directory of the application.</p>
     */
    inline UpdateApplicationRequest& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}

    /**
     * <p>The working directory of the application.</p>
     */
    inline UpdateApplicationRequest& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}


    /**
     * <p>The launch parameters of the application.</p>
     */
    inline const Aws::String& GetLaunchParameters() const{ return m_launchParameters; }

    /**
     * <p>The launch parameters of the application.</p>
     */
    inline bool LaunchParametersHasBeenSet() const { return m_launchParametersHasBeenSet; }

    /**
     * <p>The launch parameters of the application.</p>
     */
    inline void SetLaunchParameters(const Aws::String& value) { m_launchParametersHasBeenSet = true; m_launchParameters = value; }

    /**
     * <p>The launch parameters of the application.</p>
     */
    inline void SetLaunchParameters(Aws::String&& value) { m_launchParametersHasBeenSet = true; m_launchParameters = std::move(value); }

    /**
     * <p>The launch parameters of the application.</p>
     */
    inline void SetLaunchParameters(const char* value) { m_launchParametersHasBeenSet = true; m_launchParameters.assign(value); }

    /**
     * <p>The launch parameters of the application.</p>
     */
    inline UpdateApplicationRequest& WithLaunchParameters(const Aws::String& value) { SetLaunchParameters(value); return *this;}

    /**
     * <p>The launch parameters of the application.</p>
     */
    inline UpdateApplicationRequest& WithLaunchParameters(Aws::String&& value) { SetLaunchParameters(std::move(value)); return *this;}

    /**
     * <p>The launch parameters of the application.</p>
     */
    inline UpdateApplicationRequest& WithLaunchParameters(const char* value) { SetLaunchParameters(value); return *this;}


    /**
     * <p>The ARN of the app block.</p>
     */
    inline const Aws::String& GetAppBlockArn() const{ return m_appBlockArn; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline bool AppBlockArnHasBeenSet() const { return m_appBlockArnHasBeenSet; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetAppBlockArn(const Aws::String& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = value; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetAppBlockArn(Aws::String&& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = std::move(value); }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetAppBlockArn(const char* value) { m_appBlockArnHasBeenSet = true; m_appBlockArn.assign(value); }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline UpdateApplicationRequest& WithAppBlockArn(const Aws::String& value) { SetAppBlockArn(value); return *this;}

    /**
     * <p>The ARN of the app block.</p>
     */
    inline UpdateApplicationRequest& WithAppBlockArn(Aws::String&& value) { SetAppBlockArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the app block.</p>
     */
    inline UpdateApplicationRequest& WithAppBlockArn(const char* value) { SetAppBlockArn(value); return *this;}


    /**
     * <p>The attributes to delete for an application.</p>
     */
    inline const Aws::Vector<ApplicationAttribute>& GetAttributesToDelete() const{ return m_attributesToDelete; }

    /**
     * <p>The attributes to delete for an application.</p>
     */
    inline bool AttributesToDeleteHasBeenSet() const { return m_attributesToDeleteHasBeenSet; }

    /**
     * <p>The attributes to delete for an application.</p>
     */
    inline void SetAttributesToDelete(const Aws::Vector<ApplicationAttribute>& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete = value; }

    /**
     * <p>The attributes to delete for an application.</p>
     */
    inline void SetAttributesToDelete(Aws::Vector<ApplicationAttribute>&& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete = std::move(value); }

    /**
     * <p>The attributes to delete for an application.</p>
     */
    inline UpdateApplicationRequest& WithAttributesToDelete(const Aws::Vector<ApplicationAttribute>& value) { SetAttributesToDelete(value); return *this;}

    /**
     * <p>The attributes to delete for an application.</p>
     */
    inline UpdateApplicationRequest& WithAttributesToDelete(Aws::Vector<ApplicationAttribute>&& value) { SetAttributesToDelete(std::move(value)); return *this;}

    /**
     * <p>The attributes to delete for an application.</p>
     */
    inline UpdateApplicationRequest& AddAttributesToDelete(const ApplicationAttribute& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete.push_back(value); return *this; }

    /**
     * <p>The attributes to delete for an application.</p>
     */
    inline UpdateApplicationRequest& AddAttributesToDelete(ApplicationAttribute&& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    S3Location m_iconS3Location;
    bool m_iconS3LocationHasBeenSet = false;

    Aws::String m_launchPath;
    bool m_launchPathHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    Aws::String m_launchParameters;
    bool m_launchParametersHasBeenSet = false;

    Aws::String m_appBlockArn;
    bool m_appBlockArnHasBeenSet = false;

    Aws::Vector<ApplicationAttribute> m_attributesToDelete;
    bool m_attributesToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
