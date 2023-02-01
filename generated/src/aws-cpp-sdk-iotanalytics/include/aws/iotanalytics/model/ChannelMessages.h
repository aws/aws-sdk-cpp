/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Specifies one or more sets of channel messages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ChannelMessages">AWS
   * API Reference</a></p>
   */
  class ChannelMessages
  {
  public:
    AWS_IOTANALYTICS_API ChannelMessages();
    AWS_IOTANALYTICS_API ChannelMessages(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ChannelMessages& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies one or more keys that identify the Amazon Simple Storage Service
     * (Amazon S3) objects that save your channel messages.</p> <p>You must use the
     * full path for the key.</p> <p>Example path:
     * <code>channel/mychannel/__dt=2020-02-29
     * 00:00:00/1582940490000_1582940520000_123456789012_mychannel_0_2118.0.json.gz</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetS3Paths() const{ return m_s3Paths; }

    /**
     * <p>Specifies one or more keys that identify the Amazon Simple Storage Service
     * (Amazon S3) objects that save your channel messages.</p> <p>You must use the
     * full path for the key.</p> <p>Example path:
     * <code>channel/mychannel/__dt=2020-02-29
     * 00:00:00/1582940490000_1582940520000_123456789012_mychannel_0_2118.0.json.gz</code>
     * </p>
     */
    inline bool S3PathsHasBeenSet() const { return m_s3PathsHasBeenSet; }

    /**
     * <p>Specifies one or more keys that identify the Amazon Simple Storage Service
     * (Amazon S3) objects that save your channel messages.</p> <p>You must use the
     * full path for the key.</p> <p>Example path:
     * <code>channel/mychannel/__dt=2020-02-29
     * 00:00:00/1582940490000_1582940520000_123456789012_mychannel_0_2118.0.json.gz</code>
     * </p>
     */
    inline void SetS3Paths(const Aws::Vector<Aws::String>& value) { m_s3PathsHasBeenSet = true; m_s3Paths = value; }

    /**
     * <p>Specifies one or more keys that identify the Amazon Simple Storage Service
     * (Amazon S3) objects that save your channel messages.</p> <p>You must use the
     * full path for the key.</p> <p>Example path:
     * <code>channel/mychannel/__dt=2020-02-29
     * 00:00:00/1582940490000_1582940520000_123456789012_mychannel_0_2118.0.json.gz</code>
     * </p>
     */
    inline void SetS3Paths(Aws::Vector<Aws::String>&& value) { m_s3PathsHasBeenSet = true; m_s3Paths = std::move(value); }

    /**
     * <p>Specifies one or more keys that identify the Amazon Simple Storage Service
     * (Amazon S3) objects that save your channel messages.</p> <p>You must use the
     * full path for the key.</p> <p>Example path:
     * <code>channel/mychannel/__dt=2020-02-29
     * 00:00:00/1582940490000_1582940520000_123456789012_mychannel_0_2118.0.json.gz</code>
     * </p>
     */
    inline ChannelMessages& WithS3Paths(const Aws::Vector<Aws::String>& value) { SetS3Paths(value); return *this;}

    /**
     * <p>Specifies one or more keys that identify the Amazon Simple Storage Service
     * (Amazon S3) objects that save your channel messages.</p> <p>You must use the
     * full path for the key.</p> <p>Example path:
     * <code>channel/mychannel/__dt=2020-02-29
     * 00:00:00/1582940490000_1582940520000_123456789012_mychannel_0_2118.0.json.gz</code>
     * </p>
     */
    inline ChannelMessages& WithS3Paths(Aws::Vector<Aws::String>&& value) { SetS3Paths(std::move(value)); return *this;}

    /**
     * <p>Specifies one or more keys that identify the Amazon Simple Storage Service
     * (Amazon S3) objects that save your channel messages.</p> <p>You must use the
     * full path for the key.</p> <p>Example path:
     * <code>channel/mychannel/__dt=2020-02-29
     * 00:00:00/1582940490000_1582940520000_123456789012_mychannel_0_2118.0.json.gz</code>
     * </p>
     */
    inline ChannelMessages& AddS3Paths(const Aws::String& value) { m_s3PathsHasBeenSet = true; m_s3Paths.push_back(value); return *this; }

    /**
     * <p>Specifies one or more keys that identify the Amazon Simple Storage Service
     * (Amazon S3) objects that save your channel messages.</p> <p>You must use the
     * full path for the key.</p> <p>Example path:
     * <code>channel/mychannel/__dt=2020-02-29
     * 00:00:00/1582940490000_1582940520000_123456789012_mychannel_0_2118.0.json.gz</code>
     * </p>
     */
    inline ChannelMessages& AddS3Paths(Aws::String&& value) { m_s3PathsHasBeenSet = true; m_s3Paths.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies one or more keys that identify the Amazon Simple Storage Service
     * (Amazon S3) objects that save your channel messages.</p> <p>You must use the
     * full path for the key.</p> <p>Example path:
     * <code>channel/mychannel/__dt=2020-02-29
     * 00:00:00/1582940490000_1582940520000_123456789012_mychannel_0_2118.0.json.gz</code>
     * </p>
     */
    inline ChannelMessages& AddS3Paths(const char* value) { m_s3PathsHasBeenSet = true; m_s3Paths.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_s3Paths;
    bool m_s3PathsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
