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
   * <p>The configuration for HLS content. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/HlsConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API HlsConfiguration
  {
  public:
    HlsConfiguration();
    HlsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    HlsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL that is used to initiate a playback session for devices that support
     * Apple HLS. The session uses server-side reporting.</p>
     */
    inline const Aws::String& GetManifestEndpointPrefix() const{ return m_manifestEndpointPrefix; }

    /**
     * <p>The URL that is used to initiate a playback session for devices that support
     * Apple HLS. The session uses server-side reporting.</p>
     */
    inline bool ManifestEndpointPrefixHasBeenSet() const { return m_manifestEndpointPrefixHasBeenSet; }

    /**
     * <p>The URL that is used to initiate a playback session for devices that support
     * Apple HLS. The session uses server-side reporting.</p>
     */
    inline void SetManifestEndpointPrefix(const Aws::String& value) { m_manifestEndpointPrefixHasBeenSet = true; m_manifestEndpointPrefix = value; }

    /**
     * <p>The URL that is used to initiate a playback session for devices that support
     * Apple HLS. The session uses server-side reporting.</p>
     */
    inline void SetManifestEndpointPrefix(Aws::String&& value) { m_manifestEndpointPrefixHasBeenSet = true; m_manifestEndpointPrefix = std::move(value); }

    /**
     * <p>The URL that is used to initiate a playback session for devices that support
     * Apple HLS. The session uses server-side reporting.</p>
     */
    inline void SetManifestEndpointPrefix(const char* value) { m_manifestEndpointPrefixHasBeenSet = true; m_manifestEndpointPrefix.assign(value); }

    /**
     * <p>The URL that is used to initiate a playback session for devices that support
     * Apple HLS. The session uses server-side reporting.</p>
     */
    inline HlsConfiguration& WithManifestEndpointPrefix(const Aws::String& value) { SetManifestEndpointPrefix(value); return *this;}

    /**
     * <p>The URL that is used to initiate a playback session for devices that support
     * Apple HLS. The session uses server-side reporting.</p>
     */
    inline HlsConfiguration& WithManifestEndpointPrefix(Aws::String&& value) { SetManifestEndpointPrefix(std::move(value)); return *this;}

    /**
     * <p>The URL that is used to initiate a playback session for devices that support
     * Apple HLS. The session uses server-side reporting.</p>
     */
    inline HlsConfiguration& WithManifestEndpointPrefix(const char* value) { SetManifestEndpointPrefix(value); return *this;}

  private:

    Aws::String m_manifestEndpointPrefix;
    bool m_manifestEndpointPrefixHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
