/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the GetRecommendationsRequest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetRecommendationsRequest">AWS
   * API Reference</a></p>
   */
  class GetRecommendationsRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API GetRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecommendations"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUPROFILER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The start time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The start time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The start time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The start time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The start time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline GetRecommendationsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The start time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline GetRecommendationsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> The language used to provide analysis. Specify using a string that is one of
     * the following <code>BCP 47</code> language codes. </p> <ul> <li> <p>
     * <code>de-DE</code> - German, Germany </p> </li> <li> <p> <code>en-GB</code> -
     * English, United Kingdom </p> </li> <li> <p> <code>en-US</code> - English, United
     * States </p> </li> <li> <p> <code>es-ES</code> - Spanish, Spain </p> </li> <li>
     * <p> <code>fr-FR</code> - French, France </p> </li> <li> <p> <code>it-IT</code> -
     * Italian, Italy </p> </li> <li> <p> <code>ja-JP</code> - Japanese, Japan </p>
     * </li> <li> <p> <code>ko-KR</code> - Korean, Republic of Korea </p> </li> <li>
     * <p> <code>pt-BR</code> - Portugese, Brazil </p> </li> <li> <p>
     * <code>zh-CN</code> - Chinese, China </p> </li> <li> <p> <code>zh-TW</code> -
     * Chinese, Taiwan </p> </li> </ul>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * <p> The language used to provide analysis. Specify using a string that is one of
     * the following <code>BCP 47</code> language codes. </p> <ul> <li> <p>
     * <code>de-DE</code> - German, Germany </p> </li> <li> <p> <code>en-GB</code> -
     * English, United Kingdom </p> </li> <li> <p> <code>en-US</code> - English, United
     * States </p> </li> <li> <p> <code>es-ES</code> - Spanish, Spain </p> </li> <li>
     * <p> <code>fr-FR</code> - French, France </p> </li> <li> <p> <code>it-IT</code> -
     * Italian, Italy </p> </li> <li> <p> <code>ja-JP</code> - Japanese, Japan </p>
     * </li> <li> <p> <code>ko-KR</code> - Korean, Republic of Korea </p> </li> <li>
     * <p> <code>pt-BR</code> - Portugese, Brazil </p> </li> <li> <p>
     * <code>zh-CN</code> - Chinese, China </p> </li> <li> <p> <code>zh-TW</code> -
     * Chinese, Taiwan </p> </li> </ul>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p> The language used to provide analysis. Specify using a string that is one of
     * the following <code>BCP 47</code> language codes. </p> <ul> <li> <p>
     * <code>de-DE</code> - German, Germany </p> </li> <li> <p> <code>en-GB</code> -
     * English, United Kingdom </p> </li> <li> <p> <code>en-US</code> - English, United
     * States </p> </li> <li> <p> <code>es-ES</code> - Spanish, Spain </p> </li> <li>
     * <p> <code>fr-FR</code> - French, France </p> </li> <li> <p> <code>it-IT</code> -
     * Italian, Italy </p> </li> <li> <p> <code>ja-JP</code> - Japanese, Japan </p>
     * </li> <li> <p> <code>ko-KR</code> - Korean, Republic of Korea </p> </li> <li>
     * <p> <code>pt-BR</code> - Portugese, Brazil </p> </li> <li> <p>
     * <code>zh-CN</code> - Chinese, China </p> </li> <li> <p> <code>zh-TW</code> -
     * Chinese, Taiwan </p> </li> </ul>
     */
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p> The language used to provide analysis. Specify using a string that is one of
     * the following <code>BCP 47</code> language codes. </p> <ul> <li> <p>
     * <code>de-DE</code> - German, Germany </p> </li> <li> <p> <code>en-GB</code> -
     * English, United Kingdom </p> </li> <li> <p> <code>en-US</code> - English, United
     * States </p> </li> <li> <p> <code>es-ES</code> - Spanish, Spain </p> </li> <li>
     * <p> <code>fr-FR</code> - French, France </p> </li> <li> <p> <code>it-IT</code> -
     * Italian, Italy </p> </li> <li> <p> <code>ja-JP</code> - Japanese, Japan </p>
     * </li> <li> <p> <code>ko-KR</code> - Korean, Republic of Korea </p> </li> <li>
     * <p> <code>pt-BR</code> - Portugese, Brazil </p> </li> <li> <p>
     * <code>zh-CN</code> - Chinese, China </p> </li> <li> <p> <code>zh-TW</code> -
     * Chinese, Taiwan </p> </li> </ul>
     */
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p> The language used to provide analysis. Specify using a string that is one of
     * the following <code>BCP 47</code> language codes. </p> <ul> <li> <p>
     * <code>de-DE</code> - German, Germany </p> </li> <li> <p> <code>en-GB</code> -
     * English, United Kingdom </p> </li> <li> <p> <code>en-US</code> - English, United
     * States </p> </li> <li> <p> <code>es-ES</code> - Spanish, Spain </p> </li> <li>
     * <p> <code>fr-FR</code> - French, France </p> </li> <li> <p> <code>it-IT</code> -
     * Italian, Italy </p> </li> <li> <p> <code>ja-JP</code> - Japanese, Japan </p>
     * </li> <li> <p> <code>ko-KR</code> - Korean, Republic of Korea </p> </li> <li>
     * <p> <code>pt-BR</code> - Portugese, Brazil </p> </li> <li> <p>
     * <code>zh-CN</code> - Chinese, China </p> </li> <li> <p> <code>zh-TW</code> -
     * Chinese, Taiwan </p> </li> </ul>
     */
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

    /**
     * <p> The language used to provide analysis. Specify using a string that is one of
     * the following <code>BCP 47</code> language codes. </p> <ul> <li> <p>
     * <code>de-DE</code> - German, Germany </p> </li> <li> <p> <code>en-GB</code> -
     * English, United Kingdom </p> </li> <li> <p> <code>en-US</code> - English, United
     * States </p> </li> <li> <p> <code>es-ES</code> - Spanish, Spain </p> </li> <li>
     * <p> <code>fr-FR</code> - French, France </p> </li> <li> <p> <code>it-IT</code> -
     * Italian, Italy </p> </li> <li> <p> <code>ja-JP</code> - Japanese, Japan </p>
     * </li> <li> <p> <code>ko-KR</code> - Korean, Republic of Korea </p> </li> <li>
     * <p> <code>pt-BR</code> - Portugese, Brazil </p> </li> <li> <p>
     * <code>zh-CN</code> - Chinese, China </p> </li> <li> <p> <code>zh-TW</code> -
     * Chinese, Taiwan </p> </li> </ul>
     */
    inline GetRecommendationsRequest& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * <p> The language used to provide analysis. Specify using a string that is one of
     * the following <code>BCP 47</code> language codes. </p> <ul> <li> <p>
     * <code>de-DE</code> - German, Germany </p> </li> <li> <p> <code>en-GB</code> -
     * English, United Kingdom </p> </li> <li> <p> <code>en-US</code> - English, United
     * States </p> </li> <li> <p> <code>es-ES</code> - Spanish, Spain </p> </li> <li>
     * <p> <code>fr-FR</code> - French, France </p> </li> <li> <p> <code>it-IT</code> -
     * Italian, Italy </p> </li> <li> <p> <code>ja-JP</code> - Japanese, Japan </p>
     * </li> <li> <p> <code>ko-KR</code> - Korean, Republic of Korea </p> </li> <li>
     * <p> <code>pt-BR</code> - Portugese, Brazil </p> </li> <li> <p>
     * <code>zh-CN</code> - Chinese, China </p> </li> <li> <p> <code>zh-TW</code> -
     * Chinese, Taiwan </p> </li> </ul>
     */
    inline GetRecommendationsRequest& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}

    /**
     * <p> The language used to provide analysis. Specify using a string that is one of
     * the following <code>BCP 47</code> language codes. </p> <ul> <li> <p>
     * <code>de-DE</code> - German, Germany </p> </li> <li> <p> <code>en-GB</code> -
     * English, United Kingdom </p> </li> <li> <p> <code>en-US</code> - English, United
     * States </p> </li> <li> <p> <code>es-ES</code> - Spanish, Spain </p> </li> <li>
     * <p> <code>fr-FR</code> - French, France </p> </li> <li> <p> <code>it-IT</code> -
     * Italian, Italy </p> </li> <li> <p> <code>ja-JP</code> - Japanese, Japan </p>
     * </li> <li> <p> <code>ko-KR</code> - Korean, Republic of Korea </p> </li> <li>
     * <p> <code>pt-BR</code> - Portugese, Brazil </p> </li> <li> <p>
     * <code>zh-CN</code> - Chinese, China </p> </li> <li> <p> <code>zh-TW</code> -
     * Chinese, Taiwan </p> </li> </ul>
     */
    inline GetRecommendationsRequest& WithLocale(const char* value) { SetLocale(value); return *this;}


    /**
     * <p> The name of the profiling group to get analysis data about. </p>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    /**
     * <p> The name of the profiling group to get analysis data about. </p>
     */
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    /**
     * <p> The name of the profiling group to get analysis data about. </p>
     */
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    /**
     * <p> The name of the profiling group to get analysis data about. </p>
     */
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    /**
     * <p> The name of the profiling group to get analysis data about. </p>
     */
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    /**
     * <p> The name of the profiling group to get analysis data about. </p>
     */
    inline GetRecommendationsRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    /**
     * <p> The name of the profiling group to get analysis data about. </p>
     */
    inline GetRecommendationsRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the profiling group to get analysis data about. </p>
     */
    inline GetRecommendationsRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}


    /**
     * <p> The end time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The end time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The end time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The end time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The end time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline GetRecommendationsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The end time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline GetRecommendationsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
