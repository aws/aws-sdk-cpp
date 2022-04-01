/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

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
   * <p>HLS playlist configuration parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/HlsPlaylistSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API HlsPlaylistSettings
  {
  public:
    HlsPlaylistSettings();
    HlsPlaylistSettings(Aws::Utils::Json::JsonView jsonValue);
    HlsPlaylistSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total duration (in seconds) of each manifest. Minimum value: 30 seconds.
     * Maximum value: 3600 seconds.</p>
     */
    inline int GetManifestWindowSeconds() const{ return m_manifestWindowSeconds; }

    /**
     * <p>The total duration (in seconds) of each manifest. Minimum value: 30 seconds.
     * Maximum value: 3600 seconds.</p>
     */
    inline bool ManifestWindowSecondsHasBeenSet() const { return m_manifestWindowSecondsHasBeenSet; }

    /**
     * <p>The total duration (in seconds) of each manifest. Minimum value: 30 seconds.
     * Maximum value: 3600 seconds.</p>
     */
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }

    /**
     * <p>The total duration (in seconds) of each manifest. Minimum value: 30 seconds.
     * Maximum value: 3600 seconds.</p>
     */
    inline HlsPlaylistSettings& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}

  private:

    int m_manifestWindowSeconds;
    bool m_manifestWindowSecondsHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
