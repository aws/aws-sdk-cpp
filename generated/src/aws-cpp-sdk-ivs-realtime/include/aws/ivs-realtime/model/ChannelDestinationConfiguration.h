/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Object specifying a channel as a destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ChannelDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class ChannelDestinationConfiguration
  {
  public:
    AWS_IVSREALTIME_API ChannelDestinationConfiguration();
    AWS_IVSREALTIME_API ChannelDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API ChannelDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN of the channel to use for broadcasting. The channel and stage resources
     * must be in the same AWS account and region. The channel must be offline (not
     * broadcasting).</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>ARN of the channel to use for broadcasting. The channel and stage resources
     * must be in the same AWS account and region. The channel must be offline (not
     * broadcasting).</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>ARN of the channel to use for broadcasting. The channel and stage resources
     * must be in the same AWS account and region. The channel must be offline (not
     * broadcasting).</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>ARN of the channel to use for broadcasting. The channel and stage resources
     * must be in the same AWS account and region. The channel must be offline (not
     * broadcasting).</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>ARN of the channel to use for broadcasting. The channel and stage resources
     * must be in the same AWS account and region. The channel must be offline (not
     * broadcasting).</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>ARN of the channel to use for broadcasting. The channel and stage resources
     * must be in the same AWS account and region. The channel must be offline (not
     * broadcasting).</p>
     */
    inline ChannelDestinationConfiguration& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>ARN of the channel to use for broadcasting. The channel and stage resources
     * must be in the same AWS account and region. The channel must be offline (not
     * broadcasting).</p>
     */
    inline ChannelDestinationConfiguration& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the channel to use for broadcasting. The channel and stage resources
     * must be in the same AWS account and region. The channel must be offline (not
     * broadcasting).</p>
     */
    inline ChannelDestinationConfiguration& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>ARN of the <a>EncoderConfiguration</a> resource. The encoder configuration
     * and stage resources must be in the same AWS account and region.</p>
     */
    inline const Aws::String& GetEncoderConfigurationArn() const{ return m_encoderConfigurationArn; }

    /**
     * <p>ARN of the <a>EncoderConfiguration</a> resource. The encoder configuration
     * and stage resources must be in the same AWS account and region.</p>
     */
    inline bool EncoderConfigurationArnHasBeenSet() const { return m_encoderConfigurationArnHasBeenSet; }

    /**
     * <p>ARN of the <a>EncoderConfiguration</a> resource. The encoder configuration
     * and stage resources must be in the same AWS account and region.</p>
     */
    inline void SetEncoderConfigurationArn(const Aws::String& value) { m_encoderConfigurationArnHasBeenSet = true; m_encoderConfigurationArn = value; }

    /**
     * <p>ARN of the <a>EncoderConfiguration</a> resource. The encoder configuration
     * and stage resources must be in the same AWS account and region.</p>
     */
    inline void SetEncoderConfigurationArn(Aws::String&& value) { m_encoderConfigurationArnHasBeenSet = true; m_encoderConfigurationArn = std::move(value); }

    /**
     * <p>ARN of the <a>EncoderConfiguration</a> resource. The encoder configuration
     * and stage resources must be in the same AWS account and region.</p>
     */
    inline void SetEncoderConfigurationArn(const char* value) { m_encoderConfigurationArnHasBeenSet = true; m_encoderConfigurationArn.assign(value); }

    /**
     * <p>ARN of the <a>EncoderConfiguration</a> resource. The encoder configuration
     * and stage resources must be in the same AWS account and region.</p>
     */
    inline ChannelDestinationConfiguration& WithEncoderConfigurationArn(const Aws::String& value) { SetEncoderConfigurationArn(value); return *this;}

    /**
     * <p>ARN of the <a>EncoderConfiguration</a> resource. The encoder configuration
     * and stage resources must be in the same AWS account and region.</p>
     */
    inline ChannelDestinationConfiguration& WithEncoderConfigurationArn(Aws::String&& value) { SetEncoderConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the <a>EncoderConfiguration</a> resource. The encoder configuration
     * and stage resources must be in the same AWS account and region.</p>
     */
    inline ChannelDestinationConfiguration& WithEncoderConfigurationArn(const char* value) { SetEncoderConfigurationArn(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_encoderConfigurationArn;
    bool m_encoderConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
