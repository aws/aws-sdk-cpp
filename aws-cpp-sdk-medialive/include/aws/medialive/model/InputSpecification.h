/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputCodec.h>
#include <aws/medialive/model/InputMaximumBitrate.h>
#include <aws/medialive/model/InputResolution.h>
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
   * Placeholder documentation for InputSpecification<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputSpecification">AWS
   * API Reference</a></p>
   */
  class InputSpecification
  {
  public:
    AWS_MEDIALIVE_API InputSpecification();
    AWS_MEDIALIVE_API InputSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Input codec
     */
    inline const InputCodec& GetCodec() const{ return m_codec; }

    /**
     * Input codec
     */
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }

    /**
     * Input codec
     */
    inline void SetCodec(const InputCodec& value) { m_codecHasBeenSet = true; m_codec = value; }

    /**
     * Input codec
     */
    inline void SetCodec(InputCodec&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }

    /**
     * Input codec
     */
    inline InputSpecification& WithCodec(const InputCodec& value) { SetCodec(value); return *this;}

    /**
     * Input codec
     */
    inline InputSpecification& WithCodec(InputCodec&& value) { SetCodec(std::move(value)); return *this;}


    /**
     * Maximum input bitrate, categorized coarsely
     */
    inline const InputMaximumBitrate& GetMaximumBitrate() const{ return m_maximumBitrate; }

    /**
     * Maximum input bitrate, categorized coarsely
     */
    inline bool MaximumBitrateHasBeenSet() const { return m_maximumBitrateHasBeenSet; }

    /**
     * Maximum input bitrate, categorized coarsely
     */
    inline void SetMaximumBitrate(const InputMaximumBitrate& value) { m_maximumBitrateHasBeenSet = true; m_maximumBitrate = value; }

    /**
     * Maximum input bitrate, categorized coarsely
     */
    inline void SetMaximumBitrate(InputMaximumBitrate&& value) { m_maximumBitrateHasBeenSet = true; m_maximumBitrate = std::move(value); }

    /**
     * Maximum input bitrate, categorized coarsely
     */
    inline InputSpecification& WithMaximumBitrate(const InputMaximumBitrate& value) { SetMaximumBitrate(value); return *this;}

    /**
     * Maximum input bitrate, categorized coarsely
     */
    inline InputSpecification& WithMaximumBitrate(InputMaximumBitrate&& value) { SetMaximumBitrate(std::move(value)); return *this;}


    /**
     * Input resolution, categorized coarsely
     */
    inline const InputResolution& GetResolution() const{ return m_resolution; }

    /**
     * Input resolution, categorized coarsely
     */
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }

    /**
     * Input resolution, categorized coarsely
     */
    inline void SetResolution(const InputResolution& value) { m_resolutionHasBeenSet = true; m_resolution = value; }

    /**
     * Input resolution, categorized coarsely
     */
    inline void SetResolution(InputResolution&& value) { m_resolutionHasBeenSet = true; m_resolution = std::move(value); }

    /**
     * Input resolution, categorized coarsely
     */
    inline InputSpecification& WithResolution(const InputResolution& value) { SetResolution(value); return *this;}

    /**
     * Input resolution, categorized coarsely
     */
    inline InputSpecification& WithResolution(InputResolution&& value) { SetResolution(std::move(value)); return *this;}

  private:

    InputCodec m_codec;
    bool m_codecHasBeenSet = false;

    InputMaximumBitrate m_maximumBitrate;
    bool m_maximumBitrateHasBeenSet = false;

    InputResolution m_resolution;
    bool m_resolutionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
