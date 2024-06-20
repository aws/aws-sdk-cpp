/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/ChannelDestinationConfiguration.h>
#include <aws/ivs-realtime/model/S3DestinationConfiguration.h>
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
   * <p>Complex data type that defines destination-configuration
   * objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class DestinationConfiguration
  {
  public:
    AWS_IVSREALTIME_API DestinationConfiguration();
    AWS_IVSREALTIME_API DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name that can be specified to help identify the destination.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DestinationConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DestinationConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DestinationConfiguration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IVS channel to be used for broadcasting, for server-side composition.
     * Either a <code>channel</code> or an <code>s3</code> must be specified. </p>
     */
    inline const ChannelDestinationConfiguration& GetChannel() const{ return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(const ChannelDestinationConfiguration& value) { m_channelHasBeenSet = true; m_channel = value; }
    inline void SetChannel(ChannelDestinationConfiguration&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }
    inline DestinationConfiguration& WithChannel(const ChannelDestinationConfiguration& value) { SetChannel(value); return *this;}
    inline DestinationConfiguration& WithChannel(ChannelDestinationConfiguration&& value) { SetChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 storage configuration to be used for recording video data. Either a
     * <code>channel</code> or an <code>s3</code> must be specified.</p>
     */
    inline const S3DestinationConfiguration& GetS3() const{ return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    inline void SetS3(const S3DestinationConfiguration& value) { m_s3HasBeenSet = true; m_s3 = value; }
    inline void SetS3(S3DestinationConfiguration&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }
    inline DestinationConfiguration& WithS3(const S3DestinationConfiguration& value) { SetS3(value); return *this;}
    inline DestinationConfiguration& WithS3(S3DestinationConfiguration&& value) { SetS3(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ChannelDestinationConfiguration m_channel;
    bool m_channelHasBeenSet = false;

    S3DestinationConfiguration m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
