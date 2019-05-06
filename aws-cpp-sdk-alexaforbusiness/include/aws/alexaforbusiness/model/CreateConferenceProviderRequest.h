/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/ConferenceProviderType.h>
#include <aws/alexaforbusiness/model/IPDialIn.h>
#include <aws/alexaforbusiness/model/PSTNDialIn.h>
#include <aws/alexaforbusiness/model/MeetingSetting.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API CreateConferenceProviderRequest : public AlexaForBusinessRequest
  {
  public:
    CreateConferenceProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConferenceProvider"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the conference provider.</p>
     */
    inline const Aws::String& GetConferenceProviderName() const{ return m_conferenceProviderName; }

    /**
     * <p>The name of the conference provider.</p>
     */
    inline bool ConferenceProviderNameHasBeenSet() const { return m_conferenceProviderNameHasBeenSet; }

    /**
     * <p>The name of the conference provider.</p>
     */
    inline void SetConferenceProviderName(const Aws::String& value) { m_conferenceProviderNameHasBeenSet = true; m_conferenceProviderName = value; }

    /**
     * <p>The name of the conference provider.</p>
     */
    inline void SetConferenceProviderName(Aws::String&& value) { m_conferenceProviderNameHasBeenSet = true; m_conferenceProviderName = std::move(value); }

    /**
     * <p>The name of the conference provider.</p>
     */
    inline void SetConferenceProviderName(const char* value) { m_conferenceProviderNameHasBeenSet = true; m_conferenceProviderName.assign(value); }

    /**
     * <p>The name of the conference provider.</p>
     */
    inline CreateConferenceProviderRequest& WithConferenceProviderName(const Aws::String& value) { SetConferenceProviderName(value); return *this;}

    /**
     * <p>The name of the conference provider.</p>
     */
    inline CreateConferenceProviderRequest& WithConferenceProviderName(Aws::String&& value) { SetConferenceProviderName(std::move(value)); return *this;}

    /**
     * <p>The name of the conference provider.</p>
     */
    inline CreateConferenceProviderRequest& WithConferenceProviderName(const char* value) { SetConferenceProviderName(value); return *this;}


    /**
     * <p>Represents a type within a list of predefined types.</p>
     */
    inline const ConferenceProviderType& GetConferenceProviderType() const{ return m_conferenceProviderType; }

    /**
     * <p>Represents a type within a list of predefined types.</p>
     */
    inline bool ConferenceProviderTypeHasBeenSet() const { return m_conferenceProviderTypeHasBeenSet; }

    /**
     * <p>Represents a type within a list of predefined types.</p>
     */
    inline void SetConferenceProviderType(const ConferenceProviderType& value) { m_conferenceProviderTypeHasBeenSet = true; m_conferenceProviderType = value; }

    /**
     * <p>Represents a type within a list of predefined types.</p>
     */
    inline void SetConferenceProviderType(ConferenceProviderType&& value) { m_conferenceProviderTypeHasBeenSet = true; m_conferenceProviderType = std::move(value); }

    /**
     * <p>Represents a type within a list of predefined types.</p>
     */
    inline CreateConferenceProviderRequest& WithConferenceProviderType(const ConferenceProviderType& value) { SetConferenceProviderType(value); return *this;}

    /**
     * <p>Represents a type within a list of predefined types.</p>
     */
    inline CreateConferenceProviderRequest& WithConferenceProviderType(ConferenceProviderType&& value) { SetConferenceProviderType(std::move(value)); return *this;}


    /**
     * <p>The IP endpoint and protocol for calling.</p>
     */
    inline const IPDialIn& GetIPDialIn() const{ return m_iPDialIn; }

    /**
     * <p>The IP endpoint and protocol for calling.</p>
     */
    inline bool IPDialInHasBeenSet() const { return m_iPDialInHasBeenSet; }

    /**
     * <p>The IP endpoint and protocol for calling.</p>
     */
    inline void SetIPDialIn(const IPDialIn& value) { m_iPDialInHasBeenSet = true; m_iPDialIn = value; }

    /**
     * <p>The IP endpoint and protocol for calling.</p>
     */
    inline void SetIPDialIn(IPDialIn&& value) { m_iPDialInHasBeenSet = true; m_iPDialIn = std::move(value); }

    /**
     * <p>The IP endpoint and protocol for calling.</p>
     */
    inline CreateConferenceProviderRequest& WithIPDialIn(const IPDialIn& value) { SetIPDialIn(value); return *this;}

    /**
     * <p>The IP endpoint and protocol for calling.</p>
     */
    inline CreateConferenceProviderRequest& WithIPDialIn(IPDialIn&& value) { SetIPDialIn(std::move(value)); return *this;}


    /**
     * <p>The information for PSTN conferencing.</p>
     */
    inline const PSTNDialIn& GetPSTNDialIn() const{ return m_pSTNDialIn; }

    /**
     * <p>The information for PSTN conferencing.</p>
     */
    inline bool PSTNDialInHasBeenSet() const { return m_pSTNDialInHasBeenSet; }

    /**
     * <p>The information for PSTN conferencing.</p>
     */
    inline void SetPSTNDialIn(const PSTNDialIn& value) { m_pSTNDialInHasBeenSet = true; m_pSTNDialIn = value; }

    /**
     * <p>The information for PSTN conferencing.</p>
     */
    inline void SetPSTNDialIn(PSTNDialIn&& value) { m_pSTNDialInHasBeenSet = true; m_pSTNDialIn = std::move(value); }

    /**
     * <p>The information for PSTN conferencing.</p>
     */
    inline CreateConferenceProviderRequest& WithPSTNDialIn(const PSTNDialIn& value) { SetPSTNDialIn(value); return *this;}

    /**
     * <p>The information for PSTN conferencing.</p>
     */
    inline CreateConferenceProviderRequest& WithPSTNDialIn(PSTNDialIn&& value) { SetPSTNDialIn(std::move(value)); return *this;}


    /**
     * <p>The meeting settings for the conference provider.</p>
     */
    inline const MeetingSetting& GetMeetingSetting() const{ return m_meetingSetting; }

    /**
     * <p>The meeting settings for the conference provider.</p>
     */
    inline bool MeetingSettingHasBeenSet() const { return m_meetingSettingHasBeenSet; }

    /**
     * <p>The meeting settings for the conference provider.</p>
     */
    inline void SetMeetingSetting(const MeetingSetting& value) { m_meetingSettingHasBeenSet = true; m_meetingSetting = value; }

    /**
     * <p>The meeting settings for the conference provider.</p>
     */
    inline void SetMeetingSetting(MeetingSetting&& value) { m_meetingSettingHasBeenSet = true; m_meetingSetting = std::move(value); }

    /**
     * <p>The meeting settings for the conference provider.</p>
     */
    inline CreateConferenceProviderRequest& WithMeetingSetting(const MeetingSetting& value) { SetMeetingSetting(value); return *this;}

    /**
     * <p>The meeting settings for the conference provider.</p>
     */
    inline CreateConferenceProviderRequest& WithMeetingSetting(MeetingSetting&& value) { SetMeetingSetting(std::move(value)); return *this;}


    /**
     * <p>The request token of the client.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The request token of the client.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The request token of the client.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The request token of the client.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The request token of the client.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The request token of the client.</p>
     */
    inline CreateConferenceProviderRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The request token of the client.</p>
     */
    inline CreateConferenceProviderRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The request token of the client.</p>
     */
    inline CreateConferenceProviderRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_conferenceProviderName;
    bool m_conferenceProviderNameHasBeenSet;

    ConferenceProviderType m_conferenceProviderType;
    bool m_conferenceProviderTypeHasBeenSet;

    IPDialIn m_iPDialIn;
    bool m_iPDialInHasBeenSet;

    PSTNDialIn m_pSTNDialIn;
    bool m_pSTNDialInHasBeenSet;

    MeetingSetting m_meetingSetting;
    bool m_meetingSettingHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
