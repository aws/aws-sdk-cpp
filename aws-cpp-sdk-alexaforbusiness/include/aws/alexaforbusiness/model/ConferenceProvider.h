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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/ConferenceProviderType.h>
#include <aws/alexaforbusiness/model/IPDialIn.h>
#include <aws/alexaforbusiness/model/PSTNDialIn.h>
#include <aws/alexaforbusiness/model/MeetingSetting.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>An entity that provides a conferencing solution. Alexa for Business acts as
   * the voice interface and mediator that connects users to their preferred
   * conference provider. Examples of conference providers include Amazon Chime,
   * Zoom, Cisco, and Polycom. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/ConferenceProvider">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API ConferenceProvider
  {
  public:
    ConferenceProvider();
    ConferenceProvider(Aws::Utils::Json::JsonView jsonValue);
    ConferenceProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the newly created conference provider.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the newly created conference provider.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the newly created conference provider.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the newly created conference provider.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the newly created conference provider.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the newly created conference provider.</p>
     */
    inline ConferenceProvider& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the newly created conference provider.</p>
     */
    inline ConferenceProvider& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the newly created conference provider.</p>
     */
    inline ConferenceProvider& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the conference provider.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the conference provider.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the conference provider.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the conference provider.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the conference provider.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the conference provider.</p>
     */
    inline ConferenceProvider& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the conference provider.</p>
     */
    inline ConferenceProvider& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the conference provider.</p>
     */
    inline ConferenceProvider& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of conference providers.</p>
     */
    inline const ConferenceProviderType& GetType() const{ return m_type; }

    /**
     * <p>The type of conference providers.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of conference providers.</p>
     */
    inline void SetType(const ConferenceProviderType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of conference providers.</p>
     */
    inline void SetType(ConferenceProviderType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of conference providers.</p>
     */
    inline ConferenceProvider& WithType(const ConferenceProviderType& value) { SetType(value); return *this;}

    /**
     * <p>The type of conference providers.</p>
     */
    inline ConferenceProvider& WithType(ConferenceProviderType&& value) { SetType(std::move(value)); return *this;}


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
    inline ConferenceProvider& WithIPDialIn(const IPDialIn& value) { SetIPDialIn(value); return *this;}

    /**
     * <p>The IP endpoint and protocol for calling.</p>
     */
    inline ConferenceProvider& WithIPDialIn(IPDialIn&& value) { SetIPDialIn(std::move(value)); return *this;}


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
    inline ConferenceProvider& WithPSTNDialIn(const PSTNDialIn& value) { SetPSTNDialIn(value); return *this;}

    /**
     * <p>The information for PSTN conferencing.</p>
     */
    inline ConferenceProvider& WithPSTNDialIn(PSTNDialIn&& value) { SetPSTNDialIn(std::move(value)); return *this;}


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
    inline ConferenceProvider& WithMeetingSetting(const MeetingSetting& value) { SetMeetingSetting(value); return *this;}

    /**
     * <p>The meeting settings for the conference provider.</p>
     */
    inline ConferenceProvider& WithMeetingSetting(MeetingSetting&& value) { SetMeetingSetting(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ConferenceProviderType m_type;
    bool m_typeHasBeenSet;

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
