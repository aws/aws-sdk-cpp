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
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   */
  class AWS_KINESIS_API DeregisterStreamConsumerRequest : public KinesisRequest
  {
  public:
    DeregisterStreamConsumerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterStreamConsumer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the Kinesis data stream that the consumer is registered with. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The ARN of the Kinesis data stream that the consumer is registered with. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The ARN of the Kinesis data stream that the consumer is registered with. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The ARN of the Kinesis data stream that the consumer is registered with. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The ARN of the Kinesis data stream that the consumer is registered with. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The ARN of the Kinesis data stream that the consumer is registered with. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline DeregisterStreamConsumerRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The ARN of the Kinesis data stream that the consumer is registered with. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline DeregisterStreamConsumerRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Kinesis data stream that the consumer is registered with. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline DeregisterStreamConsumerRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>The name that you gave to the consumer.</p>
     */
    inline const Aws::String& GetConsumerName() const{ return m_consumerName; }

    /**
     * <p>The name that you gave to the consumer.</p>
     */
    inline bool ConsumerNameHasBeenSet() const { return m_consumerNameHasBeenSet; }

    /**
     * <p>The name that you gave to the consumer.</p>
     */
    inline void SetConsumerName(const Aws::String& value) { m_consumerNameHasBeenSet = true; m_consumerName = value; }

    /**
     * <p>The name that you gave to the consumer.</p>
     */
    inline void SetConsumerName(Aws::String&& value) { m_consumerNameHasBeenSet = true; m_consumerName = std::move(value); }

    /**
     * <p>The name that you gave to the consumer.</p>
     */
    inline void SetConsumerName(const char* value) { m_consumerNameHasBeenSet = true; m_consumerName.assign(value); }

    /**
     * <p>The name that you gave to the consumer.</p>
     */
    inline DeregisterStreamConsumerRequest& WithConsumerName(const Aws::String& value) { SetConsumerName(value); return *this;}

    /**
     * <p>The name that you gave to the consumer.</p>
     */
    inline DeregisterStreamConsumerRequest& WithConsumerName(Aws::String&& value) { SetConsumerName(std::move(value)); return *this;}

    /**
     * <p>The name that you gave to the consumer.</p>
     */
    inline DeregisterStreamConsumerRequest& WithConsumerName(const char* value) { SetConsumerName(value); return *this;}


    /**
     * <p>The ARN returned by Kinesis Data Streams when you registered the consumer. If
     * you don't know the ARN of the consumer that you want to deregister, you can use
     * the ListStreamConsumers operation to get a list of the descriptions of all the
     * consumers that are currently registered with a given data stream. The
     * description of a consumer contains its ARN.</p>
     */
    inline const Aws::String& GetConsumerARN() const{ return m_consumerARN; }

    /**
     * <p>The ARN returned by Kinesis Data Streams when you registered the consumer. If
     * you don't know the ARN of the consumer that you want to deregister, you can use
     * the ListStreamConsumers operation to get a list of the descriptions of all the
     * consumers that are currently registered with a given data stream. The
     * description of a consumer contains its ARN.</p>
     */
    inline bool ConsumerARNHasBeenSet() const { return m_consumerARNHasBeenSet; }

    /**
     * <p>The ARN returned by Kinesis Data Streams when you registered the consumer. If
     * you don't know the ARN of the consumer that you want to deregister, you can use
     * the ListStreamConsumers operation to get a list of the descriptions of all the
     * consumers that are currently registered with a given data stream. The
     * description of a consumer contains its ARN.</p>
     */
    inline void SetConsumerARN(const Aws::String& value) { m_consumerARNHasBeenSet = true; m_consumerARN = value; }

    /**
     * <p>The ARN returned by Kinesis Data Streams when you registered the consumer. If
     * you don't know the ARN of the consumer that you want to deregister, you can use
     * the ListStreamConsumers operation to get a list of the descriptions of all the
     * consumers that are currently registered with a given data stream. The
     * description of a consumer contains its ARN.</p>
     */
    inline void SetConsumerARN(Aws::String&& value) { m_consumerARNHasBeenSet = true; m_consumerARN = std::move(value); }

    /**
     * <p>The ARN returned by Kinesis Data Streams when you registered the consumer. If
     * you don't know the ARN of the consumer that you want to deregister, you can use
     * the ListStreamConsumers operation to get a list of the descriptions of all the
     * consumers that are currently registered with a given data stream. The
     * description of a consumer contains its ARN.</p>
     */
    inline void SetConsumerARN(const char* value) { m_consumerARNHasBeenSet = true; m_consumerARN.assign(value); }

    /**
     * <p>The ARN returned by Kinesis Data Streams when you registered the consumer. If
     * you don't know the ARN of the consumer that you want to deregister, you can use
     * the ListStreamConsumers operation to get a list of the descriptions of all the
     * consumers that are currently registered with a given data stream. The
     * description of a consumer contains its ARN.</p>
     */
    inline DeregisterStreamConsumerRequest& WithConsumerARN(const Aws::String& value) { SetConsumerARN(value); return *this;}

    /**
     * <p>The ARN returned by Kinesis Data Streams when you registered the consumer. If
     * you don't know the ARN of the consumer that you want to deregister, you can use
     * the ListStreamConsumers operation to get a list of the descriptions of all the
     * consumers that are currently registered with a given data stream. The
     * description of a consumer contains its ARN.</p>
     */
    inline DeregisterStreamConsumerRequest& WithConsumerARN(Aws::String&& value) { SetConsumerARN(std::move(value)); return *this;}

    /**
     * <p>The ARN returned by Kinesis Data Streams when you registered the consumer. If
     * you don't know the ARN of the consumer that you want to deregister, you can use
     * the ListStreamConsumers operation to get a list of the descriptions of all the
     * consumers that are currently registered with a given data stream. The
     * description of a consumer contains its ARN.</p>
     */
    inline DeregisterStreamConsumerRequest& WithConsumerARN(const char* value) { SetConsumerARN(value); return *this;}

  private:

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet;

    Aws::String m_consumerName;
    bool m_consumerNameHasBeenSet;

    Aws::String m_consumerARN;
    bool m_consumerARNHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
