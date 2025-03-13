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
    AWS_IVSREALTIME_API DestinationConfiguration() = default;
    AWS_IVSREALTIME_API DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name that can be specified to help identify the destination.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DestinationConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IVS channel to be used for broadcasting, for server-side composition.
     * Either a <code>channel</code> or an <code>s3</code> must be specified. </p>
     */
    inline const ChannelDestinationConfiguration& GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    template<typename ChannelT = ChannelDestinationConfiguration>
    void SetChannel(ChannelT&& value) { m_channelHasBeenSet = true; m_channel = std::forward<ChannelT>(value); }
    template<typename ChannelT = ChannelDestinationConfiguration>
    DestinationConfiguration& WithChannel(ChannelT&& value) { SetChannel(std::forward<ChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 storage configuration to be used for recording video data. Either a
     * <code>channel</code> or an <code>s3</code> must be specified.</p>
     */
    inline const S3DestinationConfiguration& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3DestinationConfiguration>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3DestinationConfiguration>
    DestinationConfiguration& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
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
