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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/ConsumerStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Kinesis
{
namespace Model
{

  /**
   * <p>An object that represents the details of the consumer you
   * registered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/Consumer">AWS
   * API Reference</a></p>
   */
  class AWS_KINESIS_API Consumer
  {
  public:
    Consumer();
    Consumer(Aws::Utils::Json::JsonView jsonValue);
    Consumer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the consumer is something you choose when you register the
     * consumer.</p>
     */
    inline const Aws::String& GetConsumerName() const{ return m_consumerName; }

    /**
     * <p>The name of the consumer is something you choose when you register the
     * consumer.</p>
     */
    inline void SetConsumerName(const Aws::String& value) { m_consumerNameHasBeenSet = true; m_consumerName = value; }

    /**
     * <p>The name of the consumer is something you choose when you register the
     * consumer.</p>
     */
    inline void SetConsumerName(Aws::String&& value) { m_consumerNameHasBeenSet = true; m_consumerName = std::move(value); }

    /**
     * <p>The name of the consumer is something you choose when you register the
     * consumer.</p>
     */
    inline void SetConsumerName(const char* value) { m_consumerNameHasBeenSet = true; m_consumerName.assign(value); }

    /**
     * <p>The name of the consumer is something you choose when you register the
     * consumer.</p>
     */
    inline Consumer& WithConsumerName(const Aws::String& value) { SetConsumerName(value); return *this;}

    /**
     * <p>The name of the consumer is something you choose when you register the
     * consumer.</p>
     */
    inline Consumer& WithConsumerName(Aws::String&& value) { SetConsumerName(std::move(value)); return *this;}

    /**
     * <p>The name of the consumer is something you choose when you register the
     * consumer.</p>
     */
    inline Consumer& WithConsumerName(const char* value) { SetConsumerName(value); return *this;}


    /**
     * <p>When you register a consumer, Kinesis Data Streams generates an ARN for it.
     * You need this ARN to be able to call <a>SubscribeToShard</a>.</p> <p>If you
     * delete a consumer and then create a new one with the same name, it won't have
     * the same ARN. That's because consumer ARNs contain the creation timestamp. This
     * is important to keep in mind if you have IAM policies that reference consumer
     * ARNs.</p>
     */
    inline const Aws::String& GetConsumerARN() const{ return m_consumerARN; }

    /**
     * <p>When you register a consumer, Kinesis Data Streams generates an ARN for it.
     * You need this ARN to be able to call <a>SubscribeToShard</a>.</p> <p>If you
     * delete a consumer and then create a new one with the same name, it won't have
     * the same ARN. That's because consumer ARNs contain the creation timestamp. This
     * is important to keep in mind if you have IAM policies that reference consumer
     * ARNs.</p>
     */
    inline void SetConsumerARN(const Aws::String& value) { m_consumerARNHasBeenSet = true; m_consumerARN = value; }

    /**
     * <p>When you register a consumer, Kinesis Data Streams generates an ARN for it.
     * You need this ARN to be able to call <a>SubscribeToShard</a>.</p> <p>If you
     * delete a consumer and then create a new one with the same name, it won't have
     * the same ARN. That's because consumer ARNs contain the creation timestamp. This
     * is important to keep in mind if you have IAM policies that reference consumer
     * ARNs.</p>
     */
    inline void SetConsumerARN(Aws::String&& value) { m_consumerARNHasBeenSet = true; m_consumerARN = std::move(value); }

    /**
     * <p>When you register a consumer, Kinesis Data Streams generates an ARN for it.
     * You need this ARN to be able to call <a>SubscribeToShard</a>.</p> <p>If you
     * delete a consumer and then create a new one with the same name, it won't have
     * the same ARN. That's because consumer ARNs contain the creation timestamp. This
     * is important to keep in mind if you have IAM policies that reference consumer
     * ARNs.</p>
     */
    inline void SetConsumerARN(const char* value) { m_consumerARNHasBeenSet = true; m_consumerARN.assign(value); }

    /**
     * <p>When you register a consumer, Kinesis Data Streams generates an ARN for it.
     * You need this ARN to be able to call <a>SubscribeToShard</a>.</p> <p>If you
     * delete a consumer and then create a new one with the same name, it won't have
     * the same ARN. That's because consumer ARNs contain the creation timestamp. This
     * is important to keep in mind if you have IAM policies that reference consumer
     * ARNs.</p>
     */
    inline Consumer& WithConsumerARN(const Aws::String& value) { SetConsumerARN(value); return *this;}

    /**
     * <p>When you register a consumer, Kinesis Data Streams generates an ARN for it.
     * You need this ARN to be able to call <a>SubscribeToShard</a>.</p> <p>If you
     * delete a consumer and then create a new one with the same name, it won't have
     * the same ARN. That's because consumer ARNs contain the creation timestamp. This
     * is important to keep in mind if you have IAM policies that reference consumer
     * ARNs.</p>
     */
    inline Consumer& WithConsumerARN(Aws::String&& value) { SetConsumerARN(std::move(value)); return *this;}

    /**
     * <p>When you register a consumer, Kinesis Data Streams generates an ARN for it.
     * You need this ARN to be able to call <a>SubscribeToShard</a>.</p> <p>If you
     * delete a consumer and then create a new one with the same name, it won't have
     * the same ARN. That's because consumer ARNs contain the creation timestamp. This
     * is important to keep in mind if you have IAM policies that reference consumer
     * ARNs.</p>
     */
    inline Consumer& WithConsumerARN(const char* value) { SetConsumerARN(value); return *this;}


    /**
     * <p>A consumer can't read data while in the <code>CREATING</code> or
     * <code>DELETING</code> states.</p>
     */
    inline const ConsumerStatus& GetConsumerStatus() const{ return m_consumerStatus; }

    /**
     * <p>A consumer can't read data while in the <code>CREATING</code> or
     * <code>DELETING</code> states.</p>
     */
    inline void SetConsumerStatus(const ConsumerStatus& value) { m_consumerStatusHasBeenSet = true; m_consumerStatus = value; }

    /**
     * <p>A consumer can't read data while in the <code>CREATING</code> or
     * <code>DELETING</code> states.</p>
     */
    inline void SetConsumerStatus(ConsumerStatus&& value) { m_consumerStatusHasBeenSet = true; m_consumerStatus = std::move(value); }

    /**
     * <p>A consumer can't read data while in the <code>CREATING</code> or
     * <code>DELETING</code> states.</p>
     */
    inline Consumer& WithConsumerStatus(const ConsumerStatus& value) { SetConsumerStatus(value); return *this;}

    /**
     * <p>A consumer can't read data while in the <code>CREATING</code> or
     * <code>DELETING</code> states.</p>
     */
    inline Consumer& WithConsumerStatus(ConsumerStatus&& value) { SetConsumerStatus(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetConsumerCreationTimestamp() const{ return m_consumerCreationTimestamp; }

    /**
     * <p/>
     */
    inline void SetConsumerCreationTimestamp(const Aws::Utils::DateTime& value) { m_consumerCreationTimestampHasBeenSet = true; m_consumerCreationTimestamp = value; }

    /**
     * <p/>
     */
    inline void SetConsumerCreationTimestamp(Aws::Utils::DateTime&& value) { m_consumerCreationTimestampHasBeenSet = true; m_consumerCreationTimestamp = std::move(value); }

    /**
     * <p/>
     */
    inline Consumer& WithConsumerCreationTimestamp(const Aws::Utils::DateTime& value) { SetConsumerCreationTimestamp(value); return *this;}

    /**
     * <p/>
     */
    inline Consumer& WithConsumerCreationTimestamp(Aws::Utils::DateTime&& value) { SetConsumerCreationTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_consumerName;
    bool m_consumerNameHasBeenSet;

    Aws::String m_consumerARN;
    bool m_consumerARNHasBeenSet;

    ConsumerStatus m_consumerStatus;
    bool m_consumerStatusHasBeenSet;

    Aws::Utils::DateTime m_consumerCreationTimestamp;
    bool m_consumerCreationTimestampHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
