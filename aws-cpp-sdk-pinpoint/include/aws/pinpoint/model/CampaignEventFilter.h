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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/EventDimensions.h>
#include <aws/pinpoint/model/FilterType.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the settings for events that cause a campaign to be
   * sent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignEventFilter">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API CampaignEventFilter
  {
  public:
    CampaignEventFilter();
    CampaignEventFilter(Aws::Utils::Json::JsonView jsonValue);
    CampaignEventFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dimension settings of the event filter for the campaign.</p>
     */
    inline const EventDimensions& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimension settings of the event filter for the campaign.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimension settings of the event filter for the campaign.</p>
     */
    inline void SetDimensions(const EventDimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimension settings of the event filter for the campaign.</p>
     */
    inline void SetDimensions(EventDimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimension settings of the event filter for the campaign.</p>
     */
    inline CampaignEventFilter& WithDimensions(const EventDimensions& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimension settings of the event filter for the campaign.</p>
     */
    inline CampaignEventFilter& WithDimensions(EventDimensions&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * <p>The type of event that causes the campaign to be sent. Valid values are:
     * SYSTEM, sends the campaign when a system event occurs; and, ENDPOINT, sends the
     * campaign when an endpoint event (<link 
     * linkend="apps-application-id-events">Events</link> resource) occurs.</p>
     */
    inline const FilterType& GetFilterType() const{ return m_filterType; }

    /**
     * <p>The type of event that causes the campaign to be sent. Valid values are:
     * SYSTEM, sends the campaign when a system event occurs; and, ENDPOINT, sends the
     * campaign when an endpoint event (<link 
     * linkend="apps-application-id-events">Events</link> resource) occurs.</p>
     */
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }

    /**
     * <p>The type of event that causes the campaign to be sent. Valid values are:
     * SYSTEM, sends the campaign when a system event occurs; and, ENDPOINT, sends the
     * campaign when an endpoint event (<link 
     * linkend="apps-application-id-events">Events</link> resource) occurs.</p>
     */
    inline void SetFilterType(const FilterType& value) { m_filterTypeHasBeenSet = true; m_filterType = value; }

    /**
     * <p>The type of event that causes the campaign to be sent. Valid values are:
     * SYSTEM, sends the campaign when a system event occurs; and, ENDPOINT, sends the
     * campaign when an endpoint event (<link 
     * linkend="apps-application-id-events">Events</link> resource) occurs.</p>
     */
    inline void SetFilterType(FilterType&& value) { m_filterTypeHasBeenSet = true; m_filterType = std::move(value); }

    /**
     * <p>The type of event that causes the campaign to be sent. Valid values are:
     * SYSTEM, sends the campaign when a system event occurs; and, ENDPOINT, sends the
     * campaign when an endpoint event (<link 
     * linkend="apps-application-id-events">Events</link> resource) occurs.</p>
     */
    inline CampaignEventFilter& WithFilterType(const FilterType& value) { SetFilterType(value); return *this;}

    /**
     * <p>The type of event that causes the campaign to be sent. Valid values are:
     * SYSTEM, sends the campaign when a system event occurs; and, ENDPOINT, sends the
     * campaign when an endpoint event (<link 
     * linkend="apps-application-id-events">Events</link> resource) occurs.</p>
     */
    inline CampaignEventFilter& WithFilterType(FilterType&& value) { SetFilterType(std::move(value)); return *this;}

  private:

    EventDimensions m_dimensions;
    bool m_dimensionsHasBeenSet;

    FilterType m_filterType;
    bool m_filterTypeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
