/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Describes an application in the application catalog.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/Application">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API Application
  {
  public:
    Application();
    Application(Aws::Utils::Json::JsonView jsonValue);
    Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The application name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The application name to display.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The application name to display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The application name to display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The application name to display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The application name to display.</p>
     */
    inline Application& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The application name to display.</p>
     */
    inline Application& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The application name to display.</p>
     */
    inline Application& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline const Aws::String& GetIconURL() const{ return m_iconURL; }

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline bool IconURLHasBeenSet() const { return m_iconURLHasBeenSet; }

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline void SetIconURL(const Aws::String& value) { m_iconURLHasBeenSet = true; m_iconURL = value; }

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline void SetIconURL(Aws::String&& value) { m_iconURLHasBeenSet = true; m_iconURL = std::move(value); }

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline void SetIconURL(const char* value) { m_iconURLHasBeenSet = true; m_iconURL.assign(value); }

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline Application& WithIconURL(const Aws::String& value) { SetIconURL(value); return *this;}

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline Application& WithIconURL(Aws::String&& value) { SetIconURL(std::move(value)); return *this;}

    /**
     * <p>The URL for the application icon. This URL might be time-limited.</p>
     */
    inline Application& WithIconURL(const char* value) { SetIconURL(value); return *this;}


    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline const Aws::String& GetLaunchPath() const{ return m_launchPath; }

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline bool LaunchPathHasBeenSet() const { return m_launchPathHasBeenSet; }

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline void SetLaunchPath(const Aws::String& value) { m_launchPathHasBeenSet = true; m_launchPath = value; }

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline void SetLaunchPath(Aws::String&& value) { m_launchPathHasBeenSet = true; m_launchPath = std::move(value); }

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline void SetLaunchPath(const char* value) { m_launchPathHasBeenSet = true; m_launchPath.assign(value); }

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline Application& WithLaunchPath(const Aws::String& value) { SetLaunchPath(value); return *this;}

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline Application& WithLaunchPath(Aws::String&& value) { SetLaunchPath(std::move(value)); return *this;}

    /**
     * <p>The path to the application executable in the instance.</p>
     */
    inline Application& WithLaunchPath(const char* value) { SetLaunchPath(value); return *this;}


    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline const Aws::String& GetLaunchParameters() const{ return m_launchParameters; }

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline bool LaunchParametersHasBeenSet() const { return m_launchParametersHasBeenSet; }

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline void SetLaunchParameters(const Aws::String& value) { m_launchParametersHasBeenSet = true; m_launchParameters = value; }

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline void SetLaunchParameters(Aws::String&& value) { m_launchParametersHasBeenSet = true; m_launchParameters = std::move(value); }

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline void SetLaunchParameters(const char* value) { m_launchParametersHasBeenSet = true; m_launchParameters.assign(value); }

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline Application& WithLaunchParameters(const Aws::String& value) { SetLaunchParameters(value); return *this;}

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline Application& WithLaunchParameters(Aws::String&& value) { SetLaunchParameters(std::move(value)); return *this;}

    /**
     * <p>The arguments that are passed to the application at launch.</p>
     */
    inline Application& WithLaunchParameters(const char* value) { SetLaunchParameters(value); return *this;}


    /**
     * <p>If there is a problem, the application can be disabled after image
     * creation.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>If there is a problem, the application can be disabled after image
     * creation.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>If there is a problem, the application can be disabled after image
     * creation.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>If there is a problem, the application can be disabled after image
     * creation.</p>
     */
    inline Application& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional attributes that describe the application.</p>
     */
    inline Application& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    Aws::String m_iconURL;
    bool m_iconURLHasBeenSet;

    Aws::String m_launchPath;
    bool m_launchPathHasBeenSet;

    Aws::String m_launchParameters;
    bool m_launchParametersHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
