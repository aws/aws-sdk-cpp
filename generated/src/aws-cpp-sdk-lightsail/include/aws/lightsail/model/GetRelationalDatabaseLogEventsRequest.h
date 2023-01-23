/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetRelationalDatabaseLogEventsRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseLogEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRelationalDatabaseLogEvents"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your database for which to get log events.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }

    /**
     * <p>The name of your database for which to get log events.</p>
     */
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name of your database for which to get log events.</p>
     */
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }

    /**
     * <p>The name of your database for which to get log events.</p>
     */
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }

    /**
     * <p>The name of your database for which to get log events.</p>
     */
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }

    /**
     * <p>The name of your database for which to get log events.</p>
     */
    inline GetRelationalDatabaseLogEventsRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name of your database for which to get log events.</p>
     */
    inline GetRelationalDatabaseLogEventsRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of your database for which to get log events.</p>
     */
    inline GetRelationalDatabaseLogEventsRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}


    /**
     * <p>The name of the log stream.</p> <p>Use the <code>get relational database log
     * streams</code> operation to get a list of available log streams.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }

    /**
     * <p>The name of the log stream.</p> <p>Use the <code>get relational database log
     * streams</code> operation to get a list of available log streams.</p>
     */
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }

    /**
     * <p>The name of the log stream.</p> <p>Use the <code>get relational database log
     * streams</code> operation to get a list of available log streams.</p>
     */
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The name of the log stream.</p> <p>Use the <code>get relational database log
     * streams</code> operation to get a list of available log streams.</p>
     */
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::move(value); }

    /**
     * <p>The name of the log stream.</p> <p>Use the <code>get relational database log
     * streams</code> operation to get a list of available log streams.</p>
     */
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }

    /**
     * <p>The name of the log stream.</p> <p>Use the <code>get relational database log
     * streams</code> operation to get a list of available log streams.</p>
     */
    inline GetRelationalDatabaseLogEventsRequest& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The name of the log stream.</p> <p>Use the <code>get relational database log
     * streams</code> operation to get a list of available log streams.</p>
     */
    inline GetRelationalDatabaseLogEventsRequest& WithLogStreamName(Aws::String&& value) { SetLogStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the log stream.</p> <p>Use the <code>get relational database log
     * streams</code> operation to get a list of available log streams.</p>
     */
    inline GetRelationalDatabaseLogEventsRequest& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}


    /**
     * <p>The start of the time interval from which to get log events.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time interval from which to get log events.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time interval from which to get log events.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time interval from which to get log events.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start of the time interval from which to get log events.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline GetRelationalDatabaseLogEventsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time interval from which to get log events.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline GetRelationalDatabaseLogEventsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time interval from which to get log events.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time interval from which to get log events.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time interval from which to get log events.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time interval from which to get log events.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time interval from which to get log events.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline GetRelationalDatabaseLogEventsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time interval from which to get log events.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline GetRelationalDatabaseLogEventsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Parameter to specify if the log should start from head or tail. If
     * <code>true</code> is specified, the log event starts from the head of the log.
     * If <code>false</code> is specified, the log event starts from the tail of the
     * log.</p>  <p>For PostgreSQL, the default value of <code>false</code> is
     * the only option available.</p> 
     */
    inline bool GetStartFromHead() const{ return m_startFromHead; }

    /**
     * <p>Parameter to specify if the log should start from head or tail. If
     * <code>true</code> is specified, the log event starts from the head of the log.
     * If <code>false</code> is specified, the log event starts from the tail of the
     * log.</p>  <p>For PostgreSQL, the default value of <code>false</code> is
     * the only option available.</p> 
     */
    inline bool StartFromHeadHasBeenSet() const { return m_startFromHeadHasBeenSet; }

    /**
     * <p>Parameter to specify if the log should start from head or tail. If
     * <code>true</code> is specified, the log event starts from the head of the log.
     * If <code>false</code> is specified, the log event starts from the tail of the
     * log.</p>  <p>For PostgreSQL, the default value of <code>false</code> is
     * the only option available.</p> 
     */
    inline void SetStartFromHead(bool value) { m_startFromHeadHasBeenSet = true; m_startFromHead = value; }

    /**
     * <p>Parameter to specify if the log should start from head or tail. If
     * <code>true</code> is specified, the log event starts from the head of the log.
     * If <code>false</code> is specified, the log event starts from the tail of the
     * log.</p>  <p>For PostgreSQL, the default value of <code>false</code> is
     * the only option available.</p> 
     */
    inline GetRelationalDatabaseLogEventsRequest& WithStartFromHead(bool value) { SetStartFromHead(value); return *this;}


    /**
     * <p>The token to advance to the next or previous page of results from your
     * request.</p> <p>To get a page token, perform an initial
     * <code>GetRelationalDatabaseLogEvents</code> request. If your results are
     * paginated, the response will return a next forward token and/or next backward
     * token that you can specify as the page token in a subsequent request.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>The token to advance to the next or previous page of results from your
     * request.</p> <p>To get a page token, perform an initial
     * <code>GetRelationalDatabaseLogEvents</code> request. If your results are
     * paginated, the response will return a next forward token and/or next backward
     * token that you can specify as the page token in a subsequent request.</p>
     */
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }

    /**
     * <p>The token to advance to the next or previous page of results from your
     * request.</p> <p>To get a page token, perform an initial
     * <code>GetRelationalDatabaseLogEvents</code> request. If your results are
     * paginated, the response will return a next forward token and/or next backward
     * token that you can specify as the page token in a subsequent request.</p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>The token to advance to the next or previous page of results from your
     * request.</p> <p>To get a page token, perform an initial
     * <code>GetRelationalDatabaseLogEvents</code> request. If your results are
     * paginated, the response will return a next forward token and/or next backward
     * token that you can specify as the page token in a subsequent request.</p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }

    /**
     * <p>The token to advance to the next or previous page of results from your
     * request.</p> <p>To get a page token, perform an initial
     * <code>GetRelationalDatabaseLogEvents</code> request. If your results are
     * paginated, the response will return a next forward token and/or next backward
     * token that you can specify as the page token in a subsequent request.</p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p>The token to advance to the next or previous page of results from your
     * request.</p> <p>To get a page token, perform an initial
     * <code>GetRelationalDatabaseLogEvents</code> request. If your results are
     * paginated, the response will return a next forward token and/or next backward
     * token that you can specify as the page token in a subsequent request.</p>
     */
    inline GetRelationalDatabaseLogEventsRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next or previous page of results from your
     * request.</p> <p>To get a page token, perform an initial
     * <code>GetRelationalDatabaseLogEvents</code> request. If your results are
     * paginated, the response will return a next forward token and/or next backward
     * token that you can specify as the page token in a subsequent request.</p>
     */
    inline GetRelationalDatabaseLogEventsRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next or previous page of results from your
     * request.</p> <p>To get a page token, perform an initial
     * <code>GetRelationalDatabaseLogEvents</code> request. If your results are
     * paginated, the response will return a next forward token and/or next backward
     * token that you can specify as the page token in a subsequent request.</p>
     */
    inline GetRelationalDatabaseLogEventsRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}

  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet = false;

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    bool m_startFromHead;
    bool m_startFromHeadHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
