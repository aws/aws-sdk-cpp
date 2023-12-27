/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/ChannelDestinationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>An IVS channel to be used for broadcasting, for server-side composition.
     * Either a <code>channel</code> or an <code>s3</code> must be specified. </p>
     */
    inline const ChannelDestinationConfiguration& GetChannel() const{ return m_channel; }

    /**
     * <p>An IVS channel to be used for broadcasting, for server-side composition.
     * Either a <code>channel</code> or an <code>s3</code> must be specified. </p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>An IVS channel to be used for broadcasting, for server-side composition.
     * Either a <code>channel</code> or an <code>s3</code> must be specified. </p>
     */
    inline void SetChannel(const ChannelDestinationConfiguration& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>An IVS channel to be used for broadcasting, for server-side composition.
     * Either a <code>channel</code> or an <code>s3</code> must be specified. </p>
     */
    inline void SetChannel(ChannelDestinationConfiguration&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>An IVS channel to be used for broadcasting, for server-side composition.
     * Either a <code>channel</code> or an <code>s3</code> must be specified. </p>
     */
    inline DestinationConfiguration& WithChannel(const ChannelDestinationConfiguration& value) { SetChannel(value); return *this;}

    /**
     * <p>An IVS channel to be used for broadcasting, for server-side composition.
     * Either a <code>channel</code> or an <code>s3</code> must be specified. </p>
     */
    inline DestinationConfiguration& WithChannel(ChannelDestinationConfiguration&& value) { SetChannel(std::move(value)); return *this;}


    /**
     * <p>Name that can be specified to help identify the destination.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name that can be specified to help identify the destination.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name that can be specified to help identify the destination.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name that can be specified to help identify the destination.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name that can be specified to help identify the destination.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name that can be specified to help identify the destination.</p>
     */
    inline DestinationConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name that can be specified to help identify the destination.</p>
     */
    inline DestinationConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name that can be specified to help identify the destination.</p>
     */
    inline DestinationConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An S3 storage configuration to be used for recording video data. Either a
     * <code>channel</code> or an <code>s3</code> must be specified.</p>
     */
    inline const S3DestinationConfiguration& GetS3() const{ return m_s3; }

    /**
     * <p>An S3 storage configuration to be used for recording video data. Either a
     * <code>channel</code> or an <code>s3</code> must be specified.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>An S3 storage configuration to be used for recording video data. Either a
     * <code>channel</code> or an <code>s3</code> must be specified.</p>
     */
    inline void SetS3(const S3DestinationConfiguration& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>An S3 storage configuration to be used for recording video data. Either a
     * <code>channel</code> or an <code>s3</code> must be specified.</p>
     */
    inline void SetS3(S3DestinationConfiguration&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>An S3 storage configuration to be used for recording video data. Either a
     * <code>channel</code> or an <code>s3</code> must be specified.</p>
     */
    inline DestinationConfiguration& WithS3(const S3DestinationConfiguration& value) { SetS3(value); return *this;}

    /**
     * <p>An S3 storage configuration to be used for recording video data. Either a
     * <code>channel</code> or an <code>s3</code> must be specified.</p>
     */
    inline DestinationConfiguration& WithS3(S3DestinationConfiguration&& value) { SetS3(std::move(value)); return *this;}

  private:

    ChannelDestinationConfiguration m_channel;
    bool m_channelHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    S3DestinationConfiguration m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
