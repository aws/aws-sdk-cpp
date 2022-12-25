/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/PrefetchConsumption.h>
#include <aws/mediatailor/model/PrefetchRetrieval.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{
  class CreatePrefetchScheduleResult
  {
  public:
    AWS_MEDIATAILOR_API CreatePrefetchScheduleResult();
    AWS_MEDIATAILOR_API CreatePrefetchScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API CreatePrefetchScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN to assign to the prefetch schedule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN to assign to the prefetch schedule.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN to assign to the prefetch schedule.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN to assign to the prefetch schedule.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN to assign to the prefetch schedule.</p>
     */
    inline CreatePrefetchScheduleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN to assign to the prefetch schedule.</p>
     */
    inline CreatePrefetchScheduleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN to assign to the prefetch schedule.</p>
     */
    inline CreatePrefetchScheduleResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The configuration settings for MediaTailor's <i>consumption</i> of the
     * prefetched ads from the ad decision server. Each consumption configuration
     * contains an end time and an optional start time that define the <i>consumption
     * window</i>. Prefetch schedules automatically expire no earlier than seven days
     * after the end time.</p>
     */
    inline const PrefetchConsumption& GetConsumption() const{ return m_consumption; }

    /**
     * <p>The configuration settings for MediaTailor's <i>consumption</i> of the
     * prefetched ads from the ad decision server. Each consumption configuration
     * contains an end time and an optional start time that define the <i>consumption
     * window</i>. Prefetch schedules automatically expire no earlier than seven days
     * after the end time.</p>
     */
    inline void SetConsumption(const PrefetchConsumption& value) { m_consumption = value; }

    /**
     * <p>The configuration settings for MediaTailor's <i>consumption</i> of the
     * prefetched ads from the ad decision server. Each consumption configuration
     * contains an end time and an optional start time that define the <i>consumption
     * window</i>. Prefetch schedules automatically expire no earlier than seven days
     * after the end time.</p>
     */
    inline void SetConsumption(PrefetchConsumption&& value) { m_consumption = std::move(value); }

    /**
     * <p>The configuration settings for MediaTailor's <i>consumption</i> of the
     * prefetched ads from the ad decision server. Each consumption configuration
     * contains an end time and an optional start time that define the <i>consumption
     * window</i>. Prefetch schedules automatically expire no earlier than seven days
     * after the end time.</p>
     */
    inline CreatePrefetchScheduleResult& WithConsumption(const PrefetchConsumption& value) { SetConsumption(value); return *this;}

    /**
     * <p>The configuration settings for MediaTailor's <i>consumption</i> of the
     * prefetched ads from the ad decision server. Each consumption configuration
     * contains an end time and an optional start time that define the <i>consumption
     * window</i>. Prefetch schedules automatically expire no earlier than seven days
     * after the end time.</p>
     */
    inline CreatePrefetchScheduleResult& WithConsumption(PrefetchConsumption&& value) { SetConsumption(std::move(value)); return *this;}


    /**
     * <p>The name to assign to the prefetch schedule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to assign to the prefetch schedule.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name to assign to the prefetch schedule.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name to assign to the prefetch schedule.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name to assign to the prefetch schedule.</p>
     */
    inline CreatePrefetchScheduleResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to assign to the prefetch schedule.</p>
     */
    inline CreatePrefetchScheduleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to assign to the prefetch schedule.</p>
     */
    inline CreatePrefetchScheduleResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name to assign to the playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const{ return m_playbackConfigurationName; }

    /**
     * <p>The name to assign to the playback configuration.</p>
     */
    inline void SetPlaybackConfigurationName(const Aws::String& value) { m_playbackConfigurationName = value; }

    /**
     * <p>The name to assign to the playback configuration.</p>
     */
    inline void SetPlaybackConfigurationName(Aws::String&& value) { m_playbackConfigurationName = std::move(value); }

    /**
     * <p>The name to assign to the playback configuration.</p>
     */
    inline void SetPlaybackConfigurationName(const char* value) { m_playbackConfigurationName.assign(value); }

    /**
     * <p>The name to assign to the playback configuration.</p>
     */
    inline CreatePrefetchScheduleResult& WithPlaybackConfigurationName(const Aws::String& value) { SetPlaybackConfigurationName(value); return *this;}

    /**
     * <p>The name to assign to the playback configuration.</p>
     */
    inline CreatePrefetchScheduleResult& WithPlaybackConfigurationName(Aws::String&& value) { SetPlaybackConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name to assign to the playback configuration.</p>
     */
    inline CreatePrefetchScheduleResult& WithPlaybackConfigurationName(const char* value) { SetPlaybackConfigurationName(value); return *this;}


    /**
     * <p>The configuration settings for retrieval of prefetched ads from the ad
     * decision server. Only one set of prefetched ads will be retrieved and
     * subsequently consumed for each ad break.</p>
     */
    inline const PrefetchRetrieval& GetRetrieval() const{ return m_retrieval; }

    /**
     * <p>The configuration settings for retrieval of prefetched ads from the ad
     * decision server. Only one set of prefetched ads will be retrieved and
     * subsequently consumed for each ad break.</p>
     */
    inline void SetRetrieval(const PrefetchRetrieval& value) { m_retrieval = value; }

    /**
     * <p>The configuration settings for retrieval of prefetched ads from the ad
     * decision server. Only one set of prefetched ads will be retrieved and
     * subsequently consumed for each ad break.</p>
     */
    inline void SetRetrieval(PrefetchRetrieval&& value) { m_retrieval = std::move(value); }

    /**
     * <p>The configuration settings for retrieval of prefetched ads from the ad
     * decision server. Only one set of prefetched ads will be retrieved and
     * subsequently consumed for each ad break.</p>
     */
    inline CreatePrefetchScheduleResult& WithRetrieval(const PrefetchRetrieval& value) { SetRetrieval(value); return *this;}

    /**
     * <p>The configuration settings for retrieval of prefetched ads from the ad
     * decision server. Only one set of prefetched ads will be retrieved and
     * subsequently consumed for each ad break.</p>
     */
    inline CreatePrefetchScheduleResult& WithRetrieval(PrefetchRetrieval&& value) { SetRetrieval(std::move(value)); return *this;}


    /**
     * <p>An optional stream identifier that MediaTailor uses to prefetch ads for
     * multiple streams that use the same playback configuration. If
     * <code>StreamId</code> is specified, MediaTailor returns all of the prefetch
     * schedules with an exact match on <code>StreamId</code>. If not specified,
     * MediaTailor returns all of the prefetch schedules for the playback
     * configuration, regardless of <code>StreamId</code>.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>An optional stream identifier that MediaTailor uses to prefetch ads for
     * multiple streams that use the same playback configuration. If
     * <code>StreamId</code> is specified, MediaTailor returns all of the prefetch
     * schedules with an exact match on <code>StreamId</code>. If not specified,
     * MediaTailor returns all of the prefetch schedules for the playback
     * configuration, regardless of <code>StreamId</code>.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamId = value; }

    /**
     * <p>An optional stream identifier that MediaTailor uses to prefetch ads for
     * multiple streams that use the same playback configuration. If
     * <code>StreamId</code> is specified, MediaTailor returns all of the prefetch
     * schedules with an exact match on <code>StreamId</code>. If not specified,
     * MediaTailor returns all of the prefetch schedules for the playback
     * configuration, regardless of <code>StreamId</code>.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamId = std::move(value); }

    /**
     * <p>An optional stream identifier that MediaTailor uses to prefetch ads for
     * multiple streams that use the same playback configuration. If
     * <code>StreamId</code> is specified, MediaTailor returns all of the prefetch
     * schedules with an exact match on <code>StreamId</code>. If not specified,
     * MediaTailor returns all of the prefetch schedules for the playback
     * configuration, regardless of <code>StreamId</code>.</p>
     */
    inline void SetStreamId(const char* value) { m_streamId.assign(value); }

    /**
     * <p>An optional stream identifier that MediaTailor uses to prefetch ads for
     * multiple streams that use the same playback configuration. If
     * <code>StreamId</code> is specified, MediaTailor returns all of the prefetch
     * schedules with an exact match on <code>StreamId</code>. If not specified,
     * MediaTailor returns all of the prefetch schedules for the playback
     * configuration, regardless of <code>StreamId</code>.</p>
     */
    inline CreatePrefetchScheduleResult& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>An optional stream identifier that MediaTailor uses to prefetch ads for
     * multiple streams that use the same playback configuration. If
     * <code>StreamId</code> is specified, MediaTailor returns all of the prefetch
     * schedules with an exact match on <code>StreamId</code>. If not specified,
     * MediaTailor returns all of the prefetch schedules for the playback
     * configuration, regardless of <code>StreamId</code>.</p>
     */
    inline CreatePrefetchScheduleResult& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>An optional stream identifier that MediaTailor uses to prefetch ads for
     * multiple streams that use the same playback configuration. If
     * <code>StreamId</code> is specified, MediaTailor returns all of the prefetch
     * schedules with an exact match on <code>StreamId</code>. If not specified,
     * MediaTailor returns all of the prefetch schedules for the playback
     * configuration, regardless of <code>StreamId</code>.</p>
     */
    inline CreatePrefetchScheduleResult& WithStreamId(const char* value) { SetStreamId(value); return *this;}

  private:

    Aws::String m_arn;

    PrefetchConsumption m_consumption;

    Aws::String m_name;

    Aws::String m_playbackConfigurationName;

    PrefetchRetrieval m_retrieval;

    Aws::String m_streamId;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
