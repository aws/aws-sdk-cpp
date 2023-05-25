/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>When you update the input configuration for a SQL-based Kinesis Data
   * Analytics application, provides information about a Kinesis stream as the
   * streaming source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/KinesisStreamsInputUpdate">AWS
   * API Reference</a></p>
   */
  class KinesisStreamsInputUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API KinesisStreamsInputUpdate();
    AWS_KINESISANALYTICSV2_API KinesisStreamsInputUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API KinesisStreamsInputUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the input Kinesis data stream to read.</p>
     */
    inline const Aws::String& GetResourceARNUpdate() const{ return m_resourceARNUpdate; }

    /**
     * <p>The Amazon Resource Name (ARN) of the input Kinesis data stream to read.</p>
     */
    inline bool ResourceARNUpdateHasBeenSet() const { return m_resourceARNUpdateHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the input Kinesis data stream to read.</p>
     */
    inline void SetResourceARNUpdate(const Aws::String& value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the input Kinesis data stream to read.</p>
     */
    inline void SetResourceARNUpdate(Aws::String&& value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the input Kinesis data stream to read.</p>
     */
    inline void SetResourceARNUpdate(const char* value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the input Kinesis data stream to read.</p>
     */
    inline KinesisStreamsInputUpdate& WithResourceARNUpdate(const Aws::String& value) { SetResourceARNUpdate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the input Kinesis data stream to read.</p>
     */
    inline KinesisStreamsInputUpdate& WithResourceARNUpdate(Aws::String&& value) { SetResourceARNUpdate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the input Kinesis data stream to read.</p>
     */
    inline KinesisStreamsInputUpdate& WithResourceARNUpdate(const char* value) { SetResourceARNUpdate(value); return *this;}

  private:

    Aws::String m_resourceARNUpdate;
    bool m_resourceARNUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
