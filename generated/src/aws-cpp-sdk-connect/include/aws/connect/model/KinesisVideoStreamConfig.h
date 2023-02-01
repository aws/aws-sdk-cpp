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
    AWS_CONNECT_API KinesisVideoStreamConfig();
    AWS_CONNECT_API KinesisVideoStreamConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API KinesisVideoStreamConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The prefix of the video stream.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The prefix of the video stream.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The prefix of the video stream.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The prefix of the video stream.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The prefix of the video stream.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The prefix of the video stream.</p>
     */
    inline KinesisVideoStreamConfig& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The prefix of the video stream.</p>
     */
    inline KinesisVideoStreamConfig& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix of the video stream.</p>
     */
    inline KinesisVideoStreamConfig& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>The number of hours data is retained in the stream. Kinesis Video Streams
     * retains the data in a data store that is associated with the stream.</p> <p>The
     * default value is 0, indicating that the stream does not persist data.</p>
     */
    inline int GetRetentionPeriodHours() const{ return m_retentionPeriodHours; }

    /**
     * <p>The number of hours data is retained in the stream. Kinesis Video Streams
     * retains the data in a data store that is associated with the stream.</p> <p>The
     * default value is 0, indicating that the stream does not persist data.</p>
     */
    inline bool RetentionPeriodHoursHasBeenSet() const { return m_retentionPeriodHoursHasBeenSet; }

    /**
     * <p>The number of hours data is retained in the stream. Kinesis Video Streams
     * retains the data in a data store that is associated with the stream.</p> <p>The
     * default value is 0, indicating that the stream does not persist data.</p>
     */
    inline void SetRetentionPeriodHours(int value) { m_retentionPeriodHoursHasBeenSet = true; m_retentionPeriodHours = value; }

    /**
     * <p>The number of hours data is retained in the stream. Kinesis Video Streams
     * retains the data in a data store that is associated with the stream.</p> <p>The
     * default value is 0, indicating that the stream does not persist data.</p>
     */
    inline KinesisVideoStreamConfig& WithRetentionPeriodHours(int value) { SetRetentionPeriodHours(value); return *this;}


    /**
     * <p>The encryption configuration.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    /**
     * <p>The encryption configuration.</p>
     */
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }

    /**
     * <p>The encryption configuration.</p>
     */
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = value; }

    /**
     * <p>The encryption configuration.</p>
     */
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::move(value); }

    /**
     * <p>The encryption configuration.</p>
     */
    inline KinesisVideoStreamConfig& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>The encryption configuration.</p>
     */
    inline KinesisVideoStreamConfig& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}

  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    int m_retentionPeriodHours;
    bool m_retentionPeriodHoursHasBeenSet = false;

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
