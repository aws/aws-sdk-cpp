/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Request to save an EventStream.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/WriteEventStream">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API WriteEventStream
  {
  public:
    WriteEventStream();
    WriteEventStream(Aws::Utils::Json::JsonView jsonValue);
    WriteEventStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline const Aws::String& GetDestinationStreamArn() const{ return m_destinationStreamArn; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline bool DestinationStreamArnHasBeenSet() const { return m_destinationStreamArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline void SetDestinationStreamArn(const Aws::String& value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline void SetDestinationStreamArn(Aws::String&& value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline void SetDestinationStreamArn(const char* value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline WriteEventStream& WithDestinationStreamArn(const Aws::String& value) { SetDestinationStreamArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline WriteEventStream& WithDestinationStreamArn(Aws::String&& value) { SetDestinationStreamArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis stream or Firehose delivery
     * stream to which you want to publish events.
 Firehose ARN:
     * arn:aws:firehose:REGION:ACCOUNT_ID:deliverystream/STREAM_NAME
 Kinesis ARN:
     * arn:aws:kinesis:REGION:ACCOUNT_ID:stream/STREAM_NAME
     */
    inline WriteEventStream& WithDestinationStreamArn(const char* value) { SetDestinationStreamArn(value); return *this;}


    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline WriteEventStream& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline WriteEventStream& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The IAM role that authorizes Amazon Pinpoint to publish events to the stream in
     * your account.
     */
    inline WriteEventStream& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_destinationStreamArn;
    bool m_destinationStreamArnHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
