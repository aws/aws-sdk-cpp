/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class ListVoiceProfilesRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API ListVoiceProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVoiceProfiles"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKVOICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline const Aws::String& GetVoiceProfileDomainId() const{ return m_voiceProfileDomainId; }

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline bool VoiceProfileDomainIdHasBeenSet() const { return m_voiceProfileDomainIdHasBeenSet; }

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline void SetVoiceProfileDomainId(const Aws::String& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = value; }

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline void SetVoiceProfileDomainId(Aws::String&& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = std::move(value); }

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline void SetVoiceProfileDomainId(const char* value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId.assign(value); }

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline ListVoiceProfilesRequest& WithVoiceProfileDomainId(const Aws::String& value) { SetVoiceProfileDomainId(value); return *this;}

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline ListVoiceProfilesRequest& WithVoiceProfileDomainId(Aws::String&& value) { SetVoiceProfileDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the voice profile domain.</p>
     */
    inline ListVoiceProfilesRequest& WithVoiceProfileDomainId(const char* value) { SetVoiceProfileDomainId(value); return *this;}


    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline ListVoiceProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline ListVoiceProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline ListVoiceProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results in the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results in the request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results in the request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results in the request.</p>
     */
    inline ListVoiceProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_voiceProfileDomainId;
    bool m_voiceProfileDomainIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
