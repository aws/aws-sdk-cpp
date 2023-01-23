/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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

  class TerminationHealth
  {
  public:
    AWS_CHIMESDKVOICE_API TerminationHealth();
    AWS_CHIMESDKVOICE_API TerminationHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API TerminationHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    
    inline TerminationHealth& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    
    inline TerminationHealth& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetSource() const{ return m_source; }

    
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    
    inline TerminationHealth& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    
    inline TerminationHealth& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    
    inline TerminationHealth& WithSource(const char* value) { SetSource(value); return *this;}

  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
