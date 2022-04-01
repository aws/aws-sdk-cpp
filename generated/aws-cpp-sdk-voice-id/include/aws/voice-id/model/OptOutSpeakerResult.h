﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/Speaker.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace VoiceID
{
namespace Model
{
  class AWS_VOICEID_API OptOutSpeakerResult
  {
  public:
    OptOutSpeakerResult();
    OptOutSpeakerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    OptOutSpeakerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the opted-out speaker.</p>
     */
    inline const Speaker& GetSpeaker() const{ return m_speaker; }

    /**
     * <p>Details about the opted-out speaker.</p>
     */
    inline void SetSpeaker(const Speaker& value) { m_speaker = value; }

    /**
     * <p>Details about the opted-out speaker.</p>
     */
    inline void SetSpeaker(Speaker&& value) { m_speaker = std::move(value); }

    /**
     * <p>Details about the opted-out speaker.</p>
     */
    inline OptOutSpeakerResult& WithSpeaker(const Speaker& value) { SetSpeaker(value); return *this;}

    /**
     * <p>Details about the opted-out speaker.</p>
     */
    inline OptOutSpeakerResult& WithSpeaker(Speaker&& value) { SetSpeaker(std::move(value)); return *this;}

  private:

    Speaker m_speaker;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
