/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
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
   * <p>The configuration for pre-roll ad insertion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/LivePreRollConfiguration">AWS
   * API Reference</a></p>
   */
  class LivePreRollConfiguration
  {
  public:
    AWS_MEDIATAILOR_API LivePreRollConfiguration();
    AWS_MEDIATAILOR_API LivePreRollConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API LivePreRollConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL for the ad decision server (ADS) for pre-roll ads. This includes the
     * specification of static parameters and placeholders for dynamic parameters. AWS
     * Elemental MediaTailor substitutes player-specific and session-specific
     * parameters as needed when calling the ADS. Alternately, for testing, you can
     * provide a static VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline const Aws::String& GetAdDecisionServerUrl() const{ return m_adDecisionServerUrl; }

    /**
     * <p>The URL for the ad decision server (ADS) for pre-roll ads. This includes the
     * specification of static parameters and placeholders for dynamic parameters. AWS
     * Elemental MediaTailor substitutes player-specific and session-specific
     * parameters as needed when calling the ADS. Alternately, for testing, you can
     * provide a static VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline bool AdDecisionServerUrlHasBeenSet() const { return m_adDecisionServerUrlHasBeenSet; }

    /**
     * <p>The URL for the ad decision server (ADS) for pre-roll ads. This includes the
     * specification of static parameters and placeholders for dynamic parameters. AWS
     * Elemental MediaTailor substitutes player-specific and session-specific
     * parameters as needed when calling the ADS. Alternately, for testing, you can
     * provide a static VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline void SetAdDecisionServerUrl(const Aws::String& value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl = value; }

    /**
     * <p>The URL for the ad decision server (ADS) for pre-roll ads. This includes the
     * specification of static parameters and placeholders for dynamic parameters. AWS
     * Elemental MediaTailor substitutes player-specific and session-specific
     * parameters as needed when calling the ADS. Alternately, for testing, you can
     * provide a static VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline void SetAdDecisionServerUrl(Aws::String&& value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl = std::move(value); }

    /**
     * <p>The URL for the ad decision server (ADS) for pre-roll ads. This includes the
     * specification of static parameters and placeholders for dynamic parameters. AWS
     * Elemental MediaTailor substitutes player-specific and session-specific
     * parameters as needed when calling the ADS. Alternately, for testing, you can
     * provide a static VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline void SetAdDecisionServerUrl(const char* value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl.assign(value); }

    /**
     * <p>The URL for the ad decision server (ADS) for pre-roll ads. This includes the
     * specification of static parameters and placeholders for dynamic parameters. AWS
     * Elemental MediaTailor substitutes player-specific and session-specific
     * parameters as needed when calling the ADS. Alternately, for testing, you can
     * provide a static VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline LivePreRollConfiguration& WithAdDecisionServerUrl(const Aws::String& value) { SetAdDecisionServerUrl(value); return *this;}

    /**
     * <p>The URL for the ad decision server (ADS) for pre-roll ads. This includes the
     * specification of static parameters and placeholders for dynamic parameters. AWS
     * Elemental MediaTailor substitutes player-specific and session-specific
     * parameters as needed when calling the ADS. Alternately, for testing, you can
     * provide a static VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline LivePreRollConfiguration& WithAdDecisionServerUrl(Aws::String&& value) { SetAdDecisionServerUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the ad decision server (ADS) for pre-roll ads. This includes the
     * specification of static parameters and placeholders for dynamic parameters. AWS
     * Elemental MediaTailor substitutes player-specific and session-specific
     * parameters as needed when calling the ADS. Alternately, for testing, you can
     * provide a static VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline LivePreRollConfiguration& WithAdDecisionServerUrl(const char* value) { SetAdDecisionServerUrl(value); return *this;}


    /**
     * <p>The maximum allowed duration for the pre-roll ad avail. AWS Elemental
     * MediaTailor won't play pre-roll ads to exceed this duration, regardless of the
     * total duration of ads that the ADS returns.</p>
     */
    inline int GetMaxDurationSeconds() const{ return m_maxDurationSeconds; }

    /**
     * <p>The maximum allowed duration for the pre-roll ad avail. AWS Elemental
     * MediaTailor won't play pre-roll ads to exceed this duration, regardless of the
     * total duration of ads that the ADS returns.</p>
     */
    inline bool MaxDurationSecondsHasBeenSet() const { return m_maxDurationSecondsHasBeenSet; }

    /**
     * <p>The maximum allowed duration for the pre-roll ad avail. AWS Elemental
     * MediaTailor won't play pre-roll ads to exceed this duration, regardless of the
     * total duration of ads that the ADS returns.</p>
     */
    inline void SetMaxDurationSeconds(int value) { m_maxDurationSecondsHasBeenSet = true; m_maxDurationSeconds = value; }

    /**
     * <p>The maximum allowed duration for the pre-roll ad avail. AWS Elemental
     * MediaTailor won't play pre-roll ads to exceed this duration, regardless of the
     * total duration of ads that the ADS returns.</p>
     */
    inline LivePreRollConfiguration& WithMaxDurationSeconds(int value) { SetMaxDurationSeconds(value); return *this;}

  private:

    Aws::String m_adDecisionServerUrl;
    bool m_adDecisionServerUrlHasBeenSet = false;

    int m_maxDurationSeconds;
    bool m_maxDurationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
