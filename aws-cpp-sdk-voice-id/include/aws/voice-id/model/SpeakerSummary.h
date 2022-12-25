/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/SpeakerStatus.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>Contains a summary of information about a speaker.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/SpeakerSummary">AWS
   * API Reference</a></p>
   */
  class SpeakerSummary
  {
  public:
    AWS_VOICEID_API SpeakerSummary();
    AWS_VOICEID_API SpeakerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API SpeakerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A timestamp showing the speaker's creation time. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>A timestamp showing the speaker's creation time. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>A timestamp showing the speaker's creation time. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>A timestamp showing the speaker's creation time. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>A timestamp showing the speaker's creation time. </p>
     */
    inline SpeakerSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>A timestamp showing the speaker's creation time. </p>
     */
    inline SpeakerSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The client-provided identifier for the speaker.</p>
     */
    inline const Aws::String& GetCustomerSpeakerId() const{ return m_customerSpeakerId; }

    /**
     * <p>The client-provided identifier for the speaker.</p>
     */
    inline bool CustomerSpeakerIdHasBeenSet() const { return m_customerSpeakerIdHasBeenSet; }

    /**
     * <p>The client-provided identifier for the speaker.</p>
     */
    inline void SetCustomerSpeakerId(const Aws::String& value) { m_customerSpeakerIdHasBeenSet = true; m_customerSpeakerId = value; }

    /**
     * <p>The client-provided identifier for the speaker.</p>
     */
    inline void SetCustomerSpeakerId(Aws::String&& value) { m_customerSpeakerIdHasBeenSet = true; m_customerSpeakerId = std::move(value); }

    /**
     * <p>The client-provided identifier for the speaker.</p>
     */
    inline void SetCustomerSpeakerId(const char* value) { m_customerSpeakerIdHasBeenSet = true; m_customerSpeakerId.assign(value); }

    /**
     * <p>The client-provided identifier for the speaker.</p>
     */
    inline SpeakerSummary& WithCustomerSpeakerId(const Aws::String& value) { SetCustomerSpeakerId(value); return *this;}

    /**
     * <p>The client-provided identifier for the speaker.</p>
     */
    inline SpeakerSummary& WithCustomerSpeakerId(Aws::String&& value) { SetCustomerSpeakerId(std::move(value)); return *this;}

    /**
     * <p>The client-provided identifier for the speaker.</p>
     */
    inline SpeakerSummary& WithCustomerSpeakerId(const char* value) { SetCustomerSpeakerId(value); return *this;}


    /**
     * <p>The identifier of the domain that contains the speaker.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the domain that contains the speaker.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the domain that contains the speaker.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the domain that contains the speaker.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the domain that contains the speaker.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the domain that contains the speaker.</p>
     */
    inline SpeakerSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the domain that contains the speaker.</p>
     */
    inline SpeakerSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the domain that contains the speaker.</p>
     */
    inline SpeakerSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The service-generated identifier for the speaker. </p>
     */
    inline const Aws::String& GetGeneratedSpeakerId() const{ return m_generatedSpeakerId; }

    /**
     * <p>The service-generated identifier for the speaker. </p>
     */
    inline bool GeneratedSpeakerIdHasBeenSet() const { return m_generatedSpeakerIdHasBeenSet; }

    /**
     * <p>The service-generated identifier for the speaker. </p>
     */
    inline void SetGeneratedSpeakerId(const Aws::String& value) { m_generatedSpeakerIdHasBeenSet = true; m_generatedSpeakerId = value; }

    /**
     * <p>The service-generated identifier for the speaker. </p>
     */
    inline void SetGeneratedSpeakerId(Aws::String&& value) { m_generatedSpeakerIdHasBeenSet = true; m_generatedSpeakerId = std::move(value); }

    /**
     * <p>The service-generated identifier for the speaker. </p>
     */
    inline void SetGeneratedSpeakerId(const char* value) { m_generatedSpeakerIdHasBeenSet = true; m_generatedSpeakerId.assign(value); }

    /**
     * <p>The service-generated identifier for the speaker. </p>
     */
    inline SpeakerSummary& WithGeneratedSpeakerId(const Aws::String& value) { SetGeneratedSpeakerId(value); return *this;}

    /**
     * <p>The service-generated identifier for the speaker. </p>
     */
    inline SpeakerSummary& WithGeneratedSpeakerId(Aws::String&& value) { SetGeneratedSpeakerId(std::move(value)); return *this;}

    /**
     * <p>The service-generated identifier for the speaker. </p>
     */
    inline SpeakerSummary& WithGeneratedSpeakerId(const char* value) { SetGeneratedSpeakerId(value); return *this;}


    /**
     * <p>The timestamp when the speaker was last accessed for enrollment,
     * re-enrollment or a successful authentication. This timestamp is accurate to one
     * hour.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedAt() const{ return m_lastAccessedAt; }

    /**
     * <p>The timestamp when the speaker was last accessed for enrollment,
     * re-enrollment or a successful authentication. This timestamp is accurate to one
     * hour.</p>
     */
    inline bool LastAccessedAtHasBeenSet() const { return m_lastAccessedAtHasBeenSet; }

    /**
     * <p>The timestamp when the speaker was last accessed for enrollment,
     * re-enrollment or a successful authentication. This timestamp is accurate to one
     * hour.</p>
     */
    inline void SetLastAccessedAt(const Aws::Utils::DateTime& value) { m_lastAccessedAtHasBeenSet = true; m_lastAccessedAt = value; }

    /**
     * <p>The timestamp when the speaker was last accessed for enrollment,
     * re-enrollment or a successful authentication. This timestamp is accurate to one
     * hour.</p>
     */
    inline void SetLastAccessedAt(Aws::Utils::DateTime&& value) { m_lastAccessedAtHasBeenSet = true; m_lastAccessedAt = std::move(value); }

    /**
     * <p>The timestamp when the speaker was last accessed for enrollment,
     * re-enrollment or a successful authentication. This timestamp is accurate to one
     * hour.</p>
     */
    inline SpeakerSummary& WithLastAccessedAt(const Aws::Utils::DateTime& value) { SetLastAccessedAt(value); return *this;}

    /**
     * <p>The timestamp when the speaker was last accessed for enrollment,
     * re-enrollment or a successful authentication. This timestamp is accurate to one
     * hour.</p>
     */
    inline SpeakerSummary& WithLastAccessedAt(Aws::Utils::DateTime&& value) { SetLastAccessedAt(std::move(value)); return *this;}


    /**
     * <p>The current status of the speaker.</p>
     */
    inline const SpeakerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the speaker.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the speaker.</p>
     */
    inline void SetStatus(const SpeakerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the speaker.</p>
     */
    inline void SetStatus(SpeakerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the speaker.</p>
     */
    inline SpeakerSummary& WithStatus(const SpeakerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the speaker.</p>
     */
    inline SpeakerSummary& WithStatus(SpeakerStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp showing the speaker's last update.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>A timestamp showing the speaker's last update.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>A timestamp showing the speaker's last update.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>A timestamp showing the speaker's last update.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>A timestamp showing the speaker's last update.</p>
     */
    inline SpeakerSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>A timestamp showing the speaker's last update.</p>
     */
    inline SpeakerSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_customerSpeakerId;
    bool m_customerSpeakerIdHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_generatedSpeakerId;
    bool m_generatedSpeakerIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessedAt;
    bool m_lastAccessedAtHasBeenSet = false;

    SpeakerStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
