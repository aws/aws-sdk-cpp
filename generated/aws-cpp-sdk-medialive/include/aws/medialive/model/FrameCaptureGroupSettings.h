/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/OutputLocationRef.h>
#include <aws/medialive/model/FrameCaptureCdnSettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Frame Capture Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FrameCaptureGroupSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API FrameCaptureGroupSettings
  {
  public:
    FrameCaptureGroupSettings();
    FrameCaptureGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    FrameCaptureGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The destination for the frame capture files. Either the URI for an Amazon S3
     * bucket and object, plus a file name prefix (for example,
     * s3ssl://sportsDelivery/highlights/20180820/curling-) or the URI for a MediaStore
     * container, plus a file name prefix (for example,
     * mediastoressl://sportsDelivery/20180820/curling-). The final file names consist
     * of the prefix from the destination field (for example, "curling-") + name
     * modifier + the counter (5 digits, starting from 00001) + extension (which is
     * always .jpg).  For example, curling-low.00001.jpg
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }

    /**
     * The destination for the frame capture files. Either the URI for an Amazon S3
     * bucket and object, plus a file name prefix (for example,
     * s3ssl://sportsDelivery/highlights/20180820/curling-) or the URI for a MediaStore
     * container, plus a file name prefix (for example,
     * mediastoressl://sportsDelivery/20180820/curling-). The final file names consist
     * of the prefix from the destination field (for example, "curling-") + name
     * modifier + the counter (5 digits, starting from 00001) + extension (which is
     * always .jpg).  For example, curling-low.00001.jpg
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * The destination for the frame capture files. Either the URI for an Amazon S3
     * bucket and object, plus a file name prefix (for example,
     * s3ssl://sportsDelivery/highlights/20180820/curling-) or the URI for a MediaStore
     * container, plus a file name prefix (for example,
     * mediastoressl://sportsDelivery/20180820/curling-). The final file names consist
     * of the prefix from the destination field (for example, "curling-") + name
     * modifier + the counter (5 digits, starting from 00001) + extension (which is
     * always .jpg).  For example, curling-low.00001.jpg
     */
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * The destination for the frame capture files. Either the URI for an Amazon S3
     * bucket and object, plus a file name prefix (for example,
     * s3ssl://sportsDelivery/highlights/20180820/curling-) or the URI for a MediaStore
     * container, plus a file name prefix (for example,
     * mediastoressl://sportsDelivery/20180820/curling-). The final file names consist
     * of the prefix from the destination field (for example, "curling-") + name
     * modifier + the counter (5 digits, starting from 00001) + extension (which is
     * always .jpg).  For example, curling-low.00001.jpg
     */
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * The destination for the frame capture files. Either the URI for an Amazon S3
     * bucket and object, plus a file name prefix (for example,
     * s3ssl://sportsDelivery/highlights/20180820/curling-) or the URI for a MediaStore
     * container, plus a file name prefix (for example,
     * mediastoressl://sportsDelivery/20180820/curling-). The final file names consist
     * of the prefix from the destination field (for example, "curling-") + name
     * modifier + the counter (5 digits, starting from 00001) + extension (which is
     * always .jpg).  For example, curling-low.00001.jpg
     */
    inline FrameCaptureGroupSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}

    /**
     * The destination for the frame capture files. Either the URI for an Amazon S3
     * bucket and object, plus a file name prefix (for example,
     * s3ssl://sportsDelivery/highlights/20180820/curling-) or the URI for a MediaStore
     * container, plus a file name prefix (for example,
     * mediastoressl://sportsDelivery/20180820/curling-). The final file names consist
     * of the prefix from the destination field (for example, "curling-") + name
     * modifier + the counter (5 digits, starting from 00001) + extension (which is
     * always .jpg).  For example, curling-low.00001.jpg
     */
    inline FrameCaptureGroupSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * Parameters that control interactions with the CDN.
     */
    inline const FrameCaptureCdnSettings& GetFrameCaptureCdnSettings() const{ return m_frameCaptureCdnSettings; }

    /**
     * Parameters that control interactions with the CDN.
     */
    inline bool FrameCaptureCdnSettingsHasBeenSet() const { return m_frameCaptureCdnSettingsHasBeenSet; }

    /**
     * Parameters that control interactions with the CDN.
     */
    inline void SetFrameCaptureCdnSettings(const FrameCaptureCdnSettings& value) { m_frameCaptureCdnSettingsHasBeenSet = true; m_frameCaptureCdnSettings = value; }

    /**
     * Parameters that control interactions with the CDN.
     */
    inline void SetFrameCaptureCdnSettings(FrameCaptureCdnSettings&& value) { m_frameCaptureCdnSettingsHasBeenSet = true; m_frameCaptureCdnSettings = std::move(value); }

    /**
     * Parameters that control interactions with the CDN.
     */
    inline FrameCaptureGroupSettings& WithFrameCaptureCdnSettings(const FrameCaptureCdnSettings& value) { SetFrameCaptureCdnSettings(value); return *this;}

    /**
     * Parameters that control interactions with the CDN.
     */
    inline FrameCaptureGroupSettings& WithFrameCaptureCdnSettings(FrameCaptureCdnSettings&& value) { SetFrameCaptureCdnSettings(std::move(value)); return *this;}

  private:

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet;

    FrameCaptureCdnSettings m_frameCaptureCdnSettings;
    bool m_frameCaptureCdnSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
