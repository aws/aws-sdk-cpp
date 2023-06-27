/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
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
namespace AppFabric
{
namespace Model
{

  /**
   * <p>Contains information about an Amazon Kinesis Data Firehose delivery
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/FirehoseStream">AWS
   * API Reference</a></p>
   */
  class FirehoseStream
  {
  public:
    AWS_APPFABRIC_API FirehoseStream();
    AWS_APPFABRIC_API FirehoseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API FirehoseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon Kinesis Data Firehose delivery stream.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the Amazon Kinesis Data Firehose delivery stream.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Kinesis Data Firehose delivery stream.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the Amazon Kinesis Data Firehose delivery stream.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the Amazon Kinesis Data Firehose delivery stream.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the Amazon Kinesis Data Firehose delivery stream.</p>
     */
    inline FirehoseStream& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the Amazon Kinesis Data Firehose delivery stream.</p>
     */
    inline FirehoseStream& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Kinesis Data Firehose delivery stream.</p>
     */
    inline FirehoseStream& WithStreamName(const char* value) { SetStreamName(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
