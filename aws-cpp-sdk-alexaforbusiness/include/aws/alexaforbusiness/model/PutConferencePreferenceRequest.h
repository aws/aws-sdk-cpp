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
#include <aws/alexaforbusiness/model/ConferencePreference.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API PutConferencePreferenceRequest : public AlexaForBusinessRequest
  {
  public:
    PutConferencePreferenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConferencePreference"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The conference preference of a specific conference provider.</p>
     */
    inline const ConferencePreference& GetConferencePreference() const{ return m_conferencePreference; }

    /**
     * <p>The conference preference of a specific conference provider.</p>
     */
    inline bool ConferencePreferenceHasBeenSet() const { return m_conferencePreferenceHasBeenSet; }

    /**
     * <p>The conference preference of a specific conference provider.</p>
     */
    inline void SetConferencePreference(const ConferencePreference& value) { m_conferencePreferenceHasBeenSet = true; m_conferencePreference = value; }

    /**
     * <p>The conference preference of a specific conference provider.</p>
     */
    inline void SetConferencePreference(ConferencePreference&& value) { m_conferencePreferenceHasBeenSet = true; m_conferencePreference = std::move(value); }

    /**
     * <p>The conference preference of a specific conference provider.</p>
     */
    inline PutConferencePreferenceRequest& WithConferencePreference(const ConferencePreference& value) { SetConferencePreference(value); return *this;}

    /**
     * <p>The conference preference of a specific conference provider.</p>
     */
    inline PutConferencePreferenceRequest& WithConferencePreference(ConferencePreference&& value) { SetConferencePreference(std::move(value)); return *this;}

  private:

    ConferencePreference m_conferencePreference;
    bool m_conferencePreferenceHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
