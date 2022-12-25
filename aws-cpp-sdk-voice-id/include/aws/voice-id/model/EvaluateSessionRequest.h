/**
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
  class EvaluateSessionRequest : public VoiceIDRequest
  {
  public:
    AWS_VOICEID_API EvaluateSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EvaluateSession"; }

    AWS_VOICEID_API Aws::String SerializePayload() const override;

    AWS_VOICEID_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the domain where the session started.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the domain where the session started.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the domain where the session started.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the domain where the session started.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the domain where the session started.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the domain where the session started.</p>
     */
    inline EvaluateSessionRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the domain where the session started.</p>
     */
    inline EvaluateSessionRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the domain where the session started.</p>
     */
    inline EvaluateSessionRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The session identifier, or name of the session, that you want to evaluate. In
     * Voice ID integration, this is the Contact-Id.</p>
     */
    inline const Aws::String& GetSessionNameOrId() const{ return m_sessionNameOrId; }

    /**
     * <p>The session identifier, or name of the session, that you want to evaluate. In
     * Voice ID integration, this is the Contact-Id.</p>
     */
    inline bool SessionNameOrIdHasBeenSet() const { return m_sessionNameOrIdHasBeenSet; }

    /**
     * <p>The session identifier, or name of the session, that you want to evaluate. In
     * Voice ID integration, this is the Contact-Id.</p>
     */
    inline void SetSessionNameOrId(const Aws::String& value) { m_sessionNameOrIdHasBeenSet = true; m_sessionNameOrId = value; }

    /**
     * <p>The session identifier, or name of the session, that you want to evaluate. In
     * Voice ID integration, this is the Contact-Id.</p>
     */
    inline void SetSessionNameOrId(Aws::String&& value) { m_sessionNameOrIdHasBeenSet = true; m_sessionNameOrId = std::move(value); }

    /**
     * <p>The session identifier, or name of the session, that you want to evaluate. In
     * Voice ID integration, this is the Contact-Id.</p>
     */
    inline void SetSessionNameOrId(const char* value) { m_sessionNameOrIdHasBeenSet = true; m_sessionNameOrId.assign(value); }

    /**
     * <p>The session identifier, or name of the session, that you want to evaluate. In
     * Voice ID integration, this is the Contact-Id.</p>
     */
    inline EvaluateSessionRequest& WithSessionNameOrId(const Aws::String& value) { SetSessionNameOrId(value); return *this;}

    /**
     * <p>The session identifier, or name of the session, that you want to evaluate. In
     * Voice ID integration, this is the Contact-Id.</p>
     */
    inline EvaluateSessionRequest& WithSessionNameOrId(Aws::String&& value) { SetSessionNameOrId(std::move(value)); return *this;}

    /**
     * <p>The session identifier, or name of the session, that you want to evaluate. In
     * Voice ID integration, this is the Contact-Id.</p>
     */
    inline EvaluateSessionRequest& WithSessionNameOrId(const char* value) { SetSessionNameOrId(value); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_sessionNameOrId;
    bool m_sessionNameOrIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
