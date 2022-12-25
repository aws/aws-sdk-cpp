/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/AuthenticationConfiguration.h>
#include <aws/voice-id/model/AuthenticationDecision.h>
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
   * <p>The authentication result produced by Voice ID, processed against the current
   * session state and streamed audio of the speaker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/AuthenticationResult">AWS
   * API Reference</a></p>
   */
  class AuthenticationResult
  {
  public:
    AWS_VOICEID_API AuthenticationResult();
    AWS_VOICEID_API AuthenticationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API AuthenticationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A timestamp indicating when audio aggregation ended for this authentication
     * result.</p>
     */
    inline const Aws::Utils::DateTime& GetAudioAggregationEndedAt() const{ return m_audioAggregationEndedAt; }

    /**
     * <p>A timestamp indicating when audio aggregation ended for this authentication
     * result.</p>
     */
    inline bool AudioAggregationEndedAtHasBeenSet() const { return m_audioAggregationEndedAtHasBeenSet; }

    /**
     * <p>A timestamp indicating when audio aggregation ended for this authentication
     * result.</p>
     */
    inline void SetAudioAggregationEndedAt(const Aws::Utils::DateTime& value) { m_audioAggregationEndedAtHasBeenSet = true; m_audioAggregationEndedAt = value; }

    /**
     * <p>A timestamp indicating when audio aggregation ended for this authentication
     * result.</p>
     */
    inline void SetAudioAggregationEndedAt(Aws::Utils::DateTime&& value) { m_audioAggregationEndedAtHasBeenSet = true; m_audioAggregationEndedAt = std::move(value); }

    /**
     * <p>A timestamp indicating when audio aggregation ended for this authentication
     * result.</p>
     */
    inline AuthenticationResult& WithAudioAggregationEndedAt(const Aws::Utils::DateTime& value) { SetAudioAggregationEndedAt(value); return *this;}

    /**
     * <p>A timestamp indicating when audio aggregation ended for this authentication
     * result.</p>
     */
    inline AuthenticationResult& WithAudioAggregationEndedAt(Aws::Utils::DateTime&& value) { SetAudioAggregationEndedAt(std::move(value)); return *this;}


    /**
     * <p>A timestamp indicating when audio aggregation started for this authentication
     * result.</p>
     */
    inline const Aws::Utils::DateTime& GetAudioAggregationStartedAt() const{ return m_audioAggregationStartedAt; }

    /**
     * <p>A timestamp indicating when audio aggregation started for this authentication
     * result.</p>
     */
    inline bool AudioAggregationStartedAtHasBeenSet() const { return m_audioAggregationStartedAtHasBeenSet; }

    /**
     * <p>A timestamp indicating when audio aggregation started for this authentication
     * result.</p>
     */
    inline void SetAudioAggregationStartedAt(const Aws::Utils::DateTime& value) { m_audioAggregationStartedAtHasBeenSet = true; m_audioAggregationStartedAt = value; }

    /**
     * <p>A timestamp indicating when audio aggregation started for this authentication
     * result.</p>
     */
    inline void SetAudioAggregationStartedAt(Aws::Utils::DateTime&& value) { m_audioAggregationStartedAtHasBeenSet = true; m_audioAggregationStartedAt = std::move(value); }

    /**
     * <p>A timestamp indicating when audio aggregation started for this authentication
     * result.</p>
     */
    inline AuthenticationResult& WithAudioAggregationStartedAt(const Aws::Utils::DateTime& value) { SetAudioAggregationStartedAt(value); return *this;}

    /**
     * <p>A timestamp indicating when audio aggregation started for this authentication
     * result.</p>
     */
    inline AuthenticationResult& WithAudioAggregationStartedAt(Aws::Utils::DateTime&& value) { SetAudioAggregationStartedAt(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for this authentication result. Because there can be
     * multiple authentications for a given session, this field helps to identify if
     * the returned result is from a previous streaming activity or a new result. Note
     * that in absence of any new streaming activity, <code>AcceptanceThreshold</code>
     * changes, or <code>SpeakerId</code> changes, Voice ID always returns cached
     * Authentication Result for this API.</p>
     */
    inline const Aws::String& GetAuthenticationResultId() const{ return m_authenticationResultId; }

    /**
     * <p>The unique identifier for this authentication result. Because there can be
     * multiple authentications for a given session, this field helps to identify if
     * the returned result is from a previous streaming activity or a new result. Note
     * that in absence of any new streaming activity, <code>AcceptanceThreshold</code>
     * changes, or <code>SpeakerId</code> changes, Voice ID always returns cached
     * Authentication Result for this API.</p>
     */
    inline bool AuthenticationResultIdHasBeenSet() const { return m_authenticationResultIdHasBeenSet; }

    /**
     * <p>The unique identifier for this authentication result. Because there can be
     * multiple authentications for a given session, this field helps to identify if
     * the returned result is from a previous streaming activity or a new result. Note
     * that in absence of any new streaming activity, <code>AcceptanceThreshold</code>
     * changes, or <code>SpeakerId</code> changes, Voice ID always returns cached
     * Authentication Result for this API.</p>
     */
    inline void SetAuthenticationResultId(const Aws::String& value) { m_authenticationResultIdHasBeenSet = true; m_authenticationResultId = value; }

    /**
     * <p>The unique identifier for this authentication result. Because there can be
     * multiple authentications for a given session, this field helps to identify if
     * the returned result is from a previous streaming activity or a new result. Note
     * that in absence of any new streaming activity, <code>AcceptanceThreshold</code>
     * changes, or <code>SpeakerId</code> changes, Voice ID always returns cached
     * Authentication Result for this API.</p>
     */
    inline void SetAuthenticationResultId(Aws::String&& value) { m_authenticationResultIdHasBeenSet = true; m_authenticationResultId = std::move(value); }

    /**
     * <p>The unique identifier for this authentication result. Because there can be
     * multiple authentications for a given session, this field helps to identify if
     * the returned result is from a previous streaming activity or a new result. Note
     * that in absence of any new streaming activity, <code>AcceptanceThreshold</code>
     * changes, or <code>SpeakerId</code> changes, Voice ID always returns cached
     * Authentication Result for this API.</p>
     */
    inline void SetAuthenticationResultId(const char* value) { m_authenticationResultIdHasBeenSet = true; m_authenticationResultId.assign(value); }

    /**
     * <p>The unique identifier for this authentication result. Because there can be
     * multiple authentications for a given session, this field helps to identify if
     * the returned result is from a previous streaming activity or a new result. Note
     * that in absence of any new streaming activity, <code>AcceptanceThreshold</code>
     * changes, or <code>SpeakerId</code> changes, Voice ID always returns cached
     * Authentication Result for this API.</p>
     */
    inline AuthenticationResult& WithAuthenticationResultId(const Aws::String& value) { SetAuthenticationResultId(value); return *this;}

    /**
     * <p>The unique identifier for this authentication result. Because there can be
     * multiple authentications for a given session, this field helps to identify if
     * the returned result is from a previous streaming activity or a new result. Note
     * that in absence of any new streaming activity, <code>AcceptanceThreshold</code>
     * changes, or <code>SpeakerId</code> changes, Voice ID always returns cached
     * Authentication Result for this API.</p>
     */
    inline AuthenticationResult& WithAuthenticationResultId(Aws::String&& value) { SetAuthenticationResultId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for this authentication result. Because there can be
     * multiple authentications for a given session, this field helps to identify if
     * the returned result is from a previous streaming activity or a new result. Note
     * that in absence of any new streaming activity, <code>AcceptanceThreshold</code>
     * changes, or <code>SpeakerId</code> changes, Voice ID always returns cached
     * Authentication Result for this API.</p>
     */
    inline AuthenticationResult& WithAuthenticationResultId(const char* value) { SetAuthenticationResultId(value); return *this;}


    /**
     * <p>The <code>AuthenticationConfiguration</code> used to generate this
     * authentication result.</p>
     */
    inline const AuthenticationConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The <code>AuthenticationConfiguration</code> used to generate this
     * authentication result.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The <code>AuthenticationConfiguration</code> used to generate this
     * authentication result.</p>
     */
    inline void SetConfiguration(const AuthenticationConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The <code>AuthenticationConfiguration</code> used to generate this
     * authentication result.</p>
     */
    inline void SetConfiguration(AuthenticationConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The <code>AuthenticationConfiguration</code> used to generate this
     * authentication result.</p>
     */
    inline AuthenticationResult& WithConfiguration(const AuthenticationConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The <code>AuthenticationConfiguration</code> used to generate this
     * authentication result.</p>
     */
    inline AuthenticationResult& WithConfiguration(AuthenticationConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The client-provided identifier for the speaker whose authentication result is
     * produced. Only present if a <code>SpeakerId</code> is provided for the
     * session.</p>
     */
    inline const Aws::String& GetCustomerSpeakerId() const{ return m_customerSpeakerId; }

    /**
     * <p>The client-provided identifier for the speaker whose authentication result is
     * produced. Only present if a <code>SpeakerId</code> is provided for the
     * session.</p>
     */
    inline bool CustomerSpeakerIdHasBeenSet() const { return m_customerSpeakerIdHasBeenSet; }

    /**
     * <p>The client-provided identifier for the speaker whose authentication result is
     * produced. Only present if a <code>SpeakerId</code> is provided for the
     * session.</p>
     */
    inline void SetCustomerSpeakerId(const Aws::String& value) { m_customerSpeakerIdHasBeenSet = true; m_customerSpeakerId = value; }

    /**
     * <p>The client-provided identifier for the speaker whose authentication result is
     * produced. Only present if a <code>SpeakerId</code> is provided for the
     * session.</p>
     */
    inline void SetCustomerSpeakerId(Aws::String&& value) { m_customerSpeakerIdHasBeenSet = true; m_customerSpeakerId = std::move(value); }

    /**
     * <p>The client-provided identifier for the speaker whose authentication result is
     * produced. Only present if a <code>SpeakerId</code> is provided for the
     * session.</p>
     */
    inline void SetCustomerSpeakerId(const char* value) { m_customerSpeakerIdHasBeenSet = true; m_customerSpeakerId.assign(value); }

    /**
     * <p>The client-provided identifier for the speaker whose authentication result is
     * produced. Only present if a <code>SpeakerId</code> is provided for the
     * session.</p>
     */
    inline AuthenticationResult& WithCustomerSpeakerId(const Aws::String& value) { SetCustomerSpeakerId(value); return *this;}

    /**
     * <p>The client-provided identifier for the speaker whose authentication result is
     * produced. Only present if a <code>SpeakerId</code> is provided for the
     * session.</p>
     */
    inline AuthenticationResult& WithCustomerSpeakerId(Aws::String&& value) { SetCustomerSpeakerId(std::move(value)); return *this;}

    /**
     * <p>The client-provided identifier for the speaker whose authentication result is
     * produced. Only present if a <code>SpeakerId</code> is provided for the
     * session.</p>
     */
    inline AuthenticationResult& WithCustomerSpeakerId(const char* value) { SetCustomerSpeakerId(value); return *this;}


    /**
     * <p>The authentication decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline const AuthenticationDecision& GetDecision() const{ return m_decision; }

    /**
     * <p>The authentication decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline bool DecisionHasBeenSet() const { return m_decisionHasBeenSet; }

    /**
     * <p>The authentication decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline void SetDecision(const AuthenticationDecision& value) { m_decisionHasBeenSet = true; m_decision = value; }

    /**
     * <p>The authentication decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline void SetDecision(AuthenticationDecision&& value) { m_decisionHasBeenSet = true; m_decision = std::move(value); }

    /**
     * <p>The authentication decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline AuthenticationResult& WithDecision(const AuthenticationDecision& value) { SetDecision(value); return *this;}

    /**
     * <p>The authentication decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline AuthenticationResult& WithDecision(AuthenticationDecision&& value) { SetDecision(std::move(value)); return *this;}


    /**
     * <p>The service-generated identifier for the speaker whose authentication result
     * is produced.</p>
     */
    inline const Aws::String& GetGeneratedSpeakerId() const{ return m_generatedSpeakerId; }

    /**
     * <p>The service-generated identifier for the speaker whose authentication result
     * is produced.</p>
     */
    inline bool GeneratedSpeakerIdHasBeenSet() const { return m_generatedSpeakerIdHasBeenSet; }

    /**
     * <p>The service-generated identifier for the speaker whose authentication result
     * is produced.</p>
     */
    inline void SetGeneratedSpeakerId(const Aws::String& value) { m_generatedSpeakerIdHasBeenSet = true; m_generatedSpeakerId = value; }

    /**
     * <p>The service-generated identifier for the speaker whose authentication result
     * is produced.</p>
     */
    inline void SetGeneratedSpeakerId(Aws::String&& value) { m_generatedSpeakerIdHasBeenSet = true; m_generatedSpeakerId = std::move(value); }

    /**
     * <p>The service-generated identifier for the speaker whose authentication result
     * is produced.</p>
     */
    inline void SetGeneratedSpeakerId(const char* value) { m_generatedSpeakerIdHasBeenSet = true; m_generatedSpeakerId.assign(value); }

    /**
     * <p>The service-generated identifier for the speaker whose authentication result
     * is produced.</p>
     */
    inline AuthenticationResult& WithGeneratedSpeakerId(const Aws::String& value) { SetGeneratedSpeakerId(value); return *this;}

    /**
     * <p>The service-generated identifier for the speaker whose authentication result
     * is produced.</p>
     */
    inline AuthenticationResult& WithGeneratedSpeakerId(Aws::String&& value) { SetGeneratedSpeakerId(std::move(value)); return *this;}

    /**
     * <p>The service-generated identifier for the speaker whose authentication result
     * is produced.</p>
     */
    inline AuthenticationResult& WithGeneratedSpeakerId(const char* value) { SetGeneratedSpeakerId(value); return *this;}


    /**
     * <p>The authentication score for the speaker whose authentication result is
     * produced. This value is only present if the authentication decision is either
     * <code>ACCEPT</code> or <code>REJECT</code>.</p>
     */
    inline int GetScore() const{ return m_score; }

    /**
     * <p>The authentication score for the speaker whose authentication result is
     * produced. This value is only present if the authentication decision is either
     * <code>ACCEPT</code> or <code>REJECT</code>.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The authentication score for the speaker whose authentication result is
     * produced. This value is only present if the authentication decision is either
     * <code>ACCEPT</code> or <code>REJECT</code>.</p>
     */
    inline void SetScore(int value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The authentication score for the speaker whose authentication result is
     * produced. This value is only present if the authentication decision is either
     * <code>ACCEPT</code> or <code>REJECT</code>.</p>
     */
    inline AuthenticationResult& WithScore(int value) { SetScore(value); return *this;}

  private:

    Aws::Utils::DateTime m_audioAggregationEndedAt;
    bool m_audioAggregationEndedAtHasBeenSet = false;

    Aws::Utils::DateTime m_audioAggregationStartedAt;
    bool m_audioAggregationStartedAtHasBeenSet = false;

    Aws::String m_authenticationResultId;
    bool m_authenticationResultIdHasBeenSet = false;

    AuthenticationConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_customerSpeakerId;
    bool m_customerSpeakerIdHasBeenSet = false;

    AuthenticationDecision m_decision;
    bool m_decisionHasBeenSet = false;

    Aws::String m_generatedSpeakerId;
    bool m_generatedSpeakerIdHasBeenSet = false;

    int m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
