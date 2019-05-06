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

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API UpdateConferenceProviderRequest : public AlexaForBusinessRequest
  {
  public:
    UpdateConferenceProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConferenceProvider"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the conference provider.</p>
     */
    inline const Aws::String& GetConferenceProviderArn() const{ return m_conferenceProviderArn; }

    /**
     * <p>The ARN of the conference provider.</p>
     */
    inline bool ConferenceProviderArnHasBeenSet() const { return m_conferenceProviderArnHasBeenSet; }

    /**
     * <p>The ARN of the conference provider.</p>
     */
    inline void SetConferenceProviderArn(const Aws::String& value) { m_conferenceProviderArnHasBeenSet = true; m_conferenceProviderArn = value; }

    /**
     * <p>The ARN of the conference provider.</p>
     */
    inline void SetConferenceProviderArn(Aws::String&& value) { m_conferenceProviderArnHasBeenSet = true; m_conferenceProviderArn = std::move(value); }

    /**
     * <p>The ARN of the conference provider.</p>
     */
    inline void SetConferenceProviderArn(const char* value) { m_conferenceProviderArnHasBeenSet = true; m_conferenceProviderArn.assign(value); }

    /**
     * <p>The ARN of the conference provider.</p>
     */
    inline UpdateConferenceProviderRequest& WithConferenceProviderArn(const Aws::String& value) { SetConferenceProviderArn(value); return *this;}

    /**
     * <p>The ARN of the conference provider.</p>
     */
    inline UpdateConferenceProviderRequest& WithConferenceProviderArn(Aws::String&& value) { SetConferenceProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the conference provider.</p>
     */
    inline UpdateConferenceProviderRequest& WithConferenceProviderArn(const char* value) { SetConferenceProviderArn(value); return *this;}


    /**
     * <p>The type of the conference provider.</p>
     */
    inline const ConferenceProviderType& GetConferenceProviderType() const{ return m_conferenceProviderType; }

    /**
     * <p>The type of the conference provider.</p>
     */
    inline bool ConferenceProviderTypeHasBeenSet() const { return m_conferenceProviderTypeHasBeenSet; }

    /**
     * <p>The type of the conference provider.</p>
     */
    inline void SetConferenceProviderType(const ConferenceProviderType& value) { m_conferenceProviderTypeHasBeenSet = true; m_conferenceProviderType = value; }

    /**
     * <p>The type of the conference provider.</p>
     */
    inline void SetConferenceProviderType(ConferenceProviderType&& value) { m_conferenceProviderTypeHasBeenSet = true; m_conferenceProviderType = std::move(value); }

    /**
     * <p>The type of the conference provider.</p>
     */
    inline UpdateConferenceProviderRequest& WithConferenceProviderType(const ConferenceProviderType& value) { SetConferenceProviderType(value); return *this;}

    /**
     * <p>The type of the conference provider.</p>
     */
    inline UpdateConferenceProviderRequest& WithConferenceProviderType(ConferenceProviderType&& value) { SetConferenceProviderType(std::move(value)); return *this;}


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
    inline UpdateConferenceProviderRequest& WithIPDialIn(const IPDialIn& value) { SetIPDialIn(value); return *this;}

    /**
     * <p>The IP endpoint and protocol for calling.</p>
     */
    inline UpdateConferenceProviderRequest& WithIPDialIn(IPDialIn&& value) { SetIPDialIn(std::move(value)); return *this;}


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
    inline UpdateConferenceProviderRequest& WithPSTNDialIn(const PSTNDialIn& value) { SetPSTNDialIn(value); return *this;}

    /**
     * <p>The information for PSTN conferencing.</p>
     */
    inline UpdateConferenceProviderRequest& WithPSTNDialIn(PSTNDialIn&& value) { SetPSTNDialIn(std::move(value)); return *this;}


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
    inline UpdateConferenceProviderRequest& WithMeetingSetting(const MeetingSetting& value) { SetMeetingSetting(value); return *this;}

    /**
     * <p>The meeting settings for the conference provider.</p>
     */
    inline UpdateConferenceProviderRequest& WithMeetingSetting(MeetingSetting&& value) { SetMeetingSetting(std::move(value)); return *this;}

  private:

    Aws::String m_conferenceProviderArn;
    bool m_conferenceProviderArnHasBeenSet;

    ConferenceProviderType m_conferenceProviderType;
    bool m_conferenceProviderTypeHasBeenSet;

    IPDialIn m_iPDialIn;
    bool m_iPDialInHasBeenSet;

    PSTNDialIn m_pSTNDialIn;
    bool m_pSTNDialInHasBeenSet;

    MeetingSetting m_meetingSetting;
    bool m_meetingSettingHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
