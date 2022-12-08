/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/SpeakerEnrollmentJob.h>
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
  class DescribeSpeakerEnrollmentJobResult
  {
  public:
    AWS_VOICEID_API DescribeSpeakerEnrollmentJobResult();
    AWS_VOICEID_API DescribeSpeakerEnrollmentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API DescribeSpeakerEnrollmentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains details about the specified speaker enrollment job.</p>
     */
    inline const SpeakerEnrollmentJob& GetJob() const{ return m_job; }

    /**
     * <p>Contains details about the specified speaker enrollment job.</p>
     */
    inline void SetJob(const SpeakerEnrollmentJob& value) { m_job = value; }

    /**
     * <p>Contains details about the specified speaker enrollment job.</p>
     */
    inline void SetJob(SpeakerEnrollmentJob&& value) { m_job = std::move(value); }

    /**
     * <p>Contains details about the specified speaker enrollment job.</p>
     */
    inline DescribeSpeakerEnrollmentJobResult& WithJob(const SpeakerEnrollmentJob& value) { SetJob(value); return *this;}

    /**
     * <p>Contains details about the specified speaker enrollment job.</p>
     */
    inline DescribeSpeakerEnrollmentJobResult& WithJob(SpeakerEnrollmentJob&& value) { SetJob(std::move(value)); return *this;}

  private:

    SpeakerEnrollmentJob m_job;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
