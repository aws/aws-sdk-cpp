/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/AudioFormat.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {
namespace AudioFormatMapper {

static const int mp3_HASH = HashingUtils::HashString("mp3");
static const int opus_HASH = HashingUtils::HashString("opus");
static const int wav_HASH = HashingUtils::HashString("wav");
static const int aac_HASH = HashingUtils::HashString("aac");
static const int flac_HASH = HashingUtils::HashString("flac");
static const int mp4_HASH = HashingUtils::HashString("mp4");
static const int ogg_HASH = HashingUtils::HashString("ogg");
static const int mkv_HASH = HashingUtils::HashString("mkv");
static const int mka_HASH = HashingUtils::HashString("mka");
static const int x_aac_HASH = HashingUtils::HashString("x-aac");
static const int m4a_HASH = HashingUtils::HashString("m4a");
static const int mpeg_HASH = HashingUtils::HashString("mpeg");
static const int mpga_HASH = HashingUtils::HashString("mpga");
static const int pcm_HASH = HashingUtils::HashString("pcm");
static const int webm_HASH = HashingUtils::HashString("webm");

AudioFormat GetAudioFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == mp3_HASH) {
    return AudioFormat::mp3;
  } else if (hashCode == opus_HASH) {
    return AudioFormat::opus;
  } else if (hashCode == wav_HASH) {
    return AudioFormat::wav;
  } else if (hashCode == aac_HASH) {
    return AudioFormat::aac;
  } else if (hashCode == flac_HASH) {
    return AudioFormat::flac;
  } else if (hashCode == mp4_HASH) {
    return AudioFormat::mp4;
  } else if (hashCode == ogg_HASH) {
    return AudioFormat::ogg;
  } else if (hashCode == mkv_HASH) {
    return AudioFormat::mkv;
  } else if (hashCode == mka_HASH) {
    return AudioFormat::mka;
  } else if (hashCode == x_aac_HASH) {
    return AudioFormat::x_aac;
  } else if (hashCode == m4a_HASH) {
    return AudioFormat::m4a;
  } else if (hashCode == mpeg_HASH) {
    return AudioFormat::mpeg;
  } else if (hashCode == mpga_HASH) {
    return AudioFormat::mpga;
  } else if (hashCode == pcm_HASH) {
    return AudioFormat::pcm;
  } else if (hashCode == webm_HASH) {
    return AudioFormat::webm;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AudioFormat>(hashCode);
  }

  return AudioFormat::NOT_SET;
}

Aws::String GetNameForAudioFormat(AudioFormat enumValue) {
  switch (enumValue) {
    case AudioFormat::NOT_SET:
      return {};
    case AudioFormat::mp3:
      return "mp3";
    case AudioFormat::opus:
      return "opus";
    case AudioFormat::wav:
      return "wav";
    case AudioFormat::aac:
      return "aac";
    case AudioFormat::flac:
      return "flac";
    case AudioFormat::mp4:
      return "mp4";
    case AudioFormat::ogg:
      return "ogg";
    case AudioFormat::mkv:
      return "mkv";
    case AudioFormat::mka:
      return "mka";
    case AudioFormat::x_aac:
      return "x-aac";
    case AudioFormat::m4a:
      return "m4a";
    case AudioFormat::mpeg:
      return "mpeg";
    case AudioFormat::mpga:
      return "mpga";
    case AudioFormat::pcm:
      return "pcm";
    case AudioFormat::webm:
      return "webm";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AudioFormatMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
