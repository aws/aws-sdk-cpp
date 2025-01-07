/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/EventTrigger.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Source of the campaign</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/Source">AWS
   * API Reference</a></p>
   */
  class Source
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API Source();
    AWS_CONNECTCAMPAIGNSV2_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetCustomerProfilesSegmentArn() const{ return m_customerProfilesSegmentArn; }
    inline bool CustomerProfilesSegmentArnHasBeenSet() const { return m_customerProfilesSegmentArnHasBeenSet; }
    inline void SetCustomerProfilesSegmentArn(const Aws::String& value) { m_customerProfilesSegmentArnHasBeenSet = true; m_customerProfilesSegmentArn = value; }
    inline void SetCustomerProfilesSegmentArn(Aws::String&& value) { m_customerProfilesSegmentArnHasBeenSet = true; m_customerProfilesSegmentArn = std::move(value); }
    inline void SetCustomerProfilesSegmentArn(const char* value) { m_customerProfilesSegmentArnHasBeenSet = true; m_customerProfilesSegmentArn.assign(value); }
    inline Source& WithCustomerProfilesSegmentArn(const Aws::String& value) { SetCustomerProfilesSegmentArn(value); return *this;}
    inline Source& WithCustomerProfilesSegmentArn(Aws::String&& value) { SetCustomerProfilesSegmentArn(std::move(value)); return *this;}
    inline Source& WithCustomerProfilesSegmentArn(const char* value) { SetCustomerProfilesSegmentArn(value); return *this;}
    ///@}

    ///@{
    
    inline const EventTrigger& GetEventTrigger() const{ return m_eventTrigger; }
    inline bool EventTriggerHasBeenSet() const { return m_eventTriggerHasBeenSet; }
    inline void SetEventTrigger(const EventTrigger& value) { m_eventTriggerHasBeenSet = true; m_eventTrigger = value; }
    inline void SetEventTrigger(EventTrigger&& value) { m_eventTriggerHasBeenSet = true; m_eventTrigger = std::move(value); }
    inline Source& WithEventTrigger(const EventTrigger& value) { SetEventTrigger(value); return *this;}
    inline Source& WithEventTrigger(EventTrigger&& value) { SetEventTrigger(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_customerProfilesSegmentArn;
    bool m_customerProfilesSegmentArnHasBeenSet = false;

    EventTrigger m_eventTrigger;
    bool m_eventTriggerHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
