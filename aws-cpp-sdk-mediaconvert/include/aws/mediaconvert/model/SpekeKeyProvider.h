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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for use with a SPEKE key provider<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/SpekeKeyProvider">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API SpekeKeyProvider
  {
  public:
    SpekeKeyProvider();
    SpekeKeyProvider(const Aws::Utils::Json::JsonValue& jsonValue);
    SpekeKeyProvider& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The SPEKE-compliant server uses Resource ID (ResourceId) to identify content.
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * The SPEKE-compliant server uses Resource ID (ResourceId) to identify content.
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * The SPEKE-compliant server uses Resource ID (ResourceId) to identify content.
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * The SPEKE-compliant server uses Resource ID (ResourceId) to identify content.
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * The SPEKE-compliant server uses Resource ID (ResourceId) to identify content.
     */
    inline SpekeKeyProvider& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * The SPEKE-compliant server uses Resource ID (ResourceId) to identify content.
     */
    inline SpekeKeyProvider& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * The SPEKE-compliant server uses Resource ID (ResourceId) to identify content.
     */
    inline SpekeKeyProvider& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * Relates to SPEKE implementation. DRM system identifiers. DASH output groups
     * support a max of two system ids. Other group types support one system id.
     */
    inline const Aws::Vector<Aws::String>& GetSystemIds() const{ return m_systemIds; }

    /**
     * Relates to SPEKE implementation. DRM system identifiers. DASH output groups
     * support a max of two system ids. Other group types support one system id.
     */
    inline void SetSystemIds(const Aws::Vector<Aws::String>& value) { m_systemIdsHasBeenSet = true; m_systemIds = value; }

    /**
     * Relates to SPEKE implementation. DRM system identifiers. DASH output groups
     * support a max of two system ids. Other group types support one system id.
     */
    inline void SetSystemIds(Aws::Vector<Aws::String>&& value) { m_systemIdsHasBeenSet = true; m_systemIds = std::move(value); }

    /**
     * Relates to SPEKE implementation. DRM system identifiers. DASH output groups
     * support a max of two system ids. Other group types support one system id.
     */
    inline SpekeKeyProvider& WithSystemIds(const Aws::Vector<Aws::String>& value) { SetSystemIds(value); return *this;}

    /**
     * Relates to SPEKE implementation. DRM system identifiers. DASH output groups
     * support a max of two system ids. Other group types support one system id.
     */
    inline SpekeKeyProvider& WithSystemIds(Aws::Vector<Aws::String>&& value) { SetSystemIds(std::move(value)); return *this;}

    /**
     * Relates to SPEKE implementation. DRM system identifiers. DASH output groups
     * support a max of two system ids. Other group types support one system id.
     */
    inline SpekeKeyProvider& AddSystemIds(const Aws::String& value) { m_systemIdsHasBeenSet = true; m_systemIds.push_back(value); return *this; }

    /**
     * Relates to SPEKE implementation. DRM system identifiers. DASH output groups
     * support a max of two system ids. Other group types support one system id.
     */
    inline SpekeKeyProvider& AddSystemIds(Aws::String&& value) { m_systemIdsHasBeenSet = true; m_systemIds.push_back(std::move(value)); return *this; }

    /**
     * Relates to SPEKE implementation. DRM system identifiers. DASH output groups
     * support a max of two system ids. Other group types support one system id.
     */
    inline SpekeKeyProvider& AddSystemIds(const char* value) { m_systemIdsHasBeenSet = true; m_systemIds.push_back(value); return *this; }


    /**
     * Use URL (Url) to specify the SPEKE-compliant server that will provide keys for
     * content.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * Use URL (Url) to specify the SPEKE-compliant server that will provide keys for
     * content.
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * Use URL (Url) to specify the SPEKE-compliant server that will provide keys for
     * content.
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * Use URL (Url) to specify the SPEKE-compliant server that will provide keys for
     * content.
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * Use URL (Url) to specify the SPEKE-compliant server that will provide keys for
     * content.
     */
    inline SpekeKeyProvider& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * Use URL (Url) to specify the SPEKE-compliant server that will provide keys for
     * content.
     */
    inline SpekeKeyProvider& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * Use URL (Url) to specify the SPEKE-compliant server that will provide keys for
     * content.
     */
    inline SpekeKeyProvider& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::Vector<Aws::String> m_systemIds;
    bool m_systemIdsHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
