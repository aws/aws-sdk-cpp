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
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mobile/model/Platform.h>
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
namespace Mobile
{
namespace Model
{

  /**
   * <p> The details of the bundle. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/BundleDetails">AWS
   * API Reference</a></p>
   */
  class AWS_MOBILE_API BundleDetails
  {
  public:
    BundleDetails();
    BundleDetails(Aws::Utils::Json::JsonView jsonValue);
    BundleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    
    inline BundleDetails& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    
    inline BundleDetails& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    
    inline BundleDetails& WithBundleId(const char* value) { SetBundleId(value); return *this;}


    
    inline const Aws::String& GetTitle() const{ return m_title; }

    
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    
    inline BundleDetails& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    
    inline BundleDetails& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    
    inline BundleDetails& WithTitle(const char* value) { SetTitle(value); return *this;}


    
    inline const Aws::String& GetVersion() const{ return m_version; }

    
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    
    inline BundleDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    
    inline BundleDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    
    inline BundleDetails& WithVersion(const char* value) { SetVersion(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline BundleDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline BundleDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline BundleDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetIconUrl() const{ return m_iconUrl; }

    
    inline bool IconUrlHasBeenSet() const { return m_iconUrlHasBeenSet; }

    
    inline void SetIconUrl(const Aws::String& value) { m_iconUrlHasBeenSet = true; m_iconUrl = value; }

    
    inline void SetIconUrl(Aws::String&& value) { m_iconUrlHasBeenSet = true; m_iconUrl = std::move(value); }

    
    inline void SetIconUrl(const char* value) { m_iconUrlHasBeenSet = true; m_iconUrl.assign(value); }

    
    inline BundleDetails& WithIconUrl(const Aws::String& value) { SetIconUrl(value); return *this;}

    
    inline BundleDetails& WithIconUrl(Aws::String&& value) { SetIconUrl(std::move(value)); return *this;}

    
    inline BundleDetails& WithIconUrl(const char* value) { SetIconUrl(value); return *this;}


    
    inline const Aws::Vector<Platform>& GetAvailablePlatforms() const{ return m_availablePlatforms; }

    
    inline bool AvailablePlatformsHasBeenSet() const { return m_availablePlatformsHasBeenSet; }

    
    inline void SetAvailablePlatforms(const Aws::Vector<Platform>& value) { m_availablePlatformsHasBeenSet = true; m_availablePlatforms = value; }

    
    inline void SetAvailablePlatforms(Aws::Vector<Platform>&& value) { m_availablePlatformsHasBeenSet = true; m_availablePlatforms = std::move(value); }

    
    inline BundleDetails& WithAvailablePlatforms(const Aws::Vector<Platform>& value) { SetAvailablePlatforms(value); return *this;}

    
    inline BundleDetails& WithAvailablePlatforms(Aws::Vector<Platform>&& value) { SetAvailablePlatforms(std::move(value)); return *this;}

    
    inline BundleDetails& AddAvailablePlatforms(const Platform& value) { m_availablePlatformsHasBeenSet = true; m_availablePlatforms.push_back(value); return *this; }

    
    inline BundleDetails& AddAvailablePlatforms(Platform&& value) { m_availablePlatformsHasBeenSet = true; m_availablePlatforms.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_iconUrl;
    bool m_iconUrlHasBeenSet;

    Aws::Vector<Platform> m_availablePlatforms;
    bool m_availablePlatformsHasBeenSet;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
