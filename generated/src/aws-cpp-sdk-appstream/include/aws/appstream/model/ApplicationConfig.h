/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>Configuration for an application in the imported image's application catalog.
 * This structure defines how applications appear and launch for
 * users.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ApplicationConfig">AWS
 * API Reference</a></p>
 */
class ApplicationConfig {
 public:
  AWS_APPSTREAM_API ApplicationConfig() = default;
  AWS_APPSTREAM_API ApplicationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API ApplicationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the application. This is a required field that must be unique
   * within the application catalog and between 1-100 characters, matching the
   * pattern ^[a-zA-Z0-9][a-zA-Z0-9_.-]{0,99}$.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ApplicationConfig& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name shown to users for this application. This field is optional
   * and can be 0-100 characters, matching the pattern ^[a-zA-Z0-9][a-zA-Z0-9_.
   * -]{0,99}$.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  ApplicationConfig& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The absolute path to the executable file that launches the application. This
   * is a required field that can be 1-32767 characters to support Windows extended
   * file paths. Use escaped file path strings like
   * "C:\\\\Windows\\\\System32\\\\notepad.exe".</p>
   */
  inline const Aws::String& GetAbsoluteAppPath() const { return m_absoluteAppPath; }
  inline bool AbsoluteAppPathHasBeenSet() const { return m_absoluteAppPathHasBeenSet; }
  template <typename AbsoluteAppPathT = Aws::String>
  void SetAbsoluteAppPath(AbsoluteAppPathT&& value) {
    m_absoluteAppPathHasBeenSet = true;
    m_absoluteAppPath = std::forward<AbsoluteAppPathT>(value);
  }
  template <typename AbsoluteAppPathT = Aws::String>
  ApplicationConfig& WithAbsoluteAppPath(AbsoluteAppPathT&& value) {
    SetAbsoluteAppPath(std::forward<AbsoluteAppPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The absolute path to the icon file for the application. This field is
   * optional and can be 1-32767 characters. If not provided, the icon is derived
   * from the executable. Use PNG images with proper transparency for the best user
   * experience.</p>
   */
  inline const Aws::String& GetAbsoluteIconPath() const { return m_absoluteIconPath; }
  inline bool AbsoluteIconPathHasBeenSet() const { return m_absoluteIconPathHasBeenSet; }
  template <typename AbsoluteIconPathT = Aws::String>
  void SetAbsoluteIconPath(AbsoluteIconPathT&& value) {
    m_absoluteIconPathHasBeenSet = true;
    m_absoluteIconPath = std::forward<AbsoluteIconPathT>(value);
  }
  template <typename AbsoluteIconPathT = Aws::String>
  ApplicationConfig& WithAbsoluteIconPath(AbsoluteIconPathT&& value) {
    SetAbsoluteIconPath(std::forward<AbsoluteIconPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The absolute path to the prewarm manifest file for this application. This
   * field is optional and only applicable when using application-specific manifests.
   * The path can be 1-32767 characters and should point to a text file containing
   * file paths to prewarm.</p>
   */
  inline const Aws::String& GetAbsoluteManifestPath() const { return m_absoluteManifestPath; }
  inline bool AbsoluteManifestPathHasBeenSet() const { return m_absoluteManifestPathHasBeenSet; }
  template <typename AbsoluteManifestPathT = Aws::String>
  void SetAbsoluteManifestPath(AbsoluteManifestPathT&& value) {
    m_absoluteManifestPathHasBeenSet = true;
    m_absoluteManifestPath = std::forward<AbsoluteManifestPathT>(value);
  }
  template <typename AbsoluteManifestPathT = Aws::String>
  ApplicationConfig& WithAbsoluteManifestPath(AbsoluteManifestPathT&& value) {
    SetAbsoluteManifestPath(std::forward<AbsoluteManifestPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The working directory to use when launching the application. This field is
   * optional and can be 0-32767 characters. Use escaped file path strings like
   * "C:\\\\Path\\\\To\\\\Working\\\\Directory".</p>
   */
  inline const Aws::String& GetWorkingDirectory() const { return m_workingDirectory; }
  inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }
  template <typename WorkingDirectoryT = Aws::String>
  void SetWorkingDirectory(WorkingDirectoryT&& value) {
    m_workingDirectoryHasBeenSet = true;
    m_workingDirectory = std::forward<WorkingDirectoryT>(value);
  }
  template <typename WorkingDirectoryT = Aws::String>
  ApplicationConfig& WithWorkingDirectory(WorkingDirectoryT&& value) {
    SetWorkingDirectory(std::forward<WorkingDirectoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The launch parameters to pass to the application executable. This field is
   * optional and can be 0-1024 characters. Use escaped strings with the full list of
   * required parameters, such as PowerShell script paths or command-line
   * arguments.</p>
   */
  inline const Aws::String& GetLaunchParameters() const { return m_launchParameters; }
  inline bool LaunchParametersHasBeenSet() const { return m_launchParametersHasBeenSet; }
  template <typename LaunchParametersT = Aws::String>
  void SetLaunchParameters(LaunchParametersT&& value) {
    m_launchParametersHasBeenSet = true;
    m_launchParameters = std::forward<LaunchParametersT>(value);
  }
  template <typename LaunchParametersT = Aws::String>
  ApplicationConfig& WithLaunchParameters(LaunchParametersT&& value) {
    SetLaunchParameters(std::forward<LaunchParametersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_displayName;
  bool m_displayNameHasBeenSet = false;

  Aws::String m_absoluteAppPath;
  bool m_absoluteAppPathHasBeenSet = false;

  Aws::String m_absoluteIconPath;
  bool m_absoluteIconPathHasBeenSet = false;

  Aws::String m_absoluteManifestPath;
  bool m_absoluteManifestPathHasBeenSet = false;

  Aws::String m_workingDirectory;
  bool m_workingDirectoryHasBeenSet = false;

  Aws::String m_launchParameters;
  bool m_launchParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
