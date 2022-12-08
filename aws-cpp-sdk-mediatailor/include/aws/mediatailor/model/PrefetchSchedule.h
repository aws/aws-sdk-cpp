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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>A prefetch schedule allows you to tell MediaTailor to fetch and prepare
   * certain ads before an ad break happens. For more information about ad
   * prefetching, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/prefetching-ads.html">Using
   * ad prefetching</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PrefetchSchedule">AWS
   * API Reference</a></p>
   */
  class PrefetchSchedule
  {
  public:
    AWS_MEDIATAILOR_API PrefetchSchedule();
    AWS_MEDIATAILOR_API PrefetchSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API PrefetchSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the prefetch schedule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the prefetch schedule.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the prefetch schedule.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the prefetch schedule.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the prefetch schedule.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the prefetch schedule.</p>
     */
    inline PrefetchSchedule& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the prefetch schedule.</p>
     */
    inline PrefetchSchedule& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the prefetch schedule.</p>
     */
    inline PrefetchSchedule& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Consumption settings determine how, and when, MediaTailor places the
     * prefetched ads into ad breaks. Ad consumption occurs within a span of time that
     * you define, called a <i>consumption window</i>. You can designate which ad
     * breaks that MediaTailor fills with prefetch ads by setting avail matching
     * criteria.</p>
     */
    inline const PrefetchConsumption& GetConsumption() const{ return m_consumption; }

    /**
     * <p>Consumption settings determine how, and when, MediaTailor places the
     * prefetched ads into ad breaks. Ad consumption occurs within a span of time that
     * you define, called a <i>consumption window</i>. You can designate which ad
     * breaks that MediaTailor fills with prefetch ads by setting avail matching
     * criteria.</p>
     */
    inline bool ConsumptionHasBeenSet() const { return m_consumptionHasBeenSet; }

    /**
     * <p>Consumption settings determine how, and when, MediaTailor places the
     * prefetched ads into ad breaks. Ad consumption occurs within a span of time that
     * you define, called a <i>consumption window</i>. You can designate which ad
     * breaks that MediaTailor fills with prefetch ads by setting avail matching
     * criteria.</p>
     */
    inline void SetConsumption(const PrefetchConsumption& value) { m_consumptionHasBeenSet = true; m_consumption = value; }

    /**
     * <p>Consumption settings determine how, and when, MediaTailor places the
     * prefetched ads into ad breaks. Ad consumption occurs within a span of time that
     * you define, called a <i>consumption window</i>. You can designate which ad
     * breaks that MediaTailor fills with prefetch ads by setting avail matching
     * criteria.</p>
     */
    inline void SetConsumption(PrefetchConsumption&& value) { m_consumptionHasBeenSet = true; m_consumption = std::move(value); }

    /**
     * <p>Consumption settings determine how, and when, MediaTailor places the
     * prefetched ads into ad breaks. Ad consumption occurs within a span of time that
     * you define, called a <i>consumption window</i>. You can designate which ad
     * breaks that MediaTailor fills with prefetch ads by setting avail matching
     * criteria.</p>
     */
    inline PrefetchSchedule& WithConsumption(const PrefetchConsumption& value) { SetConsumption(value); return *this;}

    /**
     * <p>Consumption settings determine how, and when, MediaTailor places the
     * prefetched ads into ad breaks. Ad consumption occurs within a span of time that
     * you define, called a <i>consumption window</i>. You can designate which ad
     * breaks that MediaTailor fills with prefetch ads by setting avail matching
     * criteria.</p>
     */
    inline PrefetchSchedule& WithConsumption(PrefetchConsumption&& value) { SetConsumption(std::move(value)); return *this;}


    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline PrefetchSchedule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline PrefetchSchedule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the prefetch schedule. The name must be unique among all prefetch
     * schedules that are associated with the specified playback configuration.</p>
     */
    inline PrefetchSchedule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the playback configuration to create the prefetch schedule
     * for.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationName() const{ return m_playbackConfigurationName; }

    /**
     * <p>The name of the playback configuration to create the prefetch schedule
     * for.</p>
     */
    inline bool PlaybackConfigurationNameHasBeenSet() const { return m_playbackConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the playback configuration to create the prefetch schedule
     * for.</p>
     */
    inline void SetPlaybackConfigurationName(const Aws::String& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = value; }

    /**
     * <p>The name of the playback configuration to create the prefetch schedule
     * for.</p>
     */
    inline void SetPlaybackConfigurationName(Aws::String&& value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName = std::move(value); }

    /**
     * <p>The name of the playback configuration to create the prefetch schedule
     * for.</p>
     */
    inline void SetPlaybackConfigurationName(const char* value) { m_playbackConfigurationNameHasBeenSet = true; m_playbackConfigurationName.assign(value); }

    /**
     * <p>The name of the playback configuration to create the prefetch schedule
     * for.</p>
     */
    inline PrefetchSchedule& WithPlaybackConfigurationName(const Aws::String& value) { SetPlaybackConfigurationName(value); return *this;}

    /**
     * <p>The name of the playback configuration to create the prefetch schedule
     * for.</p>
     */
    inline PrefetchSchedule& WithPlaybackConfigurationName(Aws::String&& value) { SetPlaybackConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the playback configuration to create the prefetch schedule
     * for.</p>
     */
    inline PrefetchSchedule& WithPlaybackConfigurationName(const char* value) { SetPlaybackConfigurationName(value); return *this;}


    /**
     * <p>A complex type that contains settings for prefetch retrieval from the ad
     * decision server (ADS).</p>
     */
    inline const PrefetchRetrieval& GetRetrieval() const{ return m_retrieval; }

    /**
     * <p>A complex type that contains settings for prefetch retrieval from the ad
     * decision server (ADS).</p>
     */
    inline bool RetrievalHasBeenSet() const { return m_retrievalHasBeenSet; }

    /**
     * <p>A complex type that contains settings for prefetch retrieval from the ad
     * decision server (ADS).</p>
     */
    inline void SetRetrieval(const PrefetchRetrieval& value) { m_retrievalHasBeenSet = true; m_retrieval = value; }

    /**
     * <p>A complex type that contains settings for prefetch retrieval from the ad
     * decision server (ADS).</p>
     */
    inline void SetRetrieval(PrefetchRetrieval&& value) { m_retrievalHasBeenSet = true; m_retrieval = std::move(value); }

    /**
     * <p>A complex type that contains settings for prefetch retrieval from the ad
     * decision server (ADS).</p>
     */
    inline PrefetchSchedule& WithRetrieval(const PrefetchRetrieval& value) { SetRetrieval(value); return *this;}

    /**
     * <p>A complex type that contains settings for prefetch retrieval from the ad
     * decision server (ADS).</p>
     */
    inline PrefetchSchedule& WithRetrieval(PrefetchRetrieval&& value) { SetRetrieval(std::move(value)); return *this;}


    /**
     * <p>An optional stream identifier that you can specify in order to prefetch for
     * multiple streams that use the same playback configuration.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>An optional stream identifier that you can specify in order to prefetch for
     * multiple streams that use the same playback configuration.</p>
     */
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }

    /**
     * <p>An optional stream identifier that you can specify in order to prefetch for
     * multiple streams that use the same playback configuration.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * <p>An optional stream identifier that you can specify in order to prefetch for
     * multiple streams that use the same playback configuration.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * <p>An optional stream identifier that you can specify in order to prefetch for
     * multiple streams that use the same playback configuration.</p>
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * <p>An optional stream identifier that you can specify in order to prefetch for
     * multiple streams that use the same playback configuration.</p>
     */
    inline PrefetchSchedule& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>An optional stream identifier that you can specify in order to prefetch for
     * multiple streams that use the same playback configuration.</p>
     */
    inline PrefetchSchedule& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>An optional stream identifier that you can specify in order to prefetch for
     * multiple streams that use the same playback configuration.</p>
     */
    inline PrefetchSchedule& WithStreamId(const char* value) { SetStreamId(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    PrefetchConsumption m_consumption;
    bool m_consumptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_playbackConfigurationName;
    bool m_playbackConfigurationNameHasBeenSet = false;

    PrefetchRetrieval m_retrieval;
    bool m_retrievalHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
