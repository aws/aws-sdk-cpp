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
  class AWS_KINESIS_API RegisterStreamConsumerRequest : public KinesisRequest
  {
  public:
    RegisterStreamConsumerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterStreamConsumer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the Kinesis data stream that you want to register the consumer
     * with. For more info, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The ARN of the Kinesis data stream that you want to register the consumer
     * with. For more info, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The ARN of the Kinesis data stream that you want to register the consumer
     * with. For more info, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The ARN of the Kinesis data stream that you want to register the consumer
     * with. For more info, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The ARN of the Kinesis data stream that you want to register the consumer
     * with. For more info, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The ARN of the Kinesis data stream that you want to register the consumer
     * with. For more info, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline RegisterStreamConsumerRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The ARN of the Kinesis data stream that you want to register the consumer
     * with. For more info, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline RegisterStreamConsumerRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Kinesis data stream that you want to register the consumer
     * with. For more info, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline RegisterStreamConsumerRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>For a given Kinesis data stream, each consumer must have a unique name.
     * However, consumer names don't have to be unique across data streams.</p>
     */
    inline const Aws::String& GetConsumerName() const{ return m_consumerName; }

    /**
     * <p>For a given Kinesis data stream, each consumer must have a unique name.
     * However, consumer names don't have to be unique across data streams.</p>
     */
    inline bool ConsumerNameHasBeenSet() const { return m_consumerNameHasBeenSet; }

    /**
     * <p>For a given Kinesis data stream, each consumer must have a unique name.
     * However, consumer names don't have to be unique across data streams.</p>
     */
    inline void SetConsumerName(const Aws::String& value) { m_consumerNameHasBeenSet = true; m_consumerName = value; }

    /**
     * <p>For a given Kinesis data stream, each consumer must have a unique name.
     * However, consumer names don't have to be unique across data streams.</p>
     */
    inline void SetConsumerName(Aws::String&& value) { m_consumerNameHasBeenSet = true; m_consumerName = std::move(value); }

    /**
     * <p>For a given Kinesis data stream, each consumer must have a unique name.
     * However, consumer names don't have to be unique across data streams.</p>
     */
    inline void SetConsumerName(const char* value) { m_consumerNameHasBeenSet = true; m_consumerName.assign(value); }

    /**
     * <p>For a given Kinesis data stream, each consumer must have a unique name.
     * However, consumer names don't have to be unique across data streams.</p>
     */
    inline RegisterStreamConsumerRequest& WithConsumerName(const Aws::String& value) { SetConsumerName(value); return *this;}

    /**
     * <p>For a given Kinesis data stream, each consumer must have a unique name.
     * However, consumer names don't have to be unique across data streams.</p>
     */
    inline RegisterStreamConsumerRequest& WithConsumerName(Aws::String&& value) { SetConsumerName(std::move(value)); return *this;}

    /**
     * <p>For a given Kinesis data stream, each consumer must have a unique name.
     * However, consumer names don't have to be unique across data streams.</p>
     */
    inline RegisterStreamConsumerRequest& WithConsumerName(const char* value) { SetConsumerName(value); return *this;}

  private:

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet;

    Aws::String m_consumerName;
    bool m_consumerNameHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
