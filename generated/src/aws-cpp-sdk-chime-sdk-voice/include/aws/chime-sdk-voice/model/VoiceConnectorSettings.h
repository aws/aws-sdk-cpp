/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  class VoiceConnectorSettings
  {
  public:
    AWS_CHIMESDKVOICE_API VoiceConnectorSettings();
    AWS_CHIMESDKVOICE_API VoiceConnectorSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceConnectorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCdrBucket() const{ return m_cdrBucket; }

    
    inline bool CdrBucketHasBeenSet() const { return m_cdrBucketHasBeenSet; }

    
    inline void SetCdrBucket(const Aws::String& value) { m_cdrBucketHasBeenSet = true; m_cdrBucket = value; }

    
    inline void SetCdrBucket(Aws::String&& value) { m_cdrBucketHasBeenSet = true; m_cdrBucket = std::move(value); }

    
    inline void SetCdrBucket(const char* value) { m_cdrBucketHasBeenSet = true; m_cdrBucket.assign(value); }

    
    inline VoiceConnectorSettings& WithCdrBucket(const Aws::String& value) { SetCdrBucket(value); return *this;}

    
    inline VoiceConnectorSettings& WithCdrBucket(Aws::String&& value) { SetCdrBucket(std::move(value)); return *this;}

    
    inline VoiceConnectorSettings& WithCdrBucket(const char* value) { SetCdrBucket(value); return *this;}

  private:

    Aws::String m_cdrBucket;
    bool m_cdrBucketHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
