/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/HealthRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Health
{
namespace Model
{

  /**
   */
  class DescribeEventDetailsRequest : public HealthRequest
  {
  public:
    AWS_HEALTH_API DescribeEventDetailsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEventDetails"; }

    AWS_HEALTH_API Aws::String SerializePayload() const override;

    AWS_HEALTH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of event ARNs (unique identifiers). For example:
     * <code>"arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-CDE456",
     * "arn:aws:health:us-west-1::event/EBS/AWS_EBS_LOST_VOLUME/AWS_EBS_LOST_VOLUME_CHI789_JKL101"</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventArns() const { return m_eventArns; }
    inline bool EventArnsHasBeenSet() const { return m_eventArnsHasBeenSet; }
    template<typename EventArnsT = Aws::Vector<Aws::String>>
    void SetEventArns(EventArnsT&& value) { m_eventArnsHasBeenSet = true; m_eventArns = std::forward<EventArnsT>(value); }
    template<typename EventArnsT = Aws::Vector<Aws::String>>
    DescribeEventDetailsRequest& WithEventArns(EventArnsT&& value) { SetEventArns(std::forward<EventArnsT>(value)); return *this;}
    template<typename EventArnsT = Aws::String>
    DescribeEventDetailsRequest& AddEventArns(EventArnsT&& value) { m_eventArnsHasBeenSet = true; m_eventArns.emplace_back(std::forward<EventArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline const Aws::String& GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    template<typename LocaleT = Aws::String>
    void SetLocale(LocaleT&& value) { m_localeHasBeenSet = true; m_locale = std::forward<LocaleT>(value); }
    template<typename LocaleT = Aws::String>
    DescribeEventDetailsRequest& WithLocale(LocaleT&& value) { SetLocale(std::forward<LocaleT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_eventArns;
    bool m_eventArnsHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
