/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The credentials used by the participant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ParticipantTokenCredentials">AWS
   * API Reference</a></p>
   */
  class ParticipantTokenCredentials
  {
  public:
    AWS_CONNECT_API ParticipantTokenCredentials();
    AWS_CONNECT_API ParticipantTokenCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ParticipantTokenCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant. </p>
     */
    inline const Aws::String& GetParticipantToken() const{ return m_participantToken; }

    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant. </p>
     */
    inline bool ParticipantTokenHasBeenSet() const { return m_participantTokenHasBeenSet; }

    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant. </p>
     */
    inline void SetParticipantToken(const Aws::String& value) { m_participantTokenHasBeenSet = true; m_participantToken = value; }

    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant. </p>
     */
    inline void SetParticipantToken(Aws::String&& value) { m_participantTokenHasBeenSet = true; m_participantToken = std::move(value); }

    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant. </p>
     */
    inline void SetParticipantToken(const char* value) { m_participantTokenHasBeenSet = true; m_participantToken.assign(value); }

    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant. </p>
     */
    inline ParticipantTokenCredentials& WithParticipantToken(const Aws::String& value) { SetParticipantToken(value); return *this;}

    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant. </p>
     */
    inline ParticipantTokenCredentials& WithParticipantToken(Aws::String&& value) { SetParticipantToken(std::move(value)); return *this;}

    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant. </p>
     */
    inline ParticipantTokenCredentials& WithParticipantToken(const char* value) { SetParticipantToken(value); return *this;}


    /**
     * <p>The expiration of the token. It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetExpiry() const{ return m_expiry; }

    /**
     * <p>The expiration of the token. It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline bool ExpiryHasBeenSet() const { return m_expiryHasBeenSet; }

    /**
     * <p>The expiration of the token. It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetExpiry(const Aws::String& value) { m_expiryHasBeenSet = true; m_expiry = value; }

    /**
     * <p>The expiration of the token. It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetExpiry(Aws::String&& value) { m_expiryHasBeenSet = true; m_expiry = std::move(value); }

    /**
     * <p>The expiration of the token. It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetExpiry(const char* value) { m_expiryHasBeenSet = true; m_expiry.assign(value); }

    /**
     * <p>The expiration of the token. It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline ParticipantTokenCredentials& WithExpiry(const Aws::String& value) { SetExpiry(value); return *this;}

    /**
     * <p>The expiration of the token. It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline ParticipantTokenCredentials& WithExpiry(Aws::String&& value) { SetExpiry(std::move(value)); return *this;}

    /**
     * <p>The expiration of the token. It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline ParticipantTokenCredentials& WithExpiry(const char* value) { SetExpiry(value); return *this;}

  private:

    Aws::String m_participantToken;
    bool m_participantTokenHasBeenSet = false;

    Aws::String m_expiry;
    bool m_expiryHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
