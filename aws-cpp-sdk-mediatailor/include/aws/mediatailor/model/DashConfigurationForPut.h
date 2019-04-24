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
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/OriginManifestType.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The configuration for DASH PUT operations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DashConfigurationForPut">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API DashConfigurationForPut
  {
  public:
    DashConfigurationForPut();
    DashConfigurationForPut(Aws::Utils::Json::JsonView jsonValue);
    DashConfigurationForPut& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default value.
     * </p>
     */
    inline const Aws::String& GetMpdLocation() const{ return m_mpdLocation; }

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default value.
     * </p>
     */
    inline bool MpdLocationHasBeenSet() const { return m_mpdLocationHasBeenSet; }

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default value.
     * </p>
     */
    inline void SetMpdLocation(const Aws::String& value) { m_mpdLocationHasBeenSet = true; m_mpdLocation = value; }

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default value.
     * </p>
     */
    inline void SetMpdLocation(Aws::String&& value) { m_mpdLocationHasBeenSet = true; m_mpdLocation = std::move(value); }

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default value.
     * </p>
     */
    inline void SetMpdLocation(const char* value) { m_mpdLocationHasBeenSet = true; m_mpdLocation.assign(value); }

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default value.
     * </p>
     */
    inline DashConfigurationForPut& WithMpdLocation(const Aws::String& value) { SetMpdLocation(value); return *this;}

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default value.
     * </p>
     */
    inline DashConfigurationForPut& WithMpdLocation(Aws::String&& value) { SetMpdLocation(std::move(value)); return *this;}

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default value.
     * </p>
     */
    inline DashConfigurationForPut& WithMpdLocation(const char* value) { SetMpdLocation(value); return *this;}


    /**
     * <p>The setting that controls whether MediaTailor handles manifests from the
     * origin server as multi-period manifests or single-period manifests. If your
     * origin server produces single-period manifests, set this to SINGLE_PERIOD. The
     * default setting is MULTI_PERIOD. For multi-period manifests, omit this setting
     * or set it to MULTI_PERIOD. </p>
     */
    inline const OriginManifestType& GetOriginManifestType() const{ return m_originManifestType; }

    /**
     * <p>The setting that controls whether MediaTailor handles manifests from the
     * origin server as multi-period manifests or single-period manifests. If your
     * origin server produces single-period manifests, set this to SINGLE_PERIOD. The
     * default setting is MULTI_PERIOD. For multi-period manifests, omit this setting
     * or set it to MULTI_PERIOD. </p>
     */
    inline bool OriginManifestTypeHasBeenSet() const { return m_originManifestTypeHasBeenSet; }

    /**
     * <p>The setting that controls whether MediaTailor handles manifests from the
     * origin server as multi-period manifests or single-period manifests. If your
     * origin server produces single-period manifests, set this to SINGLE_PERIOD. The
     * default setting is MULTI_PERIOD. For multi-period manifests, omit this setting
     * or set it to MULTI_PERIOD. </p>
     */
    inline void SetOriginManifestType(const OriginManifestType& value) { m_originManifestTypeHasBeenSet = true; m_originManifestType = value; }

    /**
     * <p>The setting that controls whether MediaTailor handles manifests from the
     * origin server as multi-period manifests or single-period manifests. If your
     * origin server produces single-period manifests, set this to SINGLE_PERIOD. The
     * default setting is MULTI_PERIOD. For multi-period manifests, omit this setting
     * or set it to MULTI_PERIOD. </p>
     */
    inline void SetOriginManifestType(OriginManifestType&& value) { m_originManifestTypeHasBeenSet = true; m_originManifestType = std::move(value); }

    /**
     * <p>The setting that controls whether MediaTailor handles manifests from the
     * origin server as multi-period manifests or single-period manifests. If your
     * origin server produces single-period manifests, set this to SINGLE_PERIOD. The
     * default setting is MULTI_PERIOD. For multi-period manifests, omit this setting
     * or set it to MULTI_PERIOD. </p>
     */
    inline DashConfigurationForPut& WithOriginManifestType(const OriginManifestType& value) { SetOriginManifestType(value); return *this;}

    /**
     * <p>The setting that controls whether MediaTailor handles manifests from the
     * origin server as multi-period manifests or single-period manifests. If your
     * origin server produces single-period manifests, set this to SINGLE_PERIOD. The
     * default setting is MULTI_PERIOD. For multi-period manifests, omit this setting
     * or set it to MULTI_PERIOD. </p>
     */
    inline DashConfigurationForPut& WithOriginManifestType(OriginManifestType&& value) { SetOriginManifestType(std::move(value)); return *this;}

  private:

    Aws::String m_mpdLocation;
    bool m_mpdLocationHasBeenSet;

    OriginManifestType m_originManifestType;
    bool m_originManifestTypeHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
