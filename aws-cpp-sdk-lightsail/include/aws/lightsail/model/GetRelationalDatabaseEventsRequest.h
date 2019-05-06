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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API GetRelationalDatabaseEventsRequest : public LightsailRequest
  {
  public:
    GetRelationalDatabaseEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRelationalDatabaseEvents"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the database from which to get events.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }

    /**
     * <p>The name of the database from which to get events.</p>
     */
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name of the database from which to get events.</p>
     */
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }

    /**
     * <p>The name of the database from which to get events.</p>
     */
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }

    /**
     * <p>The name of the database from which to get events.</p>
     */
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }

    /**
     * <p>The name of the database from which to get events.</p>
     */
    inline GetRelationalDatabaseEventsRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name of the database from which to get events.</p>
     */
    inline GetRelationalDatabaseEventsRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database from which to get events.</p>
     */
    inline GetRelationalDatabaseEventsRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}


    /**
     * <p>The number of minutes in the past from which to retrieve events. For example,
     * to get all events from the past 2 hours, enter 120.</p> <p>Default:
     * <code>60</code> </p> <p>The minimum is 1 and the maximum is 14 days (20160
     * minutes).</p>
     */
    inline int GetDurationInMinutes() const{ return m_durationInMinutes; }

    /**
     * <p>The number of minutes in the past from which to retrieve events. For example,
     * to get all events from the past 2 hours, enter 120.</p> <p>Default:
     * <code>60</code> </p> <p>The minimum is 1 and the maximum is 14 days (20160
     * minutes).</p>
     */
    inline bool DurationInMinutesHasBeenSet() const { return m_durationInMinutesHasBeenSet; }

    /**
     * <p>The number of minutes in the past from which to retrieve events. For example,
     * to get all events from the past 2 hours, enter 120.</p> <p>Default:
     * <code>60</code> </p> <p>The minimum is 1 and the maximum is 14 days (20160
     * minutes).</p>
     */
    inline void SetDurationInMinutes(int value) { m_durationInMinutesHasBeenSet = true; m_durationInMinutes = value; }

    /**
     * <p>The number of minutes in the past from which to retrieve events. For example,
     * to get all events from the past 2 hours, enter 120.</p> <p>Default:
     * <code>60</code> </p> <p>The minimum is 1 and the maximum is 14 days (20160
     * minutes).</p>
     */
    inline GetRelationalDatabaseEventsRequest& WithDurationInMinutes(int value) { SetDurationInMinutes(value); return *this;}


    /**
     * <p>A token used for advancing to a specific page of results from for get
     * relational database events request.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>A token used for advancing to a specific page of results from for get
     * relational database events request.</p>
     */
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }

    /**
     * <p>A token used for advancing to a specific page of results from for get
     * relational database events request.</p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>A token used for advancing to a specific page of results from for get
     * relational database events request.</p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }

    /**
     * <p>A token used for advancing to a specific page of results from for get
     * relational database events request.</p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p>A token used for advancing to a specific page of results from for get
     * relational database events request.</p>
     */
    inline GetRelationalDatabaseEventsRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>A token used for advancing to a specific page of results from for get
     * relational database events request.</p>
     */
    inline GetRelationalDatabaseEventsRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p>A token used for advancing to a specific page of results from for get
     * relational database events request.</p>
     */
    inline GetRelationalDatabaseEventsRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}

  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet;

    int m_durationInMinutes;
    bool m_durationInMinutesHasBeenSet;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
