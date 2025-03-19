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
    AWS_APPSTREAM_API UpdateApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the application. This name is visible to users when display name
     * is not specified.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateApplicationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the application. This name is visible to users in the
     * application catalog.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateApplicationRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateApplicationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The icon S3 location of the application.</p>
     */
    inline const S3Location& GetIconS3Location() const { return m_iconS3Location; }
    inline bool IconS3LocationHasBeenSet() const { return m_iconS3LocationHasBeenSet; }
    template<typename IconS3LocationT = S3Location>
    void SetIconS3Location(IconS3LocationT&& value) { m_iconS3LocationHasBeenSet = true; m_iconS3Location = std::forward<IconS3LocationT>(value); }
    template<typename IconS3LocationT = S3Location>
    UpdateApplicationRequest& WithIconS3Location(IconS3LocationT&& value) { SetIconS3Location(std::forward<IconS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch path of the application.</p>
     */
    inline const Aws::String& GetLaunchPath() const { return m_launchPath; }
    inline bool LaunchPathHasBeenSet() const { return m_launchPathHasBeenSet; }
    template<typename LaunchPathT = Aws::String>
    void SetLaunchPath(LaunchPathT&& value) { m_launchPathHasBeenSet = true; m_launchPath = std::forward<LaunchPathT>(value); }
    template<typename LaunchPathT = Aws::String>
    UpdateApplicationRequest& WithLaunchPath(LaunchPathT&& value) { SetLaunchPath(std::forward<LaunchPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The working directory of the application.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const { return m_workingDirectory; }
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }
    template<typename WorkingDirectoryT = Aws::String>
    void SetWorkingDirectory(WorkingDirectoryT&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::forward<WorkingDirectoryT>(value); }
    template<typename WorkingDirectoryT = Aws::String>
    UpdateApplicationRequest& WithWorkingDirectory(WorkingDirectoryT&& value) { SetWorkingDirectory(std::forward<WorkingDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch parameters of the application.</p>
     */
    inline const Aws::String& GetLaunchParameters() const { return m_launchParameters; }
    inline bool LaunchParametersHasBeenSet() const { return m_launchParametersHasBeenSet; }
    template<typename LaunchParametersT = Aws::String>
    void SetLaunchParameters(LaunchParametersT&& value) { m_launchParametersHasBeenSet = true; m_launchParameters = std::forward<LaunchParametersT>(value); }
    template<typename LaunchParametersT = Aws::String>
    UpdateApplicationRequest& WithLaunchParameters(LaunchParametersT&& value) { SetLaunchParameters(std::forward<LaunchParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the app block.</p>
     */
    inline const Aws::String& GetAppBlockArn() const { return m_appBlockArn; }
    inline bool AppBlockArnHasBeenSet() const { return m_appBlockArnHasBeenSet; }
    template<typename AppBlockArnT = Aws::String>
    void SetAppBlockArn(AppBlockArnT&& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = std::forward<AppBlockArnT>(value); }
    template<typename AppBlockArnT = Aws::String>
    UpdateApplicationRequest& WithAppBlockArn(AppBlockArnT&& value) { SetAppBlockArn(std::forward<AppBlockArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes to delete for an application.</p>
     */
    inline const Aws::Vector<ApplicationAttribute>& GetAttributesToDelete() const { return m_attributesToDelete; }
    inline bool AttributesToDeleteHasBeenSet() const { return m_attributesToDeleteHasBeenSet; }
    template<typename AttributesToDeleteT = Aws::Vector<ApplicationAttribute>>
    void SetAttributesToDelete(AttributesToDeleteT&& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete = std::forward<AttributesToDeleteT>(value); }
    template<typename AttributesToDeleteT = Aws::Vector<ApplicationAttribute>>
    UpdateApplicationRequest& WithAttributesToDelete(AttributesToDeleteT&& value) { SetAttributesToDelete(std::forward<AttributesToDeleteT>(value)); return *this;}
    inline UpdateApplicationRequest& AddAttributesToDelete(ApplicationAttribute value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete.push_back(value); return *this; }
    ///@}
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
