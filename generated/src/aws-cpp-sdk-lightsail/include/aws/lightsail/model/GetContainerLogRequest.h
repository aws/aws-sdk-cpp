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
  class GetContainerLogRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetContainerLogRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContainerLog"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the container service for which to get a container log.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline GetContainerLogRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline GetContainerLogRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline GetContainerLogRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the container that is either running or previously ran on the
     * container service for which to return a log.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }
    inline GetContainerLogRequest& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}
    inline GetContainerLogRequest& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}
    inline GetContainerLogRequest& WithContainerName(const char* value) { SetContainerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the time interval for which to get log data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, specify
     * <code>1538424000</code> as the start time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline GetContainerLogRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetContainerLogRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time interval for which to get log data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 9 PM UTC, specify
     * <code>1538427600</code> as the end time.</p> </li> </ul> <p>You can convert a
     * human-friendly time to Unix time format using a converter like <a
     * href="https://www.epochconverter.com/">Epoch converter</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline GetContainerLogRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetContainerLogRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pattern to use to filter the returned log events to a specific term.</p>
     * <p>The following are a few examples of filter patterns that you can specify:</p>
     * <ul> <li> <p>To return all log events, specify a filter pattern of
     * <code>""</code>.</p> </li> <li> <p>To exclude log events that contain the
     * <code>ERROR</code> term, and return all other log events, specify a filter
     * pattern of <code>"-ERROR"</code>.</p> </li> <li> <p>To return log events that
     * contain the <code>ERROR</code> term, specify a filter pattern of
     * <code>"ERROR"</code>.</p> </li> <li> <p>To return log events that contain both
     * the <code>ERROR</code> and <code>Exception</code> terms, specify a filter
     * pattern of <code>"ERROR Exception"</code>.</p> </li> <li> <p>To return log
     * events that contain the <code>ERROR</code> <i>or</i> the <code>Exception</code>
     * term, specify a filter pattern of <code>"?ERROR ?Exception"</code>.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::move(value); }
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }
    inline GetContainerLogRequest& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}
    inline GetContainerLogRequest& WithFilterPattern(Aws::String&& value) { SetFilterPattern(std::move(value)); return *this;}
    inline GetContainerLogRequest& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetContainerLog</code> request. If
     * your results are paginated, the response will return a next page token that you
     * can specify as the page token in a subsequent request.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }
    inline GetContainerLogRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}
    inline GetContainerLogRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}
    inline GetContainerLogRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
