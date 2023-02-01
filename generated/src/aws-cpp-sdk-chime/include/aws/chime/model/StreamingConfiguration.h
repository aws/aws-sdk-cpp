/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/StreamingNotificationTarget.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The streaming configuration associated with an Amazon Chime Voice Connector.
   * Specifies whether media streaming is enabled for sending to Amazon Kinesis, and
   * shows the retention period for the Amazon Kinesis data, in hours.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/StreamingConfiguration">AWS
   * API Reference</a></p>
   */
  class StreamingConfiguration
  {
  public:
    AWS_CHIME_API StreamingConfiguration();
    AWS_CHIME_API StreamingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API StreamingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The retention period, in hours, for the Amazon Kinesis data.</p>
     */
    inline int GetDataRetentionInHours() const{ return m_dataRetentionInHours; }

    /**
     * <p>The retention period, in hours, for the Amazon Kinesis data.</p>
     */
    inline bool DataRetentionInHoursHasBeenSet() const { return m_dataRetentionInHoursHasBeenSet; }

    /**
     * <p>The retention period, in hours, for the Amazon Kinesis data.</p>
     */
    inline void SetDataRetentionInHours(int value) { m_dataRetentionInHoursHasBeenSet = true; m_dataRetentionInHours = value; }

    /**
     * <p>The retention period, in hours, for the Amazon Kinesis data.</p>
     */
    inline StreamingConfiguration& WithDataRetentionInHours(int value) { SetDataRetentionInHours(value); return *this;}


    /**
     * <p>When true, media streaming to Amazon Kinesis is turned off.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }

    /**
     * <p>When true, media streaming to Amazon Kinesis is turned off.</p>
     */
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    /**
     * <p>When true, media streaming to Amazon Kinesis is turned off.</p>
     */
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    /**
     * <p>When true, media streaming to Amazon Kinesis is turned off.</p>
     */
    inline StreamingConfiguration& WithDisabled(bool value) { SetDisabled(value); return *this;}


    /**
     * <p>The streaming notification targets.</p>
     */
    inline const Aws::Vector<StreamingNotificationTarget>& GetStreamingNotificationTargets() const{ return m_streamingNotificationTargets; }

    /**
     * <p>The streaming notification targets.</p>
     */
    inline bool StreamingNotificationTargetsHasBeenSet() const { return m_streamingNotificationTargetsHasBeenSet; }

    /**
     * <p>The streaming notification targets.</p>
     */
    inline void SetStreamingNotificationTargets(const Aws::Vector<StreamingNotificationTarget>& value) { m_streamingNotificationTargetsHasBeenSet = true; m_streamingNotificationTargets = value; }

    /**
     * <p>The streaming notification targets.</p>
     */
    inline void SetStreamingNotificationTargets(Aws::Vector<StreamingNotificationTarget>&& value) { m_streamingNotificationTargetsHasBeenSet = true; m_streamingNotificationTargets = std::move(value); }

    /**
     * <p>The streaming notification targets.</p>
     */
    inline StreamingConfiguration& WithStreamingNotificationTargets(const Aws::Vector<StreamingNotificationTarget>& value) { SetStreamingNotificationTargets(value); return *this;}

    /**
     * <p>The streaming notification targets.</p>
     */
    inline StreamingConfiguration& WithStreamingNotificationTargets(Aws::Vector<StreamingNotificationTarget>&& value) { SetStreamingNotificationTargets(std::move(value)); return *this;}

    /**
     * <p>The streaming notification targets.</p>
     */
    inline StreamingConfiguration& AddStreamingNotificationTargets(const StreamingNotificationTarget& value) { m_streamingNotificationTargetsHasBeenSet = true; m_streamingNotificationTargets.push_back(value); return *this; }

    /**
     * <p>The streaming notification targets.</p>
     */
    inline StreamingConfiguration& AddStreamingNotificationTargets(StreamingNotificationTarget&& value) { m_streamingNotificationTargetsHasBeenSet = true; m_streamingNotificationTargets.push_back(std::move(value)); return *this; }

  private:

    int m_dataRetentionInHours;
    bool m_dataRetentionInHoursHasBeenSet = false;

    bool m_disabled;
    bool m_disabledHasBeenSet = false;

    Aws::Vector<StreamingNotificationTarget> m_streamingNotificationTargets;
    bool m_streamingNotificationTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
