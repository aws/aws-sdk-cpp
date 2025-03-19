/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
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
namespace ivschat
{
namespace Model
{

  /**
   * <p>Specifies a Kinesis Firehose location where chat logs will be
   * stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/FirehoseDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class FirehoseDestinationConfiguration
  {
  public:
    AWS_IVSCHAT_API FirehoseDestinationConfiguration() = default;
    AWS_IVSCHAT_API FirehoseDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API FirehoseDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the Amazon Kinesis Firehose delivery stream where chat activity will
     * be logged.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const { return m_deliveryStreamName; }
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }
    template<typename DeliveryStreamNameT = Aws::String>
    void SetDeliveryStreamName(DeliveryStreamNameT&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::forward<DeliveryStreamNameT>(value); }
    template<typename DeliveryStreamNameT = Aws::String>
    FirehoseDestinationConfiguration& WithDeliveryStreamName(DeliveryStreamNameT&& value) { SetDeliveryStreamName(std::forward<DeliveryStreamNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
