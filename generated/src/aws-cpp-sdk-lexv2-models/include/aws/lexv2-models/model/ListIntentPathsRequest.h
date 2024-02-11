/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/AnalyticsPathFilter.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListIntentPathsRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListIntentPathsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIntentPaths"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the bot for which you want to retrieve intent path
     * metrics.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier for the bot for which you want to retrieve intent path
     * metrics.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier for the bot for which you want to retrieve intent path
     * metrics.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier for the bot for which you want to retrieve intent path
     * metrics.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier for the bot for which you want to retrieve intent path
     * metrics.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier for the bot for which you want to retrieve intent path
     * metrics.</p>
     */
    inline ListIntentPathsRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier for the bot for which you want to retrieve intent path
     * metrics.</p>
     */
    inline ListIntentPathsRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the bot for which you want to retrieve intent path
     * metrics.</p>
     */
    inline ListIntentPathsRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see intent path metrics.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const{ return m_startDateTime; }

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see intent path metrics.</p>
     */
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see intent path metrics.</p>
     */
    inline void SetStartDateTime(const Aws::Utils::DateTime& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see intent path metrics.</p>
     */
    inline void SetStartDateTime(Aws::Utils::DateTime&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see intent path metrics.</p>
     */
    inline ListIntentPathsRequest& WithStartDateTime(const Aws::Utils::DateTime& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>The date and time that marks the beginning of the range of time for which you
     * want to see intent path metrics.</p>
     */
    inline ListIntentPathsRequest& WithStartDateTime(Aws::Utils::DateTime&& value) { SetStartDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see intent path metrics.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see intent path metrics.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see intent path metrics.</p>
     */
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see intent path metrics.</p>
     */
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see intent path metrics.</p>
     */
    inline ListIntentPathsRequest& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The date and time that marks the end of the range of time for which you want
     * to see intent path metrics.</p>
     */
    inline ListIntentPathsRequest& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(std::move(value)); return *this;}


    /**
     * <p>The intent path for which you want to retrieve metrics. Use a forward slash
     * to separate intents in the path. For example:</p> <ul> <li> <p>/BookCar</p>
     * </li> <li> <p>/BookCar/BookHotel</p> </li> <li> <p>/BookHotel/BookCar</p> </li>
     * </ul>
     */
    inline const Aws::String& GetIntentPath() const{ return m_intentPath; }

    /**
     * <p>The intent path for which you want to retrieve metrics. Use a forward slash
     * to separate intents in the path. For example:</p> <ul> <li> <p>/BookCar</p>
     * </li> <li> <p>/BookCar/BookHotel</p> </li> <li> <p>/BookHotel/BookCar</p> </li>
     * </ul>
     */
    inline bool IntentPathHasBeenSet() const { return m_intentPathHasBeenSet; }

    /**
     * <p>The intent path for which you want to retrieve metrics. Use a forward slash
     * to separate intents in the path. For example:</p> <ul> <li> <p>/BookCar</p>
     * </li> <li> <p>/BookCar/BookHotel</p> </li> <li> <p>/BookHotel/BookCar</p> </li>
     * </ul>
     */
    inline void SetIntentPath(const Aws::String& value) { m_intentPathHasBeenSet = true; m_intentPath = value; }

    /**
     * <p>The intent path for which you want to retrieve metrics. Use a forward slash
     * to separate intents in the path. For example:</p> <ul> <li> <p>/BookCar</p>
     * </li> <li> <p>/BookCar/BookHotel</p> </li> <li> <p>/BookHotel/BookCar</p> </li>
     * </ul>
     */
    inline void SetIntentPath(Aws::String&& value) { m_intentPathHasBeenSet = true; m_intentPath = std::move(value); }

    /**
     * <p>The intent path for which you want to retrieve metrics. Use a forward slash
     * to separate intents in the path. For example:</p> <ul> <li> <p>/BookCar</p>
     * </li> <li> <p>/BookCar/BookHotel</p> </li> <li> <p>/BookHotel/BookCar</p> </li>
     * </ul>
     */
    inline void SetIntentPath(const char* value) { m_intentPathHasBeenSet = true; m_intentPath.assign(value); }

    /**
     * <p>The intent path for which you want to retrieve metrics. Use a forward slash
     * to separate intents in the path. For example:</p> <ul> <li> <p>/BookCar</p>
     * </li> <li> <p>/BookCar/BookHotel</p> </li> <li> <p>/BookHotel/BookCar</p> </li>
     * </ul>
     */
    inline ListIntentPathsRequest& WithIntentPath(const Aws::String& value) { SetIntentPath(value); return *this;}

    /**
     * <p>The intent path for which you want to retrieve metrics. Use a forward slash
     * to separate intents in the path. For example:</p> <ul> <li> <p>/BookCar</p>
     * </li> <li> <p>/BookCar/BookHotel</p> </li> <li> <p>/BookHotel/BookCar</p> </li>
     * </ul>
     */
    inline ListIntentPathsRequest& WithIntentPath(Aws::String&& value) { SetIntentPath(std::move(value)); return *this;}

    /**
     * <p>The intent path for which you want to retrieve metrics. Use a forward slash
     * to separate intents in the path. For example:</p> <ul> <li> <p>/BookCar</p>
     * </li> <li> <p>/BookCar/BookHotel</p> </li> <li> <p>/BookHotel/BookCar</p> </li>
     * </ul>
     */
    inline ListIntentPathsRequest& WithIntentPath(const char* value) { SetIntentPath(value); return *this;}


    /**
     * <p>A list of objects, each describes a condition by which you want to filter the
     * results.</p>
     */
    inline const Aws::Vector<AnalyticsPathFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A list of objects, each describes a condition by which you want to filter the
     * results.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A list of objects, each describes a condition by which you want to filter the
     * results.</p>
     */
    inline void SetFilters(const Aws::Vector<AnalyticsPathFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A list of objects, each describes a condition by which you want to filter the
     * results.</p>
     */
    inline void SetFilters(Aws::Vector<AnalyticsPathFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A list of objects, each describes a condition by which you want to filter the
     * results.</p>
     */
    inline ListIntentPathsRequest& WithFilters(const Aws::Vector<AnalyticsPathFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A list of objects, each describes a condition by which you want to filter the
     * results.</p>
     */
    inline ListIntentPathsRequest& WithFilters(Aws::Vector<AnalyticsPathFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each describes a condition by which you want to filter the
     * results.</p>
     */
    inline ListIntentPathsRequest& AddFilters(const AnalyticsPathFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A list of objects, each describes a condition by which you want to filter the
     * results.</p>
     */
    inline ListIntentPathsRequest& AddFilters(AnalyticsPathFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::Utils::DateTime m_startDateTime;
    bool m_startDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;

    Aws::String m_intentPath;
    bool m_intentPathHasBeenSet = false;

    Aws::Vector<AnalyticsPathFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
