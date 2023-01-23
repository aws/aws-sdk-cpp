/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class DeleteConferenceProviderRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API DeleteConferenceProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConferenceProvider"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline DeleteConferenceProviderRequest& WithConferenceProviderArn(const Aws::String& value) { SetConferenceProviderArn(value); return *this;}

    /**
     * <p>The ARN of the conference provider.</p>
     */
    inline DeleteConferenceProviderRequest& WithConferenceProviderArn(Aws::String&& value) { SetConferenceProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the conference provider.</p>
     */
    inline DeleteConferenceProviderRequest& WithConferenceProviderArn(const char* value) { SetConferenceProviderArn(value); return *this;}

  private:

    Aws::String m_conferenceProviderArn;
    bool m_conferenceProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
