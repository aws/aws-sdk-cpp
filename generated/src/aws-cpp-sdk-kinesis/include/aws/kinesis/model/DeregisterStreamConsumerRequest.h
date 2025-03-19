/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeregisterStreamConsumerRequest : public KinesisRequest
  {
  public:
    AWS_KINESIS_API DeregisterStreamConsumerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterStreamConsumer"; }

    AWS_KINESIS_API Aws::String SerializePayload() const override;

    AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The ARN of the Kinesis data stream that the consumer is registered with. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    DeregisterStreamConsumerRequest& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you gave to the consumer.</p>
     */
    inline const Aws::String& GetConsumerName() const { return m_consumerName; }
    inline bool ConsumerNameHasBeenSet() const { return m_consumerNameHasBeenSet; }
    template<typename ConsumerNameT = Aws::String>
    void SetConsumerName(ConsumerNameT&& value) { m_consumerNameHasBeenSet = true; m_consumerName = std::forward<ConsumerNameT>(value); }
    template<typename ConsumerNameT = Aws::String>
    DeregisterStreamConsumerRequest& WithConsumerName(ConsumerNameT&& value) { SetConsumerName(std::forward<ConsumerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN returned by Kinesis Data Streams when you registered the consumer. If
     * you don't know the ARN of the consumer that you want to deregister, you can use
     * the ListStreamConsumers operation to get a list of the descriptions of all the
     * consumers that are currently registered with a given data stream. The
     * description of a consumer contains its ARN.</p>
     */
    inline const Aws::String& GetConsumerARN() const { return m_consumerARN; }
    inline bool ConsumerARNHasBeenSet() const { return m_consumerARNHasBeenSet; }
    template<typename ConsumerARNT = Aws::String>
    void SetConsumerARN(ConsumerARNT&& value) { m_consumerARNHasBeenSet = true; m_consumerARN = std::forward<ConsumerARNT>(value); }
    template<typename ConsumerARNT = Aws::String>
    DeregisterStreamConsumerRequest& WithConsumerARN(ConsumerARNT&& value) { SetConsumerARN(std::forward<ConsumerARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    Aws::String m_consumerName;
    bool m_consumerNameHasBeenSet = false;

    Aws::String m_consumerARN;
    bool m_consumerARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
