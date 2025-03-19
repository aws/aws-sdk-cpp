/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EncryptionConfig.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Configuration information of a Kinesis video stream.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/KinesisVideoStreamConfig">AWS
   * API Reference</a></p>
   */
  class KinesisVideoStreamConfig
  {
  public:
    AWS_CONNECT_API KinesisVideoStreamConfig() = default;
    AWS_CONNECT_API KinesisVideoStreamConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API KinesisVideoStreamConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The prefix of the video stream.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    KinesisVideoStreamConfig& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours data is retained in the stream. Kinesis Video Streams
     * retains the data in a data store that is associated with the stream.</p> <p>The
     * default value is 0, indicating that the stream does not persist data.</p>
     */
    inline int GetRetentionPeriodHours() const { return m_retentionPeriodHours; }
    inline bool RetentionPeriodHoursHasBeenSet() const { return m_retentionPeriodHoursHasBeenSet; }
    inline void SetRetentionPeriodHours(int value) { m_retentionPeriodHoursHasBeenSet = true; m_retentionPeriodHours = value; }
    inline KinesisVideoStreamConfig& WithRetentionPeriodHours(int value) { SetRetentionPeriodHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const { return m_encryptionConfig; }
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }
    template<typename EncryptionConfigT = EncryptionConfig>
    void SetEncryptionConfig(EncryptionConfigT&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::forward<EncryptionConfigT>(value); }
    template<typename EncryptionConfigT = EncryptionConfig>
    KinesisVideoStreamConfig& WithEncryptionConfig(EncryptionConfigT&& value) { SetEncryptionConfig(std::forward<EncryptionConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    int m_retentionPeriodHours{0};
    bool m_retentionPeriodHoursHasBeenSet = false;

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
