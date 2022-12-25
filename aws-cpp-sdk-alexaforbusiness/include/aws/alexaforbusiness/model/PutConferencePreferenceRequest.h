/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PutConferencePreferenceRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API PutConferencePreferenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConferencePreference"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_conferencePreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
