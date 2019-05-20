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
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * The endpoint URL used to access an Asset using one
   * PackagingConfiguration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/EgressEndpoint">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGEVOD_API EgressEndpoint
  {
  public:
    EgressEndpoint();
    EgressEndpoint(Aws::Utils::Json::JsonView jsonValue);
    EgressEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline const Aws::String& GetPackagingConfigurationId() const{ return m_packagingConfigurationId; }

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline bool PackagingConfigurationIdHasBeenSet() const { return m_packagingConfigurationIdHasBeenSet; }

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline void SetPackagingConfigurationId(const Aws::String& value) { m_packagingConfigurationIdHasBeenSet = true; m_packagingConfigurationId = value; }

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline void SetPackagingConfigurationId(Aws::String&& value) { m_packagingConfigurationIdHasBeenSet = true; m_packagingConfigurationId = std::move(value); }

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline void SetPackagingConfigurationId(const char* value) { m_packagingConfigurationIdHasBeenSet = true; m_packagingConfigurationId.assign(value); }

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline EgressEndpoint& WithPackagingConfigurationId(const Aws::String& value) { SetPackagingConfigurationId(value); return *this;}

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline EgressEndpoint& WithPackagingConfigurationId(Aws::String&& value) { SetPackagingConfigurationId(std::move(value)); return *this;}

    /**
     * The ID of the PackagingConfiguration being applied to the Asset.
     */
    inline EgressEndpoint& WithPackagingConfigurationId(const char* value) { SetPackagingConfigurationId(value); return *this;}


    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline EgressEndpoint& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline EgressEndpoint& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * The URL of the parent manifest for the repackaged Asset.
     */
    inline EgressEndpoint& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_packagingConfigurationId;
    bool m_packagingConfigurationIdHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
