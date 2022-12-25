/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A complex type that contains settings governing when MediaTailor prefetches
   * ads, and which dynamic variables that MediaTailor includes in the request to the
   * ad decision server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PrefetchRetrieval">AWS
   * API Reference</a></p>
   */
  class PrefetchRetrieval
  {
  public:
    AWS_MEDIATAILOR_API PrefetchRetrieval();
    AWS_MEDIATAILOR_API PrefetchRetrieval(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API PrefetchRetrieval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDynamicVariables() const{ return m_dynamicVariables; }

    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline bool DynamicVariablesHasBeenSet() const { return m_dynamicVariablesHasBeenSet; }

    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline void SetDynamicVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_dynamicVariablesHasBeenSet = true; m_dynamicVariables = value; }

    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline void SetDynamicVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_dynamicVariablesHasBeenSet = true; m_dynamicVariables = std::move(value); }

    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline PrefetchRetrieval& WithDynamicVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetDynamicVariables(value); return *this;}

    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline PrefetchRetrieval& WithDynamicVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetDynamicVariables(std::move(value)); return *this;}

    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline PrefetchRetrieval& AddDynamicVariables(const Aws::String& key, const Aws::String& value) { m_dynamicVariablesHasBeenSet = true; m_dynamicVariables.emplace(key, value); return *this; }

    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline PrefetchRetrieval& AddDynamicVariables(Aws::String&& key, const Aws::String& value) { m_dynamicVariablesHasBeenSet = true; m_dynamicVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline PrefetchRetrieval& AddDynamicVariables(const Aws::String& key, Aws::String&& value) { m_dynamicVariablesHasBeenSet = true; m_dynamicVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline PrefetchRetrieval& AddDynamicVariables(Aws::String&& key, Aws::String&& value) { m_dynamicVariablesHasBeenSet = true; m_dynamicVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline PrefetchRetrieval& AddDynamicVariables(const char* key, Aws::String&& value) { m_dynamicVariablesHasBeenSet = true; m_dynamicVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline PrefetchRetrieval& AddDynamicVariables(Aws::String&& key, const char* value) { m_dynamicVariablesHasBeenSet = true; m_dynamicVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline PrefetchRetrieval& AddDynamicVariables(const char* key, const char* value) { m_dynamicVariablesHasBeenSet = true; m_dynamicVariables.emplace(key, value); return *this; }


    /**
     * <p>The time when prefetch retrieval ends for the ad break. Prefetching will be
     * attempted for manifest requests that occur at or before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time when prefetch retrieval ends for the ad break. Prefetching will be
     * attempted for manifest requests that occur at or before this time.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time when prefetch retrieval ends for the ad break. Prefetching will be
     * attempted for manifest requests that occur at or before this time.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time when prefetch retrieval ends for the ad break. Prefetching will be
     * attempted for manifest requests that occur at or before this time.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time when prefetch retrieval ends for the ad break. Prefetching will be
     * attempted for manifest requests that occur at or before this time.</p>
     */
    inline PrefetchRetrieval& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time when prefetch retrieval ends for the ad break. Prefetching will be
     * attempted for manifest requests that occur at or before this time.</p>
     */
    inline PrefetchRetrieval& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The time when prefetch retrievals can start for this break. Ad prefetching
     * will be attempted for manifest requests that occur at or after this time.
     * Defaults to the current time. If not specified, the prefetch retrieval starts as
     * soon as possible.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time when prefetch retrievals can start for this break. Ad prefetching
     * will be attempted for manifest requests that occur at or after this time.
     * Defaults to the current time. If not specified, the prefetch retrieval starts as
     * soon as possible.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time when prefetch retrievals can start for this break. Ad prefetching
     * will be attempted for manifest requests that occur at or after this time.
     * Defaults to the current time. If not specified, the prefetch retrieval starts as
     * soon as possible.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time when prefetch retrievals can start for this break. Ad prefetching
     * will be attempted for manifest requests that occur at or after this time.
     * Defaults to the current time. If not specified, the prefetch retrieval starts as
     * soon as possible.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time when prefetch retrievals can start for this break. Ad prefetching
     * will be attempted for manifest requests that occur at or after this time.
     * Defaults to the current time. If not specified, the prefetch retrieval starts as
     * soon as possible.</p>
     */
    inline PrefetchRetrieval& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time when prefetch retrievals can start for this break. Ad prefetching
     * will be attempted for manifest requests that occur at or after this time.
     * Defaults to the current time. If not specified, the prefetch retrieval starts as
     * soon as possible.</p>
     */
    inline PrefetchRetrieval& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_dynamicVariables;
    bool m_dynamicVariablesHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
