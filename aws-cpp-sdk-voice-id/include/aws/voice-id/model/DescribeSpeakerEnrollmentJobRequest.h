﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/VoiceIDRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VoiceID
{
namespace Model
{

  /**
   */
  class AWS_VOICEID_API DescribeSpeakerEnrollmentJobRequest : public VoiceIDRequest
  {
  public:
    DescribeSpeakerEnrollmentJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSpeakerEnrollmentJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the domain containing the speaker enrollment job.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the domain containing the speaker enrollment job.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the domain containing the speaker enrollment job.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the domain containing the speaker enrollment job.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the domain containing the speaker enrollment job.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the domain containing the speaker enrollment job.</p>
     */
    inline DescribeSpeakerEnrollmentJobRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the domain containing the speaker enrollment job.</p>
     */
    inline DescribeSpeakerEnrollmentJobRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the domain containing the speaker enrollment job.</p>
     */
    inline DescribeSpeakerEnrollmentJobRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The identifier of the speaker enrollment job you are describing.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier of the speaker enrollment job you are describing.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The identifier of the speaker enrollment job you are describing.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The identifier of the speaker enrollment job you are describing.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The identifier of the speaker enrollment job you are describing.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The identifier of the speaker enrollment job you are describing.</p>
     */
    inline DescribeSpeakerEnrollmentJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier of the speaker enrollment job you are describing.</p>
     */
    inline DescribeSpeakerEnrollmentJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the speaker enrollment job you are describing.</p>
     */
    inline DescribeSpeakerEnrollmentJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
