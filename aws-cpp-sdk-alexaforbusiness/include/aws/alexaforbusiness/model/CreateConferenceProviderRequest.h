/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/ConferenceProviderType.h>
#include <aws/alexaforbusiness/model/IPDialIn.h>
#include <aws/alexaforbusiness/model/PSTNDialIn.h>
#include <aws/alexaforbusiness/model/MeetingSetting.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/Tag.h>
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
  class CreateConferenceProviderRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API CreateConferenceProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConferenceProvider"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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


    /**
     * <p>The tags to be added to the specified resource. Do not provide system
     * tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be added to the specified resource. Do not provide system
     * tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be added to the specified resource. Do not provide system
     * tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be added to the specified resource. Do not provide system
     * tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be added to the specified resource. Do not provide system
     * tags.</p>
     */
    inline CreateConferenceProviderRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be added to the specified resource. Do not provide system
     * tags.</p>
     */
    inline CreateConferenceProviderRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be added to the specified resource. Do not provide system
     * tags.</p>
     */
    inline CreateConferenceProviderRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be added to the specified resource. Do not provide system
     * tags.</p>
     */
    inline CreateConferenceProviderRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_conferenceProviderName;
    bool m_conferenceProviderNameHasBeenSet = false;

    ConferenceProviderType m_conferenceProviderType;
    bool m_conferenceProviderTypeHasBeenSet = false;

    IPDialIn m_iPDialIn;
    bool m_iPDialInHasBeenSet = false;

    PSTNDialIn m_pSTNDialIn;
    bool m_pSTNDialInHasBeenSet = false;

    MeetingSetting m_meetingSetting;
    bool m_meetingSettingHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
